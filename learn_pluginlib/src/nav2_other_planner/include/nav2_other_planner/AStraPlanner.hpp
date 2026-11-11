#ifndef NAV2_OTHER_PLANNER__DIJKSTRAPLANNER_HPP_
#define NAV2_OTHER_PLANNER__DIJKSTRAPLANNER_HPP_

#include "string"
#include "queue"
#include "memory"
#include "nav2_other_planner/Commonality.hpp"
#include "unordered_map"
//消息接口
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "nav_msgs/msg/path.hpp"
#include "nav2_costmap_2d/costmap_2d.hpp"

#include "nav2_core/global_planner.hpp" //提供基类
#include "nav2_util/lifecycle_node.hpp" //rclcpp的一个子类
#include "nav2_util/robot_utils.hpp"  //工具


namespace AStraPlanner{
    class AStra_Planner : public nav2_core::GlobalPlanner
    {
        public:
            AStra_Planner() = default;
            ~AStra_Planner() = default;

            void configure(
            const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
            std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
            std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) override;

            void cleanup() override;

            void activate() override;

            void deactivate() override;

            nav_msgs::msg::Path createPlan(
            const geometry_msgs::msg::PoseStamped & start,
            const geometry_msgs::msg::PoseStamped & goal) override;
        
        private:
            double basic_cost;
            double cost_weight;
            // 坐标变换缓存指针，可用于查询坐标关系
            std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
            // 节点指针
            nav2_util::LifecycleNode::SharedPtr node_;
            // 全局代价地图
            nav2_costmap_2d::Costmap2D *costmap_;
            // 全局代价地图的坐标系
            std::string global_frame_, name_;
            // 插值分辨率
            double interpolation_resolution_;

            std::vector<Commonality::GridLocation> AStraSearch(Commonality::SquareGrid& graph, Commonality::GridLocation& start, Commonality::GridLocation& goal);

            bool IsCellInBounds(const Commonality::GridLocation & cell) const;

            bool IsCellTraversable(const Commonality::GridLocation & cell) const;
    };

    template<typename T, typename priority_t>
    struct PriorityQueue
    {
        using PQElement = std::pair<priority_t, T>;
        struct Compare
        {
            bool operator()(const PQElement& a, const PQElement& b) const {
                return a.first > b.first;
            }
        };
        
        std::priority_queue<PQElement, std::vector<PQElement>, Compare> elements;

        inline bool empty() const {
            return elements.empty();
        }

        inline void put(T item, priority_t priority) {
            elements.emplace(priority, item);
        }

        T get() {
            T best_item = elements.top().second;
            elements.pop();
            return best_item;
        }
    };

    struct 
    {
        /* data */
    };
    
}

#endif //NAV2_OTHER_PLANNER__DIJKSTRAPLANNER_HPP_