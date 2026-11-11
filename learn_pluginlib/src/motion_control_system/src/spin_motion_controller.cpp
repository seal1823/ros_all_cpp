#include "iostream"
#include "motion_control_system/spin_motion_controller.hpp"

namespace motion_control_system
{
    void SpinMotionController::start()
    {
        std::cout << "start" << std::endl;
    }

    void SpinMotionController::stop()
    {
        std::cout << "stop" << std::endl;
    }
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(motion_control_system::SpinMotionController,motion_control_system::MotionController)