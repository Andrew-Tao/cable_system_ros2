// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
#include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_Goal(_init);
}

void RunMotorProfile_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_Goal *>(message_memory);
  typed_message->~RunMotorProfile_Goal();
}

size_t size_function__RunMotorProfile_Goal__t(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_Goal__t(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_Goal__t(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_Goal__t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RunMotorProfile_Goal__t(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_Goal__t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RunMotorProfile_Goal__t(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_Goal__t(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunMotorProfile_Goal__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_Goal__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_Goal__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_Goal__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RunMotorProfile_Goal__x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_Goal__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RunMotorProfile_Goal__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_Goal__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunMotorProfile_Goal__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_Goal__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_Goal__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_Goal__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RunMotorProfile_Goal__y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_Goal__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RunMotorProfile_Goal__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_Goal__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunMotorProfile_Goal__z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_Goal__z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_Goal__z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_Goal__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RunMotorProfile_Goal__z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_Goal__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RunMotorProfile_Goal__z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_Goal__z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_Goal_message_member_array[5] = {
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Goal, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Goal, t),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_Goal__t,  // size() function pointer
    get_const_function__RunMotorProfile_Goal__t,  // get_const(index) function pointer
    get_function__RunMotorProfile_Goal__t,  // get(index) function pointer
    fetch_function__RunMotorProfile_Goal__t,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_Goal__t,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_Goal__t  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Goal, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_Goal__x,  // size() function pointer
    get_const_function__RunMotorProfile_Goal__x,  // get_const(index) function pointer
    get_function__RunMotorProfile_Goal__x,  // get(index) function pointer
    fetch_function__RunMotorProfile_Goal__x,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_Goal__x,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_Goal__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Goal, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_Goal__y,  // size() function pointer
    get_const_function__RunMotorProfile_Goal__y,  // get_const(index) function pointer
    get_function__RunMotorProfile_Goal__y,  // get(index) function pointer
    fetch_function__RunMotorProfile_Goal__y,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_Goal__y,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_Goal__y  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Goal, z),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_Goal__z,  // size() function pointer
    get_const_function__RunMotorProfile_Goal__z,  // get_const(index) function pointer
    get_function__RunMotorProfile_Goal__z,  // get(index) function pointer
    fetch_function__RunMotorProfile_Goal__z,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_Goal__z,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_Goal__z  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_Goal_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_Goal",  // message name
  5,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_Goal),
  false,  // has_any_key_member_
  RunMotorProfile_Goal_message_member_array,  // message members
  RunMotorProfile_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_Goal_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Goal>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Goal)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_Result(_init);
}

void RunMotorProfile_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_Result *>(message_memory);
  typed_message->~RunMotorProfile_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_Result_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Result, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_Result_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_Result",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_Result),
  false,  // has_any_key_member_
  RunMotorProfile_Result_message_member_array,  // message members
  RunMotorProfile_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_Result_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Result>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Result)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_Feedback(_init);
}

void RunMotorProfile_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_Feedback *>(message_memory);
  typed_message->~RunMotorProfile_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_Feedback_message_member_array[2] = {
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Feedback, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elapsed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_Feedback, elapsed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_Feedback_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_Feedback",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_Feedback),
  false,  // has_any_key_member_
  RunMotorProfile_Feedback_message_member_array,  // message members
  RunMotorProfile_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_Feedback_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Feedback>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_Feedback)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_SendGoal_Request(_init);
}

void RunMotorProfile_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request *>(message_memory);
  typed_message->~RunMotorProfile_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_SendGoal_Request_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Request),
  false,  // has_any_key_member_
  RunMotorProfile_SendGoal_Request_message_member_array,  // message members
  RunMotorProfile_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_SendGoal_Response(_init);
}

void RunMotorProfile_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response *>(message_memory);
  typed_message->~RunMotorProfile_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_SendGoal_Response_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Response),
  false,  // has_any_key_member_
  RunMotorProfile_SendGoal_Response_message_member_array,  // message members
  RunMotorProfile_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_SendGoal_Event(_init);
}

void RunMotorProfile_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event *>(message_memory);
  typed_message->~RunMotorProfile_SendGoal_Event();
}

size_t size_function__RunMotorProfile_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_SendGoal_Request *>(
    get_const_function__RunMotorProfile_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request *>(
    get_function__RunMotorProfile_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunMotorProfile_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_SendGoal_Response *>(
    get_const_function__RunMotorProfile_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response *>(
    get_function__RunMotorProfile_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_SendGoal_Event__request,  // size() function pointer
    get_const_function__RunMotorProfile_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__RunMotorProfile_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__RunMotorProfile_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_SendGoal_Event__response,  // size() function pointer
    get_const_function__RunMotorProfile_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__RunMotorProfile_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__RunMotorProfile_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_SendGoal_Event_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_SendGoal_Event),
  false,  // has_any_key_member_
  RunMotorProfile_SendGoal_Event_message_member_array,  // message members
  RunMotorProfile_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal_Event)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RunMotorProfile_SendGoal_service_members = {
  "my_robot_interfaces::action",  // service namespace
  "RunMotorProfile_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t RunMotorProfile_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_robot_interfaces::action::RunMotorProfile_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_robot_interfaces::action::RunMotorProfile_SendGoal>,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_GetResult_Request(_init);
}

void RunMotorProfile_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Request *>(message_memory);
  typed_message->~RunMotorProfile_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_GetResult_Request_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_GetResult_Request),
  false,  // has_any_key_member_
  RunMotorProfile_GetResult_Request_message_member_array,  // message members
  RunMotorProfile_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_GetResult_Response(_init);
}

void RunMotorProfile_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Response *>(message_memory);
  typed_message->~RunMotorProfile_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_GetResult_Response_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_GetResult_Response),
  false,  // has_any_key_member_
  RunMotorProfile_GetResult_Response_message_member_array,  // message members
  RunMotorProfile_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_GetResult_Event(_init);
}

void RunMotorProfile_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Event *>(message_memory);
  typed_message->~RunMotorProfile_GetResult_Event();
}

size_t size_function__RunMotorProfile_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_GetResult_Request *>(
    get_const_function__RunMotorProfile_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Request *>(
    get_function__RunMotorProfile_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RunMotorProfile_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RunMotorProfile_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__RunMotorProfile_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__RunMotorProfile_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_GetResult_Response *>(
    get_const_function__RunMotorProfile_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__RunMotorProfile_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_robot_interfaces::action::RunMotorProfile_GetResult_Response *>(
    get_function__RunMotorProfile_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_robot_interfaces::action::RunMotorProfile_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__RunMotorProfile_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_robot_interfaces::action::RunMotorProfile_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_GetResult_Event__request,  // size() function pointer
    get_const_function__RunMotorProfile_GetResult_Event__request,  // get_const(index) function pointer
    get_function__RunMotorProfile_GetResult_Event__request,  // get(index) function pointer
    fetch_function__RunMotorProfile_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__RunMotorProfile_GetResult_Event__response,  // size() function pointer
    get_const_function__RunMotorProfile_GetResult_Event__response,  // get_const(index) function pointer
    get_function__RunMotorProfile_GetResult_Event__response,  // get(index) function pointer
    fetch_function__RunMotorProfile_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__RunMotorProfile_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__RunMotorProfile_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_GetResult_Event_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_GetResult_Event),
  false,  // has_any_key_member_
  RunMotorProfile_GetResult_Event_message_member_array,  // message members
  RunMotorProfile_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult_Event)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RunMotorProfile_GetResult_service_members = {
  "my_robot_interfaces::action",  // service namespace
  "RunMotorProfile_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t RunMotorProfile_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_robot_interfaces::action::RunMotorProfile_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_robot_interfaces::action::RunMotorProfile_GetResult>,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::action::RunMotorProfile_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_robot_interfaces::action::RunMotorProfile_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void RunMotorProfile_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::action::RunMotorProfile_FeedbackMessage(_init);
}

void RunMotorProfile_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage *>(message_memory);
  typed_message->~RunMotorProfile_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RunMotorProfile_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::action::RunMotorProfile_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RunMotorProfile_FeedbackMessage_message_members = {
  "my_robot_interfaces::action",  // message namespace
  "RunMotorProfile_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::action::RunMotorProfile_FeedbackMessage),
  false,  // has_any_key_member_
  RunMotorProfile_FeedbackMessage_message_member_array,  // message members
  RunMotorProfile_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RunMotorProfile_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RunMotorProfile_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RunMotorProfile_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_hash,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description,
  &my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>()
{
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, action, RunMotorProfile_FeedbackMessage)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_introspection_cpp::RunMotorProfile_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
