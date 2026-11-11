# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target action_demo_cpp::action_demo_cpp
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${action_demo_cpp_TARGETS}.
if(action_demo_cpp_TARGETS AND NOT TARGET action_demo_cpp::action_demo_cpp)
  add_library(action_demo_cpp::action_demo_cpp INTERFACE IMPORTED)
  set_target_properties(action_demo_cpp::action_demo_cpp PROPERTIES
    INTERFACE_LINK_LIBRARIES "${action_demo_cpp_TARGETS}")
endif()
