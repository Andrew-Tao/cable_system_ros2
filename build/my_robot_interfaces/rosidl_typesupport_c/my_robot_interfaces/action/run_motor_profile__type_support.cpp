// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Goal_type_support_ids_t;

static const _RunMotorProfile_Goal_type_support_ids_t _RunMotorProfile_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Goal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_Goal)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Result_type_support_ids_t;

static const _RunMotorProfile_Result_type_support_ids_t _RunMotorProfile_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Result)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_Result)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_Feedback_type_support_ids_t;

static const _RunMotorProfile_Feedback_type_support_ids_t _RunMotorProfile_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Feedback)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_Feedback)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Request_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Request_type_support_ids_t _RunMotorProfile_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Response_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Response_type_support_ids_t _RunMotorProfile_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_Event_type_support_ids_t;

static const _RunMotorProfile_SendGoal_Event_type_support_ids_t _RunMotorProfile_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _RunMotorProfile_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_SendGoal_type_support_ids_t;

static const _RunMotorProfile_SendGoal_type_support_ids_t _RunMotorProfile_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RunMotorProfile_SendGoal_Request_message_type_support_handle,
  &RunMotorProfile_SendGoal_Response_message_type_support_handle,
  &RunMotorProfile_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    action,
    RunMotorProfile_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    action,
    RunMotorProfile_SendGoal
  ),
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_SendGoal)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Request_type_support_ids_t;

static const _RunMotorProfile_GetResult_Request_type_support_ids_t _RunMotorProfile_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Response_type_support_ids_t;

static const _RunMotorProfile_GetResult_Response_type_support_ids_t _RunMotorProfile_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_Event_type_support_ids_t;

static const _RunMotorProfile_GetResult_Event_type_support_ids_t _RunMotorProfile_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _RunMotorProfile_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_GetResult_type_support_ids_t;

static const _RunMotorProfile_GetResult_type_support_ids_t _RunMotorProfile_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RunMotorProfile_GetResult_Request_message_type_support_handle,
  &RunMotorProfile_GetResult_Response_message_type_support_handle,
  &RunMotorProfile_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    action,
    RunMotorProfile_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_robot_interfaces,
    action,
    RunMotorProfile_GetResult
  ),
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_GetResult)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
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

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunMotorProfile_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunMotorProfile_FeedbackMessage_type_support_ids_t;

static const _RunMotorProfile_FeedbackMessage_type_support_ids_t _RunMotorProfile_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunMotorProfile_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::RunMotorProfile_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "my_robot_interfaces/action/run_motor_profile.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__type_support.h"

static rosidl_action_type_support_t _my_robot_interfaces__action__RunMotorProfile__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &my_robot_interfaces__action__RunMotorProfile__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile)()
{
  // Thread-safe by always writing the same values to the static struct
  _my_robot_interfaces__action__RunMotorProfile__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_SendGoal)();
  _my_robot_interfaces__action__RunMotorProfile__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_GetResult)();
  _my_robot_interfaces__action__RunMotorProfile__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _my_robot_interfaces__action__RunMotorProfile__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)();
  _my_robot_interfaces__action__RunMotorProfile__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_my_robot_interfaces__action__RunMotorProfile__typesupport_c;
}

#ifdef __cplusplus
}
#endif
