#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/transform.hpp"    //提供消息接口
#include "tf2/LinearMath/Quaternion.hpp"        //将欧拉角转换为四元数
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"   //提供消息类型转换函数
#include "tf2_ros/static_transform_broadcaster.hpp"  //静态广播类

class StaticTFBroadcaster:public rclcpp::Node
{
private:
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_broadcaster;
public:
    explicit StaticTFBroadcaster():Node("static_tf_broadcaster")
    {
        this->static_broadcaster = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);  //传入节点，在节点内部创建一个话题的发布者
        this->publish_tf();
    }

    void publish_tf()
    {
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->get_clock()->now();
        transform.header.frame_id = "map";
        transform.child_frame_id = "target_point";
        transform.transform.translation.x = 5.0;
        transform.transform.translation.y = 3.0;
        transform.transform.translation.z = 0.0;

        tf2::Quaternion q;
        q.setRPY(0.0,0.0,60*M_PI / 180);
        transform.transform.rotation = tf2::toMsg(q);    //tf旋转部分传入的是四元数
        this->static_broadcaster->sendTransform(transform);
    }
};


int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<StaticTFBroadcaster>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}