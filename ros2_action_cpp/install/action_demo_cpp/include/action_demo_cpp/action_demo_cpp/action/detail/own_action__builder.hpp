// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_demo_cpp:action/OwnAction.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__BUILDER_HPP_
#define ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_demo_cpp/action/detail/own_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_Goal_l_num
{
public:
  Init_OwnAction_Goal_l_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_demo_cpp::action::OwnAction_Goal l_num(::action_demo_cpp::action::OwnAction_Goal::_l_num_type arg)
  {
    msg_.l_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_Goal>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_Goal_l_num();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_Result_result
{
public:
  Init_OwnAction_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_demo_cpp::action::OwnAction_Result result(::action_demo_cpp::action::OwnAction_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_Result>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_Result_result();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_Feedback_l_all_num
{
public:
  Init_OwnAction_Feedback_l_all_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_demo_cpp::action::OwnAction_Feedback l_all_num(::action_demo_cpp::action::OwnAction_Feedback::_l_all_num_type arg)
  {
    msg_.l_all_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_Feedback>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_Feedback_l_all_num();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_SendGoal_Request_goal
{
public:
  explicit Init_OwnAction_SendGoal_Request_goal(::action_demo_cpp::action::OwnAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_demo_cpp::action::OwnAction_SendGoal_Request goal(::action_demo_cpp::action::OwnAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_SendGoal_Request msg_;
};

class Init_OwnAction_SendGoal_Request_goal_id
{
public:
  Init_OwnAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OwnAction_SendGoal_Request_goal goal_id(::action_demo_cpp::action::OwnAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OwnAction_SendGoal_Request_goal(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_SendGoal_Request>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_SendGoal_Request_goal_id();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_SendGoal_Response_stamp
{
public:
  explicit Init_OwnAction_SendGoal_Response_stamp(::action_demo_cpp::action::OwnAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_demo_cpp::action::OwnAction_SendGoal_Response stamp(::action_demo_cpp::action::OwnAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_SendGoal_Response msg_;
};

class Init_OwnAction_SendGoal_Response_accepted
{
public:
  Init_OwnAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OwnAction_SendGoal_Response_stamp accepted(::action_demo_cpp::action::OwnAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_OwnAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_SendGoal_Response>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_SendGoal_Response_accepted();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_GetResult_Request_goal_id
{
public:
  Init_OwnAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_demo_cpp::action::OwnAction_GetResult_Request goal_id(::action_demo_cpp::action::OwnAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_GetResult_Request>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_GetResult_Request_goal_id();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_GetResult_Response_result
{
public:
  explicit Init_OwnAction_GetResult_Response_result(::action_demo_cpp::action::OwnAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_demo_cpp::action::OwnAction_GetResult_Response result(::action_demo_cpp::action::OwnAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_GetResult_Response msg_;
};

class Init_OwnAction_GetResult_Response_status
{
public:
  Init_OwnAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OwnAction_GetResult_Response_result status(::action_demo_cpp::action::OwnAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OwnAction_GetResult_Response_result(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_GetResult_Response>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_GetResult_Response_status();
}

}  // namespace action_demo_cpp


namespace action_demo_cpp
{

namespace action
{

namespace builder
{

class Init_OwnAction_FeedbackMessage_feedback
{
public:
  explicit Init_OwnAction_FeedbackMessage_feedback(::action_demo_cpp::action::OwnAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_demo_cpp::action::OwnAction_FeedbackMessage feedback(::action_demo_cpp::action::OwnAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_FeedbackMessage msg_;
};

class Init_OwnAction_FeedbackMessage_goal_id
{
public:
  Init_OwnAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OwnAction_FeedbackMessage_feedback goal_id(::action_demo_cpp::action::OwnAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OwnAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_demo_cpp::action::OwnAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_demo_cpp::action::OwnAction_FeedbackMessage>()
{
  return action_demo_cpp::action::builder::Init_OwnAction_FeedbackMessage_goal_id();
}

}  // namespace action_demo_cpp

#endif  // ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__BUILDER_HPP_
