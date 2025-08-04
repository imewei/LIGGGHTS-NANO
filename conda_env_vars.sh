export OMPI_CC=clang
export OMPI_CXX=clang++

export VTK_DIR=/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install

# Set environment variables for VTK
export DYLD_LIBRARY_PATH=$VTK_DIR/lib:$DYLD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=/Users/b80985/.local/share/mamba/envs/liggghts/lib:$DYLD_LIBRARY_PATH
export PYTHONPATH=$VTK_DIR/lib/python3.9/site-packages:$PYTHONPATH
