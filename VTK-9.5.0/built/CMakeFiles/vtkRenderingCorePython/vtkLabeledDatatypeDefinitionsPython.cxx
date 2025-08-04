// python wrapper for vtkLabeledDatatypeDefinitions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkLabeledDatatypeDefinitions.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLabeledDatatypeDefinitions(PyObject *dict); }
void PyVTKAddFile_vtkLabeledDatatypeDefinitions(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_LABEL_IDS", 0 },
        { "VTK_LABEL_SCALARS", 1 },
        { "VTK_LABEL_VECTORS", 2 },
        { "VTK_LABEL_NORMALS", 3 },
        { "VTK_LABEL_TCOORDS", 4 },
        { "VTK_LABEL_TENSORS", 5 },
        { "VTK_LABEL_FIELD_DATA", 6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

