# LIGGGHTS-NANO Fork for Apple M1 (Pro, 14-inch, 2021)

This repository is a fork of [LIGGGHTS-NANO](https://github.com/CFDEMproject/LIGGGHTS-PUBLIC), updated to compile and run on Apple M1 chips (specifically tested on a MacBook Pro, 14-inch, 2021). The fork includes modifications to ensure compatibility with the ARM architecture and provides instructions for setting up the build environment using a Miniforge3 Conda environment.

## Overview

LIGGGHTS-NANO is an extension of the LIGGGHTS Discrete Element Method (DEM) simulation software, tailored for nanoscale simulations. This fork enables compilation and execution on Apple M1 systems, leveraging a locally compiled VTK 9.5.0 with MPI support and Python wrappers, built within a Miniforge3 Conda environment.

## System Requirements

- **Hardware**: Apple M1 chip (tested on MacBook Pro, 14-inch, 2021)
- **Operating System**: macOS (tested on macOS 15.6.0 or later)
- **Conda**: Miniforge3 (recommended for ARM64 compatibility)
- **Python**: Version 3.9
- **MPI**: OpenMPI 4.1.6
- **VTK**: Version 9.5.0 (compiled with MPI support and Python wrappers)
- **Compiler**: Apple Clang 17.0.0 (provided by Xcode Command Line Tools)

## Environment Setup

### Prerequisites

1. **Install Miniforge3**:
   - Download and install Miniforge3 for ARM64 from the [Miniforge GitHub page](https://github.com/conda-forge/miniforge).
   - Create a Conda environment for the project:
     ```bash
     mamba create -n liggghts python=3.9
     mamba activate liggghts
     ```

2. **Install OpenMPI**:
   - Install OpenMPI 4.1.6 within the Conda environment:
     ```bash
     mamba install openmpi=4.1.6
     ```

3. **Verify Compiler and MPI**:
   - Ensure the Apple Clang compiler and OpenMPI are correctly set up:
     ```bash
     mpicc --version
     ```
     Expected output:
     ```
     Apple clang version 17.0.0 (clang-1700.0.13.5)
     Target: arm64-apple-darwin24.6.0
     Thread model: posix
     InstalledDir: /Library/Developer/CommandLineTools/usr/bin
     ```

     ```bash
     mpicc --showme
     ```
     Expected output:
     ```
     clang -I/Users/<username>/.local/share/mamba/envs/liggghts/include -L/Users/<username>/.local/share/mamba/envs/liggghts/lib -Wl,-rpath,/Users/<username>/.local/share/mamba/envs/liggghts/lib -lmpi
     ```

     ```bash
     mpirun --version
     ```
     Expected output:
     ```
     mpirun (Open MPI) 4.1.6
     ```

4. **Install and Compile VTK**:
     ```bash
     mkdir built && cd built
     cmake --build . --parallel 8
     ccmake .. \                                                          
    	-DCMAKE_BUILD_TYPE=Release \
    	-DVTK_USE_MPI=ON \
    	-DVTK_WRAP_PYTHON=ON \
    	-DBUILD_SHARED_LIBS=ON \
    	-DBUILD_TESTING=OFF \
    	-DBUILD_EXAMPLES=OFF \
    	-DVTK_Group_MPI=ON \
    	-DVTK_Group_Rendering=ON \
    	-DVTK_Group_StandAlone=ON \
    	-DCMAKE_INSTALL_PREFIX=../install \
    	-DCMAKE_POLICY_VERSION_MINIMUM=3.5
     cmake --build . --parallel <number-of-processes>
     cmake --install . --prefix ../install/
     ```
   - Ensure VTK is installed in the Conda environment's library paths.

## Building LIGGGHTS-NANO

1. Compile LIGGGHTS-NANO:
   ```bash
   make auto
   make mpi
   ```

4. Verify the build:
   - Ensure the executable is generated and compatible with the M1 architecture:
     ```bash
     file lmp_auto
     ```
     Expected output:
     ```
     lmp_auto: Mach-O 64-bit executable arm64
     ```

## Running Simulations

1. Activate the Conda environment:
   ```bash
   mamba activate liggghts
   ```

2. Run a simulation:
   ```bash
   mpirun -np <number-of-processes> ./lmp_auto -in <input-script>.in
   ```

## Notes

- This fork has been tested on a MacBook Pro (14-inch, 2021) with macOS 15.6.0. Compatibility with other macOS versions or M1/M2 variants may vary.
- Ensure all dependencies are installed in the Conda environment to avoid conflicts with system libraries.
- For issues with VTK or MPI, verify the library paths in the Conda environment and update `DYLD_LIBRARY_PATH` if necessary:
  ```bash
  export DYLD_LIBRARY_PATH=$CONDA_PREFIX/lib:$DYLD_LIBRARY_PATH