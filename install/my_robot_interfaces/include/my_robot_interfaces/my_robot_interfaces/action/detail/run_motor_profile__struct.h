// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/action/run_motor_profile.h"


#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__STRUCT_H_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 't'
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_Goal
{
  builtin_interfaces__msg__Duration duration;
  /// Sample times (seconds from start). Must be nondecreasing.
  rosidl_runtime_c__double__Sequence t;
  /// Values at each time sample. Must match length of t.
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence z;
} my_robot_interfaces__action__RunMotorProfile_Goal;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_Goal.
typedef struct my_robot_interfaces__action__RunMotorProfile_Goal__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_Result
{
  bool success;
  rosidl_runtime_c__String message;
} my_robot_interfaces__action__RunMotorProfile_Result;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_Result.
typedef struct my_robot_interfaces__action__RunMotorProfile_Result__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'elapsed'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_Feedback
{
  /// 0.0 to 1.0
  float progress;
  builtin_interfaces__msg__Duration elapsed;
} my_robot_interfaces__action__RunMotorProfile_Feedback;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_Feedback.
typedef struct my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_robot_interfaces__action__RunMotorProfile_Goal goal;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Request;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_SendGoal_Request.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Response;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_SendGoal_Response.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence request;
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence response;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Event;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_SendGoal_Event.
typedef struct my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Request;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_GetResult_Request.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Response
{
  int8_t status;
  my_robot_interfaces__action__RunMotorProfile_Result result;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Response;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_GetResult_Response.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence request;
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence response;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Event;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_GetResult_Event.
typedef struct my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__struct.h"

/// Struct defined in action/RunMotorProfile in the package my_robot_interfaces.
typedef struct my_robot_interfaces__action__RunMotorProfile_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_robot_interfaces__action__RunMotorProfile_Feedback feedback;
} my_robot_interfaces__action__RunMotorProfile_FeedbackMessage;

// Struct for a sequence of my_robot_interfaces__action__RunMotorProfile_FeedbackMessage.
typedef struct my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence
{
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__STRUCT_H_
