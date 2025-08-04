# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkIOCore-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkIOCore-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOCore-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOCore-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOCore-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOCore-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOCore-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkUpdateCellsV8toV9.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkAbstractParticleWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkAbstractPolyDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkArrayDataReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkArrayDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkArrayReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkArrayWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkASCIITextCodec.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkBase64InputStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkBase64OutputStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkBase64Utilities.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkDataCompressor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkDelimitedTextWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkFileResourceStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkGlobFileNames.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkInputStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkJavaScriptDataWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkLZ4DataCompressor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkLZMADataCompressor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkMemoryResourceStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkOutputStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkResourceParser.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkResourceStream.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkSortFileNames.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkTextCodec.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkTextCodecFactory.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkURI.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkURILoader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkUTF16TextCodec.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkUTF8TextCodec.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/vtkZLibDataCompressor.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Core/vtkIOCoreModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkIOCore" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Core/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
