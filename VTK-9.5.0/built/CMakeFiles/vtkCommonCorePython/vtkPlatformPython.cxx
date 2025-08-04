// python wrapper for vtkPlatform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPlatform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPlatform(PyObject *dict); }
void PyVTKAddFile_vtkPlatform(
  PyObject *dict)
{
  PyObject *o;
  o = PyLong_FromLong(32767);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAXPATH", o);
    Py_DECREF(o);
  }
}

