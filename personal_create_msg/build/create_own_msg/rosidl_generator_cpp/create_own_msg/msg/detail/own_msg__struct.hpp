// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#ifndef CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_HPP_
#define CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__create_own_msg__msg__OwnMsg __attribute__((deprecated))
#else
# define DEPRECATED__create_own_msg__msg__OwnMsg __declspec(deprecated)
#endif

namespace create_own_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OwnMsg_
{
  using Type = OwnMsg_<ContainerAllocator>;

  explicit OwnMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->user_name = "";
      this->num_of_l = 0;
    }
  }

  explicit OwnMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc),
    user_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->user_name = "";
      this->num_of_l = 0;
    }
  }

  // field types and members
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _user_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_name_type user_name;
  using _num_of_l_type =
    int8_t;
  _num_of_l_type num_of_l;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__user_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_name = _arg;
    return *this;
  }
  Type & set__num_of_l(
    const int8_t & _arg)
  {
    this->num_of_l = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create_own_msg::msg::OwnMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const create_own_msg::msg::OwnMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create_own_msg::msg::OwnMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create_own_msg::msg::OwnMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create_own_msg__msg__OwnMsg
    std::shared_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create_own_msg__msg__OwnMsg
    std::shared_ptr<create_own_msg::msg::OwnMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnMsg_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->user_name != other.user_name) {
      return false;
    }
    if (this->num_of_l != other.num_of_l) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnMsg_

// alias to use template instance with default allocator
using OwnMsg =
  create_own_msg::msg::OwnMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace create_own_msg

#endif  // CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_HPP_
