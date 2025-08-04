// python wrapper for vtkGLSLModifierFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkGLSLModifierFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGLSLModifierFactory(PyObject *dict); }

static PyObject *
PyvtkGLSLModifierFactory_CreateAMod(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateAMod");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGLSLModifierBase *tempr = vtkGLSLModifierFactory::CreateAMod(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLSLModifierFactory_Methods[] = {
  {"CreateAMod", PyvtkGLSLModifierFactory_CreateAMod, METH_VARARGS,
   "CreateAMod(modName:str) -> vtkGLSLModifierBase\nC++: static vtkGLSLModifierBase *CreateAMod(\n    const std::string &modName)\n\nUsed by VTK to create a mod for rendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGLSLModifierFactory_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static const char *PyvtkGLSLModifierFactory_Doc =
  "vtkGLSLModifierFactory - This class empowers developers to write and\nuse GLSL mods easily in VTK.\n\n"
  "For example, the mod classes could be registered via plugins.\n\n";

static PyObject *
PyvtkGLSLModifierFactory_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkGLSLModifierFactory_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkGLSLModifierFactory_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLSLModifierFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkGLSLModifierFactory", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkGLSLModifierFactory_Delete, // tp_dealloc
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
  PyvtkGLSLModifierFactory_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkGLSLModifierFactory_Doc, // tp_doc
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
  PyvtkGLSLModifierFactory_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkGLSLModifierFactory_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGLSLModifierFactory_TypeNew(); }
#define DECLARED_PyvtkGLSLModifierFactory_TypeNew
#endif

PyObject *PyvtkGLSLModifierFactory_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkGLSLModifierFactory_Type,
    PyvtkGLSLModifierFactory_Methods,
    PyvtkGLSLModifierFactory_GetSets,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLSLModifierFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLSLModifierFactory_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkGLSLModifierFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

