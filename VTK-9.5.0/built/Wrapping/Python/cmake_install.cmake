# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Wrapping/Python

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/bin/vtkpython")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkpython" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkpython")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
      -delete_rpath "/Users/b80985/.local/share/mamba/envs/liggghts/lib"
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkpython")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/vtkpython")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Wrapping/Python/CMakeFiles/vtkpython.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/bin/pvtkpython")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pvtkpython" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pvtkpython")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
      -delete_rpath "/Users/b80985/.local/share/mamba/envs/liggghts/lib"
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pvtkpython")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pvtkpython")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Wrapping/Python/CMakeFiles/pvtkpython.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/generate_pyi.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtk.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/all.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/gtk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/gtk/GtkGLExtVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/gtk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/gtk/GtkGLExtVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/gtk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/gtk/GtkVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/gtk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/gtk/GtkVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/gtk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/gtk/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/numpy_interface" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/numpy_interface/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/numpy_interface" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/numpy_interface/algorithms.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/numpy_interface" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/numpy_interface/dataset_adapter.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/numpy_interface" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/numpy_interface/internal_algorithms.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/qt" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/qt/QVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/qt" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/qt/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/test" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/test/BlackBox.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/test" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/test/ErrorObserver.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/test" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/test/Testing.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/test" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/test/rtImageTest.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/test" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/test/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/vtkLoadPythonTkWidgets.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/vtkTkImageViewerWidget.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/vtkTkPhotoImage.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/vtkTkRenderWidget.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/tk" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/tk/vtkTkRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/colors.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/data_model.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/execution_model.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/keys.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/misc.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/numpy_support.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/xarray_support.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/pickle_support.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkAlgorithm.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkConstants.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkImageExportToArray.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkImageImportFromArray.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkMethodParser.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/util" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/util/vtkVariant.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/wx" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/wx/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/wx" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/wx/wxVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/vtkmodules/wx" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/vtkmodules/wx/wxVTKRenderWindowInteractor.py")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Wrapping/Python/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
