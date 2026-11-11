#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "action_demo_cpp/action/own_action.hpp"
#include <cstdint>

using OwnAction = action_demo_cpp::action::OwnAction;
using GoalHandleClient = rclcpp_action::ClientGoalHandle<OwnAction>;
using namespace std::chrono_literals;

class Client : public rclcpp::Node
{
private:
    rclcpp_action::Client<OwnAction>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::TimerBase::SharedPtr cancel_timer_;
    GoalHandleClient::SharedPtr goal_handle_;
    int cancel_after_ms_ = 0;

public:
    explicit Client(const std::string& node_name) : Node(node_name)
    {
        client_ = rclcpp_action::create_client<OwnAction>(this, "my_action");
        this->declare_parameter<int>("l_num", 5);
        this->declare_parameter<int>("cancel_after_ms", 0);
        timer_ = this->create_wall_timer(1s, std::bind(&Client::callback,this));
    }

    bool WaitServe()
    {
        return this->client_->wait_for_action_server(5s);
    }

    void callback()
    {
        if(!this->client_->action_server_is_ready())
        {
            RCLCPP_INFO(this->get_logger(),"Action Server 尚未上线，等待...");
            return;
        }
        
        // 只发送一次；如需重新发送，重新启动客户端即可。
        timer_->cancel();

        const int requested_num = this->get_parameter("l_num").as_int();
        cancel_after_ms_ = this->get_parameter("cancel_after_ms").as_int();
        if (requested_num < 0 || cancel_after_ms_ < 0)
        {
            RCLCPP_ERROR(
                this->get_logger(),
                "参数 l_num 和 cancel_after_ms 都不能小于 0");
            rclcpp::shutdown();
            return;
        }

        OwnAction::Goal goal;
        goal.l_num = static_cast<uint32_t>(requested_num);
        RCLCPP_INFO(this->get_logger(), "发送目标：%u 次", goal.l_num);

        rclcpp_action::Client<OwnAction>::SendGoalOptions options;

        options.feedback_callback = 
            [this](
                GoalHandleClient::SharedPtr goal_handle,
                const std::shared_ptr<const OwnAction::Feedback> feedback)
            {
                RCLCPP_INFO(this->get_logger(),"已经l%d次",feedback->l_all_num);
                (void) goal_handle;
            };

        options.goal_response_callback = 
            [this](
                const GoalHandleClient::SharedPtr goal_handle)
            {
                if(!goal_handle){
                    RCLCPP_ERROR(this->get_logger(),"请求被拒绝");
                    rclcpp::shutdown();
                }
                else{
                    RCLCPP_INFO(this->get_logger(),"请求被接受");
                    goal_handle_ = goal_handle;

                    if (cancel_after_ms_ > 0)
                    {
                        cancel_timer_ = this->create_wall_timer(
                            std::chrono::milliseconds(cancel_after_ms_),
                            [this]()
                            {
                                cancel_timer_->cancel();
                                if (goal_handle_)
                                {
                                    RCLCPP_INFO(this->get_logger(), "客户端发送取消请求");
                                    client_->async_cancel_goal(goal_handle_);
                                }
                            });
                    }
                }
            };

        options.result_callback = 
            [this, requested_num](
                const GoalHandleClient::WrappedResult & result)
            {
                switch (result.code)
                {
                    case rclcpp_action::ResultCode::SUCCEEDED:
                        RCLCPP_INFO(
                            this->get_logger(), "任务成功：请求 %d 次，结果值 %u",
                            requested_num, result.result->result);
                        break;
                    case rclcpp_action::ResultCode::CANCELED:
                        RCLCPP_WARN(this->get_logger(), "任务已取消");
                        break;
                    case rclcpp_action::ResultCode::ABORTED:
                        RCLCPP_ERROR(this->get_logger(), "任务被服务端中止");
                        break;
                    default:
                        RCLCPP_ERROR(this->get_logger(), "收到未知的结果状态");
                        break;
                }
                rclcpp::shutdown();
            };

        this->client_->async_send_goal(goal, options);
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Client>("client_node");
    if(!node->WaitServe()) RCLCPP_ERROR(node->get_logger(),"等待服务端上线超时");
    rclcpp::spin(node);
    rclcpp::shutdown();
}
