// python wrapper for vtkType
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkType.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkType(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTypesDataObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkTypesDataObject", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkTypesDataObject_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTypesDataObject_Type, static_cast<int>(val));
}

void PyVTKAddFile_vtkType(
  PyObject *dict)
{
  PyObject *o;
  PyType_Ready(&PyvtkTypesDataObject_Type);
  PyVTKEnum_Add(&PyvtkTypesDataObject_Type, "vtkTypesDataObject");

  o = (PyObject *)&PyvtkTypesDataObject_Type;
  if (PyDict_SetItemString(dict, "vtkTypesDataObject", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 29; c++)
  {
    static const struct { const char *name; int value; }
      constants[29] = {
        { "VTK_SIZEOF_CHAR", KWIML_ABI_SIZEOF_CHAR },
        { "VTK_SIZEOF_SHORT", KWIML_ABI_SIZEOF_SHORT },
        { "VTK_SIZEOF_INT", KWIML_ABI_SIZEOF_INT },
        { "VTK_SIZEOF_LONG", KWIML_ABI_SIZEOF_LONG },
        { "VTK_SIZEOF_LONG_LONG", KWIML_ABI_SIZEOF_LONG_LONG },
        { "VTK_SIZEOF_FLOAT", KWIML_ABI_SIZEOF_FLOAT },
        { "VTK_SIZEOF_DOUBLE", KWIML_ABI_SIZEOF_DOUBLE },
        { "VTK_SIZEOF_VOID_P", KWIML_ABI_SIZEOF_DATA_PTR },
        { "VTK_TYPE_CHAR_IS_SIGNED", 1 },
        { "VTK_VOID", 0 },
        { "VTK_BIT", 1 },
        { "VTK_CHAR", 2 },
        { "VTK_SIGNED_CHAR", 15 },
        { "VTK_UNSIGNED_CHAR", 3 },
        { "VTK_SHORT", 4 },
        { "VTK_UNSIGNED_SHORT", 5 },
        { "VTK_INT", 6 },
        { "VTK_UNSIGNED_INT", 7 },
        { "VTK_LONG", 8 },
        { "VTK_UNSIGNED_LONG", 9 },
        { "VTK_FLOAT", 10 },
        { "VTK_DOUBLE", 11 },
        { "VTK_ID_TYPE", 12 },
        { "VTK_STRING", 13 },
        { "VTK_OPAQUE", 14 },
        { "VTK_LONG_LONG", 16 },
        { "VTK_UNSIGNED_LONG_LONG", 17 },
        { "VTK_VARIANT", 20 },
        { "VTK_OBJECT", 21 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 50; c++)
  {
    static const struct { const char *name; vtkTypesDataObject value; }
      constants[50] = {
        { "VTK_POLY_DATA", VTK_POLY_DATA },
        { "VTK_STRUCTURED_POINTS", VTK_STRUCTURED_POINTS },
        { "VTK_STRUCTURED_GRID", VTK_STRUCTURED_GRID },
        { "VTK_RECTILINEAR_GRID", VTK_RECTILINEAR_GRID },
        { "VTK_UNSTRUCTURED_GRID", VTK_UNSTRUCTURED_GRID },
        { "VTK_PIECEWISE_FUNCTION", VTK_PIECEWISE_FUNCTION },
        { "VTK_IMAGE_DATA", VTK_IMAGE_DATA },
        { "VTK_DATA_OBJECT", VTK_DATA_OBJECT },
        { "VTK_DATA_SET", VTK_DATA_SET },
        { "VTK_POINT_SET", VTK_POINT_SET },
        { "VTK_UNIFORM_GRID", VTK_UNIFORM_GRID },
        { "VTK_COMPOSITE_DATA_SET", VTK_COMPOSITE_DATA_SET },
        { "VTK_MULTIGROUP_DATA_SET", VTK_MULTIGROUP_DATA_SET }, /* deprecated */
        { "VTK_MULTIBLOCK_DATA_SET", VTK_MULTIBLOCK_DATA_SET },
        { "VTK_HIERARCHICAL_DATA_SET", VTK_HIERARCHICAL_DATA_SET }, /* deprecated */
        { "VTK_HIERARCHICAL_BOX_DATA_SET", VTK_HIERARCHICAL_BOX_DATA_SET }, /* deprecated */
        { "VTK_GENERIC_DATA_SET", VTK_GENERIC_DATA_SET },
        { "VTK_HYPER_OCTREE", VTK_HYPER_OCTREE }, /* deprecated */
        { "VTK_TEMPORAL_DATA_SET", VTK_TEMPORAL_DATA_SET }, /* deprecated */
        { "VTK_TABLE", VTK_TABLE },
        { "VTK_GRAPH", VTK_GRAPH },
        { "VTK_TREE", VTK_TREE },
        { "VTK_SELECTION", VTK_SELECTION },
        { "VTK_DIRECTED_GRAPH", VTK_DIRECTED_GRAPH },
        { "VTK_UNDIRECTED_GRAPH", VTK_UNDIRECTED_GRAPH },
        { "VTK_MULTIPIECE_DATA_SET", VTK_MULTIPIECE_DATA_SET },
        { "VTK_DIRECTED_ACYCLIC_GRAPH", VTK_DIRECTED_ACYCLIC_GRAPH },
        { "VTK_ARRAY_DATA", VTK_ARRAY_DATA },
        { "VTK_REEB_GRAPH", VTK_REEB_GRAPH },
        { "VTK_UNIFORM_GRID_AMR", VTK_UNIFORM_GRID_AMR },
        { "VTK_NON_OVERLAPPING_AMR", VTK_NON_OVERLAPPING_AMR },
        { "VTK_OVERLAPPING_AMR", VTK_OVERLAPPING_AMR },
        { "VTK_HYPER_TREE_GRID", VTK_HYPER_TREE_GRID },
        { "VTK_MOLECULE", VTK_MOLECULE },
        { "VTK_PISTON_DATA_OBJECT", VTK_PISTON_DATA_OBJECT }, /* deprecated */
        { "VTK_PATH", VTK_PATH },
        { "VTK_UNSTRUCTURED_GRID_BASE", VTK_UNSTRUCTURED_GRID_BASE },
        { "VTK_PARTITIONED_DATA_SET", VTK_PARTITIONED_DATA_SET },
        { "VTK_PARTITIONED_DATA_SET_COLLECTION", VTK_PARTITIONED_DATA_SET_COLLECTION },
        { "VTK_UNIFORM_HYPER_TREE_GRID", VTK_UNIFORM_HYPER_TREE_GRID },
        { "VTK_EXPLICIT_STRUCTURED_GRID", VTK_EXPLICIT_STRUCTURED_GRID },
        { "VTK_DATA_OBJECT_TREE", VTK_DATA_OBJECT_TREE },
        { "VTK_ABSTRACT_ELECTRONIC_DATA", VTK_ABSTRACT_ELECTRONIC_DATA },
        { "VTK_OPEN_QUBE_ELECTRONIC_DATA", VTK_OPEN_QUBE_ELECTRONIC_DATA },
        { "VTK_ANNOTATION", VTK_ANNOTATION },
        { "VTK_ANNOTATION_LAYERS", VTK_ANNOTATION_LAYERS },
        { "VTK_BSP_CUTS", VTK_BSP_CUTS },
        { "VTK_GEO_JSON_FEATURE", VTK_GEO_JSON_FEATURE },
        { "VTK_IMAGE_STENCIL_DATA", VTK_IMAGE_STENCIL_DATA },
        { "VTK_CELL_GRID", VTK_CELL_GRID },
      };

    o = PyvtkTypesDataObject_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BIT_MIN", 0 },
        { "VTK_BIT_MAX", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; char value; }
      constants[2] = {
        { "VTK_CHAR_MIN", VTK_TYPE_CAST(char, 0x80) },
        { "VTK_CHAR_MAX", VTK_TYPE_CAST(char, 0x7f) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; signed char value; }
      constants[2] = {
        { "VTK_SIGNED_CHAR_MIN", VTK_TYPE_CAST(signed char, 0x80) },
        { "VTK_SIGNED_CHAR_MAX", VTK_TYPE_CAST(signed char, 0x7f) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned char value; }
      constants[2] = {
        { "VTK_UNSIGNED_CHAR_MIN", VTK_TYPE_CAST(unsigned char, 0u) },
        { "VTK_UNSIGNED_CHAR_MAX", VTK_TYPE_CAST(unsigned char, 0xffu) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; short value; }
      constants[2] = {
        { "VTK_SHORT_MIN", VTK_TYPE_CAST(short, 0x8000) },
        { "VTK_SHORT_MAX", VTK_TYPE_CAST(short, 0x7fff) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned short value; }
      constants[2] = {
        { "VTK_UNSIGNED_SHORT_MIN", VTK_TYPE_CAST(unsigned short, 0u) },
        { "VTK_UNSIGNED_SHORT_MAX", VTK_TYPE_CAST(unsigned short, 0xffffu) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_INT_MIN", VTK_TYPE_CAST(int, ~(~0u >> 1)) },
        { "VTK_INT_MAX", VTK_TYPE_CAST(int, ~0u >> 1) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned int value; }
      constants[2] = {
        { "VTK_UNSIGNED_INT_MIN", VTK_TYPE_CAST(unsigned int, 0) },
        { "VTK_UNSIGNED_INT_MAX", VTK_TYPE_CAST(unsigned int, ~0u) },
      };

    o = PyLong_FromUnsignedLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_LONG_MIN", VTK_TYPE_CAST(long, ~(~0ul >> 1)) },
        { "VTK_LONG_MAX", VTK_TYPE_CAST(long, ~0ul >> 1) },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_UNSIGNED_LONG_MIN", VTK_TYPE_CAST(unsigned long, 0ul) },
        { "VTK_UNSIGNED_LONG_MAX", VTK_TYPE_CAST(unsigned long, ~0ul) },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; float value; }
      constants[2] = {
        { "VTK_FLOAT_MIN", VTK_TYPE_CAST(float, -1.0e+38f) },
        { "VTK_FLOAT_MAX", VTK_TYPE_CAST(float, 1.0e+38f) },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_DOUBLE_MIN", VTK_TYPE_CAST(double, -1.0e+299) },
        { "VTK_DOUBLE_MAX", VTK_TYPE_CAST(double, 1.0e+299) },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_LONG_LONG_MIN", VTK_TYPE_CAST(long long, ~(~0ull >> 1)) },
        { "VTK_LONG_LONG_MAX", VTK_TYPE_CAST(long long, ~0ull >> 1) },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_UNSIGNED_LONG_LONG_MIN", VTK_TYPE_CAST(unsigned long long, 0ull) },
        { "VTK_UNSIGNED_LONG_LONG_MAX", VTK_TYPE_CAST(unsigned long long, ~0ull) },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_UNSIGNED_CHAR);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_UINT8", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned char value; }
      constants[2] = {
        { "VTK_TYPE_UINT8_MIN", VTK_UNSIGNED_CHAR_MIN },
        { "VTK_TYPE_UINT8_MAX", VTK_UNSIGNED_CHAR_MAX },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_SIGNED_CHAR);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_INT8", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; signed char value; }
      constants[2] = {
        { "VTK_TYPE_INT8_MIN", VTK_SIGNED_CHAR_MIN },
        { "VTK_TYPE_INT8_MAX", VTK_SIGNED_CHAR_MAX },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_UNSIGNED_SHORT);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_UINT16", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned short value; }
      constants[2] = {
        { "VTK_TYPE_UINT16_MIN", VTK_UNSIGNED_SHORT_MIN },
        { "VTK_TYPE_UINT16_MAX", VTK_UNSIGNED_SHORT_MAX },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_SHORT);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_INT16", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; short value; }
      constants[2] = {
        { "VTK_TYPE_INT16_MIN", VTK_SHORT_MIN },
        { "VTK_TYPE_INT16_MAX", VTK_SHORT_MAX },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_UNSIGNED_INT);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_UINT32", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned int value; }
      constants[2] = {
        { "VTK_TYPE_UINT32_MIN", VTK_UNSIGNED_INT_MIN },
        { "VTK_TYPE_UINT32_MAX", VTK_UNSIGNED_INT_MAX },
      };

    o = PyLong_FromUnsignedLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_TYPE_INT32", VTK_INT },
        { "VTK_TYPE_INT32_MIN", VTK_INT_MIN },
        { "VTK_TYPE_INT32_MAX", VTK_INT_MAX },
        { "VTK_TYPE_UINT64", VTK_UNSIGNED_LONG_LONG },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_TYPE_UINT64_MIN", VTK_UNSIGNED_LONG_LONG_MIN },
        { "VTK_TYPE_UINT64_MAX", VTK_UNSIGNED_LONG_LONG_MAX },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_LONG_LONG);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_TYPE_INT64", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_TYPE_INT64_MIN", VTK_LONG_LONG_MIN },
        { "VTK_TYPE_INT64_MAX", VTK_LONG_LONG_MAX },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(VTK_UNSIGNED_LONG);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MTIME_TYPE_IMPL", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_MTIME_MIN", VTK_UNSIGNED_LONG_MIN },
        { "VTK_MTIME_MAX", VTK_UNSIGNED_LONG_MAX },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_TYPE_FLOAT32", VTK_FLOAT },
        { "VTK_TYPE_FLOAT64", VTK_DOUBLE },
        { "VTK_ID_TYPE_IMPL", VTK_LONG_LONG },
        { "VTK_SIZEOF_ID_TYPE", VTK_SIZEOF_LONG_LONG },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_ID_MIN", VTK_LONG_LONG_MIN },
        { "VTK_ID_MAX", VTK_LONG_LONG_MAX },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyUnicode_FromString("lld");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_ID_TYPE_PRId", o);
    Py_DECREF(o);
  }
}

