// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from toxic_relationship:action/ToxicRelationship.idl
// generated code does not contain a copyright notice

#ifndef TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__FUNCTIONS_H_
#define TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "toxic_relationship/msg/rosidl_generator_c__visibility_control.h"

#include "toxic_relationship/action/detail/toxic_relationship__struct.h"

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_Goal
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__init(toxic_relationship__action__ToxicRelationship_Goal * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Goal__fini(toxic_relationship__action__ToxicRelationship_Goal * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Goal *
toxic_relationship__action__ToxicRelationship_Goal__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Goal__destroy(toxic_relationship__action__ToxicRelationship_Goal * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__are_equal(const toxic_relationship__action__ToxicRelationship_Goal * lhs, const toxic_relationship__action__ToxicRelationship_Goal * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__copy(
  const toxic_relationship__action__ToxicRelationship_Goal * input,
  toxic_relationship__action__ToxicRelationship_Goal * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__init(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Goal__Sequence__fini(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Goal__Sequence *
toxic_relationship__action__ToxicRelationship_Goal__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Goal__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Goal__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Goal__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Goal__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Goal__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_Result
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__init(toxic_relationship__action__ToxicRelationship_Result * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Result__fini(toxic_relationship__action__ToxicRelationship_Result * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Result *
toxic_relationship__action__ToxicRelationship_Result__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Result__destroy(toxic_relationship__action__ToxicRelationship_Result * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__are_equal(const toxic_relationship__action__ToxicRelationship_Result * lhs, const toxic_relationship__action__ToxicRelationship_Result * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__copy(
  const toxic_relationship__action__ToxicRelationship_Result * input,
  toxic_relationship__action__ToxicRelationship_Result * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__init(toxic_relationship__action__ToxicRelationship_Result__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Result__Sequence__fini(toxic_relationship__action__ToxicRelationship_Result__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Result__Sequence *
toxic_relationship__action__ToxicRelationship_Result__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Result__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Result__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Result__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Result__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Result__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Result__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_Feedback
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__init(toxic_relationship__action__ToxicRelationship_Feedback * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Feedback__fini(toxic_relationship__action__ToxicRelationship_Feedback * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Feedback *
toxic_relationship__action__ToxicRelationship_Feedback__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Feedback__destroy(toxic_relationship__action__ToxicRelationship_Feedback * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__are_equal(const toxic_relationship__action__ToxicRelationship_Feedback * lhs, const toxic_relationship__action__ToxicRelationship_Feedback * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__copy(
  const toxic_relationship__action__ToxicRelationship_Feedback * input,
  toxic_relationship__action__ToxicRelationship_Feedback * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__init(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__fini(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_Feedback__Sequence *
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Feedback__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__init(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_SendGoal_Request *
toxic_relationship__action__ToxicRelationship_SendGoal_Request__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Request * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Request * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Request * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Request * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__init(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence *
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__init(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_SendGoal_Response *
toxic_relationship__action__ToxicRelationship_SendGoal_Response__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Response * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Response * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Response * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Response * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__init(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence *
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_GetResult_Request
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__init(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_GetResult_Request *
toxic_relationship__action__ToxicRelationship_GetResult_Request__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Request__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Request * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Request * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Request * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Request * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__init(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__fini(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence *
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_GetResult_Response
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__init(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_GetResult_Response *
toxic_relationship__action__ToxicRelationship_GetResult_Response__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Response__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Response * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Response * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Response * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Response * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__init(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__fini(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence *
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * output);

/// Initialize action/ToxicRelationship message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage
 * )) before or use
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__init(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg);

/// Finalize action/ToxicRelationship message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg);

/// Create action/ToxicRelationship message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_FeedbackMessage *
toxic_relationship__action__ToxicRelationship_FeedbackMessage__create();

/// Destroy action/ToxicRelationship message.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__destroy(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg);

/// Check for action/ToxicRelationship message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__are_equal(const toxic_relationship__action__ToxicRelationship_FeedbackMessage * lhs, const toxic_relationship__action__ToxicRelationship_FeedbackMessage * rhs);

/// Copy a action/ToxicRelationship message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__copy(
  const toxic_relationship__action__ToxicRelationship_FeedbackMessage * input,
  toxic_relationship__action__ToxicRelationship_FeedbackMessage * output);

/// Initialize array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the number of elements and calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__init(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__fini(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array);

/// Create array of action/ToxicRelationship messages.
/**
 * It allocates the memory for the array and calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence *
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ToxicRelationship messages.
/**
 * It calls
 * toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__destroy(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array);

/// Check for action/ToxicRelationship message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ToxicRelationship messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_toxic_relationship
bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * input,
  toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOXIC_RELATIONSHIP__ACTION__DETAIL__TOXIC_RELATIONSHIP__FUNCTIONS_H_
