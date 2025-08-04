// python wrapper for vtkWrappingHints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkWrappingHints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkWrappingHints(PyObject *dict); }
void PyVTKAddFile_vtkWrappingHints(
  PyObject *dict)
{
  PyObject *o;
  o = PyUnicode_FromString("is redundant");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MARSHAL_EXCLUDE_REASON_IS_REDUNDANT", o);
    Py_DECREF(o);
  }
  o = PyUnicode_FromString("is internal");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MARSHAL_EXCLUDE_REASON_IS_INTERNAL", o);
    Py_DECREF(o);
  }
  o = PyUnicode_FromString("(de)serialization is not supported for this type of property");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MARSHAL_EXCLUDE_REASON_NOT_SUPPORTED", o);
    Py_DECREF(o);
  }
}

