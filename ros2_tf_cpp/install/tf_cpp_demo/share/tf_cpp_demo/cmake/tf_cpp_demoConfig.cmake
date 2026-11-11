# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tf_cpp_demo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tf_cpp_demo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tf_cpp_demo_FOUND FALSE)
  elseif(NOT tf_cpp_demo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tf_cpp_demo_FOUND FALSE)
  endif()
  return()
endif()
set(_tf_cpp_demo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tf_cpp_demo_FIND_QUIETLY)
  message(STATUS "Found tf_cpp_demo: 0.0.0 (${tf_cpp_demo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tf_cpp_demo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tf_cpp_demo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tf_cpp_demo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tf_cpp_demo_DIR}/${_extra}")
endforeach()
