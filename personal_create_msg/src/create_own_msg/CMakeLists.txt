cmake_minimum_required(VERSION 3.8)
project(create_own_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
# 一个来自rosidl_default_generators的cmake函数，用于将mag等自定义消息接口文件转换为库或者头文件
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/OwnMsg.msg"
)
add_executable(use_own_msg_topic src/use_own_msg_topic.cpp)
add_executable(use_own_msg_sub src/use_own_msg_sub.cpp)

ament_target_dependencies(use_own_msg_sub rclcpp)
ament_target_dependencies(use_own_msg_topic rclcpp)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(use_own_msg_sub "${cpp_typesupport_target}")
target_link_libraries(use_own_msg_topic "${cpp_typesupport_target}")


install(TARGETS
  use_own_msg_topic use_own_msg_sub
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
