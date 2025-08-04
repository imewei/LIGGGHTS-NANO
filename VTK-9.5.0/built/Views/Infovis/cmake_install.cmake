# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkViewsInfovis-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkViewsInfovis-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkViewsInfovis-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkViewsInfovis-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkViewsInfovis-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkViewsInfovis-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkViewsInfovis-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkApplyColors.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkApplyIcons.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkDendrogramItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkGraphItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkGraphLayoutView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkHeatmapItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkHierarchicalGraphPipeline.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkHierarchicalGraphView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkIcicleView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkInteractorStyleAreaSelectHover.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkInteractorStyleTreeMapHover.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkParallelCoordinatesHistogramRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkParallelCoordinatesRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkParallelCoordinatesView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderedGraphRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderedHierarchyRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderedRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderedSurfaceRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderedTreeAreaRepresentation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkRenderView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkSCurveSpline.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkTanglegramItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkTreeAreaView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkTreeHeatmapItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkTreeMapView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkTreeRingView.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/vtkViewUpdater.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Views/Infovis/vtkViewsInfovisModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkViewsInfovis" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Views/Infovis/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Views/Infovis/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
