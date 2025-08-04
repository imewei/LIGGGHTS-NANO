// python wrapper for vtkHDF5Helper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkHDF5Helper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHDF5Helper(PyObject *dict); }
static PyMethodDef PyvtkHDF5Helper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHDF5Helper_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static const char *PyvtkHDF5Helper_Doc =
  "vtkHDF5Helper - Helper class used to read hdf5 file format.\n\n"
;

static PyObject *
PyvtkHDF5Helper_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkHDF5Helper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkHDF5Helper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkHDF5Helper_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHDF5Helper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOERF.vtkHDF5Helper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkHDF5Helper_Delete, // tp_dealloc
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
  PyvtkHDF5Helper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkHDF5Helper_Doc, // tp_doc
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
  PyvtkHDF5Helper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkHDF5Helper_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHDF5Helper_TypeNew(); }
#define DECLARED_PyvtkHDF5Helper_TypeNew
#endif

PyObject *PyvtkHDF5Helper_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkHDF5Helper_Type,
    PyvtkHDF5Helper_Methods,
    PyvtkHDF5Helper_GetSets,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHDF5Helper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHDF5Helper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkHDF5Helper", o) != 0)
  {
    Py_DECREF(o);
  }

}

