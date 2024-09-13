// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from toxic_relationship:action/ToxicRelationship.idl
// generated code does not contain a copyright notice

#ifndef TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__BUILDER_HPP_
#define TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_Goal_toxicity_rate
{
public:
  Init_ToxicRelationship_Goal_toxicity_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::toxic_relationship::action::ToxicRelationship_Goal toxicity_rate(::toxic_relationship::action::ToxicRelationship_Goal::_toxicity_rate_type arg)
  {
    msg_.toxicity_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_Goal>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_Goal_toxicity_rate();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_Result_living_status
{
public:
  Init_ToxicRelationship_Result_living_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::toxic_relationship::action::ToxicRelationship_Result living_status(::toxic_relationship::action::ToxicRelationship_Result::_living_status_type arg)
  {
    msg_.living_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_Result>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_Result_living_status();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_Feedback_feedback
{
public:
  Init_ToxicRelationship_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::toxic_relationship::action::ToxicRelationship_Feedback feedback(::toxic_relationship::action::ToxicRelationship_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_Feedback>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_Feedback_feedback();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_SendGoal_Request_goal
{
public:
  explicit Init_ToxicRelationship_SendGoal_Request_goal(::toxic_relationship::action::ToxicRelationship_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Request goal(::toxic_relationship::action::ToxicRelationship_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Request msg_;
};

class Init_ToxicRelationship_SendGoal_Request_goal_id
{
public:
  Init_ToxicRelationship_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToxicRelationship_SendGoal_Request_goal goal_id(::toxic_relationship::action::ToxicRelationship_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ToxicRelationship_SendGoal_Request_goal(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_SendGoal_Request>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_SendGoal_Request_goal_id();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_SendGoal_Response_stamp
{
public:
  explicit Init_ToxicRelationship_SendGoal_Response_stamp(::toxic_relationship::action::ToxicRelationship_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Response stamp(::toxic_relationship::action::ToxicRelationship_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Response msg_;
};

class Init_ToxicRelationship_SendGoal_Response_accepted
{
public:
  Init_ToxicRelationship_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToxicRelationship_SendGoal_Response_stamp accepted(::toxic_relationship::action::ToxicRelationship_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ToxicRelationship_SendGoal_Response_stamp(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_SendGoal_Response>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_SendGoal_Response_accepted();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_GetResult_Request_goal_id
{
public:
  Init_ToxicRelationship_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::toxic_relationship::action::ToxicRelationship_GetResult_Request goal_id(::toxic_relationship::action::ToxicRelationship_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_GetResult_Request>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_GetResult_Request_goal_id();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_GetResult_Response_result
{
public:
  explicit Init_ToxicRelationship_GetResult_Response_result(::toxic_relationship::action::ToxicRelationship_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::toxic_relationship::action::ToxicRelationship_GetResult_Response result(::toxic_relationship::action::ToxicRelationship_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_GetResult_Response msg_;
};

class Init_ToxicRelationship_GetResult_Response_status
{
public:
  Init_ToxicRelationship_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToxicRelationship_GetResult_Response_result status(::toxic_relationship::action::ToxicRelationship_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ToxicRelationship_GetResult_Response_result(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_GetResult_Response>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_GetResult_Response_status();
}

}  // namespace toxic_relationship


namespace toxic_relationship
{

namespace action
{

namespace builder
{

class Init_ToxicRelationship_FeedbackMessage_feedback
{
public:
  explicit Init_ToxicRelationship_FeedbackMessage_feedback(::toxic_relationship::action::ToxicRelationship_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::toxic_relationship::action::ToxicRelationship_FeedbackMessage feedback(::toxic_relationship::action::ToxicRelationship_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_FeedbackMessage msg_;
};

class Init_ToxicRelationship_FeedbackMessage_goal_id
{
public:
  Init_ToxicRelationship_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToxicRelationship_FeedbackMessage_feedback goal_id(::toxic_relationship::action::ToxicRelationship_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ToxicRelationship_FeedbackMessage_feedback(msg_);
  }

private:
  ::toxic_relationship::action::ToxicRelationship_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::toxic_relationship::action::ToxicRelationship_FeedbackMessage>()
{
  return toxic_relationship::action::builder::Init_ToxicRelationship_FeedbackMessage_goal_id();
}

}  // namespace toxic_relationship

#endif  // TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__BUILDER_HPP_
