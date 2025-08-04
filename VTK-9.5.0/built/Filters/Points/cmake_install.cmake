# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkFiltersPoints-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkFiltersPoints-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersPoints-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersPoints-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersPoints-9.5.1.dylib"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersPoints-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkBoundedPointSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkConnectedPointsFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkConvertToPointCloud.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkDensifyPointCloudFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkEllipsoidalGaussianKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkEuclideanClusterExtraction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkExtractEnclosedPoints.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkExtractHierarchicalBins.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkExtractPointCloudPiece.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkExtractPoints.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkExtractSurface.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkFitImplicitFunction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkGaussianKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkGeneralizedKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkHierarchicalBinningFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkInterpolationKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkLinearKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkMaskPointsFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPCACurvatureEstimation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPCANormalEstimation.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointCloudFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointDensityFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointInterpolator2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointOccupancyFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPointSmoothingFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkPoissonDiskSampler.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkProbabilisticVoronoiKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkProjectPointsToPlane.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkRadiusOutlierRemoval.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSPHCubicKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSPHInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSPHKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSPHQuarticKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSPHQuinticKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkShepardKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkSignedDistance.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkStatisticalOutlierRemoval.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkUnsignedDistance.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkVoronoiKernel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkVoxelGrid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Points/vtkWendlandQuinticKernel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Points/vtkFiltersPointsModule.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Points/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
