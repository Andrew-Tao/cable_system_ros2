// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/action/run_motor_profile.hpp"


#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/action/detail/run_motor_profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_Goal_z
{
public:
  explicit Init_RunMotorProfile_Goal_z(::my_robot_interfaces::action::RunMotorProfile_Goal & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_Goal z(::my_robot_interfaces::action::RunMotorProfile_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Goal msg_;
};

class Init_RunMotorProfile_Goal_y
{
public:
  explicit Init_RunMotorProfile_Goal_y(::my_robot_interfaces::action::RunMotorProfile_Goal & msg)
  : msg_(msg)
  {}
  Init_RunMotorProfile_Goal_z y(::my_robot_interfaces::action::RunMotorProfile_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RunMotorProfile_Goal_z(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Goal msg_;
};

class Init_RunMotorProfile_Goal_x
{
public:
  explicit Init_RunMotorProfile_Goal_x(::my_robot_interfaces::action::RunMotorProfile_Goal & msg)
  : msg_(msg)
  {}
  Init_RunMotorProfile_Goal_y x(::my_robot_interfaces::action::RunMotorProfile_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RunMotorProfile_Goal_y(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Goal msg_;
};

class Init_RunMotorProfile_Goal_t
{
public:
  explicit Init_RunMotorProfile_Goal_t(::my_robot_interfaces::action::RunMotorProfile_Goal & msg)
  : msg_(msg)
  {}
  Init_RunMotorProfile_Goal_x t(::my_robot_interfaces::action::RunMotorProfile_Goal::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_RunMotorProfile_Goal_x(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Goal msg_;
};

class Init_RunMotorProfile_Goal_duration
{
public:
  Init_RunMotorProfile_Goal_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_Goal_t duration(::my_robot_interfaces::action::RunMotorProfile_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_RunMotorProfile_Goal_t(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_Goal>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_Goal_duration();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_Result_message
{
public:
  explicit Init_RunMotorProfile_Result_message(::my_robot_interfaces::action::RunMotorProfile_Result & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_Result message(::my_robot_interfaces::action::RunMotorProfile_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Result msg_;
};

class Init_RunMotorProfile_Result_success
{
public:
  Init_RunMotorProfile_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_Result_message success(::my_robot_interfaces::action::RunMotorProfile_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RunMotorProfile_Result_message(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_Result>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_Result_success();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_Feedback_elapsed
{
public:
  explicit Init_RunMotorProfile_Feedback_elapsed(::my_robot_interfaces::action::RunMotorProfile_Feedback & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_Feedback elapsed(::my_robot_interfaces::action::RunMotorProfile_Feedback::_elapsed_type arg)
  {
    msg_.elapsed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Feedback msg_;
};

class Init_RunMotorProfile_Feedback_progress
{
public:
  Init_RunMotorProfile_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_Feedback_elapsed progress(::my_robot_interfaces::action::RunMotorProfile_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_RunMotorProfile_Feedback_elapsed(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_Feedback>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_Feedback_progress();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_SendGoal_Request_goal
{
public:
  explicit Init_RunMotorProfile_SendGoal_Request_goal(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request goal(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request msg_;
};

class Init_RunMotorProfile_SendGoal_Request_goal_id
{
public:
  Init_RunMotorProfile_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_SendGoal_Request_goal goal_id(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunMotorProfile_SendGoal_Request_goal(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_SendGoal_Request>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_SendGoal_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_SendGoal_Response_stamp
{
public:
  explicit Init_RunMotorProfile_SendGoal_Response_stamp(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response stamp(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response msg_;
};

class Init_RunMotorProfile_SendGoal_Response_accepted
{
public:
  Init_RunMotorProfile_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_SendGoal_Response_stamp accepted(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunMotorProfile_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_SendGoal_Response>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_SendGoal_Response_accepted();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_SendGoal_Event_response
{
public:
  explicit Init_RunMotorProfile_SendGoal_Event_response(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event response(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event msg_;
};

class Init_RunMotorProfile_SendGoal_Event_request
{
public:
  explicit Init_RunMotorProfile_SendGoal_Event_request(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_RunMotorProfile_SendGoal_Event_response request(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RunMotorProfile_SendGoal_Event_response(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event msg_;
};

class Init_RunMotorProfile_SendGoal_Event_info
{
public:
  Init_RunMotorProfile_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_SendGoal_Event_request info(::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RunMotorProfile_SendGoal_Event_request(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_SendGoal_Event>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_SendGoal_Event_info();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_GetResult_Request_goal_id
{
public:
  Init_RunMotorProfile_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Request goal_id(::my_robot_interfaces::action::RunMotorProfile_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_GetResult_Request>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_GetResult_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_GetResult_Response_result
{
public:
  explicit Init_RunMotorProfile_GetResult_Response_result(::my_robot_interfaces::action::RunMotorProfile_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Response result(::my_robot_interfaces::action::RunMotorProfile_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Response msg_;
};

class Init_RunMotorProfile_GetResult_Response_status
{
public:
  Init_RunMotorProfile_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_GetResult_Response_result status(::my_robot_interfaces::action::RunMotorProfile_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunMotorProfile_GetResult_Response_result(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_GetResult_Response>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_GetResult_Response_status();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_GetResult_Event_response
{
public:
  explicit Init_RunMotorProfile_GetResult_Event_response(::my_robot_interfaces::action::RunMotorProfile_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Event response(::my_robot_interfaces::action::RunMotorProfile_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Event msg_;
};

class Init_RunMotorProfile_GetResult_Event_request
{
public:
  explicit Init_RunMotorProfile_GetResult_Event_request(::my_robot_interfaces::action::RunMotorProfile_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_RunMotorProfile_GetResult_Event_response request(::my_robot_interfaces::action::RunMotorProfile_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RunMotorProfile_GetResult_Event_response(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Event msg_;
};

class Init_RunMotorProfile_GetResult_Event_info
{
public:
  Init_RunMotorProfile_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_GetResult_Event_request info(::my_robot_interfaces::action::RunMotorProfile_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RunMotorProfile_GetResult_Event_request(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_GetResult_Event>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_GetResult_Event_info();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_RunMotorProfile_FeedbackMessage_feedback
{
public:
  explicit Init_RunMotorProfile_FeedbackMessage_feedback(::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage feedback(::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage msg_;
};

class Init_RunMotorProfile_FeedbackMessage_goal_id
{
public:
  Init_RunMotorProfile_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunMotorProfile_FeedbackMessage_feedback goal_id(::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunMotorProfile_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::RunMotorProfile_FeedbackMessage>()
{
  return my_robot_interfaces::action::builder::Init_RunMotorProfile_FeedbackMessage_goal_id();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__RUN_MOTOR_PROFILE__BUILDER_HPP_
