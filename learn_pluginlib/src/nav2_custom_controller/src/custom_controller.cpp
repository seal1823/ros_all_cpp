#include "nav2_custom_controller/custom_controller.hpp"
#include "nav2_core/exceptions.hpp"
#include "nav2_util/node_utils.hpp"
#include "string"
#include "cmath"
#include "memory"

namespace nav2_custom_controller{
    void CustomController::configure(const rclcpp_lifecycle::LifecycleNode::WeakPtr &parent,
        std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
        std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) 
    {
        node_ = parent.lock();
        tf_buffer_ = tf;
        costmap_ros_ = costmap_ros;
        plugin_name_ = name;

        nav2_util::declare_parameter_if_not_declared(
            node_, plugin_name_ + ".max_linear_speed", rclcpp::ParameterValue(0.1));
        node_->get_parameter(plugin_name_ + ".max_linear_speed",max_linear_speed_);

        nav2_util::declare_parameter_if_not_declared(
            node_, plugin_name_ + ".max_angular_speed", rclcpp::ParameterValue(1.0));
        node_->get_parameter(plugin_name_ + ".max_angular_speed", max_angular_speed_);
    }

    void CustomController::cleanup()
    {
        RCLCPP_INFO(node_->get_logger(),"清理控制器：%s 类型为 nav2_custom_controller::CustomController", plugin_name_.c_str());
    }

    void CustomController::activate()
    {
        RCLCPP_INFO(node_->get_logger(),"加载控制器：%s 类型为 nav2_custom_controller::CustomController", plugin_name_.c_str());
    }

    void CustomController::deactivate()
    {
        RCLCPP_INFO(node_->get_logger(),"停用控制器：%s 类型为 nav2_custom_controller::CustomController", plugin_name_.c_str());
    }

    geometry_msgs::msg::TwistStamped CustomController::computeVelocityCommands(
        const geometry_msgs::msg::PoseStamped & pose,
        const geometry_msgs::msg::Twist & velocity,
        nav2_core::GoalChecker * goal_checker)
    {
        if(global_path_.poses.empty())
        {
            throw nav2_core::PlannerException("收到的路径长度为0");
        }

        //将机器人当前姿态转换到全局坐标系当中
        geometry_msgs::msg::PoseStamped pose_in_globalframe;
        if(!nav2_util::transformPoseInTargetFrame(pose, pose_in_globalframe, *tf_buffer_, global_path_.header.frame_id, 0.1)) throw nav2_core::PlannerException("无法将机器人姿态转换为全局计划的坐标系");

        auto target_point = GetNearestTargetPoint(pose_in_globalframe);
        auto angle_diff = CalculateAngleDiff(pose_in_globalframe,target_point);

        geometry_msgs::msg::TwistStamped cmd_vel;
        cmd_vel.header.frame_id = global_path_.header.frame_id;
        cmd_vel.header.stamp = node_->get_clock()->now();
        if(fabs(angle_diff) > M_PI/10.0)
        {
            cmd_vel.twist.linear.x = 0.0;
            cmd_vel.twist.angular.z = fabs(angle_diff)/angle_diff * max_angular_speed_;
        }
        else{
            cmd_vel.twist.linear.x = max_linear_speed_;
            cmd_vel.twist.angular.z = 0.0;
        }
        RCLCPP_INFO(node_->get_logger(), "控制器：%s 发送速度(%f,%f)",
            plugin_name_.c_str(), cmd_vel.twist.linear.x,
            cmd_vel.twist.angular.z);

        return cmd_vel;

    }

    void CustomController::setSpeedLimit(const double & speed_limit, const bool & percentage)
    {
        (void)speed_limit;
        (void)percentage;
    }

    void CustomController::setPlan(const nav_msgs::msg::Path & path)
    {
        global_path_ = path;
    }

    geometry_msgs::msg::PoseStamped CustomController::GetNearestTargetPoint(const geometry_msgs::msg::PoseStamped &current_pose)
    {
        int nearest_point_index = 0;
        double min_distance = std::hypot(current_pose.pose.position.x - global_path_.poses.at(0).pose.position.x, current_pose.pose.position.y - global_path_.poses.at(0).pose.position.y);

        for(int i=1;i<global_path_.poses.size();i++)
        {
            double distance = std::hypot(current_pose.pose.position.x - global_path_.poses.at(i).pose.position.x, current_pose.pose.position.y - global_path_.poses.at(i).pose.position.y);
            if(distance < min_distance)
            {
                min_distance = distance;
                nearest_point_index = i;
            }
        }
        //从路径中擦除头部到最近点的路径
        global_path_.poses.erase(std::begin(global_path_.poses),std::begin(global_path_.poses) + nearest_point_index);

        if(global_path_.poses.size() == 1) return global_path_.poses.at(0);
        return global_path_.poses.at(1);
    }
    //计算当前朝向和目标朝向的偏差
    double CustomController::CalculateAngleDiff(const geometry_msgs::msg::PoseStamped &current_pose,const geometry_msgs::msg::PoseStamped &target_pose)
    {
        double current_angle = tf2::getYaw(current_pose.pose.orientation);
        
        double target_angle = std::atan2(target_pose.pose.position.y - current_pose.pose.position.y, target_pose.pose.position.x - current_pose.pose.position.x);

        double diff_angle = target_angle - current_angle;

        if(diff_angle < -M_PI) diff_angle += 2 * M_PI;
        else if(diff_angle > M_PI) diff_angle -= 2 * M_PI;
        return diff_angle;
    }
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(nav2_custom_controller::CustomController,nav2_core::Controller)