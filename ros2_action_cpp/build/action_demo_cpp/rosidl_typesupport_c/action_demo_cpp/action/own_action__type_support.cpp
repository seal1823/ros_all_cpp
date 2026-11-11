// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from action_demo_cpp:action/OwnAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "action_demo_cpp/action/detail/own_action__struct.h"
#include "action_demo_cpp/action/detail/own_action__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Goal_type_support_ids_t;

static const _OwnAction_Goal_type_support_ids_t _OwnAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_Goal_type_support_symbol_names_t _OwnAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_Goal)),
  }
};

typedef struct _OwnAction_Goal_type_support_data_t
{
  void * data[2];
} _OwnAction_Goal_type_support_data_t;

static _OwnAction_Goal_type_support_data_t _OwnAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_Goal_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_Goal)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Result_type_support_ids_t;

static const _OwnAction_Result_type_support_ids_t _OwnAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_Result_type_support_symbol_names_t _OwnAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_Result)),
  }
};

typedef struct _OwnAction_Result_type_support_data_t
{
  void * data[2];
} _OwnAction_Result_type_support_data_t;

static _OwnAction_Result_type_support_data_t _OwnAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_Result_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_Result)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Feedback_type_support_ids_t;

static const _OwnAction_Feedback_type_support_ids_t _OwnAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_Feedback_type_support_symbol_names_t _OwnAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_Feedback)),
  }
};

typedef struct _OwnAction_Feedback_type_support_data_t
{
  void * data[2];
} _OwnAction_Feedback_type_support_data_t;

static _OwnAction_Feedback_type_support_data_t _OwnAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_Feedback_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_Feedback)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_Request_type_support_ids_t;

static const _OwnAction_SendGoal_Request_type_support_ids_t _OwnAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_SendGoal_Request_type_support_symbol_names_t _OwnAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_SendGoal_Request)),
  }
};

typedef struct _OwnAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _OwnAction_SendGoal_Request_type_support_data_t;

static _OwnAction_SendGoal_Request_type_support_data_t _OwnAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_SendGoal_Request_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_SendGoal_Request)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_Response_type_support_ids_t;

static const _OwnAction_SendGoal_Response_type_support_ids_t _OwnAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_SendGoal_Response_type_support_symbol_names_t _OwnAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_SendGoal_Response)),
  }
};

typedef struct _OwnAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _OwnAction_SendGoal_Response_type_support_data_t;

static _OwnAction_SendGoal_Response_type_support_data_t _OwnAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_SendGoal_Response_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_SendGoal_Response)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_type_support_ids_t;

static const _OwnAction_SendGoal_type_support_ids_t _OwnAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_SendGoal_type_support_symbol_names_t _OwnAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_SendGoal)),
  }
};

typedef struct _OwnAction_SendGoal_type_support_data_t
{
  void * data[2];
} _OwnAction_SendGoal_type_support_data_t;

static _OwnAction_SendGoal_type_support_data_t _OwnAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_SendGoal_service_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OwnAction_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_SendGoal)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_Request_type_support_ids_t;

static const _OwnAction_GetResult_Request_type_support_ids_t _OwnAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_GetResult_Request_type_support_symbol_names_t _OwnAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_GetResult_Request)),
  }
};

typedef struct _OwnAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _OwnAction_GetResult_Request_type_support_data_t;

static _OwnAction_GetResult_Request_type_support_data_t _OwnAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_GetResult_Request_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_GetResult_Request)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_Response_type_support_ids_t;

static const _OwnAction_GetResult_Response_type_support_ids_t _OwnAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_GetResult_Response_type_support_symbol_names_t _OwnAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_GetResult_Response)),
  }
};

typedef struct _OwnAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _OwnAction_GetResult_Response_type_support_data_t;

static _OwnAction_GetResult_Response_type_support_data_t _OwnAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_GetResult_Response_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_GetResult_Response)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_type_support_ids_t;

static const _OwnAction_GetResult_type_support_ids_t _OwnAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_GetResult_type_support_symbol_names_t _OwnAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_GetResult)),
  }
};

typedef struct _OwnAction_GetResult_type_support_data_t
{
  void * data[2];
} _OwnAction_GetResult_type_support_data_t;

static _OwnAction_GetResult_type_support_data_t _OwnAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_GetResult_service_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OwnAction_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_GetResult)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _OwnAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_FeedbackMessage_type_support_ids_t;

static const _OwnAction_FeedbackMessage_type_support_ids_t _OwnAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OwnAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnAction_FeedbackMessage_type_support_symbol_names_t _OwnAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_demo_cpp, action, OwnAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_demo_cpp, action, OwnAction_FeedbackMessage)),
  }
};

typedef struct _OwnAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _OwnAction_FeedbackMessage_type_support_data_t;

static _OwnAction_FeedbackMessage_type_support_data_t _OwnAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnAction_FeedbackMessage_message_typesupport_map = {
  2,
  "action_demo_cpp",
  &_OwnAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_OwnAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_OwnAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnAction_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_demo_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_demo_cpp, action, OwnAction_FeedbackMessage)() {
  return &::action_demo_cpp::action::rosidl_typesupport_c::OwnAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "action_demo_cpp/action/own_action.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__type_support.h"

static rosidl_action_type_support_t _action_demo_cpp__action__OwnAction__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, action_demo_cpp, action, OwnAction)()
{
  // Thread-safe by always writing the same values to the static struct
  _action_demo_cpp__action__OwnAction__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_demo_cpp, action, OwnAction_SendGoal)();
  _action_demo_cpp__action__OwnAction__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_demo_cpp, action, OwnAction_GetResult)();
  _action_demo_cpp__action__OwnAction__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _action_demo_cpp__action__OwnAction__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_demo_cpp, action, OwnAction_FeedbackMessage)();
  _action_demo_cpp__action__OwnAction__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_action_demo_cpp__action__OwnAction__typesupport_c;
}

#ifdef __cplusplus
}
#endif
