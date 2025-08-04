# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkIOXML-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkIOXML-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOXML-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOXML-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOXML-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOXML-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkRTXMLPolyDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLCompositeDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLCompositeDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLDataObjectWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLDataSetWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLFileReadTester.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLGenericDataObjectReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHierarchicalBoxDataFileConverter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHierarchicalBoxDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHierarchicalBoxDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHierarchicalDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHyperTreeGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLHyperTreeGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLImageDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLImageDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLMultiBlockDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLMultiBlockDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLMultiGroupDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPDataObjectReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPHyperTreeGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPImageDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPPolyDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPRectilinearGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPStructuredDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPStructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPTableReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPUnstructuredDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPUnstructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPartitionedDataSetCollectionReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPartitionedDataSetReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPolyDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLPolyDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLRectilinearGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLRectilinearGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLStructuredDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLStructuredDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLStructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLStructuredGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLTableReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLTableWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUniformGridAMRReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUniformGridAMRWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUnstructuredDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUnstructuredDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUnstructuredGridReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLUnstructuredGridWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLWriterBase.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/XML/vtkXMLWriterC.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/XML/vtkIOXMLModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/XML/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
