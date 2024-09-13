// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from toxic_relationship:action/ToxicRelationship.idl
// generated code does not contain a copyright notice
#include "toxic_relationship/action/detail/toxic_relationship__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
toxic_relationship__action__ToxicRelationship_Goal__init(toxic_relationship__action__ToxicRelationship_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // toxicity_rate
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Goal__fini(toxic_relationship__action__ToxicRelationship_Goal * msg)
{
  if (!msg) {
    return;
  }
  // toxicity_rate
}

bool
toxic_relationship__action__ToxicRelationship_Goal__are_equal(const toxic_relationship__action__ToxicRelationship_Goal * lhs, const toxic_relationship__action__ToxicRelationship_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // toxicity_rate
  if (lhs->toxicity_rate != rhs->toxicity_rate) {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Goal__copy(
  const toxic_relationship__action__ToxicRelationship_Goal * input,
  toxic_relationship__action__ToxicRelationship_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // toxicity_rate
  output->toxicity_rate = input->toxicity_rate;
  return true;
}

toxic_relationship__action__ToxicRelationship_Goal *
toxic_relationship__action__ToxicRelationship_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Goal * msg = (toxic_relationship__action__ToxicRelationship_Goal *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_Goal));
  bool success = toxic_relationship__action__ToxicRelationship_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_Goal__destroy(toxic_relationship__action__ToxicRelationship_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__init(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Goal * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_Goal *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Goal__Sequence__fini(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_Goal__Sequence *
toxic_relationship__action__ToxicRelationship_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Goal__Sequence * array = (toxic_relationship__action__ToxicRelationship_Goal__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_Goal__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Goal__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Goal__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Goal__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_Goal * data =
      (toxic_relationship__action__ToxicRelationship_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
toxic_relationship__action__ToxicRelationship_Result__init(toxic_relationship__action__ToxicRelationship_Result * msg)
{
  if (!msg) {
    return false;
  }
  // living_status
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Result__fini(toxic_relationship__action__ToxicRelationship_Result * msg)
{
  if (!msg) {
    return;
  }
  // living_status
}

bool
toxic_relationship__action__ToxicRelationship_Result__are_equal(const toxic_relationship__action__ToxicRelationship_Result * lhs, const toxic_relationship__action__ToxicRelationship_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // living_status
  if (lhs->living_status != rhs->living_status) {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Result__copy(
  const toxic_relationship__action__ToxicRelationship_Result * input,
  toxic_relationship__action__ToxicRelationship_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // living_status
  output->living_status = input->living_status;
  return true;
}

toxic_relationship__action__ToxicRelationship_Result *
toxic_relationship__action__ToxicRelationship_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Result * msg = (toxic_relationship__action__ToxicRelationship_Result *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_Result));
  bool success = toxic_relationship__action__ToxicRelationship_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_Result__destroy(toxic_relationship__action__ToxicRelationship_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__init(toxic_relationship__action__ToxicRelationship_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Result * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_Result *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Result__Sequence__fini(toxic_relationship__action__ToxicRelationship_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_Result__Sequence *
toxic_relationship__action__ToxicRelationship_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Result__Sequence * array = (toxic_relationship__action__ToxicRelationship_Result__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_Result__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Result__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Result__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Result__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_Result * data =
      (toxic_relationship__action__ToxicRelationship_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
#include "rosidl_runtime_c/string_functions.h"

bool
toxic_relationship__action__ToxicRelationship_Feedback__init(toxic_relationship__action__ToxicRelationship_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    toxic_relationship__action__ToxicRelationship_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Feedback__fini(toxic_relationship__action__ToxicRelationship_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
toxic_relationship__action__ToxicRelationship_Feedback__are_equal(const toxic_relationship__action__ToxicRelationship_Feedback * lhs, const toxic_relationship__action__ToxicRelationship_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Feedback__copy(
  const toxic_relationship__action__ToxicRelationship_Feedback * input,
  toxic_relationship__action__ToxicRelationship_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_Feedback *
toxic_relationship__action__ToxicRelationship_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Feedback * msg = (toxic_relationship__action__ToxicRelationship_Feedback *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_Feedback));
  bool success = toxic_relationship__action__ToxicRelationship_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_Feedback__destroy(toxic_relationship__action__ToxicRelationship_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__init(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Feedback * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_Feedback *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__fini(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_Feedback__Sequence *
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array = (toxic_relationship__action__ToxicRelationship_Feedback__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__destroy(toxic_relationship__action__ToxicRelationship_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_Feedback__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_Feedback__Sequence * input,
  toxic_relationship__action__ToxicRelationship_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_Feedback * data =
      (toxic_relationship__action__ToxicRelationship_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__functions.h"

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__init(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!toxic_relationship__action__ToxicRelationship_Goal__init(&msg->goal)) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  toxic_relationship__action__ToxicRelationship_Goal__fini(&msg->goal);
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Request * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!toxic_relationship__action__ToxicRelationship_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Request * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!toxic_relationship__action__ToxicRelationship_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_SendGoal_Request *
toxic_relationship__action__ToxicRelationship_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg = (toxic_relationship__action__ToxicRelationship_SendGoal_Request *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Request));
  bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__init(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Request * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_SendGoal_Request *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence *
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array = (toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_SendGoal_Request * data =
      (toxic_relationship__action__ToxicRelationship_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__init(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Response * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Response * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_SendGoal_Response *
toxic_relationship__action__ToxicRelationship_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg = (toxic_relationship__action__ToxicRelationship_SendGoal_Response *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Response));
  bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__init(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Response * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_SendGoal_Response *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__fini(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence *
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array = (toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__destroy(toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * input,
  toxic_relationship__action__ToxicRelationship_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_SendGoal_Response * data =
      (toxic_relationship__action__ToxicRelationship_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__init(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Request * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Request * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_GetResult_Request *
toxic_relationship__action__ToxicRelationship_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Request * msg = (toxic_relationship__action__ToxicRelationship_GetResult_Request *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Request));
  bool success = toxic_relationship__action__ToxicRelationship_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Request__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__init(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Request * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_GetResult_Request *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__fini(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence *
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array = (toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_GetResult_Request * data =
      (toxic_relationship__action__ToxicRelationship_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__functions.h"

bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__init(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!toxic_relationship__action__ToxicRelationship_Result__init(&msg->result)) {
    toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  toxic_relationship__action__ToxicRelationship_Result__fini(&msg->result);
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Response * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!toxic_relationship__action__ToxicRelationship_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Response * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!toxic_relationship__action__ToxicRelationship_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_GetResult_Response *
toxic_relationship__action__ToxicRelationship_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Response * msg = (toxic_relationship__action__ToxicRelationship_GetResult_Response *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Response));
  bool success = toxic_relationship__action__ToxicRelationship_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Response__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__init(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Response * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_GetResult_Response *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__fini(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence *
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array = (toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__destroy(toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * input,
  toxic_relationship__action__ToxicRelationship_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_GetResult_Response * data =
      (toxic_relationship__action__ToxicRelationship_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "toxic_relationship/action/detail/toxic_relationship__functions.h"

bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__init(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!toxic_relationship__action__ToxicRelationship_Feedback__init(&msg->feedback)) {
    toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  toxic_relationship__action__ToxicRelationship_Feedback__fini(&msg->feedback);
}

bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__are_equal(const toxic_relationship__action__ToxicRelationship_FeedbackMessage * lhs, const toxic_relationship__action__ToxicRelationship_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!toxic_relationship__action__ToxicRelationship_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__copy(
  const toxic_relationship__action__ToxicRelationship_FeedbackMessage * input,
  toxic_relationship__action__ToxicRelationship_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!toxic_relationship__action__ToxicRelationship_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

toxic_relationship__action__ToxicRelationship_FeedbackMessage *
toxic_relationship__action__ToxicRelationship_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg = (toxic_relationship__action__ToxicRelationship_FeedbackMessage *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(toxic_relationship__action__ToxicRelationship_FeedbackMessage));
  bool success = toxic_relationship__action__ToxicRelationship_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__destroy(toxic_relationship__action__ToxicRelationship_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__init(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_FeedbackMessage * data = NULL;

  if (size) {
    data = (toxic_relationship__action__ToxicRelationship_FeedbackMessage *)allocator.zero_allocate(size, sizeof(toxic_relationship__action__ToxicRelationship_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = toxic_relationship__action__ToxicRelationship_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__fini(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence *
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array = (toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence *)allocator.allocate(sizeof(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__destroy(toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__are_equal(const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * lhs, const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence__copy(
  const toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * input,
  toxic_relationship__action__ToxicRelationship_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(toxic_relationship__action__ToxicRelationship_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    toxic_relationship__action__ToxicRelationship_FeedbackMessage * data =
      (toxic_relationship__action__ToxicRelationship_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!toxic_relationship__action__ToxicRelationship_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          toxic_relationship__action__ToxicRelationship_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!toxic_relationship__action__ToxicRelationship_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
