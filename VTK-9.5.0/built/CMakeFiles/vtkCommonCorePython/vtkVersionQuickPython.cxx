// python wrapper for vtkVersionQuick
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVersionQuick.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkVersionQuick(PyObject *dict); }
void PyVTKAddFile_vtkVersionQuick(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_MAJOR_VERSION", 9 },
        { "VTK_MINOR_VERSION", 5 },
        { "VTK_EPOCH_VERSION", 0 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLongLong(VTK_VERSION_CHECK(VTK_MAJOR_VERSION, VTK_MINOR_VERSION, VTK_EPOCH_VERSION));
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_VERSION_NUMBER_QUICK", o);
    Py_DECREF(o);
  }
}

