// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_HPP_
#define SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__service_demo_cpp__srv__OwnTur_Request __attribute__((deprecated))
#else
# define DEPRECATED__service_demo_cpp__srv__OwnTur_Request __declspec(deprecated)
#endif

namespace service_demo_cpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OwnTur_Request_
{
  using Type = OwnTur_Request_<ContainerAllocator>;

  explicit OwnTur_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_num = 0;
    }
  }

  explicit OwnTur_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_num = 0;
    }
  }

  // field types and members
  using _l_num_type =
    int8_t;
  _l_num_type l_num;

  // setters for named parameter idiom
  Type & set__l_num(
    const int8_t & _arg)
  {
    this->l_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_demo_cpp__srv__OwnTur_Request
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_demo_cpp__srv__OwnTur_Request
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnTur_Request_ & other) const
  {
    if (this->l_num != other.l_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnTur_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnTur_Request_

// alias to use template instance with default allocator
using OwnTur_Request =
  service_demo_cpp::srv::OwnTur_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_demo_cpp


#ifndef _WIN32
# define DEPRECATED__service_demo_cpp__srv__OwnTur_Response __attribute__((deprecated))
#else
# define DEPRECATED__service_demo_cpp__srv__OwnTur_Response __declspec(deprecated)
#endif

namespace service_demo_cpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OwnTur_Response_
{
  using Type = OwnTur_Response_<ContainerAllocator>;

  explicit OwnTur_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit OwnTur_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESS =
    1;
  static constexpr int8_t FAIL =
    0;

  // pointer types
  using RawPtr =
    service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_demo_cpp__srv__OwnTur_Response
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_demo_cpp__srv__OwnTur_Response
    std::shared_ptr<service_demo_cpp::srv::OwnTur_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnTur_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnTur_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnTur_Response_

// alias to use template instance with default allocator
using OwnTur_Response =
  service_demo_cpp::srv::OwnTur_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t OwnTur_Response_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t OwnTur_Response_<ContainerAllocator>::FAIL;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace service_demo_cpp

namespace service_demo_cpp
{

namespace srv
{

struct OwnTur
{
  using Request = service_demo_cpp::srv::OwnTur_Request;
  using Response = service_demo_cpp::srv::OwnTur_Response;
};

}  // namespace srv

}  // namespace service_demo_cpp

#endif  // SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_HPP_
