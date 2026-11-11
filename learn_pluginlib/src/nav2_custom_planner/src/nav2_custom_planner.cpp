#include "nav2_util/node_utils.hpp"
#include "cmath"
#include "memory"
#include "string"

#include "nav2_custom_planner/nav2_custom_planner.hpp"
#include "nav2_core/exceptions.hpp"

namespace nav2_custom_planner{
    void CustomPlanner::configure(const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
        std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
    {
        tf_buffer_ = tf;
        node_ = parent.lock();
        name_ = name;
        costmap_ = costmap_ros->getCostmap();
        global_frame_ = costmap_ros->getGlobalFrameID();
        nav2_util::declare_parameter_if_not_declared(
            node_, name_ + ".interpolation_resolution", rclcpp::ParameterValue(0.1));
        node_->get_parameter(name_ + ".interpolation_resolution", interpolation_resolution_);
    }

    void CustomPlanner::cleanup()
    {
        RCLCPP_INFO(node_->get_logger(),"正在清理类型为 CustomPlanner 的插件 %s", name_.c_str());
    }

    void CustomPlanner::activate()
    {
        RCLCPP_INFO(node_->get_logger(),"正在激活类型为 CustomPlanner 的插件 %s", name_.c_str());
    }

    void CustomPlanner::deactivate()
    {
        RCLCPP_INFO(node_->get_logger(),"正在停用类型为 CustomPlanner 的插件 %s", name_.c_str());
    }

    nav_msgs::msg::Path CustomPlanner::createPlan(const geometry_msgs::msg::PoseStamped & start,
        const geometry_msgs::msg::PoseStamped & goal)
    {
        nav_msgs::msg::Path global_path;
        global_path.poses.clear();
        global_path.header.stamp = node_->now();
        global_path.header.frame_id = global_frame_;
        
        if(start.header.frame_id != global_frame_)
        {
            RCLCPP_INFO(node_->get_logger(),"规划器仅接受来自 %s 坐标系的起始位置",global_frame_.c_str());
            return global_path;
        }

        if(goal.header.frame_id != global_frame_)
        {
            RCLCPP_INFO(node_->get_logger(),"规划器仅接受来自 %s 坐标系的目标位置",global_frame_.c_str());
            return global_path;
        }

        int total_numble_of_loop = std::hypot(
            goal.pose.position.x - start.pose.position.x,
            goal.pose.position.y - start.pose.position.y
        ) / interpolation_resolution_;

        double x_increment = (goal.pose.position.x - start.pose.position.x) / total_numble_of_loop;
        double y_increment = (goal.pose.position.y - start.pose.position.y) / total_numble_of_loop;

        for(int i=0;i<total_numble_of_loop;i++)
        {
            geometry_msgs::msg::PoseStamped pose;
            pose.pose.position.x = start.pose.position.x + x_increment * i;
            pose.pose.position.y = start.pose.position.y + y_increment * i;
            pose.header.stamp = node_->now();
            pose.header.frame_id = global_frame_;
            global_path.poses.push_back(pose);
        }

        for(geometry_msgs::msg::PoseStamped pose : global_path.poses)
        {
            unsigned int ix, iy;
            if(costmap_->worldToMap(pose.pose.position.x, pose.pose.position.y, ix, iy)) //将点的坐标转换为栅格图的坐标
            {
                unsigned char cost = costmap_->getCost(ix,iy);    //获取栅格图的代价值，带unsigned的目的在于代价值是0-255的，不带的话会有溢出的现象
                if(cost == nav2_costmap_2d::LETHAL_OBSTACLE)
                {
                    RCLCPP_WARN(node_->get_logger(),"在(%f,%f)检测到致命障碍物，规划失败。",
                        pose.pose.position.x, pose.pose.position.y);
                    throw nav2_core::PlannerException(
                        "无法创建目标规划: " + std::to_string(goal.pose.position.x) + "," +
                        std::to_string(goal.pose.position.y)
                    );
                }
            }
        }

        geometry_msgs::msg::PoseStamped last_pose = goal;
        last_pose.header.stamp = node_->now();
        last_pose.header.frame_id = global_frame_;
        global_path.poses.push_back(last_pose);
        return global_path;
    }
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(nav2_custom_planner::CustomPlanner,nav2_core::GlobalPlanner)