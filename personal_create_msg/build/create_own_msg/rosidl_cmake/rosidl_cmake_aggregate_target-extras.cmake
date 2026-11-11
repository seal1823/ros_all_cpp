# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target create_own_msg::create_own_msg
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${create_own_msg_TARGETS}.
if(create_own_msg_TARGETS AND NOT TARGET create_own_msg::create_own_msg)
  add_library(create_own_msg::create_own_msg INTERFACE IMPORTED)
  set_target_properties(create_own_msg::create_own_msg PROPERTIES
    INTERFACE_LINK_LIBRARIES "${create_own_msg_TARGETS}")
endif()
