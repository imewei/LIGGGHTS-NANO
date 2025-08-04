# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkIOImage-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkIOImage-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOImage-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOImage-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOImage-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkIOImage-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkIOImage-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkBMPReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkBMPWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkDEMReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkDICOMImageReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkGESignaReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkHDRReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageExport.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageImport.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageImportExecutive.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageReader2.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageReader2Collection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageReader2Factory.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkImageWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkJPEGReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkJPEGWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkJSONImageWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkMedicalImageProperties.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkMedicalImageReader2.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkMetaImageReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkMetaImageWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkMRCReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkNIFTIImageHeader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkNIFTIImageReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkNIFTIImageWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkNrrdReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkOMETIFFReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkPNGReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkPNGWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkPNMReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkPNMWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkPostScriptWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkSEPReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkSLCReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkTGAReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkTIFFReader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkTIFFWriter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkVolume16Reader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/IO/Image/vtkVolumeReader.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Image/vtkIOImageModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/IO/Image/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
