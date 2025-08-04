// python wrapper for vtkDGOperationStateEntry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGOperationStateEntry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGOperationStateEntry(PyObject *dict); }
static PyMethodDef PyvtkDGOperationStateEntryBase_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGOperationStateEntryBase_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperationStateEntryBase");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDGOperationStateEntryBase *op = new vtkDGOperationStateEntryBase();

    result = PyVTKSpecialObject_New("vtkDGOperationStateEntryBase", op);
  }

  return result;
}

static PyObject *
PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperationStateEntryBase");

  vtkDGOperationStateEntryBase *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDGOperationStateEntryBase"))
  {
    vtkDGOperationStateEntryBase *op = new vtkDGOperationStateEntryBase(*temp0);

    result = PyVTKSpecialObject_New("vtkDGOperationStateEntryBase", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_Methods[] = {
  {"vtkDGOperationStateEntryBase", PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_s2, METH_VARARGS,
   "@W vtkDGOperationStateEntryBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_s1(self, args);
    case 1:
      return PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDGOperationStateEntryBase");
  return nullptr;
}


static const char *PyvtkDGOperationStateEntryBase_Doc =

  "vtkDGOperationStateEntryBase() -> vtkDGOperationStateEntryBase\nC++: vtkDGOperationStateEntryBase()\nvtkDGOperationStateEntryBase(__a:vtkDGOperationStateEntryBase)\n    -> vtkDGOperationStateEntryBase\nC++: vtkDGOperationStateEntryBase(const &vtkDGOperationStateEntryBase)\n""\n"
  "vtkDGOperationStateEntryBase - This is a base class that exists so\nthat vtkDGOperationState can provide a virtual\n\n"
  "CloneInto method that accepts any of the templated subclasses below.\n\n";

static PyObject *
PyvtkDGOperationStateEntryBase_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase(nullptr, args);
}

static void PyvtkDGOperationStateEntryBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGOperationStateEntryBase *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGOperationStateEntryBase_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGOperationStateEntryBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGOperationStateEntryBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGOperationStateEntryBase_Delete, // tp_dealloc
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
  PyvtkDGOperationStateEntryBase_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGOperationStateEntryBase_Doc, // tp_doc
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
  PyvtkDGOperationStateEntryBase_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDGOperationStateEntryBase_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDGOperationStateEntryBase(*static_cast<const vtkDGOperationStateEntryBase*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDGOperationStateEntryBase_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGOperationStateEntryBase_TypeNew(); }
#define DECLARED_PyvtkDGOperationStateEntryBase_TypeNew
#endif

PyObject *PyvtkDGOperationStateEntryBase_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGOperationStateEntryBase_Type,
    PyvtkDGOperationStateEntryBase_Methods,
    PyvtkDGOperationStateEntryBase_GetSets,
    PyvtkDGOperationStateEntryBase_vtkDGOperationStateEntryBase_Methods,
    &PyvtkDGOperationStateEntryBase_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGOperationStateEntry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGOperationStateEntryBase_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGOperationStateEntryBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

