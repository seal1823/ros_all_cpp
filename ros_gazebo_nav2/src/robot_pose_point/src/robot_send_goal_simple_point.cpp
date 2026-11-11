#include "rclcpp/rclcpp.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "chrono"
#include "rclcpp_action/rclcpp_action.hpp"

using namespace std::chrono_literals;
using GoalHandleNavigateToPose = rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateToPose>;

class SendSimplePiont: public rclcpp::Node
{
private:
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;
    // 必须持有 goal handle，否则 feedback 到达时弱引用已失效，消息会被丢弃
    GoalHandleNavigateToPose::SharedPtr goal_handle_;

public:
    explicit SendSimplePiont(const std::string& node_name):Node(node_name)
    {
        this->set_parameter(rclcpp::Parameter("use_sim_time",true));
        client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(this,"/navigate_to_pose");
        timer_ = this->create_wall_timer(500ms,[this]()->void{
            this->SendPoint();
        });
    }
    // 等待 Action Server 上线（在 main 中、spin 之前调用，避免阻塞 executor）
    bool WaitServer()
    {
        return client_->wait_for_action_server(10s);
    }

    void SendPoint()
    {
        // 非阻塞检查服务器是否就绪，未就绪则跳过本次，等待下一个定时器周期
        if (!client_->action_server_is_ready())
        {
            RCLCPP_INFO(this->get_logger(),"Action Server 尚未上线，等待...");
            return;
        }

        nav2_msgs::action::NavigateToPose::Goal msg;
        msg.pose.header.stamp = this->now();
        msg.pose.header.frame_id = "map";
        msg.pose.pose.position.x = 1.0;
        msg.pose.pose.position.y = -1.0;
        rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SendGoalOptions options;

        options.feedback_callback = 
            [this](
                GoalHandleNavigateToPose::SharedPtr goal_handle,
                const std::shared_ptr<const nav2_msgs::action::NavigateToPose::Feedback> feedback)
            {
                RCLCPP_INFO(
                    this->get_logger(),
                    "剩余距离：%.2f",
                    feedback->distance_remaining
                );
            };

        options.result_callback =
            [this](
                const GoalHandleNavigateToPose::WrappedResult & wrapped_result)
            {
                if (wrapped_result.code == rclcpp_action::ResultCode::SUCCEEDED)
                {
                    RCLCPP_INFO(this->get_logger(), "导航成功");
                }
                else if (wrapped_result.code == rclcpp_action::ResultCode::ABORTED)
                {
                    RCLCPP_ERROR(this->get_logger(), "导航被中止");
                }
                else if (wrapped_result.code == rclcpp_action::ResultCode::CANCELED)
                {
                    RCLCPP_WARN(this->get_logger(), "导航被取消");
                }
            };
        
        options.goal_response_callback =
            [this](
                GoalHandleNavigateToPose::SharedPtr goal_handle
            )
            {
                if(!goal_handle)
                {
                    RCLCPP_ERROR(this->get_logger(),"导航点被拒绝了");
                }
                else
                {
                    // 保存 goal handle，保证 feedback 回调期间其生命周期有效
                    this->goal_handle_ = goal_handle;
                    RCLCPP_INFO(this->get_logger(),"导航点被接受了");
                }
            };

        this->client_->async_send_goal(msg,options);
        timer_->cancel();
    }

};

int main(int argc,char** argv)
{   
    rclcpp::init(argc,argv);
    auto node = std::make_shared<SendSimplePiont>("node");
    // 在 spin 之前阻塞等待服务器上线（此时 executor 尚未运行，不会卡住回调）
    if (!node->WaitServer())
    {
        RCLCPP_ERROR(node->get_logger(),"等待 Action Server 上线超时");
        rclcpp::shutdown();
        return 1;
    }
    RCLCPP_INFO(node->get_logger(),"Action Server 已上线");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}