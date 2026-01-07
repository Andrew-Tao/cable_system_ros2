// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:action/RunMotorProfile.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `t`
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_Goal__init(my_robot_interfaces__action__RunMotorProfile_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
    return false;
  }
  // t
  if (!rosidl_runtime_c__double__Sequence__init(&msg->t, 0)) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__init(&msg->z, 0)) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_Goal__fini(my_robot_interfaces__action__RunMotorProfile_Goal * msg)
{
  if (!msg) {
    return;
  }
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // t
  rosidl_runtime_c__double__Sequence__fini(&msg->t);
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__double__Sequence__fini(&msg->z);
}

bool
my_robot_interfaces__action__RunMotorProfile_Goal__are_equal(const my_robot_interfaces__action__RunMotorProfile_Goal * lhs, const my_robot_interfaces__action__RunMotorProfile_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // t
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->t), &(rhs->t)))
  {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Goal__copy(
  const my_robot_interfaces__action__RunMotorProfile_Goal * input,
  my_robot_interfaces__action__RunMotorProfile_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // t
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->t), &(output->t)))
  {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_Goal *
my_robot_interfaces__action__RunMotorProfile_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Goal * msg = (my_robot_interfaces__action__RunMotorProfile_Goal *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_Goal));
  bool success = my_robot_interfaces__action__RunMotorProfile_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_Goal__destroy(my_robot_interfaces__action__RunMotorProfile_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__init(my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Goal * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_Goal *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_Goal__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_Goal__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_Goal__Sequence *
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_Goal__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Goal__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_Goal * data =
      (my_robot_interfaces__action__RunMotorProfile_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_Result__init(my_robot_interfaces__action__RunMotorProfile_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    my_robot_interfaces__action__RunMotorProfile_Result__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_Result__fini(my_robot_interfaces__action__RunMotorProfile_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
my_robot_interfaces__action__RunMotorProfile_Result__are_equal(const my_robot_interfaces__action__RunMotorProfile_Result * lhs, const my_robot_interfaces__action__RunMotorProfile_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Result__copy(
  const my_robot_interfaces__action__RunMotorProfile_Result * input,
  my_robot_interfaces__action__RunMotorProfile_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_Result *
my_robot_interfaces__action__RunMotorProfile_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Result * msg = (my_robot_interfaces__action__RunMotorProfile_Result *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_Result));
  bool success = my_robot_interfaces__action__RunMotorProfile_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_Result__destroy(my_robot_interfaces__action__RunMotorProfile_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__init(my_robot_interfaces__action__RunMotorProfile_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Result * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_Result *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_Result__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_Result__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_Result__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_Result__Sequence *
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Result__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_Result__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_Result__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Result__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_Result__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_Result * data =
      (my_robot_interfaces__action__RunMotorProfile_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `elapsed`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_Feedback__init(my_robot_interfaces__action__RunMotorProfile_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  // elapsed
  if (!builtin_interfaces__msg__Duration__init(&msg->elapsed)) {
    my_robot_interfaces__action__RunMotorProfile_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_Feedback__fini(my_robot_interfaces__action__RunMotorProfile_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
  // elapsed
  builtin_interfaces__msg__Duration__fini(&msg->elapsed);
}

bool
my_robot_interfaces__action__RunMotorProfile_Feedback__are_equal(const my_robot_interfaces__action__RunMotorProfile_Feedback * lhs, const my_robot_interfaces__action__RunMotorProfile_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  // elapsed
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->elapsed), &(rhs->elapsed)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Feedback__copy(
  const my_robot_interfaces__action__RunMotorProfile_Feedback * input,
  my_robot_interfaces__action__RunMotorProfile_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  // elapsed
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->elapsed), &(output->elapsed)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_Feedback *
my_robot_interfaces__action__RunMotorProfile_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Feedback * msg = (my_robot_interfaces__action__RunMotorProfile_Feedback *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback));
  bool success = my_robot_interfaces__action__RunMotorProfile_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_Feedback__destroy(my_robot_interfaces__action__RunMotorProfile_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__init(my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Feedback * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_Feedback *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_Feedback__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_Feedback__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence *
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_Feedback * data =
      (my_robot_interfaces__action__RunMotorProfile_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_Feedback__copy(
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!my_robot_interfaces__action__RunMotorProfile_Goal__init(&msg->goal)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  my_robot_interfaces__action__RunMotorProfile_Goal__fini(&msg->goal);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * rhs)
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
  if (!my_robot_interfaces__action__RunMotorProfile_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * output)
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
  if (!my_robot_interfaces__action__RunMotorProfile_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * msg = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request));
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Request * data =
      (my_robot_interfaces__action__RunMotorProfile_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__copy(
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
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * rhs)
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
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * output)
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

my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * msg = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response));
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Response * data =
      (my_robot_interfaces__action__RunMotorProfile_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_SendGoal_Event *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * msg = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Event *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event));
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__init(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Event *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence *
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_SendGoal_Event * data =
      (my_robot_interfaces__action__RunMotorProfile_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_SendGoal_Event__copy(
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
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Request * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Request * rhs)
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
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * output)
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

my_robot_interfaces__action__RunMotorProfile_GetResult_Request *
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * msg = (my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request));
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_GetResult_Request * data =
      (my_robot_interfaces__action__RunMotorProfile_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__copy(
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!my_robot_interfaces__action__RunMotorProfile_Result__init(&msg->result)) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  my_robot_interfaces__action__RunMotorProfile_Result__fini(&msg->result);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Response * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!my_robot_interfaces__action__RunMotorProfile_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!my_robot_interfaces__action__RunMotorProfile_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_GetResult_Response *
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * msg = (my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response));
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_GetResult_Response * data =
      (my_robot_interfaces__action__RunMotorProfile_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__init(&msg->request, 0)) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__init(&msg->response, 0)) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__fini(&msg->request);
  // response
  my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__fini(&msg->response);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Event * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Event * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_GetResult_Event *
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event * msg = (my_robot_interfaces__action__RunMotorProfile_GetResult_Event *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event));
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__init(my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_GetResult_Event *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence *
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_GetResult_Event * data =
      (my_robot_interfaces__action__RunMotorProfile_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_GetResult_Event__copy(
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
// #include "my_robot_interfaces/action/detail/run_motor_profile__functions.h"

bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__init(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!my_robot_interfaces__action__RunMotorProfile_Feedback__init(&msg->feedback)) {
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  my_robot_interfaces__action__RunMotorProfile_Feedback__fini(&msg->feedback);
}

bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__are_equal(const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * lhs, const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * rhs)
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
  if (!my_robot_interfaces__action__RunMotorProfile_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__copy(
  const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * input,
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * output)
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
  if (!my_robot_interfaces__action__RunMotorProfile_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__action__RunMotorProfile_FeedbackMessage *
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * msg = (my_robot_interfaces__action__RunMotorProfile_FeedbackMessage *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage));
  bool success = my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__destroy(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__init(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * data = NULL;

  if (size) {
    data = (my_robot_interfaces__action__RunMotorProfile_FeedbackMessage *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(&data[i - 1]);
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
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__fini(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * array)
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
      my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(&array->data[i]);
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

my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence *
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * array = (my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__destroy(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__are_equal(const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * lhs, const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence__copy(
  const my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * input,
  my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__action__RunMotorProfile_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__action__RunMotorProfile_FeedbackMessage * data =
      (my_robot_interfaces__action__RunMotorProfile_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__action__RunMotorProfile_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
