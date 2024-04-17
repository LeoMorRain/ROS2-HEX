# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_xpkg_vehicle_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED xpkg_vehicle_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(xpkg_vehicle_FOUND FALSE)
  elseif(NOT xpkg_vehicle_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(xpkg_vehicle_FOUND FALSE)
  endif()
  return()
endif()
set(_xpkg_vehicle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT xpkg_vehicle_FIND_QUIETLY)
  message(STATUS "Found xpkg_vehicle: 0.1.0 (${xpkg_vehicle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'xpkg_vehicle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${xpkg_vehicle_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(xpkg_vehicle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${xpkg_vehicle_DIR}/${_extra}")
endforeach()
