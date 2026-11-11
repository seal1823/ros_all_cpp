#include "rclcpp/rclcpp.hpp"
 #include "geometry_msgs/msg/twist.hpp"
 #include "turtlesim/msg/pose.hpp"
 #include "cmath"
 #include "chrono"
 
 using namespace std::chrono_literals;
 
 class Turtlesim: public rclcpp::Node
 {
 public:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    
    geometry_msgs::msg::Twist linear_angel_;
    turtlesim::msg::Pose current_pose_;
    
    double angel_yuzhi = 0.01;
    double distance_yuzhi = 0.02;
    
    double linear_kp = 1.0;
    double linear_ki = 0.01;
    double linear_kd = 0.1;
    
    double last_dis_error = 0.0;
    double dis_error_sum = 0.0;
    double max_dis_error_sum = 0.5;
    double min_dix_error_sum = 00.5;
    
    double angel_kp = 3.0;
    
    double T_time = 0.01;
    
    double goal_point[9][2] = 
    {
        {5.54, 5.54},
        {5.54, 8.54},
        {6.54, 7.54},
        {5.54, 6.54},
        {6.54, 5.54},
        {7.04, 8.54},
        {7.54, 5.54},
        {7.84, 8.54},
        {8.54, 5.54}
    };
    
    explicit Turtlesim(const std::string& node_name):Node(node_name)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10);
        subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose",10,std::bind(&Turtlesim::callback,this,std::placeholders::_1));
    }
    
    void callback(const turtlesim::msg::Pose::SharedPtr pose)
    {
        current_pose_ = *pose;
    }
    
    double angel_pi(double target_angel)
    {
        if (target_angel > M_PI)
        {
            target_angel -= 2*M_PI;
        }
        else if (target_angel < -M_PI)
        {
            target_angel += 2*M_PI;
        }
        
        return target_angel;
    }
    
    double jisuan_error_angel(double target_x,double target_y)
    {
        double target_angel = std::atan2(target_y - current_pose_.y,target_x - current_pose_.x);
        
        double error_angel = target_angel - current_pose_.theta;
        error_angel = angel_pi(error_angel);
        
        return error_angel;
    }
    
    void control_angel(double target_angel)
    {
        RCLCPP_INFO(this->get_logger(),"目标旋转角度: %.2f rad",target_angel);
        
        while(rclcpp::ok())
        {
            double angel_error = angel_pi(target_angel - current_pose_.theta);
            RCLCPP_INFO(this->get_logger(),"当前角度误差: %.4f rad",angel_error);
            
            if(std::abs(angel_error) <= angel_yuzhi) break;
            
            linear_angel_.angular.z = angel_kp * angel_error;
            publisher_->publish(linear_angel_);
            rclcpp::spin_some(this->get_node_base_interface());
            rclcpp::sleep_for(10ms);
        }
        
        linear_angel_.angular.z = 0.0;
        publisher_->publish(linear_angel_);
        RCLCPP_INFO(this->get_logger(),"已精准旋转到目标角度");
    }
    
    void control_distance(double target_x, double target_y)
    {
        RCLCPP_INFO(this->get_logger(),"目标位置: (%.2f, %.2f)",target_x,target_y);
        last_dis_error = 0.0;
        dis_error_sum = 0.0;
        
        while(rclcpp::ok())
        {
            double error_x = target_x - current_pose_.x;
            double error_y = target_y - current_pose_.y;
            double error_dis = std::hypot(error_y,error_x);
            RCLCPP_INFO( this->get_logger(), "当前位置误差: %.4f m", error_dis);
            
            if (std::abs(error_dis) <= distance_yuzhi) break;
            
            double angel_error = jisuan_error_angel(target_x,target_y);
            
            if (std::abs(angel_error) > angel_yuzhi)
            {
                linear_angel_.angular.z = angel_kp * angel_error;
            }
            else
            {
                linear_angel_.angular.z = 0.0;
            }
            
            double p_part = error_dis * linear_kp;
            
            double i_part = 0.0;
            if (linear_ki > 0 && error_dis > 0.1)
            {
                dis_error_sum += T_time * error_dis;
                dis_error_sum = std::max(std::min(max_dis_error_sum,dis_error_sum),min_dix_error_sum);
                i_part = linear_ki * dis_error_sum;
            }
            
            double d_part = linear_kd * (error_dis - last_dis_error) / T_time;
            last_dis_error = error_dis; 
            
            double linear_speed = p_part + i_part + d_part;
            linear_speed = std::max(std::min(linear_speed,1.0),0.0);
            
            if (std::abs(angel_error) > 0.5) linear_speed *= 0.3;
            
            linear_angel_.linear.x = linear_speed;
            publisher_->publish(linear_angel_);
            rclcpp::spin_some(this->get_node_base_interface());
            rclcpp::sleep_for(10ms);
        }
        
        linear_angel_.linear.x = 0.0;
        linear_angel_.angular.z = 0.0;
        publisher_->publish(linear_angel_);
        RCLCPP_INFO( this->get_logger(), "已精准移动到目标点" );
    }
        
    double target_point_x(int index)
    {
        return goal_point[index][0];
    }
        
    double target_point_y(int index)
    {
        return goal_point[index][1];
    }
    
 };
 
 int main(int argc,char** argv)
 {
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Turtlesim>("tur_node");
    rclcpp::sleep_for(1s);
    
    double point_x = node->goal_point[0][0];
    double point_y = node->goal_point[0][1];
    
    double start_angel_goal = std::atan2(point_y - node->current_pose_.y, point_x - node->current_pose_.x);
    
    node->control_angel(start_angel_goal);
    node->control_distance(point_x,point_y);
 
    for(int index=0;index<8;index++)
    {
        double point_x = node->target_point_x(index);
        double point_y = node->target_point_y(index);
        double next_point_x = node->target_point_x(index + 1);
        double next_point_y = node->target_point_y(index + 1);
        
        double angel_goal = std::atan2(next_point_y - point_y, next_point_x - point_x);
        node->control_angel(angel_goal);
        node->control_distance(next_point_x,next_point_y);
        
        RCLCPP_INFO(node->get_logger(),"已到达点 %u: (%.2f, %.2f)",index + 2,point_x,point_y);
    }
    
    RCLCPP_INFO(node->get_logger(),"所有目标点已到达");
    rclcpp::shutdown();
    return 0;
 }