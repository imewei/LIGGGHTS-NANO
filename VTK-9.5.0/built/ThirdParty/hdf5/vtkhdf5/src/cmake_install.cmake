# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkhdf5/src" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/hdf5.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5api_adpt.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5public.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/vtk_hdf5_mangle.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Apublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5ACpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Cpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Dpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Epublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5ESdevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5ESpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Fpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDcore.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDdevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDdirect.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDfamily.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDhdfs.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDlog.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDmirror.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDmpi.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDmpio.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDmulti.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDros3.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDs3comms.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDsec2.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDsplitter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDstdio.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5FDwindows.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Gpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Idevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Ipublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Ldevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Lpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Mpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5MMpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Opublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Ppublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5PLextern.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5PLpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Rpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Spublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Tdevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Tpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5TSdevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5VLconnector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5VLconnector_passthru.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5VLnative.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5VLpassthru.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5VLpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Zdevelop.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Zpublic.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Edefin.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Einit.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Epubgen.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5Eterm.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5version.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/hdf5/vtkhdf5/src/H5overflow.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkhdf5-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkhdf5-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkhdf5-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkhdf5-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkhdf5-9.5.dylib")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/hdf5/vtkhdf5/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
