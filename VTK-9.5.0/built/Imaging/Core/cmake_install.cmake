# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkImagingCore-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkImagingCore-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkImagingCore-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkImagingCore-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkImagingCore-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkImagingCore-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkAbstractImageInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkExtractVOI.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkGenericImageInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageAppendComponents.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageBlend.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageBSplineCoefficients.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageBSplineInternals.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageBSplineInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageCacheFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageCast.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageChangeInformation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageClip.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageConstantPad.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageDataStreamer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageDecomposeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageDifference.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageExtractComponents.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageFlip.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageIterateFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageMagnify.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageMapToColors.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageMask.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageMirrorPad.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImagePadFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImagePermute.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImagePointDataIterator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImagePointIterator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageProbeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageResample.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageResize.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageReslice.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageResliceToColors.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageShiftScale.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageShrink3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageSincInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageStencilAlgorithm.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageStencilData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageStencilIterator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageStencilSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageSSIM.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageThreshold.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageTranslateExtent.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkImageWrapPad.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/vtkRTAnalyticSource.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Imaging/Core/vtkImagingCoreModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkImagingCore" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Imaging/Core/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Imaging/Core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
