// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "service_demo_cpp/srv/detail/own_tur__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace service_demo_cpp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnTur_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnTur_Request_type_support_ids_t;

static const _OwnTur_Request_type_support_ids_t _OwnTur_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OwnTur_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnTur_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnTur_Request_type_support_symbol_names_t _OwnTur_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_demo_cpp, srv, OwnTur_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, service_demo_cpp, srv, OwnTur_Request)),
  }
};

typedef struct _OwnTur_Request_type_support_data_t
{
  void * data[2];
} _OwnTur_Request_type_support_data_t;

static _OwnTur_Request_type_support_data_t _OwnTur_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnTur_Request_message_typesupport_map = {
  2,
  "service_demo_cpp",
  &_OwnTur_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OwnTur_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OwnTur_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnTur_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnTur_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace service_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<service_demo_cpp::srv::OwnTur_Request>()
{
  return &::service_demo_cpp::srv::rosidl_typesupport_cpp::OwnTur_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, service_demo_cpp, srv, OwnTur_Request)() {
  return get_message_type_support_handle<service_demo_cpp::srv::OwnTur_Request>();
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
// #include "service_demo_cpp/srv/detail/own_tur__struct.hpp"
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

namespace service_demo_cpp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnTur_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnTur_Response_type_support_ids_t;

static const _OwnTur_Response_type_support_ids_t _OwnTur_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OwnTur_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnTur_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnTur_Response_type_support_symbol_names_t _OwnTur_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_demo_cpp, srv, OwnTur_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, service_demo_cpp, srv, OwnTur_Response)),
  }
};

typedef struct _OwnTur_Response_type_support_data_t
{
  void * data[2];
} _OwnTur_Response_type_support_data_t;

static _OwnTur_Response_type_support_data_t _OwnTur_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnTur_Response_message_typesupport_map = {
  2,
  "service_demo_cpp",
  &_OwnTur_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OwnTur_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OwnTur_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OwnTur_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnTur_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace service_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<service_demo_cpp::srv::OwnTur_Response>()
{
  return &::service_demo_cpp::srv::rosidl_typesupport_cpp::OwnTur_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, service_demo_cpp, srv, OwnTur_Response)() {
  return get_message_type_support_handle<service_demo_cpp::srv::OwnTur_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "service_demo_cpp/srv/detail/own_tur__struct.hpp"
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

namespace service_demo_cpp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _OwnTur_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OwnTur_type_support_ids_t;

static const _OwnTur_type_support_ids_t _OwnTur_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _OwnTur_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OwnTur_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OwnTur_type_support_symbol_names_t _OwnTur_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_demo_cpp, srv, OwnTur)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, service_demo_cpp, srv, OwnTur)),
  }
};

typedef struct _OwnTur_type_support_data_t
{
  void * data[2];
} _OwnTur_type_support_data_t;

static _OwnTur_type_support_data_t _OwnTur_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OwnTur_service_typesupport_map = {
  2,
  "service_demo_cpp",
  &_OwnTur_service_typesupport_ids.typesupport_identifier[0],
  &_OwnTur_service_typesupport_symbol_names.symbol_name[0],
  &_OwnTur_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OwnTur_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OwnTur_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace service_demo_cpp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<service_demo_cpp::srv::OwnTur>()
{
  return &::service_demo_cpp::srv::rosidl_typesupport_cpp::OwnTur_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, service_demo_cpp, srv, OwnTur)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<service_demo_cpp::srv::OwnTur>();
}

#ifdef __cplusplus
}
#endif
