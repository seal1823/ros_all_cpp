#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/transform.hpp"    //提供消息接口
#include "tf2/LinearMath/QuadWord.hpp"        
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"   //提供消息类型转换函数
#include "tf2_ros/transform_broadcaster.hpp"  //动态广播类
#include "chrono"

using namespace std::chrono_literals;

class DynamicTFBroadcaster:public rclcpp::Node
{
private:
    std::shared_ptr<tf2_ros::TransformBroadcaster> dynamic_broadcaster;
    rclcpp::TimerBase::SharedPtr timer_;

public:
    explicit DynamicTFBroadcaster():Node("tf_broadcaster")
    {
        this->dynamic_broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(this);  //传入节点，在节点内部创建一个话题的发布者
        // this->publish_tf();
        timer_ = this->create_wall_timer(100ms,std::bind(&DynamicTFBroadcaster::publish_tf,this));
    }

    void publish_tf()
    {
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->get_clock()->now();
        transform.header.frame_id = "map";
        transform.child_frame_id = "base_link";
        transform.transform.translation.x = 5.0;
        transform.transform.translation.y = 3.0;
        transform.transform.translation.z = 0.0;

        tf2::Quaternion q;
        q.setRPY(0.0,0.0,30*M_PI / 180);
        transform.transform.rotation = tf2::toMsg(q);
        this->dynamic_broadcaster->sendTransform(transform);
    }
};


int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<DynamicTFBroadcaster>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}