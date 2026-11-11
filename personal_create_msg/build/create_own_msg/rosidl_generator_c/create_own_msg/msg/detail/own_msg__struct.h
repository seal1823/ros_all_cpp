// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#ifndef CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_H_
#define CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'user_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OwnMsg in the package create_own_msg.
typedef struct create_own_msg__msg__OwnMsg
{
  /// 输入节点名
  rosidl_runtime_c__String node_name;
  /// 用户名称呼
  rosidl_runtime_c__String user_name;
  /// 请输入文本
  int8_t num_of_l;
} create_own_msg__msg__OwnMsg;

// Struct for a sequence of create_own_msg__msg__OwnMsg.
typedef struct create_own_msg__msg__OwnMsg__Sequence
{
  create_own_msg__msg__OwnMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create_own_msg__msg__OwnMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__STRUCT_H_
