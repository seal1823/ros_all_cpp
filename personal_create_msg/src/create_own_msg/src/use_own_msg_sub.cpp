#include "rclcpp/rclcpp.hpp"
#include "create_own_msg/msg/own_msg.hpp"

class Own_Sub:public rclcpp::Node
{
private:
    rclcpp::Subscription<create_own_msg::msg::OwnMsg>::SharedPtr subscriber_;

public:
    explicit Own_Sub(const std::string& node_name):Node(node_name)
    {
        subscriber_ = this->create_subscription<create_own_msg::msg::OwnMsg>("own",10,std::bind(&Own_Sub::callback,this,std::placeholders::_1));
    }

    void callback(const create_own_msg::msg::OwnMsg::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(),"节点的名称为%s,用户名称为%s,道了%d次",msg->node_name.c_str(),msg->user_name.c_str(),msg->num_of_l);
    }
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Own_Sub>("node_name");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}