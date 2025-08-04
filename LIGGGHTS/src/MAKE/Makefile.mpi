# mpi = mpic++, VTK 9.5 (alternative compilation, might need modification)

SHELL = /bin/sh

# ---------------------------------------------------------------------
# compiler/linker settings
# specify flags and libraries needed for your compiler

CC =		mpic++
# Optimized version
CCFLAGS =	-O2 -funroll-loops -fstrict-aliasing -Wall -Wno-unused-result -fPIC
# Debug version
#CCFLAGS =	-Og -g -pg -fPIC
SHFLAGS =	-fPIC
DEPFLAGS =	-M

LINK =		mpic++
# Optimized version
LINKFLAGS =	-O2 -fPIC
# Debug version
#LINKFLAGS =	-Og -g -pg -fPIC
LIB =		-lstdc++
SIZE =		size

ARCHIVE =		ar
ARFLAGS =		-rcsv
SHLIBFLAGS =	-shared

# ---------------------------------------------------------------------
# LAMMPS-specific settings
# specify settings for LAMMPS features you will use
# if you change any -D setting, do full re-compile after "make clean"

# LAMMPS ifdef settings, OPTIONAL
# see possible settings in doc/Section_start.html#2_2 (step 4)

LMP_INC =	-DLAMMPS_GZIP -DLAMMPS_VTK

# MPI library, REQUIRED
# see discussion in doc/Section_start.html#2_2 (step 5)
# can point to dummy MPI library in src/STUBS as in Makefile.serial
# INC = path for mpi.h, MPI compiler settings
# PATH = path for MPI library
# LIB = name of MPI library

MPI_INC = -I/Users/b80985/.local/share/mamba/envs/liggghts/include
MPI_PATH = -L/Users/b80985/.local/share/mamba/envs/liggghts/lib
MPI_LIB = -lmpi

# FFT library, OPTIONAL
# see discussion in doc/Section_start.html#2_2 (step 6)
# can be left blank to use provided KISS FFT library
# INC = -DFFT setting, e.g. -DFFT_FFTW, FFT compiler settings
# PATH = path for FFT library
# LIB = name of FFT library

FFT_INC = -I/opt/homebrew/include
FFT_PATH = -L/opt/homebrew/lib
FFT_LIB = -lfftw3

# JPEG and/or PNG library, OPTIONAL
# see discussion in doc/Section_start.html#2_2 (step 7)
# only needed if -DLAMMPS_JPEG or -DLAMMPS_PNG listed with LMP_INC
# INC = path(s) for jpeglib.h and/or png.h
# PATH = path(s) for JPEG library and/or PNG library
# LIB = name(s) of JPEG library and/or PNG library

JPG_INC = -I/opt/homebrew/include
JPG_PATH = -L/opt/homebrew/lib
JPG_LIB = -ljpeg -lpng

# VTK library, OPTIONAL
# INC = path for VTK header files
# PATH = path for VTK library
# LIB = name of VTK library

VTK_INC =	-I/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/include/vtk-9.5
VTK_PATH =	-L/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/lib
# VTK 9.5 core libraries in link order
VTK_LIBS_95 = -lvtkCommonCore-9.5 -lvtkCommonDataModel-9.5 -lvtkIOXML-9.5 -lvtkIOImage-9.5 -lvtkRenderingCore-9.5 -lvtkRenderingOpenGL2-9.5 -lvtksys-9.5

# Additional VTK libraries (from existing configuration)
VTK_LIBS_95 += -lvtkIOCore-9.5 -lvtkIOLegacy-9.5 -lvtkCommonExecutionModel-9.5 -lvtkFiltersCore-9.5

# Conditionally add MPI/Parallel libraries if present
ifneq ("$(wildcard /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/lib/libvtkParallelCore-9.5*.dylib)", "")
    VTK_LIBS_95 += -lvtkParallelCore-9.5
endif
ifneq ("$(wildcard /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/lib/libvtkParallelMPI-9.5*.dylib)", "")
    VTK_LIBS_95 += -lvtkParallelMPI-9.5
endif
ifneq ("$(wildcard /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/lib/libvtkIOParallel-9.5*.dylib)", "")
    VTK_LIBS_95 += -lvtkIOParallel-9.5
endif
ifneq ("$(wildcard /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install/lib/libvtkIOParallelXML-9.5*.dylib)", "")
    VTK_LIBS_95 += -lvtkIOParallelXML-9.5
endif

VTK_LIB = $(VTK_LIBS_95)

# ---------------------------------------------------------------------
# build rules and dependencies
# no need to edit this section

include	Makefile.package.settings
include	Makefile.package

EXTRA_INC = $(LMP_INC) $(PKG_INC) $(MPI_INC) $(FFT_INC) $(JPG_INC) $(VTK_INC) $(PKG_SYSINC)
EXTRA_PATH = $(PKG_PATH) $(MPI_PATH) $(FFT_PATH) $(JPG_PATH) $(VTK_PATH) $(PKG_SYSPATH)
EXTRA_LIB = $(PKG_LIB) $(MPI_LIB) $(FFT_LIB) $(JPG_LIB) $(VTK_LIB) $(PKG_SYSLIB)

# Path to src files

vpath %.cpp ..
vpath %.h ..

# Link target

$(EXE):	$(OBJ)
	$(LINK) $(LINKFLAGS) $(EXTRA_PATH) $(OBJ) $(EXTRA_LIB) $(LIB) -o $(EXE)
	$(SIZE) $(EXE)

# Library targets

lib:	$(OBJ)
	$(ARCHIVE) $(ARFLAGS) $(EXE) $(OBJ)

shlib:	$(OBJ)
	$(CC) $(CCFLAGS) $(SHFLAGS) $(SHLIBFLAGS) $(EXTRA_PATH) -o $(EXE) \
        $(OBJ) $(EXTRA_LIB) $(LIB)

# Compilation rules

%.o:%.cpp
	$(CC) $(CCFLAGS) $(SHFLAGS) $(EXTRA_INC) -c $<

%.d:%.cpp
	$(CC) $(CCFLAGS) $(EXTRA_INC) $(DEPFLAGS) $< > $@

# Individual dependencies

DEPENDS = $(OBJ:.o=.d)
sinclude $(DEPENDS)
