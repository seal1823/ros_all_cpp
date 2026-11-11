#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"

class InitialPosition:public rclcpp::Node
{
private:
    rclcpp::Publisher<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr amcl_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int publish_count_ = 0;
    static constexpr int MAX_PUBLISH_COUNT = 10;

public:
    explicit InitialPosition(const std::string& node_name):Node(node_name)
    {
        // 跟随仿真时钟 /clock，保证 header.stamp 与 Nav2 的 use_sim_time 一致
        // 注意：use_sim_time 在 rclcpp Node 构造时已自动声明，这里只需覆盖其值
        this->set_parameter(rclcpp::Parameter("use_sim_time", true));
        amcl_publisher_ = this->create_publisher<geometry_msgs::msg::PoseWithCovarianceStamped>("/initialpose",10);
        // 用定时器周期性发布，避免构造函数阻塞，保证晚启动的 AMCL / echo 也能收到
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
            [this](){ this->SendPosition(); });
    }

    void SendPosition()
    {
        if (publish_count_ >= MAX_PUBLISH_COUNT)
        {
            timer_->cancel();
            // 退出节点进程，触发 launch 中 OnProcessExit 事件，启动后续导航节点
            rclcpp::shutdown();
            return;
        }
        publish_count_++;

        geometry_msgs::msg::PoseWithCovarianceStamped msg;
        msg.header.stamp = this->now();
        msg.header.frame_id = "map";
        msg.pose.pose.position.x = 0.000038;
        msg.pose.pose.position.y = -0.00009;
        msg.pose.pose.position.z = 0;

        msg.pose.pose.orientation.x = 0.0;
        msg.pose.pose.orientation.y = 0.0;
        msg.pose.pose.orientation.z = -0.000072;
        msg.pose.pose.orientation.w = 0.9999999974;

        msg.pose.covariance[0] = 0.01;
        msg.pose.covariance[7] = 0.01;
        msg.pose.covariance[35] = 0.0076;

        amcl_publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(),"Published initial pose, count=%d",publish_count_);
    }
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<InitialPosition>("InitialPosition");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
