# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkIOLegacy-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkIOLegacy-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOLegacy-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOLegacy-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOLegacy-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOLegacy-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOLegacy-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkCompositeDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkCompositeDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataObjectReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataObjectWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataSetReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataSetWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkGenericDataObjectReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkGenericDataObjectWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkGraphReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkGraphWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkLegacyCellGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkLegacyCellGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkPixelExtentIO.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkPolyDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkPolyDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkRectilinearGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkRectilinearGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkSimplePointsReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkSimplePointsWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkStructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkStructuredGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkStructuredPointsReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkStructuredPointsWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkTableReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkTableWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkTreeReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkTreeWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkUnstructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Legacy/vtkUnstructuredGridWriter.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Legacy/vtkIOLegacyModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Legacy/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
