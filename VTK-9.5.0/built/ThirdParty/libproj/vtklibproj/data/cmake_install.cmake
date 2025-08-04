# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "libproj-data" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vtk-9.5/proj" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/proj.ini"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/world"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/other.extra"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/nad27"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/GL27"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/nad83"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/nad.lst"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/CH"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/ITRF2000"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/ITRF2008"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/ITRF2014"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/../share/vtk-9.5/proj/proj.db"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/deformation_model.schema.json"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/projjson.schema.json"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/libproj/vtklibproj/data/triangulation.schema.json"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/libproj/vtklibproj/data/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
