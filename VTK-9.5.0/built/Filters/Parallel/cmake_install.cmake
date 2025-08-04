# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkFiltersParallel-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkFiltersParallel-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersParallel-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersParallel-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersParallel-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersParallel-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkBlockDistribution.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkAdaptiveTemporalInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkAggregateDataSetFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkAlignImageDataSetFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkAngularPeriodicFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPAxisAlignedReflectionFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkCleanArrays.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkCollectGraph.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkCollectPolyData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkCollectTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkCutMaterial.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkDistributedDataFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkDuplicatePolyData.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkExtractCTHPart.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkExtractPolyDataPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkExtractUnstructuredGridPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkExtractUserDefinedPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkGenerateProcessIds.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkHyperTreeGridGenerateGlobalIds.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkHyperTreeGridGenerateProcessIds.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkHyperTreeGridGhostCellsGenerator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkIntegrateAttributes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkIntegrationGaussianStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkIntegrationLinearStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkIntegrationStrategy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkMergeBlocks.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkMultiProcessControllerHelper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPHyperTreeGridProbeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPeriodicFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPConvertToMultiBlockDataSet.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPExtractDataArraysOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPExtractExodusGlobalTemporalVariables.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPExtractSelectedArraysOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPieceRequestFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPieceScalars.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPipelineSize.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPKdTree.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPLinearExtrusionFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPMaskPoints.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPMergeArrays.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPOutlineCornerFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPOutlineFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPOutlineFilterInternals.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPPolyDataNormals.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPProbeFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPProjectSphereFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPReflectionFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPResampleFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPartitionBalancer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPSphereSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPTextureMapToSphere.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkPYoungsMaterialInterface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkRectilinearGridOutlineFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkRemoveGhosts.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkTransmitPolyDataPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkTransmitRectilinearGridPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkTransmitStructuredDataPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkTransmitStructuredGridPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Parallel/vtkTransmitUnstructuredGridPiece.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Parallel/vtkFiltersParallelModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Parallel/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
