// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_demo_cpp:action/OwnAction.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_H_
#define ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_Goal
{
  /// request
  uint32_t l_num;
} action_demo_cpp__action__OwnAction_Goal;

// Struct for a sequence of action_demo_cpp__action__OwnAction_Goal.
typedef struct action_demo_cpp__action__OwnAction_Goal__Sequence
{
  action_demo_cpp__action__OwnAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * 成功值
 */
enum
{
  action_demo_cpp__action__OwnAction_Result__SUCCESS = 1ul
};

/// Constant 'FALSE'.
/**
  * 失败值
 */
enum
{
  action_demo_cpp__action__OwnAction_Result__FALSE = 0ul
};

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_Result
{
  /// 处理结果
  uint32_t result;
} action_demo_cpp__action__OwnAction_Result;

// Struct for a sequence of action_demo_cpp__action__OwnAction_Result.
typedef struct action_demo_cpp__action__OwnAction_Result__Sequence
{
  action_demo_cpp__action__OwnAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_Feedback
{
  /// feedback
  uint32_t l_all_num;
} action_demo_cpp__action__OwnAction_Feedback;

// Struct for a sequence of action_demo_cpp__action__OwnAction_Feedback.
typedef struct action_demo_cpp__action__OwnAction_Feedback__Sequence
{
  action_demo_cpp__action__OwnAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_demo_cpp/action/detail/own_action__struct.h"

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_demo_cpp__action__OwnAction_Goal goal;
} action_demo_cpp__action__OwnAction_SendGoal_Request;

// Struct for a sequence of action_demo_cpp__action__OwnAction_SendGoal_Request.
typedef struct action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence
{
  action_demo_cpp__action__OwnAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_demo_cpp__action__OwnAction_SendGoal_Response;

// Struct for a sequence of action_demo_cpp__action__OwnAction_SendGoal_Response.
typedef struct action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence
{
  action_demo_cpp__action__OwnAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_demo_cpp__action__OwnAction_GetResult_Request;

// Struct for a sequence of action_demo_cpp__action__OwnAction_GetResult_Request.
typedef struct action_demo_cpp__action__OwnAction_GetResult_Request__Sequence
{
  action_demo_cpp__action__OwnAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_GetResult_Response
{
  int8_t status;
  action_demo_cpp__action__OwnAction_Result result;
} action_demo_cpp__action__OwnAction_GetResult_Response;

// Struct for a sequence of action_demo_cpp__action__OwnAction_GetResult_Response.
typedef struct action_demo_cpp__action__OwnAction_GetResult_Response__Sequence
{
  action_demo_cpp__action__OwnAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"

/// Struct defined in action/OwnAction in the package action_demo_cpp.
typedef struct action_demo_cpp__action__OwnAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_demo_cpp__action__OwnAction_Feedback feedback;
} action_demo_cpp__action__OwnAction_FeedbackMessage;

// Struct for a sequence of action_demo_cpp__action__OwnAction_FeedbackMessage.
typedef struct action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence
{
  action_demo_cpp__action__OwnAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_DEMO_CPP__ACTION__DETAIL__OWN_ACTION__STRUCT_H_
