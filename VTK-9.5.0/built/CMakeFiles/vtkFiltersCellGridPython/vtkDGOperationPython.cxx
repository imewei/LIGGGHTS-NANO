// python wrapper for vtkDGOperation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStringToken.h"
#include "vtkIndent.h"
#include "vtkDGOperation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGOperation(PyObject *dict); }
static PyMethodDef PyvtkDGOperationBase_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGOperationBase_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkDGOperationBase_vtkDGOperationBase_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperationBase");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDGOperationBase *op = new vtkDGOperationBase();

    result = PyVTKSpecialObject_New("vtkDGOperationBase", op);
  }

  return result;
}

static PyObject *
PyvtkDGOperationBase_vtkDGOperationBase_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperationBase");

  vtkDGOperationBase *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDGOperationBase"))
  {
    vtkDGOperationBase *op = new vtkDGOperationBase(*temp0);

    result = PyVTKSpecialObject_New("vtkDGOperationBase", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDGOperationBase_vtkDGOperationBase_Methods[] = {
  {"vtkDGOperationBase", PyvtkDGOperationBase_vtkDGOperationBase_s2, METH_VARARGS,
   "@W vtkDGOperationBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGOperationBase_vtkDGOperationBase(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDGOperationBase_vtkDGOperationBase_s1(self, args);
    case 1:
      return PyvtkDGOperationBase_vtkDGOperationBase_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDGOperationBase");
  return nullptr;
}


static const char *PyvtkDGOperationBase_Doc =

  "vtkDGOperationBase() -> vtkDGOperationBase\nC++: vtkDGOperationBase()\nvtkDGOperationBase(__a:vtkDGOperationBase) -> vtkDGOperationBase\nC++: vtkDGOperationBase(const &vtkDGOperationBase)\n""\n"
  "vtkDGOperationBase - A base class for operator evaluators.\n\n"
;

static PyObject *
PyvtkDGOperationBase_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDGOperationBase_vtkDGOperationBase(nullptr, args);
}

static void PyvtkDGOperationBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGOperationBase *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGOperationBase_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGOperationBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGOperationBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGOperationBase_Delete, // tp_dealloc
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
  PyvtkDGOperationBase_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGOperationBase_Doc, // tp_doc
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
  PyvtkDGOperationBase_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDGOperationBase_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDGOperationBase(*static_cast<const vtkDGOperationBase*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDGOperationBase_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGOperationBase_TypeNew(); }
#define DECLARED_PyvtkDGOperationBase_TypeNew
#endif

PyObject *PyvtkDGOperationBase_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGOperationBase_Type,
    PyvtkDGOperationBase_Methods,
    PyvtkDGOperationBase_GetSets,
    PyvtkDGOperationBase_vtkDGOperationBase_Methods,
    &PyvtkDGOperationBase_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGOperation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGOperationBase_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGOperationBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

