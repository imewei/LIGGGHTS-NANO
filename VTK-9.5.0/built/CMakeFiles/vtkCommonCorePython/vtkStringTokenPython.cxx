// python wrapper for vtkStringToken
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStringToken.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkStringToken(PyObject *dict); }

static PyObject *
PyvtkStringToken_GetHash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHash");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetHash();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToken_Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = &op->Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToken_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsValid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToken_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->HasData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToken_AddChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChild");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    bool tempr = op->AddChild(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkStringToken_RemoveChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveChild");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    bool tempr = op->RemoveChild(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStringToken_Methods[] = {
  {"GetHash", PyvtkStringToken_GetHash, METH_VARARGS,
   "GetHash(self) -> int\nC++: unsigned int GetHash()\n\nA Python-wrappable (but less strongly typed) alternative to\nGetId()\n"},
  {"Data", PyvtkStringToken_Data, METH_VARARGS,
   "Data(self) -> str\nC++: const std::string &Data()\n\nReturn the string corresponding to the token.\n"},
  {"IsValid", PyvtkStringToken_IsValid, METH_VARARGS,
   "IsValid(self) -> bool\nC++: bool IsValid()\n\nReturn whether the token is valid or not.\n\nValid tokens are those whose hash is not equal to the hash of an\nempty string.\n"},
  {"HasData", PyvtkStringToken_HasData, METH_VARARGS,
   "HasData(self) -> bool\nC++: bool HasData()\n\nReturn whether a string is available for the token's hash ID.\n"},
  {"AddChild", PyvtkStringToken_AddChild, METH_VARARGS,
   "AddChild(self, member:vtkStringToken) -> bool\nC++: bool AddChild(vtkStringToken member)\n\nAdd member as a child of this token.\n\nIf true is returned, the member was added. If false is returned,\nthe member was already part of the group or one of the tokens\n(this token or member) was invalid.\n"},
  {"RemoveChild", PyvtkStringToken_RemoveChild, METH_VARARGS,
   "RemoveChild(self, member:vtkStringToken) -> bool\nC++: bool RemoveChild(vtkStringToken member)\n\nRemove a member from this token's children.\n\nIf this returns false, member was not a child of this token.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkStringToken_GetSets[] = {
  {
    /*name=*/pystr("hash"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStringToken_GetHash(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHash\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkStringToken_vtkStringToken_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStringToken");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringToken *op = new vtkStringToken(temp0);

    result = PyVTKSpecialObject_New("vtkStringToken", op);
  }

  return result;
}

static PyObject *
PyvtkStringToken_vtkStringToken_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStringToken");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkStringToken *op = new vtkStringToken(*temp0);

    result = PyVTKSpecialObject_New("vtkStringToken", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStringToken_vtkStringToken_Methods[] = {
  {"vtkStringToken", PyvtkStringToken_vtkStringToken_s1, METH_VARARGS,
   "@s"},
  {"vtkStringToken", PyvtkStringToken_vtkStringToken_s2, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStringToken_vtkStringToken(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToken_vtkStringToken_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStringToken");
  return nullptr;
}


static const char *PyvtkStringToken_Doc =

  "vtkStringToken(data:str) -> vtkStringToken\nC++: vtkStringToken(const std::string &data)\nvtkStringToken(__a:vtkStringToken) -> vtkStringToken\nC++: vtkStringToken(const &vtkStringToken)\n""\n"
  "vtkStringToken - Represent a string by its integer hash.\n\n"
  "This class does not inherit vtkObject; it is a lightweight object for\n"
  "representing a string as a 32-bit integer token. Tokens can be\n"
  "constructed at compile-time (via the \"\"_token string-literal operator\n"
  "below) or run-time (via the constructor).\n\n"
  "Equality comparisons are simple integer tests, while inequality\n"
  "operators attempt to locate the original source strings and compare\n"
  "them alphanumerically to preserve lexicographic ordering.\n\n"
  "This class can be used inside ordered and unordered STL containers.\n\n";

static PyObject *
PyvtkStringToken_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStringToken_vtkStringToken(nullptr, args);
}

static void PyvtkStringToken_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStringToken *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkStringToken_CheckExact(PyObject *ob);

static PyObject *PyvtkStringToken_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkStringToken *so1 = nullptr;
  const vtkStringToken *so2 = nullptr;
  int result = -1;

  if (PyvtkStringToken_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkStringToken *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkStringToken *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkStringToken", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkStringToken_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkStringToken *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkStringToken *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkStringToken", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      result = ((*so1) <= (*so2));
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
      break;
    case Py_GE:
      result = ((*so1) >= (*so2));
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkStringToken_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStringToken_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkStringToken", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStringToken_Delete, // tp_dealloc
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
  PyvtkStringToken_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStringToken_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkStringToken_RichCompare, // tp_richcompare
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
  PyvtkStringToken_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkStringToken_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkStringToken_Type);
}

static void *PyvtkStringToken_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStringToken(*static_cast<const vtkStringToken*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStringToken_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkStringToken_TypeNew(); }
#define DECLARED_PyvtkStringToken_TypeNew
#endif

PyObject *PyvtkStringToken_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStringToken_Type,
    PyvtkStringToken_Methods,
    PyvtkStringToken_GetSets,
    PyvtkStringToken_vtkStringToken_Methods,
    &PyvtkStringToken_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringToken(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringToken_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStringToken", o) != 0)
  {
    Py_DECREF(o);
  }

}

