# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target service_demo_cpp::service_demo_cpp
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${service_demo_cpp_TARGETS}.
if(service_demo_cpp_TARGETS AND NOT TARGET service_demo_cpp::service_demo_cpp)
  add_library(service_demo_cpp::service_demo_cpp INTERFACE IMPORTED)
  set_target_properties(service_demo_cpp::service_demo_cpp PROPERTIES
    INTERFACE_LINK_LIBRARIES "${service_demo_cpp_TARGETS}")
endif()
