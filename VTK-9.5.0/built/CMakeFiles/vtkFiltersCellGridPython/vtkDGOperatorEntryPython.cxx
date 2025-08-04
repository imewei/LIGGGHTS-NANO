// python wrapper for vtkDGOperatorEntry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDGOperatorEntry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGOperatorEntry(PyObject *dict); }

static PyObject *
PyvtkDGOperatorEntry_GetShaderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDGOperatorEntry *op = static_cast<vtkDGOperatorEntry *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = op->GetShaderString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGOperatorEntry_Methods[] = {
  {"GetShaderString", PyvtkDGOperatorEntry_GetShaderString, METH_VARARGS,
   "GetShaderString(self, functionName:str, parameterName:str) -> str\nC++: std::string GetShaderString(const std::string &functionName,\n    const std::string &parameterName)\n\nReturn a glsl string that defines this operator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGOperatorEntry_GetSets[] = {
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkDGOperatorEntry_vtkDGOperatorEntry_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperatorEntry");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDGOperatorEntry *op = new vtkDGOperatorEntry();

    result = PyVTKSpecialObject_New("vtkDGOperatorEntry", op);
  }

  return result;
}

static PyObject *
PyvtkDGOperatorEntry_vtkDGOperatorEntry_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDGOperatorEntry");

  vtkDGOperatorEntry *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDGOperatorEntry"))
  {
    vtkDGOperatorEntry *op = new vtkDGOperatorEntry(*temp0);

    result = PyVTKSpecialObject_New("vtkDGOperatorEntry", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDGOperatorEntry_vtkDGOperatorEntry_Methods[] = {
  {"vtkDGOperatorEntry", PyvtkDGOperatorEntry_vtkDGOperatorEntry_s2, METH_VARARGS,
   "@W vtkDGOperatorEntry"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGOperatorEntry_vtkDGOperatorEntry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDGOperatorEntry_vtkDGOperatorEntry_s1(self, args);
    case 1:
      return PyvtkDGOperatorEntry_vtkDGOperatorEntry_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDGOperatorEntry");
  return nullptr;
}


static const char *PyvtkDGOperatorEntry_Doc =

  "vtkDGOperatorEntry() -> vtkDGOperatorEntry\nC++: vtkDGOperatorEntry()\nvtkDGOperatorEntry(__a:vtkDGOperatorEntry) -> vtkDGOperatorEntry\nC++: vtkDGOperatorEntry(const vtkDGOperatorEntry &)\n""\n"
  "vtkDGOperatorEntry - A record for a basis in a function space that is\nspecific to one cell shape.\n\n"
  "OperatorName \342\206\222 vtkCellAttribute::CellTypeInfo (FS, Basis, Order)\n"
  "\342\206\222 CellShape \342\206\222 vtkDGOperatorEntry.\n\n"
  "OperatorName: one of \"Basis\"_token, \"BasisGradient\"_token,\n"
  "\"Curl\"_token, \"Div\"_token, etc. FunctionSpace: one of\n"
  "\"constant\"_token, \"HGRAD\"_token, \"HCURL\"_token, \"HDIV\"_token. Basis:\n"
  "one of \"I\"_token, \"C\"_token, \"F\"_token. Order: a non-negative\n"
  "integer. CellShape: one of \"vtkDGHex\"_token, \"vtkDGQuad\"_token, etc.\n"
  "but may also include\n"
  "   \"vtkDeRhamCell\"_token, or \"vtkDGCell\"_token. In this way, if a\n"
  "cell does not\n"
  "   have its own operator it can see whether a more generic version\n"
  "exists.\n"
  "   This accommodates the \"constant\" function space where all shapes\n"
  "produce the\n"
  "   same function.\n\n";

static PyObject *
PyvtkDGOperatorEntry_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDGOperatorEntry_vtkDGOperatorEntry(nullptr, args);
}

static void PyvtkDGOperatorEntry_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDGOperatorEntry *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDGOperatorEntry_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGOperatorEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGOperatorEntry", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDGOperatorEntry_Delete, // tp_dealloc
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
  PyvtkDGOperatorEntry_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDGOperatorEntry_Doc, // tp_doc
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
  PyvtkDGOperatorEntry_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDGOperatorEntry_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDGOperatorEntry(*static_cast<const vtkDGOperatorEntry*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDGOperatorEntry_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGOperatorEntry_TypeNew(); }
#define DECLARED_PyvtkDGOperatorEntry_TypeNew
#endif

PyObject *PyvtkDGOperatorEntry_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDGOperatorEntry_Type,
    PyvtkDGOperatorEntry_Methods,
    PyvtkDGOperatorEntry_GetSets,
    PyvtkDGOperatorEntry_vtkDGOperatorEntry_Methods,
    &PyvtkDGOperatorEntry_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGOperatorEntry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGOperatorEntry_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDGOperatorEntry", o) != 0)
  {
    Py_DECREF(o);
  }

}

