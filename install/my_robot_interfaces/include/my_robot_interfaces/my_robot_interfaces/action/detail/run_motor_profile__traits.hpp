// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/action/run_motor_profile.hpp"


#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: t
  {
    if (msg.t.size() == 0) {
      out << "t: []";
    } else {
      out << "t: [";
      size_t pending_items = msg.t.size();
      for (auto item : msg.t) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.t.size() == 0) {
      out << "t: []\n";
    } else {
      out << "t:\n";
      for (auto item : msg.t) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_Goal & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_Goal>()
{
  return "my_robot_interfaces::action::RunMotorProfile_Goal";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_Goal>()
{
  return "my_robot_interfaces/action/RunMotorProfile_Goal";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_Result & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_Result>()
{
  return "my_robot_interfaces::action::RunMotorProfile_Result";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_Result>()
{
  return "my_robot_interfaces/action/RunMotorProfile_Result";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'elapsed'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: elapsed
  {
    out << "elapsed: ";
    to_flow_style_yaml(msg.elapsed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed:\n";
    to_block_style_yaml(msg.elapsed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_Feedback & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_Feedback>()
{
  return "my_robot_interfaces::action::RunMotorProfile_Feedback";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_Feedback>()
{
  return "my_robot_interfaces/action/RunMotorProfile_Feedback";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_robot_interfaces/action/detail/run_motor_profile__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_SendGoal_Request & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>()
{
  return "my_robot_interfaces::action::RunMotorProfile_SendGoal_Request";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>()
{
  return "my_robot_interfaces/action/RunMotorProfile_SendGoal_Request";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_SendGoal_Response & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>()
{
  return "my_robot_interfaces::action::RunMotorProfile_SendGoal_Response";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>()
{
  return "my_robot_interfaces/action/RunMotorProfile_SendGoal_Response";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_SendGoal_Event & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>()
{
  return "my_robot_interfaces::action::RunMotorProfile_SendGoal_Event";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>()
{
  return "my_robot_interfaces/action/RunMotorProfile_SendGoal_Event";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>::value && has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_SendGoal>()
{
  return "my_robot_interfaces::action::RunMotorProfile_SendGoal";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_SendGoal>()
{
  return "my_robot_interfaces/action/RunMotorProfile_SendGoal";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>::value &&
    has_fixed_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>::value &&
    has_bounded_size<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_robot_interfaces::action::RunMotorProfile_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_GetResult_Request & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>()
{
  return "my_robot_interfaces::action::RunMotorProfile_GetResult_Request";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>()
{
  return "my_robot_interfaces/action/RunMotorProfile_GetResult_Request";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_GetResult_Response & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>()
{
  return "my_robot_interfaces::action::RunMotorProfile_GetResult_Response";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>()
{
  return "my_robot_interfaces/action/RunMotorProfile_GetResult_Response";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Result>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Result>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_GetResult_Event & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>()
{
  return "my_robot_interfaces::action::RunMotorProfile_GetResult_Event";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>()
{
  return "my_robot_interfaces/action/RunMotorProfile_GetResult_Event";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>::value && has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_GetResult>()
{
  return "my_robot_interfaces::action::RunMotorProfile_GetResult";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_GetResult>()
{
  return "my_robot_interfaces/action/RunMotorProfile_GetResult";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>::value &&
    has_fixed_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>::value &&
    has_bounded_size<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_robot_interfaces::action::RunMotorProfile_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_robot_interfaces::action::RunMotorProfile_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_robot_interfaces::action::RunMotorProfile_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__traits.hpp"

namespace my_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunMotorProfile_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunMotorProfile_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunMotorProfile_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::action::RunMotorProfile_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::action::RunMotorProfile_FeedbackMessage & msg)
{
  return my_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>()
{
  return "my_robot_interfaces::action::RunMotorProfile_FeedbackMessage";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>()
{
  return "my_robot_interfaces/action/RunMotorProfile_FeedbackMessage";
}

template<>
struct has_fixed_size<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_robot_interfaces::action::RunMotorProfile_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::action::RunMotorProfile_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_interfaces::action::RunMotorProfile>()
{
  return "my_robot_interfaces::action::RunMotorProfile";
}

template<>
inline const char * name<my_robot_interfaces::action::RunMotorProfile>()
{
  return "my_robot_interfaces/action/RunMotorProfile";
}

template<>
struct is_action<my_robot_interfaces::action::RunMotorProfile>
  : std::true_type
{
};

template<>
struct is_action_goal<my_robot_interfaces::action::RunMotorProfile_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_robot_interfaces::action::RunMotorProfile_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_robot_interfaces::action::RunMotorProfile_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__TRAITS_HPP_
