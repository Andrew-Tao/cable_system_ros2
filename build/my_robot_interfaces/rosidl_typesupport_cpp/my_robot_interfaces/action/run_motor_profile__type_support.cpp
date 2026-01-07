// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Goal_type_support_ids_t;

static const _RunMotorProfile_Goal_type_support_ids_t _RunMotorProfile_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_Goal_type_support_symbol_names_t _RunMotorProfile_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Goal)),
  }
};

typedef struct _RunMotorProfile_Goal_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_Goal_type_support_data_t;

static _RunMotorProfile_Goal_type_support_data_t _RunMotorProfile_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_Goal_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Goal>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_Goal)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Goal>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Result_type_support_ids_t;

static const _RunMotorProfile_Result_type_support_ids_t _RunMotorProfile_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_Result_type_support_symbol_names_t _RunMotorProfile_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Result)),
  }
};

typedef struct _RunMotorProfile_Result_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_Result_type_support_data_t;

static _RunMotorProfile_Result_type_support_data_t _RunMotorProfile_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_Result_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Result>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_Result)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Result>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Feedback_type_support_ids_t;

static const _RunMotorProfile_Feedback_type_support_ids_t _RunMotorProfile_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_Feedback_type_support_symbol_names_t _RunMotorProfile_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Feedback)),
  }
};

typedef struct _RunMotorProfile_Feedback_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_Feedback_type_support_data_t;

static _RunMotorProfile_Feedback_type_support_data_t _RunMotorProfile_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_Feedback_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Feedback>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_Feedback)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Feedback>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Request_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Request_type_support_ids_t _RunMotorProfile_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_SendGoal_Request_type_support_symbol_names_t _RunMotorProfile_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)),
  }
};

typedef struct _RunMotorProfile_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_SendGoal_Request_type_support_data_t;

static _RunMotorProfile_SendGoal_Request_type_support_data_t _RunMotorProfile_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_SendGoal_Request_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Response_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Response_type_support_ids_t _RunMotorProfile_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_SendGoal_Response_type_support_symbol_names_t _RunMotorProfile_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)),
  }
};

typedef struct _RunMotorProfile_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_SendGoal_Response_type_support_data_t;

static _RunMotorProfile_SendGoal_Response_type_support_data_t _RunMotorProfile_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_SendGoal_Response_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Event_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Event_type_support_ids_t _RunMotorProfile_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_SendGoal_Event_type_support_symbol_names_t _RunMotorProfile_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)),
  }
};

typedef struct _RunMotorProfile_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_SendGoal_Event_type_support_data_t;

static _RunMotorProfile_SendGoal_Event_type_support_data_t _RunMotorProfile_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_SendGoal_Event_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_type_support_ids_t;

static const _RunMotorProfile_SendGoal_type_support_ids_t _RunMotorProfile_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_SendGoal_type_support_symbol_names_t _RunMotorProfile_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal)),
  }
};

typedef struct _RunMotorProfile_SendGoal_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_SendGoal_type_support_data_t;

static _RunMotorProfile_SendGoal_type_support_data_t _RunMotorProfile_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_SendGoal_service_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunMotorProfile_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_robot_interfaces::action::RunMotorProfile_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_robot_interfaces::action::RunMotorProfile_SendGoal>,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Request_type_support_ids_t;

static const _RunMotorProfile_GetResult_Request_type_support_ids_t _RunMotorProfile_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_GetResult_Request_type_support_symbol_names_t _RunMotorProfile_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)),
  }
};

typedef struct _RunMotorProfile_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_GetResult_Request_type_support_data_t;

static _RunMotorProfile_GetResult_Request_type_support_data_t _RunMotorProfile_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_GetResult_Request_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Response_type_support_ids_t;

static const _RunMotorProfile_GetResult_Response_type_support_ids_t _RunMotorProfile_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_GetResult_Response_type_support_symbol_names_t _RunMotorProfile_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)),
  }
};

typedef struct _RunMotorProfile_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_GetResult_Response_type_support_data_t;

static _RunMotorProfile_GetResult_Response_type_support_data_t _RunMotorProfile_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_GetResult_Response_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>();
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Event_type_support_ids_t;

static const _RunMotorProfile_GetResult_Event_type_support_ids_t _RunMotorProfile_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_GetResult_Event_type_support_symbol_names_t _RunMotorProfile_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)),
  }
};

typedef struct _RunMotorProfile_GetResult_Event_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_GetResult_Event_type_support_data_t;

static _RunMotorProfile_GetResult_Event_type_support_data_t _RunMotorProfile_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_GetResult_Event_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>();
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
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_type_support_ids_t;

static const _RunMotorProfile_GetResult_type_support_ids_t _RunMotorProfile_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_GetResult_type_support_symbol_names_t _RunMotorProfile_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult)),
  }
};

typedef struct _RunMotorProfile_GetResult_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_GetResult_type_support_data_t;

static _RunMotorProfile_GetResult_type_support_data_t _RunMotorProfile_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_GetResult_service_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunMotorProfile_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_robot_interfaces::action::RunMotorProfile_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_robot_interfaces::action::RunMotorProfile_GetResult>,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunMotorProfile_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_FeedbackMessage_type_support_ids_t;

static const _RunMotorProfile_FeedbackMessage_type_support_ids_t _RunMotorProfile_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunMotorProfile_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunMotorProfile_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunMotorProfile_FeedbackMessage_type_support_symbol_names_t _RunMotorProfile_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)),
  }
};

typedef struct _RunMotorProfile_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RunMotorProfile_FeedbackMessage_type_support_data_t;

static _RunMotorProfile_FeedbackMessage_type_support_data_t _RunMotorProfile_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunMotorProfile_FeedbackMessage_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_RunMotorProfile_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RunMotorProfile_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RunMotorProfile_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunMotorProfile_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)() {
  return get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RunMotorProfile_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &my_robot_interfaces__action__RunMotorProfile__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_robot_interfaces::action::RunMotorProfile>()
{
  using ::my_robot_interfaces::action::rosidl_typesupport_cpp::RunMotorProfile_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RunMotorProfile_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_robot_interfaces::action::RunMotorProfile::Impl::SendGoalService>();
  RunMotorProfile_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_robot_interfaces::action::RunMotorProfile::Impl::GetResultService>();
  RunMotorProfile_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_robot_interfaces::action::RunMotorProfile::Impl::CancelGoalService>();
  RunMotorProfile_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_robot_interfaces::action::RunMotorProfile::Impl::FeedbackMessage>();
  RunMotorProfile_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_robot_interfaces::action::RunMotorProfile::Impl::GoalStatusMessage>();
  return &RunMotorProfile_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, my_robot_interfaces, action, RunMotorProfile)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<my_robot_interfaces::action::RunMotorProfile>();
}

#ifdef __cplusplus
}
#endif
