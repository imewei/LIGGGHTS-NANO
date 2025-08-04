// python wrapper for vtkDGOperationState
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGOperatorEntry.h"
#include "vtkDGOperationState.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGOperationState(PyObject *dict); }

static PyObject *
PyvtkDGOperationState_CloneInto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloneInto");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGOperationState *op = static_cast<vtkDGOperationState *>(vp);

  vtkDGOperationStateEntryBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkDGOperationStateEntryBase"))
  {
    op->CloneInto(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDGOperationState_Methods[] = {
  {"CloneInto", PyvtkDGOperationState_CloneInto, METH_VARARGS,
   "CloneInto(self, entry:vtkDGOperationStateEntryBase) -> None\nC++: virtual void CloneInto(vtkDGOperationStateEntryBase &entry)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGOperationState_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static const char *PyvtkDGOperationState_Doc =
  "vtkDGOperationState - Encapsulate the state required to evaluate DG\ncell-attributes.\n\n"
  "This object holds input vtkDGOperatorEntry objects, input array\n"
  "pointers, and working-space tuples (`std::vector` and `std::array`\n"
  "ivars) required to evaluate a single vtkCellAttribute on cells\n"
  "corresponding to a single vtkDGCell::Source entry. vtkDGOperation\n"
  "holds one instance of vtkDGOperationState for each vtkDGCell::Source\n"
  "entry in a particular vtkDGCell instance with arrays populated by a\n"
  "single vtkCellAttribute.\n\n";

static PyObject *
PyvtkDGOperationState_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkDGOperationState_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGOperationState *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGOperationState_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGOperationState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGOperationState", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGOperationState_Delete, // tp_dealloc
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
  PyvtkDGOperationState_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGOperationState_Doc, // tp_doc
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
  PyvtkDGOperationState_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkDGOperationState_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGOperationState_TypeNew(); }
#define DECLARED_PyvtkDGOperationState_TypeNew
#endif

PyObject *PyvtkDGOperationState_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGOperationState_Type,
    PyvtkDGOperationState_Methods,
    PyvtkDGOperationState_GetSets,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGOperationState(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGOperationState_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGOperationState", o) != 0)
  {
    Py_DECREF(o);
  }

}

