#include "rclcpp/rclcpp.hpp"
#include "create_own_msg/msg/own_msg.hpp"
#include "chrono"

using namespace std::chrono_literals;

class Own_Msg_Test: public rclcpp::Node
{
private:
    rclcpp::Publisher<create_own_msg::msg::OwnMsg>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

public:
    explicit Own_Msg_Test(const std::string& node_name):Node(node_name)
    {
        publisher_ = this->create_publisher<create_own_msg::msg::OwnMsg>("own",10);
        timer_ = this->create_wall_timer(1s,std::bind(&Own_Msg_Test::callback,this));
    }

    void callback()
    {
        auto msg = create_own_msg::msg::OwnMsg();
        msg.node_name = "seal_node";
        msg.user_name = "seal";
        msg.num_of_l = 10;
        publisher_->publish(msg);
    }
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Own_Msg_Test>("node_name");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}