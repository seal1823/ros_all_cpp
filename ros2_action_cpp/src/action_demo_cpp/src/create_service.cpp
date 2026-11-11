#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "action_demo_cpp/action/own_action.hpp"
#include <chrono>
#include <thread>

using OwnAction = action_demo_cpp::action::OwnAction;
using GoalHandleService = rclcpp_action::ServerGoalHandle<OwnAction>;
using namespace std::chrono_literals;

class Service : public rclcpp::Node
{
private:
    rclcpp_action::Server<OwnAction>::SharedPtr service_;

    void execute(const std::shared_ptr<GoalHandleService> goal_handle)
    {
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<OwnAction::Feedback>();
        auto result = std::make_shared<OwnAction::Result>();

        RCLCPP_INFO(
            this->get_logger(), "开始执行任务，目标次数：%u", goal->l_num);

        for (uint32_t i = 0; i < goal->l_num && rclcpp::ok(); ++i)
        {
            if (goal_handle->is_canceling())
            {
                result->result = OwnAction::Result::FALSE;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "任务已取消，已完成 %u 次", i);
                return;
            }

            feedback->l_all_num = i + 1;
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "服务端已完成第 %u 次", i + 1);

            // 模拟一次任务所需的时间，也给取消请求留下处理机会。
            std::this_thread::sleep_for(500ms);
        }

        if (!rclcpp::ok())
        {
            return;
        }

        result->result = OwnAction::Result::SUCCESS;
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "任务执行完成，共完成 %u 次", goal->l_num);
    }

public:
    explicit Service(const std::string& node_name) : Node(node_name)
    {
        service_ = rclcpp_action::create_server<OwnAction>(this, "my_action", 
            std::bind(&Service::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&Service::handle_cancel, this, std::placeholders::_1),
            std::bind(&Service::handle_accepted, this, std::placeholders::_1)
        );
    }

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const OwnAction::Goal> goal
    )
    {
        (void)uuid;

        RCLCPP_INFO(this->get_logger(), "收到目标请求：%u 次", goal->l_num);
        if (goal->l_num > 10)
        {
            RCLCPP_WARN(this->get_logger(), "目标次数超过 10，拒绝请求");
            return rclcpp_action::GoalResponse::REJECT;
        }

        RCLCPP_INFO(this->get_logger(), "目标合法，接受请求");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleService> goal_handle
    )
    {
        RCLCPP_INFO(
            this->get_logger(), "收到取消请求，当前状态：%s",
            goal_handle->is_active() ? "执行中" : "非活动");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(
        const std::shared_ptr<GoalHandleService> goal_handle
    )
    {
        RCLCPP_INFO(this->get_logger(), "目标已接受，创建执行线程");
        std::thread(&Service::execute, this, goal_handle).detach();
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Service>("service_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
}
