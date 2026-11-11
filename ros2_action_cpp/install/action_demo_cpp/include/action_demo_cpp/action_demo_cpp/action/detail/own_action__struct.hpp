// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_demo_cpp:action/OwnAction.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_HPP_
#define ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_Goal __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_Goal_
{
  using Type = OwnAction_Goal_<ContainerAllocator>;

  explicit OwnAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_num = 0ul;
    }
  }

  explicit OwnAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_num = 0ul;
    }
  }

  // field types and members
  using _l_num_type =
    uint32_t;
  _l_num_type l_num;

  // setters for named parameter idiom
  Type & set__l_num(
    const uint32_t & _arg)
  {
    this->l_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Goal
    std::shared_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Goal
    std::shared_ptr<action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_Goal_ & other) const
  {
    if (this->l_num != other.l_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_Goal_

// alias to use template instance with default allocator
using OwnAction_Goal =
  action_demo_cpp::action::OwnAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp


#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_Result __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_Result_
{
  using Type = OwnAction_Result_<ContainerAllocator>;

  explicit OwnAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ul;
    }
  }

  explicit OwnAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ul;
    }
  }

  // field types and members
  using _result_type =
    uint32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t SUCCESS =
    1u;
  static constexpr uint32_t FALSE =
    0u;

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Result
    std::shared_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Result
    std::shared_ptr<action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_Result_

// alias to use template instance with default allocator
using OwnAction_Result =
  action_demo_cpp::action::OwnAction_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t OwnAction_Result_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t OwnAction_Result_<ContainerAllocator>::FALSE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace action_demo_cpp


#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_Feedback __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_Feedback_
{
  using Type = OwnAction_Feedback_<ContainerAllocator>;

  explicit OwnAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_all_num = 0ul;
    }
  }

  explicit OwnAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_all_num = 0ul;
    }
  }

  // field types and members
  using _l_all_num_type =
    uint32_t;
  _l_all_num_type l_all_num;

  // setters for named parameter idiom
  Type & set__l_all_num(
    const uint32_t & _arg)
  {
    this->l_all_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Feedback
    std::shared_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_Feedback
    std::shared_ptr<action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_Feedback_ & other) const
  {
    if (this->l_all_num != other.l_all_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_Feedback_

// alias to use template instance with default allocator
using OwnAction_Feedback =
  action_demo_cpp::action::OwnAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "action_demo_cpp/action/detail/own_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Request __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_SendGoal_Request_
{
  using Type = OwnAction_SendGoal_Request_<ContainerAllocator>;

  explicit OwnAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit OwnAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_demo_cpp::action::OwnAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Request
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Request
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_SendGoal_Request_

// alias to use template instance with default allocator
using OwnAction_SendGoal_Request =
  action_demo_cpp::action::OwnAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Response __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_SendGoal_Response_
{
  using Type = OwnAction_SendGoal_Response_<ContainerAllocator>;

  explicit OwnAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit OwnAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Response
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_SendGoal_Response
    std::shared_ptr<action_demo_cpp::action::OwnAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_SendGoal_Response_

// alias to use template instance with default allocator
using OwnAction_SendGoal_Response =
  action_demo_cpp::action::OwnAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp

namespace action_demo_cpp
{

namespace action
{

struct OwnAction_SendGoal
{
  using Request = action_demo_cpp::action::OwnAction_SendGoal_Request;
  using Response = action_demo_cpp::action::OwnAction_SendGoal_Response;
};

}  // namespace action

}  // namespace action_demo_cpp


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Request __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_GetResult_Request_
{
  using Type = OwnAction_GetResult_Request_<ContainerAllocator>;

  explicit OwnAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit OwnAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Request
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Request
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_GetResult_Request_

// alias to use template instance with default allocator
using OwnAction_GetResult_Request =
  action_demo_cpp::action::OwnAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp


// Include directives for member types
// Member 'result'
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Response __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_GetResult_Response_
{
  using Type = OwnAction_GetResult_Response_<ContainerAllocator>;

  explicit OwnAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit OwnAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_demo_cpp::action::OwnAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_demo_cpp::action::OwnAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Response
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_GetResult_Response
    std::shared_ptr<action_demo_cpp::action::OwnAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_GetResult_Response_

// alias to use template instance with default allocator
using OwnAction_GetResult_Response =
  action_demo_cpp::action::OwnAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp

namespace action_demo_cpp
{

namespace action
{

struct OwnAction_GetResult
{
  using Request = action_demo_cpp::action::OwnAction_GetResult_Request;
  using Response = action_demo_cpp::action::OwnAction_GetResult_Response;
};

}  // namespace action

}  // namespace action_demo_cpp


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_demo_cpp__action__OwnAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_demo_cpp__action__OwnAction_FeedbackMessage __declspec(deprecated)
#endif

namespace action_demo_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct OwnAction_FeedbackMessage_
{
  using Type = OwnAction_FeedbackMessage_<ContainerAllocator>;

  explicit OwnAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit OwnAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_demo_cpp::action::OwnAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_FeedbackMessage
    std::shared_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_demo_cpp__action__OwnAction_FeedbackMessage
    std::shared_ptr<action_demo_cpp::action::OwnAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OwnAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const OwnAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OwnAction_FeedbackMessage_

// alias to use template instance with default allocator
using OwnAction_FeedbackMessage =
  action_demo_cpp::action::OwnAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_demo_cpp

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_demo_cpp
{

namespace action
{

struct OwnAction
{
  /// The goal message defined in the action definition.
  using Goal = action_demo_cpp::action::OwnAction_Goal;
  /// The result message defined in the action definition.
  using Result = action_demo_cpp::action::OwnAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_demo_cpp::action::OwnAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_demo_cpp::action::OwnAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_demo_cpp::action::OwnAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_demo_cpp::action::OwnAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct OwnAction OwnAction;

}  // namespace action

}  // namespace action_demo_cpp

#endif  // ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_HPP_
