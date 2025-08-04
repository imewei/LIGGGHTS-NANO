# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype

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
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkfreetype-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkfreetype-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkfreetype-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkfreetype-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkfreetype/include" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/ft2build.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/vtk_freetype_mangle.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkfreetype/include/freetype" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/freetype.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftadvanc.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftbbox.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftbdf.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftbitmap.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftbzip2.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftcache.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftcid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftcolor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftdriver.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/fterrdef.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/fterrors.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftfntfmt.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftgasp.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftglyph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftgxval.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftgzip.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftimage.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftincrem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftlcdfil.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftlist.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftlogging.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftlzw.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftmac.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftmm.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftmodapi.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftmoderr.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftotval.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftoutln.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftparams.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftpfr.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftrender.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftsizes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftsnames.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftstroke.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftsynth.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftsystem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/fttrigon.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/fttypes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ftwinfnt.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/t1tables.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/ttnameid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/tttables.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/tttags.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftconfig.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftheader.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftmodule.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftoption.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftstdlib.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/integer-types.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/mac-support.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/freetype/vtkfreetype/include/freetype/config/public-macros.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/freetype/vtkfreetype/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
