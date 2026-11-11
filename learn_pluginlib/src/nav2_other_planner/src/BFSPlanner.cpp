#include "nav2_other_planner/BFSPlanner.hpp"
#include "nav2_core/exceptions.hpp"
#include "nav2_util/node_utils.hpp"
#include "cmath"
#include "memory"
#include <mutex>
#include "string"
#include "queue"
#include "algorithm"

namespace BFSPlanner{
    void BFS_Planner::configure(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
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

    void BFS_Planner::cleanup()
    {
        RCLCPP_INFO(node_->get_logger(),"正在清理类型为BFS_Planner的插件 %s", name_.c_str());
    }

    void BFS_Planner::activate()
    {
        RCLCPP_INFO(node_->get_logger(),"正在激活类型为BFS_Planner的插件 %s", name_.c_str());
    }

    void BFS_Planner::deactivate()
    {
        RCLCPP_INFO(node_->get_logger(),"正在停用类型为BFS_Planner的插件 %s", name_.c_str());
    }

    bool BFS_Planner::IsCellInBounds(const Commonality::GridLocation & cell) const
    {
        if (costmap_ == nullptr || cell.x < 0 || cell.y < 0)
        {
            return false;
        }

        const auto width = costmap_->getSizeInCellsX();
        const auto height = costmap_->getSizeInCellsY();
        return static_cast<unsigned int>(cell.x) < width &&
               static_cast<unsigned int>(cell.y) < height;
    }

    bool BFS_Planner::IsCellTraversable(const Commonality::GridLocation & cell) const
    {
        if (!IsCellInBounds(cell))
        {
            return false;
        }

        const auto cost = costmap_->getCost(
            static_cast<unsigned int>(cell.x),
            static_cast<unsigned int>(cell.y));

        return cost != nav2_costmap_2d::NO_INFORMATION &&
               cost != nav2_costmap_2d::LETHAL_OBSTACLE &&
               cost != nav2_costmap_2d::INSCRIBED_INFLATED_OBSTACLE;
    }

    std::vector<Commonality::GridLocation> BFS_Planner::BFSSearch(Commonality::SquareGrid& graph, Commonality::GridLocation& start, Commonality::GridLocation& goal)
    {
        std::vector<Commonality::GridLocation> path;

        if (!IsCellInBounds(start))
        {
            RCLCPP_WARN(node_->get_logger(),
                "BFS 搜索未开始：起点栅格 (%d,%d) 越界", start.x, start.y);
            return path;
        }

        const auto start_cost = costmap_->getCost(
            static_cast<unsigned int>(start.x), static_cast<unsigned int>(start.y));
        if (start_cost == nav2_costmap_2d::LETHAL_OBSTACLE ||
            start_cost == nav2_costmap_2d::NO_INFORMATION)
        {
            RCLCPP_WARN(node_->get_logger(),
                "BFS 搜索未开始：起点栅格 (%d,%d) 为障碍或未知区域，cost=%u",
                start.x, start.y, static_cast<unsigned int>(start_cost));
            return path;
        }

        if (!IsCellTraversable(goal))
        {
            RCLCPP_WARN(node_->get_logger(),
                "BFS 搜索未开始：终点栅格 (%d,%d) 不可通行", goal.x, goal.y);
            return path;
        }

        // 机器人可能已处于膨胀区边缘。仅允许当前起点入队，
        // 后续邻居仍须通过 IsCellTraversable，不能继续穿过 253 区域。
        // 不修改代价地图；实际能否脱离仍由局部控制器的碰撞检查决定。
        if (start_cost == nav2_costmap_2d::INSCRIBED_INFLATED_OBSTACLE)
        {
            RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 5000,
                "BFS 起点 (%d,%d) 位于内切膨胀区：仅允许起点入队，"
                "后续栅格仍禁止 253/254/255", start.x, start.y);
        }

        std::queue<Commonality::GridLocation> frontier;
        frontier.push(start);

        std::unordered_map<Commonality::GridLocation, Commonality::GridLocation> came_from;
        came_from[start] = start;

        while(!frontier.empty())
        {
            Commonality::GridLocation current = frontier.front();
            frontier.pop();

            if(current == goal) break;

            for(Commonality::GridLocation next : graph.neighbor(current))
            {
                if (!IsCellTraversable(next))
                {
                    continue;
                }

                if(came_from.find(next) == came_from.end())
                {
                    came_from[next] = current;
                    frontier.push(next);
                }
            }
        }

        if(came_from.find(goal) == came_from.end())
        {
            RCLCPP_WARN(node_->get_logger(),
                "BFS 搜索耗尽：起点 (%d,%d)，cost=%u，终点 (%d,%d)，"
                "已发现 %zu 个栅格；没有满足通行条件的连接路径",
                start.x, start.y, static_cast<unsigned int>(start_cost),
                goal.x, goal.y, came_from.size());
            return path;
        }

        for(Commonality::GridLocation point = goal; !(point == start); point = came_from.at(point))
        {
            path.push_back(point);
        }

        path.push_back(start);
        std::reverse(path.begin(), path.end());

        return path;
    }

    nav_msgs::msg::Path BFS_Planner::createPlan(
        const geometry_msgs::msg::PoseStamped & start,
        const geometry_msgs::msg::PoseStamped & goal)
    {
        nav_msgs::msg::Path global_path;
        global_path.poses.clear();
        global_path.header.stamp = node_->now();
        global_path.header.frame_id = global_frame_;

        if(start.header.frame_id != global_frame_ || goal.header.frame_id != global_frame_)
        {
            RCLCPP_INFO(node_->get_logger(), "规划器仅接受来自 %s 坐标系的起始或终点位置", global_frame_.c_str());
        }

        // 保证坐标转换、搜索和路径生成使用同一份地图。
        std::unique_lock<nav2_costmap_2d::Costmap2D::mutex_t> costmap_lock(
            *costmap_->getMutex());

        unsigned int start_x, start_y;
        if(!costmap_->worldToMap(start.pose.position.x, start.pose.position.y, start_x,start_y))
        {
            RCLCPP_ERROR(node_->get_logger(), "起点位置应该在地图内，请重新确认起点位置");
            throw nav2_core::PlannerException("起点不在代价地图范围内");
        }
        Commonality::GridLocation start_cell{
            //static_cast用于执行明确的类型转换
            static_cast<int>(start_x),
            static_cast<int>(start_y)
        };

        unsigned int goal_x, goal_y;
        if(!costmap_->worldToMap(goal.pose.position.x, goal.pose.position.y, goal_x, goal_y))
        {
            RCLCPP_ERROR(node_->get_logger(), "终点位置应该在地图内，请重新确认终点位置");
            throw nav2_core::PlannerException("终点不在代价地图范围内");
        }
        Commonality::GridLocation goal_cell{
            static_cast<int>(goal_x),
            static_cast<int>(goal_y)
        };

        int width = costmap_->getSizeInCellsX();
        int height = costmap_->getSizeInCellsY();

        Commonality::SquareGrid grid(width, height);

        std::vector<Commonality::GridLocation> final_goal;

        final_goal = BFSSearch(grid, start_cell, goal_cell);

        if(final_goal.empty())
        {
            throw nav2_core::PlannerException("BFS 无法找到可行路径");
        }

        for(Commonality::GridLocation point : final_goal)
        {
            double world_x, world_y;

            costmap_->mapToWorld(static_cast<unsigned int>(point.x), static_cast<unsigned int>(point.y), world_x, world_y);

            geometry_msgs::msg::PoseStamped pose;
            pose.header.stamp = node_->now();
            pose.header.frame_id = global_frame_;
            pose.pose.position.x = world_x;
            pose.pose.position.y = world_y;

            global_path.poses.push_back(pose);
        }

        return global_path;
    }
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(BFSPlanner::BFS_Planner, nav2_core::GlobalPlanner)
