#!/bin/bash

# Set VTK base directory
export VTK_DIR=/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install

# Set environment variables for VTK
export DYLD_LIBRARY_PATH=$VTK_DIR/lib:$DYLD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=/Users/b80985/.local/share/mamba/envs/liggghts/lib:$DYLD_LIBRARY_PATH
export PYTHONPATH=$VTK_DIR/lib/python3.9/site-packages:$PYTHONPATH
export C_INCLUDE_PATH=$VTK_DIR/include/vtk-9.5:$C_INCLUDE_PATH
export CPLUS_INCLUDE_PATH=$VTK_DIR/include/vtk-9.5:$CPLUS_INCLUDE_PATH

# Print confirmation
echo "VTK environment variables set:"
echo "DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH"
echo "PYTHONPATH=$PYTHONPATH"
echo "C_INCLUDE_PATH=$C_INCLUDE_PATH"
echo "CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH"