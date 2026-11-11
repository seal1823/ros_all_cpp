#include "rclcpp/rclcpp.hpp"
#include "service_demo_cpp/srv/own_tur.hpp"
#include "chrono"
#include "random"
#include "iostream"

using namespace std::chrono_literals;

class Client:public rclcpp::Node
{
private:
    rclcpp::Client<service_demo_cpp::srv::OwnTur>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;

public:
    explicit Client(const std::string& node_name):Node(node_name)
    {
        client_ = this->create_client<service_demo_cpp::srv::OwnTur>("OwnService");
        timer_ = this->create_wall_timer(1s,std::bind(&Client::callback,this));
    }

    void callback()
    {
        //随机生成0-10的数
        std::random_device sd;
        std::mt19937 gen(sd());
        std::uniform_int_distribution<> dist(0,10);
        int num = dist(gen);

        // 检测服务端是否上线
        while(!this->client_->wait_for_service(1s))
        {
            if(!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(),"服务端上线失败");
                return;
            }

            RCLCPP_INFO(this->get_logger(),"等待服务上线ing...");
        }

        auto request = std::make_shared<service_demo_cpp::srv::OwnTur::Request>();
        request->l_num = num;
        this->client_->async_send_request(request,[&](rclcpp::Client<service_demo_cpp::srv::OwnTur>::SharedFuture result)->void{
            auto response = result.get();
            if(response->result == service_demo_cpp::srv::OwnTur::Response::SUCCESS) RCLCPP_INFO(this->get_logger(),"好多好多");
            else RCLCPP_INFO(this->get_logger(),"那算了");

        });   //异步发送请求

    }
};

int main(int argc,char** argv)
{   
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Client>("client_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}