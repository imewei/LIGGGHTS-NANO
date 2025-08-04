// python wrapper for vtkDGArraysInputAccessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkDGArraysInputAccessor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGArraysInputAccessor(PyObject *dict); }

static PyObject *
PyvtkDGArraysInputAccessor_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetCellId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGArraysInputAccessor_GetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameter");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = op->GetParameter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkDGArraysInputAccessor_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->GetKey();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGArraysInputAccessor_Restart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Restart");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Restart();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGArraysInputAccessor_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGArraysInputAccessor_size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "size");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArraysInputAccessor *op = static_cast<vtkDGArraysInputAccessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = op->size();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGArraysInputAccessor_Methods[] = {
  {"GetCellId", PyvtkDGArraysInputAccessor_GetCellId, METH_VARARGS,
   "GetCellId(self, iteration:int) -> int\nC++: vtkIdType GetCellId(vtkTypeUInt64 iteration)\n\n"},
  {"GetParameter", PyvtkDGArraysInputAccessor_GetParameter, METH_VARARGS,
   "GetParameter(self, iteration:int) -> vtkVector3d\nC++: vtkVector3d GetParameter(vtkTypeUInt64 iteration)\n\n"},
  {"GetKey", PyvtkDGArraysInputAccessor_GetKey, METH_VARARGS,
   "GetKey(self) -> int\nC++: vtkTypeUInt64 GetKey()\n\n"},
  {"Restart", PyvtkDGArraysInputAccessor_Restart, METH_VARARGS,
   "Restart(self) -> None\nC++: void Restart()\n\n"},
  {"IsAtEnd", PyvtkDGArraysInputAccessor_IsAtEnd, METH_VARARGS,
   "IsAtEnd(self) -> bool\nC++: bool IsAtEnd()\n\n"},
  {"size", PyvtkDGArraysInputAccessor_size, METH_VARARGS,
   "size(self) -> int\nC++: std::size_t size()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGArraysInputAccessor_GetSets[] = {
  {
    /*name=*/pystr("key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGArraysInputAccessor_GetKey(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetKey\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGArraysInputAccessor");

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    vtkDGArraysInputAccessor *op = new vtkDGArraysInputAccessor(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkDGArraysInputAccessor", op);
  }

  return result;
}

static PyObject *
PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGArraysInputAccessor");

  vtkDGArraysInputAccessor *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDGArraysInputAccessor"))
  {
    vtkDGArraysInputAccessor *op = new vtkDGArraysInputAccessor(*temp0);

    result = PyVTKSpecialObject_New("vtkDGArraysInputAccessor", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_Methods[] = {
  {"vtkDGArraysInputAccessor", PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_s2, METH_VARARGS,
   "@W vtkDGArraysInputAccessor"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_s1(self, args);
    case 1:
      return PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDGArraysInputAccessor");
  return nullptr;
}


static const char *PyvtkDGArraysInputAccessor_Doc =

  "vtkDGArraysInputAccessor(cellIds:vtkDataArray, rst:vtkDataArray)\n    -> vtkDGArraysInputAccessor\nC++: vtkDGArraysInputAccessor(vtkDataArray *cellIds,\n    vtkDataArray *rst)\nvtkDGArraysInputAccessor(other:vtkDGArraysInputAccessor)\n    -> vtkDGArraysInputAccessor\nC++: vtkDGArraysInputAccessor(const vtkDGArraysInputAccessor &other)\n""\n"
  "vtkDGArraysInputAccessor - Evaluate DG cells whose indices and\nparameters are provided by vtkDataArray instances.\n\n"
;

static PyObject *
PyvtkDGArraysInputAccessor_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor(nullptr, args);
}

static void PyvtkDGArraysInputAccessor_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGArraysInputAccessor *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGArraysInputAccessor_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGArraysInputAccessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGArraysInputAccessor", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGArraysInputAccessor_Delete, // tp_dealloc
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
  PyvtkDGArraysInputAccessor_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGArraysInputAccessor_Doc, // tp_doc
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
  PyvtkDGArraysInputAccessor_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDGArraysInputAccessor_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDGArraysInputAccessor(*static_cast<const vtkDGArraysInputAccessor*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDGArraysInputAccessor_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGArraysInputAccessor_TypeNew(); }
#define DECLARED_PyvtkDGArraysInputAccessor_TypeNew
#endif

PyObject *PyvtkDGArraysInputAccessor_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGArraysInputAccessor_Type,
    PyvtkDGArraysInputAccessor_Methods,
    PyvtkDGArraysInputAccessor_GetSets,
    PyvtkDGArraysInputAccessor_vtkDGArraysInputAccessor_Methods,
    &PyvtkDGArraysInputAccessor_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGArraysInputAccessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGArraysInputAccessor_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGArraysInputAccessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

