# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkfast_float/vtkfast_float" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/ascii_number.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/bigint.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/constexpr_feature_detect.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/decimal_to_binary.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/digit_comparison.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/fast_float.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/fast_table.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/float_common.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/parse_number.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/fast_float/vtkfast_float/vtkfast_float/vtkfast_float_mangle.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/fast_float/vtkfast_float/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
