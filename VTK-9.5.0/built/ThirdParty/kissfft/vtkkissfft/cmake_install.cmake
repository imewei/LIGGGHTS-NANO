# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft

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
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkkissfft-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkkissfft-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkkissfft-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkkissfft-9.5.1.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -add_rpath "@loader_path"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" -x "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkkissfft-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkkissfft" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/kiss_fft_exports.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/_kiss_fft_guts.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/kiss_fft.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/vtkkissfft_fft.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/vtk_kiss_fft_mangle.h"
    )
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkkissfft/tools" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/kfc.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/kiss_fftnd.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/kiss_fftndr.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/kiss_fftr.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/vtkkissfft_fftnd.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/vtkkissfft_fftndr.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/kissfft/vtkkissfft/tools/vtkkissfft_fftr.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/kissfft/vtkkissfft/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
