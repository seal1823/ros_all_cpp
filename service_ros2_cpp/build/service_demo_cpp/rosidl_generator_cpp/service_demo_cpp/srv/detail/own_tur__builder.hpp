// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__BUILDER_HPP_
#define SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_demo_cpp/srv/detail/own_tur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_demo_cpp
{

namespace srv
{

namespace builder
{

class Init_OwnTur_Request_l_num
{
public:
  Init_OwnTur_Request_l_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_demo_cpp::srv::OwnTur_Request l_num(::service_demo_cpp::srv::OwnTur_Request::_l_num_type arg)
  {
    msg_.l_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_demo_cpp::srv::OwnTur_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_demo_cpp::srv::OwnTur_Request>()
{
  return service_demo_cpp::srv::builder::Init_OwnTur_Request_l_num();
}

}  // namespace service_demo_cpp


namespace service_demo_cpp
{

namespace srv
{

namespace builder
{

class Init_OwnTur_Response_result
{
public:
  Init_OwnTur_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_demo_cpp::srv::OwnTur_Response result(::service_demo_cpp::srv::OwnTur_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_demo_cpp::srv::OwnTur_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_demo_cpp::srv::OwnTur_Response>()
{
  return service_demo_cpp::srv::builder::Init_OwnTur_Response_result();
}

}  // namespace service_demo_cpp

#endif  // SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__BUILDER_HPP_
