// python wrapper for vtkTypeTraits
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTypeTraits.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkTypeTraits(PyObject *dict); }
void PyVTKAddFile_vtkTypeTraits(
  PyObject *dict)
{
  PyObject *o;
  o = PyUnicode_FromString("%ll");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_LONG_LONG_FORMAT", o);
    Py_DECREF(o);
  }
}

