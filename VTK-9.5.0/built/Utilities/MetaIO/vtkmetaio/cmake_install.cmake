# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkmetaio-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkmetaio-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkmetaio-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkmetaio-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkmetaio" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/localMetaConfiguration.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaArrow.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaBlob.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaCommand.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaContour.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaDTITube.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaEllipse.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaEvent.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaFEMObject.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaForm.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaGaussian.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaGroup.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaImage.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaImageTypes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaImageUtils.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaLandmark.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaLine.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaMesh.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaObject.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaScene.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaSurface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaTube.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaTransform.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaTubeGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaTypes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaUtils.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Utilities/MetaIO/vtkmetaio/metaVesselTube.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Utilities/MetaIO/vtkmetaio/metaIOConfig.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Utilities/MetaIO/vtkmetaio/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
