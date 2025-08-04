# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkInfovisCore-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkInfovisCore-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisCore-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisCore-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInfovisCore-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkInfovisCore-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkInfovisCore-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkAddMembershipArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkAdjacencyMatrixToEdgeTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkArrayNorm.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkArrayToTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkCollapseGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkCollapseVerticesByArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkContinuousScatterplot.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkDotProductSimilarity.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkEdgeCenters.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkExpandSelectedGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkExtractSelectedGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkExtractSelectedTree.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkGenerateIndexArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkGraphHierarchicalBundleEdges.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkGroupLeafVertices.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkKCoreDecomposition.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkMergeColumns.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkMergeGraphs.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkMergeTables.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkMutableGraphHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkNetworkHierarchy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkPipelineGraphSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkPruneTreeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkRandomGraphSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkReduceTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkRemoveHiddenData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkRemoveIsolatedVertices.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkSparseArrayToTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkStreamGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkStringToCategory.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkStringToNumeric.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTableToArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTableToGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTableToSparseArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTableToTreeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkThresholdGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkThresholdTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTransferAttributes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTransposeMatrix.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTreeDifferenceFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTreeFieldAggregator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkTreeLevelsFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkVertexDegree.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/vtkWordCloud.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Infovis/Core/vtkInfovisCoreModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkInfovisCore" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Infovis/Core/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Infovis/Core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
