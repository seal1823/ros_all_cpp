// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#ifndef CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__BUILDER_HPP_
#define CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create_own_msg/msg/detail/own_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create_own_msg
{

namespace msg
{

namespace builder
{

class Init_OwnMsg_num_of_l
{
public:
  explicit Init_OwnMsg_num_of_l(::create_own_msg::msg::OwnMsg & msg)
  : msg_(msg)
  {}
  ::create_own_msg::msg::OwnMsg num_of_l(::create_own_msg::msg::OwnMsg::_num_of_l_type arg)
  {
    msg_.num_of_l = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_own_msg::msg::OwnMsg msg_;
};

class Init_OwnMsg_user_name
{
public:
  explicit Init_OwnMsg_user_name(::create_own_msg::msg::OwnMsg & msg)
  : msg_(msg)
  {}
  Init_OwnMsg_num_of_l user_name(::create_own_msg::msg::OwnMsg::_user_name_type arg)
  {
    msg_.user_name = std::move(arg);
    return Init_OwnMsg_num_of_l(msg_);
  }

private:
  ::create_own_msg::msg::OwnMsg msg_;
};

class Init_OwnMsg_node_name
{
public:
  Init_OwnMsg_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OwnMsg_user_name node_name(::create_own_msg::msg::OwnMsg::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_OwnMsg_user_name(msg_);
  }

private:
  ::create_own_msg::msg::OwnMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_own_msg::msg::OwnMsg>()
{
  return create_own_msg::msg::builder::Init_OwnMsg_node_name();
}

}  // namespace create_own_msg

#endif  // CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__BUILDER_HPP_
