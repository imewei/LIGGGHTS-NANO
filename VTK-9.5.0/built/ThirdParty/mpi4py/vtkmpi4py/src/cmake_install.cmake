# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/mpi4py/vtkmpi4py/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/mpi4py/__init__.py"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/mpi4py/__init__.pxd"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/mpi4py/MPI.pxd"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/mpi4py/mpi.cfg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py" TYPE MODULE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/python3.9/site-packages/mpi4py/MPI.cpython-39-darwin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py/MPI.cpython-39-darwin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py/MPI.cpython-39-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/b80985/.local/share/mamba/envs/liggghts/lib"
      -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py/MPI.cpython-39-darwin.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.9/site-packages/mpi4py/MPI.cpython-39-darwin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5/vtkmpi4py/mpi4py/" TYPE DIRECTORY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/ThirdParty/mpi4py/vtkmpi4py/src/mpi4py/include/mpi4py/")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/ThirdParty/mpi4py/vtkmpi4py/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
