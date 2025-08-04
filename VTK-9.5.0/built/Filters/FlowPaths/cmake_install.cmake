# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkFiltersFlowPaths-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkFiltersFlowPaths-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersFlowPaths-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersFlowPaths-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersFlowPaths-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersFlowPaths-9.5.1.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
        -add_rpath "@loader_path"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" -x "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersFlowPaths-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkAbstractInterpolatedVelocityField.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkAMRInterpolatedVelocityField.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkCompositeInterpolatedVelocityField.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkEvenlySpacedStreamlines2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLagrangianBasicIntegrationModel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLagrangianMatidaIntegrationModel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLagrangianParticle.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLagrangianParticleTracker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLinearTransformCellLocator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkModifiedBSPTree.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkParallelVectors.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkParticlePathFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkParticleTracer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkParticleTracerBase.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkStreaklineFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkStreamSurface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkStreamTracer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkTemporalInterpolatedVelocityField.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkVectorFieldTopology.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkVortexCore.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/FlowPaths/vtkLagrangianThreadedData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/FlowPaths/vtkFiltersFlowPathsModule.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/FlowPaths/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
