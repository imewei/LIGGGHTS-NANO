# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkIOParallelXML-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkIOParallelXML-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOParallelXML-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOParallelXML-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOParallelXML-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOParallelXML-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLCompositeDataSetWriterHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLDataWriterHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPartitionedDataSetCollectionWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPartitionedDataSetWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLWriter2.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPDataObjectWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPDataSetWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPHierarchicalBoxDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPHyperTreeGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPImageDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPMultiBlockDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPPolyDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPRectilinearGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPStructuredDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPStructuredGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPTableWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPUniformGridAMRWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPUnstructuredDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/ParallelXML/vtkXMLPUnstructuredGridWriter.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/ParallelXML/vtkIOParallelXMLModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/ParallelXML/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
