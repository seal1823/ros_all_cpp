// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_H_
#define SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OwnTur in the package service_demo_cpp.
typedef struct service_demo_cpp__srv__OwnTur_Request
{
  /// 不能输入滚木
  int8_t l_num;
} service_demo_cpp__srv__OwnTur_Request;

// Struct for a sequence of service_demo_cpp__srv__OwnTur_Request.
typedef struct service_demo_cpp__srv__OwnTur_Request__Sequence
{
  service_demo_cpp__srv__OwnTur_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_demo_cpp__srv__OwnTur_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * 成功返回值
 */
enum
{
  service_demo_cpp__srv__OwnTur_Response__SUCCESS = 1
};

/// Constant 'FAIL'.
/**
  * 失败返回值
 */
enum
{
  service_demo_cpp__srv__OwnTur_Response__FAIL = 0
};

/// Struct defined in srv/OwnTur in the package service_demo_cpp.
typedef struct service_demo_cpp__srv__OwnTur_Response
{
  /// 处理结果
  int8_t result;
} service_demo_cpp__srv__OwnTur_Response;

// Struct for a sequence of service_demo_cpp__srv__OwnTur_Response.
typedef struct service_demo_cpp__srv__OwnTur_Response__Sequence
{
  service_demo_cpp__srv__OwnTur_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_demo_cpp__srv__OwnTur_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_DEMO_CPP__SRV__DETAIL__OWN_TUR__STRUCT_H_
