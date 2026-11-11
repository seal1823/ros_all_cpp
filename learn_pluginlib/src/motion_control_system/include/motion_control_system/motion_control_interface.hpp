#ifndef MOTION_CONTROL_INTERFACE_CPP
#define MOTION_CONTROL_INTERFACE_CPP

namespace motion_control_system
{
    class MotionController
    {
        public:
            virtual void start() = 0;
            virtual void stop() = 0;
    };
}

#endif //MOTION_CONTROL_INTERFACE_CPP