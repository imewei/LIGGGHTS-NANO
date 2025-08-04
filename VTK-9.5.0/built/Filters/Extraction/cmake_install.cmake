# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkFiltersExtraction-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkFiltersExtraction-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersExtraction-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersExtraction-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkFiltersExtraction-9.5.1.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
        -delete_rpath "/Users/b80985/.local/share/mamba/envs/liggghts/lib"
        -add_rpath "@loader_path"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" -x "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkFiltersExtraction-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkBlockSelector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkConvertSelection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExpandMarkedElements.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractBlock.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractBlockUsingDataAssembly.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractCellsByType.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractDataArraysOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractDataOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractDataSets.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractExodusGlobalTemporalVariables.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractGeometry.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractGrid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractLevel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractParticlesOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractPolyDataGeometry.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractRectilinearGrid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractSelectedArraysOverTime.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractSelectedRows.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractSelection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractTensorComponents.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractTimeSteps.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractUnstructuredGrid.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkExtractVectorComponents.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkFrustumSelector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkHierarchicalDataExtractDataSets.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkHierarchicalDataExtractLevel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkLocationSelector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkProbeSelectedLocations.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkSelector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/vtkValueSelector.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Extraction/vtkFiltersExtractionModule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkFiltersExtraction" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Filters/Extraction/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Filters/Extraction/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
