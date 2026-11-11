#ifndef NAV2_CUSTOM_CONTROLLER__NAV2_CUSTOM_CONTROLLER_HPP_
#define NAV2_CUSTOM_CONTROLLER__NAV2_CUSTOM_CONTROLLER_HPP_

#include "memory"
#include "string"
#include "vector"

#include "nav2_core/controller.hpp"
#include "nav2_util/robot_utils.hpp"

namespace nav2_custom_controller{
    class CustomController : public nav2_core::Controller
    {
        public:
            CustomController() = default;
            ~CustomController() = default;

            void configure(
            const rclcpp_lifecycle::LifecycleNode::WeakPtr &parent,
            std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
            std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) override;

            void cleanup() override;

            void activate() override;

            void deactivate() override;

            void setPlan(const nav_msgs::msg::Path & path) override;

            geometry_msgs::msg::TwistStamped computeVelocityCommands(
            const geometry_msgs::msg::PoseStamped & pose,
            const geometry_msgs::msg::Twist & velocity,
            nav2_core::GoalChecker * goal_checker) override;

            void setSpeedLimit(const double & speed_limit, const bool & percentage) override;

        private:
            //插件名字
            std::string plugin_name_;
            //坐标变换的缓存指针
            std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
            //存储代价地图
            std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros_;
            //节点指针
            nav2_util::LifecycleNode::SharedPtr node_;
            //全局代价地图
            nav2_costmap_2d::Costmap2D *costmap_;
            //存储seiPlan提供的全局路径
            nav_msgs::msg::Path global_path_;
            //参数：限制最大角速度和最大线速度
            double max_angular_speed_;
            double max_linear_speed_;

            geometry_msgs::msg::PoseStamped GetNearestTargetPoint(const geometry_msgs::msg::PoseStamped &current_pose);

            double CalculateAngleDiff(const geometry_msgs::msg::PoseStamped &current_pose,const geometry_msgs::msg::PoseStamped &target_pose);
    };
}

#endif //NAV2_CUSTOM_CONTROLLER__NAV2_CUSTOM_CONTROLLER_HPP_