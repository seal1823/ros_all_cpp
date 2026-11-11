// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice
#include "service_demo_cpp/srv/detail/own_tur__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "service_demo_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "service_demo_cpp/srv/detail/own_tur__struct.h"
#include "service_demo_cpp/srv/detail/own_tur__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OwnTur_Request__ros_msg_type = service_demo_cpp__srv__OwnTur_Request;

static bool _OwnTur_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OwnTur_Request__ros_msg_type * ros_message = static_cast<const _OwnTur_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: l_num
  {
    cdr << ros_message->l_num;
  }

  return true;
}

static bool _OwnTur_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OwnTur_Request__ros_msg_type * ros_message = static_cast<_OwnTur_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: l_num
  {
    cdr >> ros_message->l_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_service_demo_cpp
size_t get_serialized_size_service_demo_cpp__srv__OwnTur_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OwnTur_Request__ros_msg_type * ros_message = static_cast<const _OwnTur_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name l_num
  {
    size_t item_size = sizeof(ros_message->l_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OwnTur_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_service_demo_cpp__srv__OwnTur_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_service_demo_cpp
size_t max_serialized_size_service_demo_cpp__srv__OwnTur_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: l_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = service_demo_cpp__srv__OwnTur_Request;
    is_plain =
      (
      offsetof(DataType, l_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OwnTur_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_service_demo_cpp__srv__OwnTur_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OwnTur_Request = {
  "service_demo_cpp::srv",
  "OwnTur_Request",
  _OwnTur_Request__cdr_serialize,
  _OwnTur_Request__cdr_deserialize,
  _OwnTur_Request__get_serialized_size,
  _OwnTur_Request__max_serialized_size
};

static rosidl_message_type_support_t _OwnTur_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OwnTur_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_demo_cpp, srv, OwnTur_Request)() {
  return &_OwnTur_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "service_demo_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "service_demo_cpp/srv/detail/own_tur__struct.h"
// already included above
// #include "service_demo_cpp/srv/detail/own_tur__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OwnTur_Response__ros_msg_type = service_demo_cpp__srv__OwnTur_Response;

static bool _OwnTur_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OwnTur_Response__ros_msg_type * ros_message = static_cast<const _OwnTur_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _OwnTur_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OwnTur_Response__ros_msg_type * ros_message = static_cast<_OwnTur_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_service_demo_cpp
size_t get_serialized_size_service_demo_cpp__srv__OwnTur_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OwnTur_Response__ros_msg_type * ros_message = static_cast<const _OwnTur_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OwnTur_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_service_demo_cpp__srv__OwnTur_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_service_demo_cpp
size_t max_serialized_size_service_demo_cpp__srv__OwnTur_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = service_demo_cpp__srv__OwnTur_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OwnTur_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_service_demo_cpp__srv__OwnTur_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OwnTur_Response = {
  "service_demo_cpp::srv",
  "OwnTur_Response",
  _OwnTur_Response__cdr_serialize,
  _OwnTur_Response__cdr_deserialize,
  _OwnTur_Response__get_serialized_size,
  _OwnTur_Response__max_serialized_size
};

static rosidl_message_type_support_t _OwnTur_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OwnTur_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_demo_cpp, srv, OwnTur_Response)() {
  return &_OwnTur_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "service_demo_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "service_demo_cpp/srv/own_tur.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OwnTur__callbacks = {
  "service_demo_cpp::srv",
  "OwnTur",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_demo_cpp, srv, OwnTur_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_demo_cpp, srv, OwnTur_Response)(),
};

static rosidl_service_type_support_t OwnTur__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OwnTur__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_demo_cpp, srv, OwnTur)() {
  return &OwnTur__handle;
}

#if defined(__cplusplus)
}
#endif
