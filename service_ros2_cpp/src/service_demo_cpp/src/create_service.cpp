#include "rclcpp/rclcpp.hpp"
#include "service_demo_cpp/srv/own_tur.hpp"

class Service:public rclcpp::Node
{
private:
    rclcpp::Service<service_demo_cpp::srv::OwnTur>::SharedPtr servicer_;

public:
    explicit Service(const std::string& node_name):Node(node_name)
    {
        servicer_ = this->create_service<service_demo_cpp::srv::OwnTur>("OwnService",std::bind(&Service::callback,this,std::placeholders::_1,std::placeholders::_2));
    }

    void callback(const service_demo_cpp::srv::OwnTur::Request::SharedPtr request,const service_demo_cpp::srv::OwnTur::Response::SharedPtr response)
    {
        if(request->l_num > 0 && request->l_num <= 5)
        {
            response->result = service_demo_cpp::srv::OwnTur::Response::SUCCESS;
            RCLCPP_INFO(this->get_logger(),"收到,开始l%d次",request->l_num);
        }
        else{
            response->result = service_demo_cpp::srv::OwnTur::Response::FAIL;
            RCLCPP_INFO(this->get_logger(),"%d太多了,不行了",request->l_num);
        }

    }
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Service>("service_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}