// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from service_demo_cpp:srv/OwnTur.idl
// generated code does not contain a copyright notice
#include "service_demo_cpp/srv/detail/own_tur__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
service_demo_cpp__srv__OwnTur_Request__init(service_demo_cpp__srv__OwnTur_Request * msg)
{
  if (!msg) {
    return false;
  }
  // l_num
  return true;
}

void
service_demo_cpp__srv__OwnTur_Request__fini(service_demo_cpp__srv__OwnTur_Request * msg)
{
  if (!msg) {
    return;
  }
  // l_num
}

bool
service_demo_cpp__srv__OwnTur_Request__are_equal(const service_demo_cpp__srv__OwnTur_Request * lhs, const service_demo_cpp__srv__OwnTur_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l_num
  if (lhs->l_num != rhs->l_num) {
    return false;
  }
  return true;
}

bool
service_demo_cpp__srv__OwnTur_Request__copy(
  const service_demo_cpp__srv__OwnTur_Request * input,
  service_demo_cpp__srv__OwnTur_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // l_num
  output->l_num = input->l_num;
  return true;
}

service_demo_cpp__srv__OwnTur_Request *
service_demo_cpp__srv__OwnTur_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Request * msg = (service_demo_cpp__srv__OwnTur_Request *)allocator.allocate(sizeof(service_demo_cpp__srv__OwnTur_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(service_demo_cpp__srv__OwnTur_Request));
  bool success = service_demo_cpp__srv__OwnTur_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
service_demo_cpp__srv__OwnTur_Request__destroy(service_demo_cpp__srv__OwnTur_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    service_demo_cpp__srv__OwnTur_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
service_demo_cpp__srv__OwnTur_Request__Sequence__init(service_demo_cpp__srv__OwnTur_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Request * data = NULL;

  if (size) {
    data = (service_demo_cpp__srv__OwnTur_Request *)allocator.zero_allocate(size, sizeof(service_demo_cpp__srv__OwnTur_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = service_demo_cpp__srv__OwnTur_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        service_demo_cpp__srv__OwnTur_Request__fini(&data[i - 1]);
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
service_demo_cpp__srv__OwnTur_Request__Sequence__fini(service_demo_cpp__srv__OwnTur_Request__Sequence * array)
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
      service_demo_cpp__srv__OwnTur_Request__fini(&array->data[i]);
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

service_demo_cpp__srv__OwnTur_Request__Sequence *
service_demo_cpp__srv__OwnTur_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Request__Sequence * array = (service_demo_cpp__srv__OwnTur_Request__Sequence *)allocator.allocate(sizeof(service_demo_cpp__srv__OwnTur_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = service_demo_cpp__srv__OwnTur_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
service_demo_cpp__srv__OwnTur_Request__Sequence__destroy(service_demo_cpp__srv__OwnTur_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    service_demo_cpp__srv__OwnTur_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
service_demo_cpp__srv__OwnTur_Request__Sequence__are_equal(const service_demo_cpp__srv__OwnTur_Request__Sequence * lhs, const service_demo_cpp__srv__OwnTur_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!service_demo_cpp__srv__OwnTur_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
service_demo_cpp__srv__OwnTur_Request__Sequence__copy(
  const service_demo_cpp__srv__OwnTur_Request__Sequence * input,
  service_demo_cpp__srv__OwnTur_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(service_demo_cpp__srv__OwnTur_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    service_demo_cpp__srv__OwnTur_Request * data =
      (service_demo_cpp__srv__OwnTur_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!service_demo_cpp__srv__OwnTur_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          service_demo_cpp__srv__OwnTur_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!service_demo_cpp__srv__OwnTur_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
service_demo_cpp__srv__OwnTur_Response__init(service_demo_cpp__srv__OwnTur_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
service_demo_cpp__srv__OwnTur_Response__fini(service_demo_cpp__srv__OwnTur_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
service_demo_cpp__srv__OwnTur_Response__are_equal(const service_demo_cpp__srv__OwnTur_Response * lhs, const service_demo_cpp__srv__OwnTur_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
service_demo_cpp__srv__OwnTur_Response__copy(
  const service_demo_cpp__srv__OwnTur_Response * input,
  service_demo_cpp__srv__OwnTur_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

service_demo_cpp__srv__OwnTur_Response *
service_demo_cpp__srv__OwnTur_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Response * msg = (service_demo_cpp__srv__OwnTur_Response *)allocator.allocate(sizeof(service_demo_cpp__srv__OwnTur_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(service_demo_cpp__srv__OwnTur_Response));
  bool success = service_demo_cpp__srv__OwnTur_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
service_demo_cpp__srv__OwnTur_Response__destroy(service_demo_cpp__srv__OwnTur_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    service_demo_cpp__srv__OwnTur_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
service_demo_cpp__srv__OwnTur_Response__Sequence__init(service_demo_cpp__srv__OwnTur_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Response * data = NULL;

  if (size) {
    data = (service_demo_cpp__srv__OwnTur_Response *)allocator.zero_allocate(size, sizeof(service_demo_cpp__srv__OwnTur_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = service_demo_cpp__srv__OwnTur_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        service_demo_cpp__srv__OwnTur_Response__fini(&data[i - 1]);
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
service_demo_cpp__srv__OwnTur_Response__Sequence__fini(service_demo_cpp__srv__OwnTur_Response__Sequence * array)
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
      service_demo_cpp__srv__OwnTur_Response__fini(&array->data[i]);
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

service_demo_cpp__srv__OwnTur_Response__Sequence *
service_demo_cpp__srv__OwnTur_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  service_demo_cpp__srv__OwnTur_Response__Sequence * array = (service_demo_cpp__srv__OwnTur_Response__Sequence *)allocator.allocate(sizeof(service_demo_cpp__srv__OwnTur_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = service_demo_cpp__srv__OwnTur_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
service_demo_cpp__srv__OwnTur_Response__Sequence__destroy(service_demo_cpp__srv__OwnTur_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    service_demo_cpp__srv__OwnTur_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
service_demo_cpp__srv__OwnTur_Response__Sequence__are_equal(const service_demo_cpp__srv__OwnTur_Response__Sequence * lhs, const service_demo_cpp__srv__OwnTur_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!service_demo_cpp__srv__OwnTur_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
service_demo_cpp__srv__OwnTur_Response__Sequence__copy(
  const service_demo_cpp__srv__OwnTur_Response__Sequence * input,
  service_demo_cpp__srv__OwnTur_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(service_demo_cpp__srv__OwnTur_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    service_demo_cpp__srv__OwnTur_Response * data =
      (service_demo_cpp__srv__OwnTur_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!service_demo_cpp__srv__OwnTur_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          service_demo_cpp__srv__OwnTur_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!service_demo_cpp__srv__OwnTur_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
