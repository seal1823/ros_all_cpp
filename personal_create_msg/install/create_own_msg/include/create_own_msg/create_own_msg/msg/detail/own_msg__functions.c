// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice
#include "create_own_msg/msg/detail/own_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `user_name`
#include "rosidl_runtime_c/string_functions.h"

bool
create_own_msg__msg__OwnMsg__init(create_own_msg__msg__OwnMsg * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    create_own_msg__msg__OwnMsg__fini(msg);
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__init(&msg->user_name)) {
    create_own_msg__msg__OwnMsg__fini(msg);
    return false;
  }
  // num_of_l
  return true;
}

void
create_own_msg__msg__OwnMsg__fini(create_own_msg__msg__OwnMsg * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // user_name
  rosidl_runtime_c__String__fini(&msg->user_name);
  // num_of_l
}

bool
create_own_msg__msg__OwnMsg__are_equal(const create_own_msg__msg__OwnMsg * lhs, const create_own_msg__msg__OwnMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_name), &(rhs->user_name)))
  {
    return false;
  }
  // num_of_l
  if (lhs->num_of_l != rhs->num_of_l) {
    return false;
  }
  return true;
}

bool
create_own_msg__msg__OwnMsg__copy(
  const create_own_msg__msg__OwnMsg * input,
  create_own_msg__msg__OwnMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // user_name
  if (!rosidl_runtime_c__String__copy(
      &(input->user_name), &(output->user_name)))
  {
    return false;
  }
  // num_of_l
  output->num_of_l = input->num_of_l;
  return true;
}

create_own_msg__msg__OwnMsg *
create_own_msg__msg__OwnMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_own_msg__msg__OwnMsg * msg = (create_own_msg__msg__OwnMsg *)allocator.allocate(sizeof(create_own_msg__msg__OwnMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create_own_msg__msg__OwnMsg));
  bool success = create_own_msg__msg__OwnMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
create_own_msg__msg__OwnMsg__destroy(create_own_msg__msg__OwnMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    create_own_msg__msg__OwnMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
create_own_msg__msg__OwnMsg__Sequence__init(create_own_msg__msg__OwnMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_own_msg__msg__OwnMsg * data = NULL;

  if (size) {
    data = (create_own_msg__msg__OwnMsg *)allocator.zero_allocate(size, sizeof(create_own_msg__msg__OwnMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create_own_msg__msg__OwnMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create_own_msg__msg__OwnMsg__fini(&data[i - 1]);
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
create_own_msg__msg__OwnMsg__Sequence__fini(create_own_msg__msg__OwnMsg__Sequence * array)
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
      create_own_msg__msg__OwnMsg__fini(&array->data[i]);
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

create_own_msg__msg__OwnMsg__Sequence *
create_own_msg__msg__OwnMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_own_msg__msg__OwnMsg__Sequence * array = (create_own_msg__msg__OwnMsg__Sequence *)allocator.allocate(sizeof(create_own_msg__msg__OwnMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = create_own_msg__msg__OwnMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
create_own_msg__msg__OwnMsg__Sequence__destroy(create_own_msg__msg__OwnMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    create_own_msg__msg__OwnMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
create_own_msg__msg__OwnMsg__Sequence__are_equal(const create_own_msg__msg__OwnMsg__Sequence * lhs, const create_own_msg__msg__OwnMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create_own_msg__msg__OwnMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create_own_msg__msg__OwnMsg__Sequence__copy(
  const create_own_msg__msg__OwnMsg__Sequence * input,
  create_own_msg__msg__OwnMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create_own_msg__msg__OwnMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    create_own_msg__msg__OwnMsg * data =
      (create_own_msg__msg__OwnMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create_own_msg__msg__OwnMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          create_own_msg__msg__OwnMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create_own_msg__msg__OwnMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
