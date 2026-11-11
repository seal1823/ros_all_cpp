// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "create_own_msg/msg/detail/own_msg__rosidl_typesupport_introspection_c.h"
#include "create_own_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "create_own_msg/msg/detail/own_msg__functions.h"
#include "create_own_msg/msg/detail/own_msg__struct.h"


// Include directives for member types
// Member `node_name`
// Member `user_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  create_own_msg__msg__OwnMsg__init(message_memory);
}

void create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_fini_function(void * message_memory)
{
  create_own_msg__msg__OwnMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_member_array[3] = {
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_own_msg__msg__OwnMsg, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_own_msg__msg__OwnMsg, user_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_own_msg__msg__OwnMsg, num_of_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_members = {
  "create_own_msg__msg",  // message namespace
  "OwnMsg",  // message name
  3,  // number of fields
  sizeof(create_own_msg__msg__OwnMsg),
  create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_member_array,  // message members
  create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_type_support_handle = {
  0,
  &create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_create_own_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_own_msg, msg, OwnMsg)() {
  if (!create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_type_support_handle.typesupport_identifier) {
    create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &create_own_msg__msg__OwnMsg__rosidl_typesupport_introspection_c__OwnMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
