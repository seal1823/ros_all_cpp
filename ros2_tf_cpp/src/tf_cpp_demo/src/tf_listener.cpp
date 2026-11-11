#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/transform.hpp"    //提供消息接口
#include "tf2/LinearMath/QuadWord.hpp"   
#include "tf2/utils.hpp"   //四元数转欧拉角     
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"   //提供消息类型转换函数
#include "tf2_ros/transform_listener.hpp"
#include "chrono"
#include "tf2_ros/buffer.hpp"

using namespace std::chrono_literals;

class TFListener:public rclcpp::Node
{
private:
    std::shared_ptr<tf2_ros::TransformListener> listener_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::shared_ptr<tf2_ros::Buffer> buffer_;

public:
    explicit TFListener():Node("tf_broadcaster")
    {
        this->buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());     //这里传入clock是因为buffer是通过时间戳来组织数据之类的
        this->listener_ = std::make_shared<tf2_ros::TransformListener>(*buffer_,this);  //传入节点，在节点内部创建一个话题的发布者，这里的*buffer是解引用，传入的是buffer本身
        timer_ = this->create_wall_timer(1s,[&]()->void{
            try
            {
                const auto transform = buffer_->lookupTransform("base_link","target_point",this->get_clock()->now(),rclcpp::Duration::from_seconds(1.0f));
                auto translation = transform.transform.translation;
                auto rotation = transform.transform.rotation;
                double y,p,r;
                tf2::getEulerYPR(rotation,y,p,r);
                RCLCPP_INFO(this->get_logger(),"平移%f,%f,%f",translation.x,translation.y,translation.z);
                RCLCPP_INFO(this->get_logger(),"旋转%f,%f,%f",y,p,r);
            }
            catch(const std::exception& e)
            {
                RCLCPP_WARN(this->get_logger(),"%s",e.what());
            }
        });
    }
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<TFListener>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}