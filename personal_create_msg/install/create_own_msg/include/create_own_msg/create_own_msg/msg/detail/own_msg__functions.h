// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from create_own_msg:msg/OwnMsg.idl
// generated code does not contain a copyright notice

#ifndef CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__FUNCTIONS_H_
#define CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "create_own_msg/msg/rosidl_generator_c__visibility_control.h"

#include "create_own_msg/msg/detail/own_msg__struct.h"

/// Initialize msg/OwnMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create_own_msg__msg__OwnMsg
 * )) before or use
 * create_own_msg__msg__OwnMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__init(create_own_msg__msg__OwnMsg * msg);

/// Finalize msg/OwnMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
void
create_own_msg__msg__OwnMsg__fini(create_own_msg__msg__OwnMsg * msg);

/// Create msg/OwnMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create_own_msg__msg__OwnMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
create_own_msg__msg__OwnMsg *
create_own_msg__msg__OwnMsg__create();

/// Destroy msg/OwnMsg message.
/**
 * It calls
 * create_own_msg__msg__OwnMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
void
create_own_msg__msg__OwnMsg__destroy(create_own_msg__msg__OwnMsg * msg);

/// Check for msg/OwnMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__are_equal(const create_own_msg__msg__OwnMsg * lhs, const create_own_msg__msg__OwnMsg * rhs);

/// Copy a msg/OwnMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__copy(
  const create_own_msg__msg__OwnMsg * input,
  create_own_msg__msg__OwnMsg * output);

/// Initialize array of msg/OwnMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * create_own_msg__msg__OwnMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__Sequence__init(create_own_msg__msg__OwnMsg__Sequence * array, size_t size);

/// Finalize array of msg/OwnMsg messages.
/**
 * It calls
 * create_own_msg__msg__OwnMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
void
create_own_msg__msg__OwnMsg__Sequence__fini(create_own_msg__msg__OwnMsg__Sequence * array);

/// Create array of msg/OwnMsg messages.
/**
 * It allocates the memory for the array and calls
 * create_own_msg__msg__OwnMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
create_own_msg__msg__OwnMsg__Sequence *
create_own_msg__msg__OwnMsg__Sequence__create(size_t size);

/// Destroy array of msg/OwnMsg messages.
/**
 * It calls
 * create_own_msg__msg__OwnMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
void
create_own_msg__msg__OwnMsg__Sequence__destroy(create_own_msg__msg__OwnMsg__Sequence * array);

/// Check for msg/OwnMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__Sequence__are_equal(const create_own_msg__msg__OwnMsg__Sequence * lhs, const create_own_msg__msg__OwnMsg__Sequence * rhs);

/// Copy an array of msg/OwnMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_create_own_msg
bool
create_own_msg__msg__OwnMsg__Sequence__copy(
  const create_own_msg__msg__OwnMsg__Sequence * input,
  create_own_msg__msg__OwnMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CREATE_OWN_MSG__MSG__DETAIL__OWN_MSG__FUNCTIONS_H_
