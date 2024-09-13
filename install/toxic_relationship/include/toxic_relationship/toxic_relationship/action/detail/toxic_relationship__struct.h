// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from toxic_relationship:action/ToxicRelationship.idl
// generated code does not contain a copyright notice

#ifndef TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__STRUCT_H_
#define TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_Goal
{
  int32_t toxicity_rate;
} toxic_relationship__action__ToxicRelationship_Goal;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_Goal.
typedef struct toxic_relationship__action__ToxicRelationship_Goal__Sequence
{
  toxic_relationship__action__ToxicRelationship_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_Result
{
  bool living_status;
} toxic_relationship__action__ToxicRelationship_Result;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_Result.
typedef struct toxic_relationship__action__ToxicRelationship_Result__Sequence
{
  toxic_relationship__action__ToxicRelationship_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_Feedback
{
  rosidl_runtime_c__String feedback;
} toxic_relationship__action__ToxicRelationship_Feedback;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_Feedback.
typedef struct toxic_relationship__action__ToxicRelationship_Feedback__Sequence
{
  toxic_relationship__action__ToxicRelationship_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "toxic_relationship/action/detail/toxic_relationship__struct.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  toxic_relationship__action__ToxicRelationship_Goal goal;
} toxic_relationship__action__ToxicRelationship_SendGoal_Request;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_SendGoal_Request.
typedef struct toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence
{
  toxic_relationship__action__ToxicRelationship_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} toxic_relationship__action__ToxicRelationship_SendGoal_Response;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_SendGoal_Response.
typedef struct toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence
{
  toxic_relationship__action__ToxicRelationship_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} toxic_relationship__action__ToxicRelationship_GetResult_Request;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_GetResult_Request.
typedef struct toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence
{
  toxic_relationship__action__ToxicRelationship_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__struct.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_GetResult_Response
{
  int8_t status;
  toxic_relationship__action__ToxicRelationship_Result result;
} toxic_relationship__action__ToxicRelationship_GetResult_Response;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_GetResult_Response.
typedef struct toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence
{
  toxic_relationship__action__ToxicRelationship_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__struct.h"

/// Struct defined in action/ToxicRelationship in the package toxic_relationship.
typedef struct toxic_relationship__action__ToxicRelationship_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  toxic_relationship__action__ToxicRelationship_Feedback feedback;
} toxic_relationship__action__ToxicRelationship_FeedbackMessage;

// Struct for a sequence of toxic_relationship__action__ToxicRelationship_FeedbackMessage.
typedef struct toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence
{
  toxic_relationship__action__ToxicRelationship_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__STRUCT_H_
