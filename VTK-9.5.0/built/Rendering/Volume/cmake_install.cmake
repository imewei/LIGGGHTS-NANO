# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkRenderingVolume-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkRenderingVolume-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingVolume-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingVolume-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingVolume-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingVolume-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkBlockSortHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkDirectionEncoder.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkEncodedGradientEstimator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkEncodedGradientShader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFiniteDifferenceGradientEstimator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointRayCastImage.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkFixedPointVolumeRayCastMIPHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkGPUVolumeRayCastMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkMultiVolume.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkOSPRayVolumeInterface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkAnariVolumeInterface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkProjectedTetrahedraMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkRayCastImageDisplayHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkRecursiveSphereDirectionEncoder.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkSphericalDirectionEncoder.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridBunykRayCastFunction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridLinearRayIntegrator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridPartialPreIntegration.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridPreIntegration.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeRayCastFunction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeRayCastIterator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeRayCastMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeRayIntegrator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkUnstructuredGridVolumeZSweepMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkVolumeMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkVolumeOutlineSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkVolumePicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/vtkVolumeRayCastSpaceLeapingImageFilter.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Rendering/Volume/vtkRenderingVolumeModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkRenderingVolume" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Volume/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Rendering/Volume/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
