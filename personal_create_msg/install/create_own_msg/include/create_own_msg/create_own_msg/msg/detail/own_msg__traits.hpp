// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#ifndef CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__TRAITS_HPP_
#define CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "create_own_msg/msg/detail/own_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace create_own_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const OwnMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: user_name
  {
    out << "user_name: ";
    rosidl_generator_traits::value_to_yaml(msg.user_name, out);
    out << ", ";
  }

  // member: num_of_l
  {
    out << "num_of_l: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_l, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OwnMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: user_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_name: ";
    rosidl_generator_traits::value_to_yaml(msg.user_name, out);
    out << "\n";
  }

  // member: num_of_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_l: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_l, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OwnMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace create_own_msg

namespace rosidl_generator_traits
{

[[deprecated("use create_own_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create_own_msg::msg::OwnMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_own_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_own_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const create_own_msg::msg::OwnMsg & msg)
{
  return create_own_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<create_own_msg::msg::OwnMsg>()
{
  return "create_own_msg::msg::OwnMsg";
}

template<>
inline const char * name<create_own_msg::msg::OwnMsg>()
{
  return "create_own_msg/msg/OwnMsg";
}

template<>
struct has_fixed_size<create_own_msg::msg::OwnMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<create_own_msg::msg::OwnMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<create_own_msg::msg::OwnMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__TRAITS_HPP_
