#include "rclcpp/rclcpp.hpp"
#include "nav2_msgs/action/follow_waypoints.hpp"
#include "chrono"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

using namespace std::chrono_literals;
using FollowWayPoints = nav2_msgs::action::FollowWaypoints;
using PoseStamped = geometry_msgs::msg::PoseStamped;
using GoalHandleFollowWaypoints = rclcpp_action::ClientGoalHandle<nav2_msgs::action::FollowWaypoints>;

class SendMorePoint : public rclcpp::Node
{
private:
    rclcpp_action::Client<FollowWayPoints>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;
    GoalHandleFollowWaypoints::SharedPtr goal_handle_;

public:
    explicit SendMorePoint(const std::string& node_name):Node(node_name)
    {   
        this->declare_parameter<std::vector<double>>("goalpoint_x",{});  
        this->declare_parameter<std::vector<double>>("goalpoint_y",{});
        this->set_parameter(rclcpp::Parameter("use_sim_time",true));
        client_ = rclcpp_action::create_client<FollowWayPoints>(this,"/follow_waypoints");
        timer_ = this->create_wall_timer(500ms,[this]()->void{
            this->SendMorePointCallBack();
        });

        //这里的{}表示默认值，如果yaml文件中没有填入参数，那么默认就是此值
    }

    bool WaitServe()
    {
        return this->client_->wait_for_action_server(10s);
    }

    void SendMorePointCallBack()
    {
        FollowWayPoints::Goal goal_;

        auto ix = this->get_parameter("goalpoint_x").as_double_array();
        auto iy = this->get_parameter("goalpoint_y").as_double_array();

        for(int i=0;i<ix.size();i++)
        {
            PoseStamped pose;
            pose.header.frame_id = "map";
            pose.header.stamp = this->now();
            pose.pose.position.x = ix[i];
            pose.pose.position.y = iy[i];

            goal_.poses.push_back(pose);
        }

        // 除了用goal_.poses.push_back()来传递导航点，还可以通过goal_.poses = {pose1,...}这样的方式来进行导航点的传递
        rclcpp_action::Client<FollowWayPoints>::SendGoalOptions options;

        options.goal_response_callback = 
            [this](
                GoalHandleFollowWaypoints::SharedPtr goal_handle)
            {
                if(!goal_handle)
                {
                    RCLCPP_ERROR(this->get_logger(),"导航点被拒绝了");
                }
                else{
                    this->goal_handle_ = goal_handle;
                    RCLCPP_INFO(this->get_logger(),"导航点被接受了");
                }
            };

        options.feedback_callback =
            [this](
                GoalHandleFollowWaypoints::SharedPtr goal_handle,
                const std::shared_ptr<const FollowWayPoints::Feedback> feeedback)
            {
                RCLCPP_INFO(
                    this->get_logger(),
                    "当前前往导航点：%d",
                    feeedback->current_waypoint
                );
            };


        this->client_->async_send_goal(goal_,options);
        timer_->cancel();
    }   
};

int main(int argc,char** argv)
{   
    rclcpp::init(argc,argv);
    auto node = std::make_shared<SendMorePoint>("MorePoint");
    if(!node->WaitServe())
    {
        RCLCPP_ERROR(node->get_logger(),"等待 Action Server 上线超时");
        rclcpp::shutdown();
        return 1;
    }
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}