// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from toxic_relationship:action/ToxicRelationship.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_Goal(_init);
}

void ToxicRelationship_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_Goal *>(message_memory);
  typed_message->~ToxicRelationship_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_Goal_message_member_array[1] = {
  {
    "toxicity_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_Goal, toxicity_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_Goal_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_Goal",  // message name
  1,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_Goal),
  ToxicRelationship_Goal_message_member_array,  // message members
  ToxicRelationship_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Goal>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_Goal)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Goal_message_type_support_handle;
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_Result(_init);
}

void ToxicRelationship_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_Result *>(message_memory);
  typed_message->~ToxicRelationship_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_Result_message_member_array[1] = {
  {
    "living_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_Result, living_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_Result_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_Result",  // message name
  1,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_Result),
  ToxicRelationship_Result_message_member_array,  // message members
  ToxicRelationship_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Result>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_Result)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Result_message_type_support_handle;
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_Feedback(_init);
}

void ToxicRelationship_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_Feedback *>(message_memory);
  typed_message->~ToxicRelationship_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_Feedback, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_Feedback_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_Feedback",  // message name
  1,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_Feedback),
  ToxicRelationship_Feedback_message_member_array,  // message members
  ToxicRelationship_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Feedback>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_Feedback)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_Feedback_message_type_support_handle;
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_SendGoal_Request(_init);
}

void ToxicRelationship_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_SendGoal_Request *>(message_memory);
  typed_message->~ToxicRelationship_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_SendGoal_Request_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_SendGoal_Request),
  ToxicRelationship_SendGoal_Request_message_member_array,  // message members
  ToxicRelationship_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_SendGoal_Request>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_SendGoal_Request)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_SendGoal_Request_message_type_support_handle;
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_SendGoal_Response(_init);
}

void ToxicRelationship_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_SendGoal_Response *>(message_memory);
  typed_message->~ToxicRelationship_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_SendGoal_Response, accepted),  // bytes offset in struct
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
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_SendGoal_Response_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_SendGoal_Response),
  ToxicRelationship_SendGoal_Response_message_member_array,  // message members
  ToxicRelationship_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_SendGoal_Response>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_SendGoal_Response)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ToxicRelationship_SendGoal_service_members = {
  "toxic_relationship::action",  // service namespace
  "ToxicRelationship_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ToxicRelationship_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::toxic_relationship::action::ToxicRelationship_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::toxic_relationship::action::ToxicRelationship_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_SendGoal>();
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_GetResult_Request(_init);
}

void ToxicRelationship_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_GetResult_Request *>(message_memory);
  typed_message->~ToxicRelationship_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_GetResult_Request_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_GetResult_Request),
  ToxicRelationship_GetResult_Request_message_member_array,  // message members
  ToxicRelationship_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_GetResult_Request>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_GetResult_Request)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_GetResult_Request_message_type_support_handle;
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_GetResult_Response(_init);
}

void ToxicRelationship_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_GetResult_Response *>(message_memory);
  typed_message->~ToxicRelationship_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_GetResult_Response, status),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_GetResult_Response_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_GetResult_Response),
  ToxicRelationship_GetResult_Response_message_member_array,  // message members
  ToxicRelationship_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_GetResult_Response>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_GetResult_Response)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ToxicRelationship_GetResult_service_members = {
  "toxic_relationship::action",  // service namespace
  "ToxicRelationship_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ToxicRelationship_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::toxic_relationship::action::ToxicRelationship_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::toxic_relationship::action::ToxicRelationship_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<toxic_relationship::action::ToxicRelationship_GetResult>();
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
// #include "toxic_relationship/action/detail/toxic_relationship__struct.hpp"
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

namespace toxic_relationship
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ToxicRelationship_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) toxic_relationship::action::ToxicRelationship_FeedbackMessage(_init);
}

void ToxicRelationship_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<toxic_relationship::action::ToxicRelationship_FeedbackMessage *>(message_memory);
  typed_message->~ToxicRelationship_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToxicRelationship_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_FeedbackMessage, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(toxic_relationship::action::ToxicRelationship_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToxicRelationship_FeedbackMessage_message_members = {
  "toxic_relationship::action",  // message namespace
  "ToxicRelationship_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(toxic_relationship::action::ToxicRelationship_FeedbackMessage),
  ToxicRelationship_FeedbackMessage_message_member_array,  // message members
  ToxicRelationship_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ToxicRelationship_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToxicRelationship_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToxicRelationship_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace toxic_relationship


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<toxic_relationship::action::ToxicRelationship_FeedbackMessage>()
{
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, toxic_relationship, action, ToxicRelationship_FeedbackMessage)() {
  return &::toxic_relationship::action::rosidl_typesupport_introspection_cpp::ToxicRelationship_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
