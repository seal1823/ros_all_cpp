#include "motion_control_system/motion_control_interface.hpp"
#include "pluginlib/class_loader.hpp"
#include "iostream"

int main(int argc,char** argv)
{
    if(argc != 2)  
    {
        std::cout << "命令行中的参数数量不对" << std::endl;
        return 0;
    }

    std::string controller_name = argv[1];
    // 1.通过功能包名称和基类名称创建控制器加载器
    pluginlib::ClassLoader<motion_control_system::MotionController> controller_loader("motion_control_system","motion_control_system::MotionController");
    // 2.使用加载器加载指定名称的插件，返回的是指定插件类的对象的指针
    auto controller = controller_loader.createClassInstance(controller_name);

    controller->start();
    controller->stop();
    return 0;
}