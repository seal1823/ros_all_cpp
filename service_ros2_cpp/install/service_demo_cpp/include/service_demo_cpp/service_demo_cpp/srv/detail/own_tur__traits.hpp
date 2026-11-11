// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__TRAITS_HPP_
#define SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "service_demo_cpp/srv/detail/own_tur__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace service_demo_cpp
{

namespace srv
{

inline void to_flow_style_yaml(
  const OwnTur_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: l_num
  {
    out << "l_num: ";
    rosidl_generator_traits::value_to_yaml(msg.l_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OwnTur_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_num: ";
    rosidl_generator_traits::value_to_yaml(msg.l_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OwnTur_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_demo_cpp

namespace rosidl_generator_traits
{

[[deprecated("use service_demo_cpp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_demo_cpp::srv::OwnTur_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_demo_cpp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_demo_cpp::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_demo_cpp::srv::OwnTur_Request & msg)
{
  return service_demo_cpp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_demo_cpp::srv::OwnTur_Request>()
{
  return "service_demo_cpp::srv::OwnTur_Request";
}

template<>
inline const char * name<service_demo_cpp::srv::OwnTur_Request>()
{
  return "service_demo_cpp/srv/OwnTur_Request";
}

template<>
struct has_fixed_size<service_demo_cpp::srv::OwnTur_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_demo_cpp::srv::OwnTur_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_demo_cpp::srv::OwnTur_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace service_demo_cpp
{

namespace srv
{

inline void to_flow_style_yaml(
  const OwnTur_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OwnTur_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OwnTur_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_demo_cpp

namespace rosidl_generator_traits
{

[[deprecated("use service_demo_cpp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_demo_cpp::srv::OwnTur_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_demo_cpp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_demo_cpp::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_demo_cpp::srv::OwnTur_Response & msg)
{
  return service_demo_cpp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_demo_cpp::srv::OwnTur_Response>()
{
  return "service_demo_cpp::srv::OwnTur_Response";
}

template<>
inline const char * name<service_demo_cpp::srv::OwnTur_Response>()
{
  return "service_demo_cpp/srv/OwnTur_Response";
}

template<>
struct has_fixed_size<service_demo_cpp::srv::OwnTur_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_demo_cpp::srv::OwnTur_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_demo_cpp::srv::OwnTur_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<service_demo_cpp::srv::OwnTur>()
{
  return "service_demo_cpp::srv::OwnTur";
}

template<>
inline const char * name<service_demo_cpp::srv::OwnTur>()
{
  return "service_demo_cpp/srv/OwnTur";
}

template<>
struct has_fixed_size<service_demo_cpp::srv::OwnTur>
  : std::integral_constant<
    bool,
    has_fixed_size<service_demo_cpp::srv::OwnTur_Request>::value &&
    has_fixed_size<service_demo_cpp::srv::OwnTur_Response>::value
  >
{
};

template<>
struct has_bounded_size<service_demo_cpp::srv::OwnTur>
  : std::integral_constant<
    bool,
    has_bounded_size<service_demo_cpp::srv::OwnTur_Request>::value &&
    has_bounded_size<service_demo_cpp::srv::OwnTur_Response>::value
  >
{
};

template<>
struct is_service<service_demo_cpp::srv::OwnTur>
  : std::true_type
{
};

template<>
struct is_service_request<service_demo_cpp::srv::OwnTur_Request>
  : std::true_type
{
};

template<>
struct is_service_response<service_demo_cpp::srv::OwnTur_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__TRAITS_HPP_
