// python wrapper for vtkDGArrayOutputAccessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGArrayOutputAccessor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGArrayOutputAccessor(PyObject *dict); }

static PyObject *
PyvtkDGArrayOutputAccessor_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArrayOutputAccessor *op = static_cast<vtkDGArrayOutputAccessor *>(vp);

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
PyvtkDGArrayOutputAccessor_Restart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Restart");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArrayOutputAccessor *op = static_cast<vtkDGArrayOutputAccessor *>(vp);

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
PyvtkDGArrayOutputAccessor_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArrayOutputAccessor *op = static_cast<vtkDGArrayOutputAccessor *>(vp);

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
PyvtkDGArrayOutputAccessor_size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "size");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGArrayOutputAccessor *op = static_cast<vtkDGArrayOutputAccessor *>(vp);

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

static PyMethodDef PyvtkDGArrayOutputAccessor_Methods[] = {
  {"GetKey", PyvtkDGArrayOutputAccessor_GetKey, METH_VARARGS,
   "GetKey(self) -> int\nC++: vtkTypeUInt64 GetKey()\n\n"},
  {"Restart", PyvtkDGArrayOutputAccessor_Restart, METH_VARARGS,
   "Restart(self) -> None\nC++: void Restart()\n\n"},
  {"IsAtEnd", PyvtkDGArrayOutputAccessor_IsAtEnd, METH_VARARGS,
   "IsAtEnd(self) -> bool\nC++: bool IsAtEnd()\n\n"},
  {"size", PyvtkDGArrayOutputAccessor_size, METH_VARARGS,
   "size(self) -> int\nC++: std::size_t size()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGArrayOutputAccessor_GetSets[] = {
  {
    /*name=*/pystr("key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGArrayOutputAccessor_GetKey(self, args);
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
PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGArrayOutputAccessor");

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    vtkDGArrayOutputAccessor *op = new vtkDGArrayOutputAccessor(temp0);

    result = PyVTKSpecialObject_New("vtkDGArrayOutputAccessor", op);
  }

  return result;
}

static PyObject *
PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGArrayOutputAccessor");

  vtkDGArrayOutputAccessor *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDGArrayOutputAccessor"))
  {
    vtkDGArrayOutputAccessor *op = new vtkDGArrayOutputAccessor(*temp0);

    result = PyVTKSpecialObject_New("vtkDGArrayOutputAccessor", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_Methods[] = {
  {"vtkDGArrayOutputAccessor", PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_s1, METH_VARARGS,
   "@V *vtkDoubleArray"},
  {"vtkDGArrayOutputAccessor", PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_s2, METH_VARARGS,
   "@W vtkDGArrayOutputAccessor"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDGArrayOutputAccessor");
  return nullptr;
}


static const char *PyvtkDGArrayOutputAccessor_Doc =

  "vtkDGArrayOutputAccessor(result:vtkDoubleArray)\n    -> vtkDGArrayOutputAccessor\nC++: vtkDGArrayOutputAccessor(vtkDoubleArray *result)\nvtkDGArrayOutputAccessor(other:vtkDGArrayOutputAccessor)\n    -> vtkDGArrayOutputAccessor\nC++: vtkDGArrayOutputAccessor(const vtkDGArrayOutputAccessor &other)\n""\n"
  "vtkDGArrayOutputAccessor - Store values interpolated from DG cells\ninto a vtkDoubleArray instance.\n\n"
;

static PyObject *
PyvtkDGArrayOutputAccessor_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor(nullptr, args);
}

static void PyvtkDGArrayOutputAccessor_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGArrayOutputAccessor *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGArrayOutputAccessor_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGArrayOutputAccessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGArrayOutputAccessor", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGArrayOutputAccessor_Delete, // tp_dealloc
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
  PyvtkDGArrayOutputAccessor_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGArrayOutputAccessor_Doc, // tp_doc
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
  PyvtkDGArrayOutputAccessor_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDGArrayOutputAccessor_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDGArrayOutputAccessor(*static_cast<const vtkDGArrayOutputAccessor*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDGArrayOutputAccessor_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGArrayOutputAccessor_TypeNew(); }
#define DECLARED_PyvtkDGArrayOutputAccessor_TypeNew
#endif

PyObject *PyvtkDGArrayOutputAccessor_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGArrayOutputAccessor_Type,
    PyvtkDGArrayOutputAccessor_Methods,
    PyvtkDGArrayOutputAccessor_GetSets,
    PyvtkDGArrayOutputAccessor_vtkDGArrayOutputAccessor_Methods,
    &PyvtkDGArrayOutputAccessor_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGArrayOutputAccessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGArrayOutputAccessor_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGArrayOutputAccessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

