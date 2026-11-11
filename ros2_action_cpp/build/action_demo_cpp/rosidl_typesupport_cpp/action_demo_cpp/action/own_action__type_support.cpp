// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from action_demo_cpp:action/OwnAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "action_demo_cpp/action/detail/own_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Goal_type_support_ids_t;

static const _OwnAction_Goal_type_support_ids_t _OwnAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_Goal>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_Goal)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Result_type_support_ids_t;

static const _OwnAction_Result_type_support_ids_t _OwnAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_Result>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_Result)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_Feedback_type_support_ids_t;

static const _OwnAction_Feedback_type_support_ids_t _OwnAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_Feedback>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_Feedback)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_Request_type_support_ids_t;

static const _OwnAction_SendGoal_Request_type_support_ids_t _OwnAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal_Request>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_SendGoal_Request)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_Response_type_support_ids_t;

static const _OwnAction_SendGoal_Response_type_support_ids_t _OwnAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal_Response>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_SendGoal_Response)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_SendGoal_type_support_ids_t;

static const _OwnAction_SendGoal_type_support_ids_t _OwnAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<action_demo_cpp::action::OwnAction_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_Request_type_support_ids_t;

static const _OwnAction_GetResult_Request_type_support_ids_t _OwnAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_GetResult_Request>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_GetResult_Request)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_Response_type_support_ids_t;

static const _OwnAction_GetResult_Response_type_support_ids_t _OwnAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_GetResult_Response>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_GetResult_Response)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_GetResult_type_support_ids_t;

static const _OwnAction_GetResult_type_support_ids_t _OwnAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<action_demo_cpp::action::OwnAction_GetResult>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<action_demo_cpp::action::OwnAction_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnAction_FeedbackMessage_type_support_ids_t;

static const _OwnAction_FeedbackMessage_type_support_ids_t _OwnAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_demo_cpp, action, OwnAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_demo_cpp, action, OwnAction_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_demo_cpp::action::OwnAction_FeedbackMessage>()
{
  return &::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction_FeedbackMessage)() {
  return get_message_type_support_handle<action_demo_cpp::action::OwnAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "action_demo_cpp/action/detail/own_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace action_demo_cpp
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t OwnAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace action_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<action_demo_cpp::action::OwnAction>()
{
  using ::action_demo_cpp::action::rosidl_typesupport_cpp::OwnAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  OwnAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::action_demo_cpp::action::OwnAction::Impl::SendGoalService>();
  OwnAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::action_demo_cpp::action::OwnAction::Impl::GetResultService>();
  OwnAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::action_demo_cpp::action::OwnAction::Impl::CancelGoalService>();
  OwnAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::action_demo_cpp::action::OwnAction::Impl::FeedbackMessage>();
  OwnAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::action_demo_cpp::action::OwnAction::Impl::GoalStatusMessage>();
  return &OwnAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, action_demo_cpp, action, OwnAction)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<action_demo_cpp::action::OwnAction>();
}

#ifdef __cplusplus
}
#endif
