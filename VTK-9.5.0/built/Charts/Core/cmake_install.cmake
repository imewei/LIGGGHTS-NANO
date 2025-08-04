# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkChartsCore-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkChartsCore-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkChartsCore-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkChartsCore-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkChartsCore-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkChartsCore-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkAxis.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkAxisExtended.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkCategoryLegend.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChart.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartBox.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartHistogram2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartLegend.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartMatrix.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartParallelCoordinates.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartPie.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartXY.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkChartXYZ.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkColorLegend.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkColorTransferControlPointsItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkColorTransferFunctionItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkCompositeControlPointsItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkCompositeTransferFunctionItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkContextArea.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkContextPolygon.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkControlPointsItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkInteractiveArea.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkLookupTableItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPiecewiseControlPointsItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPiecewiseFunctionItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPiecewisePointHandleItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlot.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlot3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotArea.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotBag.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotBar.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotBarRangeHandlesItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotBox.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotFunctionalBag.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotGrid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotHistogram2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotLine.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotLine3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotParallelCoordinates.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotPie.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotPoints.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotPoints3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotRangeHandlesItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotStacked.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkPlotSurface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkRangeHandlesItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkScalarsToColorsItem.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Charts/Core/vtkScatterPlotMatrix.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Charts/Core/vtkChartsCoreModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Charts/Core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
