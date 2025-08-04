from mpi4py import MPI
import vtk
from vtkmodules.vtkParallelMPI import vtkMPIController

print('MPI implementation:', MPI.Get_library_version())
print('MPI rank:', MPI.COMM_WORLD.Get_rank())
print('VTK version:', vtk.vtkVersion.GetVTKVersion())
print('controller', vtkMPIController().GetClassName())