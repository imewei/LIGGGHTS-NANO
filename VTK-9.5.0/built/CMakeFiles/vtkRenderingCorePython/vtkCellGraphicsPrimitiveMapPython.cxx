// python wrapper for vtkCellGraphicsPrimitiveMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGraphicsPrimitiveMap.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGraphicsPrimitiveMap(PyObject *dict); }

static PyObject *
PyvtkCellGraphicsPrimitiveMap_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGraphicsPrimitiveMap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGraphicsPrimitiveMap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkCellGraphicsPrimitiveMap *op = static_cast<vtkCellGraphicsPrimitiveMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->IsA(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGraphicsPrimitiveMap_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGraphicsPrimitiveMap::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGraphicsPrimitiveMap_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkCellGraphicsPrimitiveMap *op = static_cast<vtkCellGraphicsPrimitiveMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetNumberOfGenerationsFromBase(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGraphicsPrimitiveMap_Methods[] = {
  {"IsTypeOf", PyvtkCellGraphicsPrimitiveMap_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\n"},
  {"IsA", PyvtkCellGraphicsPrimitiveMap_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGraphicsPrimitiveMap_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGraphicsPrimitiveMap_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGraphicsPrimitiveMap_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static const char *PyvtkCellGraphicsPrimitiveMap_Doc =
  "vtkCellGraphicsPrimitiveMap - Maps cell connectivity and offsets from\nVTK data model into primitives that graphics libraries expect\n(points, lines and triangles)\n\n"
  "When given only vertices, lines and triangles and using 32-bit\n"
  "integer IDs, this class opts into low memory code paths, i.e, does\n"
  "not copy indices into new arrays. When input has poly-vertices,\n"
  "poly-lines and polygons or triangle strips or uses 64-bit integer\n"
  "IDs, this class makes an additional copy of the indices. A message is\n"
  "logged in the console to warn about potential OOM errors.\n\n";

static PyObject *
PyvtkCellGraphicsPrimitiveMap_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkCellGraphicsPrimitiveMap_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkCellGraphicsPrimitiveMap_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGraphicsPrimitiveMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCellGraphicsPrimitiveMap", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCellGraphicsPrimitiveMap_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkCellGraphicsPrimitiveMap_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkCellGraphicsPrimitiveMap_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkCellGraphicsPrimitiveMap_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkCellGraphicsPrimitiveMap_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGraphicsPrimitiveMap_TypeNew(); }
#define DECLARED_PyvtkCellGraphicsPrimitiveMap_TypeNew
#endif

PyObject *PyvtkCellGraphicsPrimitiveMap_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkCellGraphicsPrimitiveMap_Type,
    PyvtkCellGraphicsPrimitiveMap_Methods,
    PyvtkCellGraphicsPrimitiveMap_GetSets,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGraphicsPrimitiveMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGraphicsPrimitiveMap_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGraphicsPrimitiveMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

