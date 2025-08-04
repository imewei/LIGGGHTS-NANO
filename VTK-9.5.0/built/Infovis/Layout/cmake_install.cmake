# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkInfovisLayout-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkInfovisLayout-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisLayout-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisLayout-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInfovisLayout-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInfovisLayout-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisLayout-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkArcParallelEdgeStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkAreaLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkAreaLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkAssignCoordinates.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkAssignCoordinatesLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkAttributeClustering2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkBoxLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCirclePackFrontChainLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCirclePackLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCirclePackLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCirclePackToPolyData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCircularLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkClustering2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCommunity2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkConeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkConstrained2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkCosmicTreeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkEdgeLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkEdgeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkFast2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkForceDirectedLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkGeoEdgeStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkGeoMath.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkGraphLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkGraphLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkIncrementalForceLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkKCoreLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkPassThroughEdgeStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkPassThroughLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkPerturbCoincidentVertices.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkRandomLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSimple2DLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSimple3DCirclesStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSliceAndDiceLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSpanTreeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSplineGraphEdges.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkSquarifyLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkStackedTreeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeMapLayout.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeMapLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeMapToPolyData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeOrbitLayoutStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/vtkTreeRingToPolyData.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Infovis/Layout/vtkInfovisLayoutModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkInfovisLayout" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Layout/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Infovis/Layout/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
