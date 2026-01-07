// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/duration.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `t`
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_Goal__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_Goal__fini(message_memory);
}

size_t my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__t(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__t(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__t(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__t(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__t(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__t(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__z(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__z(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__z(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_member_array[5] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Goal, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Goal, t),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__t,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__t,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__t,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__t,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__t,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__t  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Goal, x),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__x,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__x,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__x,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__x,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__x,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Goal, y),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__y,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__y,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__y,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__y,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__y,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__y  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Goal, z),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_Goal__z,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_Goal__z,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_Goal__z,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_Goal__z,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_Goal__z,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_Goal__z  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_Goal",  // message name
  5,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_Goal),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Goal)() {
  my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_Goal__rosidl_typesupport_introspection_c__RunMotorProfile_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_Result__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_Result",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_Result),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Result)() {
  if (!my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_Result__rosidl_typesupport_introspection_c__RunMotorProfile_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `elapsed`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `elapsed`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_Feedback__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_member_array[2] = {
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Feedback, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elapsed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_Feedback, elapsed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_Feedback",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Feedback)() {
  my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_Feedback__rosidl_typesupport_introspection_c__RunMotorProfile_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "my_robot_interfaces/action/run_motor_profile.h"
// Member `goal`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)() {
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Goal)();
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)() {
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/run_motor_profile.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(message_memory);
}

size_t my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_SendGoal_Event__request(
  const void * untyped_member)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * item =
    ((const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__request(untyped_member, index));
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * value =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * item =
    ((my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__request(untyped_member, index));
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * value =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *)(untyped_member);
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__fini(member);
  return my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__init(member, size);
}

size_t my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_SendGoal_Event__response(
  const void * untyped_member)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * item =
    ((const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__response(untyped_member, index));
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * value =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * item =
    ((my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__response(untyped_member, index));
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * value =
    (const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *)(untyped_member);
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__fini(member);
  return my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_SendGoal_Event__request,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__request,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__request,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_SendGoal_Event__request,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_SendGoal_Event__request,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_SendGoal_Event__response,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_SendGoal_Event__response,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_SendGoal_Event__response,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_SendGoal_Event__response,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_SendGoal_Event__response,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)() {
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)();
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_members = {
  "my_robot_interfaces__action",  // service namespace
  "RunMotorProfile_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_type_support_handle = {
  0,
  &my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Request_message_type_support_handle,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Response_message_type_support_handle,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal)(void) {
  if (!my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)()->data;
  }

  return &my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)() {
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "my_robot_interfaces/action/run_motor_profile.h"
// Member `result`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)() {
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Result)();
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/run_motor_profile.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(message_memory);
}

size_t my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_GetResult_Event__request(
  const void * untyped_member)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request * item =
    ((const my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__request(untyped_member, index));
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * value =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * item =
    ((my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__request(untyped_member, index));
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request * value =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *)(untyped_member);
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__fini(member);
  return my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__init(member, size);
}

size_t my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_GetResult_Event__response(
  const void * untyped_member)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * member =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response * item =
    ((const my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__response(untyped_member, index));
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * value =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * item =
    ((my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__response(untyped_member, index));
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response * value =
    (const my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * member =
    (my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *)(untyped_member);
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__fini(member);
  return my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_GetResult_Event__request,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__request,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__request,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_GetResult_Event__request,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_GetResult_Event__request,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__size_function__RunMotorProfile_GetResult_Event__response,  // size() function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__RunMotorProfile_GetResult_Event__response,  // get_const(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__get_function__RunMotorProfile_GetResult_Event__response,  // get(index) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__RunMotorProfile_GetResult_Event__response,  // fetch(index, &value) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__RunMotorProfile_GetResult_Event__response,  // assign(index, value) function pointer
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__RunMotorProfile_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)() {
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)();
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_members = {
  "my_robot_interfaces__action",  // service namespace
  "RunMotorProfile_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_type_support_handle = {
  0,
  &my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_members,
  get_service_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Request_message_type_support_handle,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Response_message_type_support_handle,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult)(void) {
  if (!my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)()->data;
  }

  return &my_robot_interfaces__action__detail__run_motor_profile__rosidl_typesupport_introspection_c__RunMotorProfile_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "my_robot_interfaces/action/run_motor_profile.h"
// Member `feedback`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__init(message_memory);
}

void my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_fini_function(void * message_memory)
{
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_members = {
  "my_robot_interfaces__action",  // message namespace
  "RunMotorProfile_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage),
  false,  // has_any_key_member_
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_member_array,  // message members
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_type_support_handle = {
  0,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)() {
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, RunMotorProfile_Feedback)();
  if (!my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__rosidl_typesupport_introspection_c__RunMotorProfile_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
