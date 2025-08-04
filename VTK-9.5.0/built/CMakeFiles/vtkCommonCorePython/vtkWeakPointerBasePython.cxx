// python wrapper for vtkWeakPointerBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkWeakPointerBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkWeakPointerBase(PyObject *dict); }

static PyObject *
PyvtkWeakPointerBase_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkWeakPointerBase *op = static_cast<vtkWeakPointerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectBase *tempr = op->GetPointer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWeakPointerBase_Methods[] = {
  {"GetPointer", PyvtkWeakPointerBase_GetPointer, METH_VARARGS,
   "GetPointer(self) -> vtkObjectBase\nC++: vtkObjectBase *GetPointer()\n\nGet the contained pointer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkWeakPointerBase_GetSets[] = {
  {
    /*name=*/pystr("pointer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkWeakPointerBase_GetPointer(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointer\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkWeakPointerBase_vtkWeakPointerBase_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkWeakPointerBase");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkWeakPointerBase *op = new vtkWeakPointerBase();

    result = PyVTKSpecialObject_New("vtkWeakPointerBase", op);
  }

  return result;
}

static PyObject *
PyvtkWeakPointerBase_vtkWeakPointerBase_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkWeakPointerBase");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWeakPointerBase *op = new vtkWeakPointerBase(temp0);

    result = PyVTKSpecialObject_New("vtkWeakPointerBase", op);
  }

  return result;
}

static PyObject *
PyvtkWeakPointerBase_vtkWeakPointerBase_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkWeakPointerBase");

  vtkWeakPointerBase *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkWeakPointerBase"))
  {
    vtkWeakPointerBase *op = new vtkWeakPointerBase(*temp0);

    result = PyVTKSpecialObject_New("vtkWeakPointerBase", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkWeakPointerBase_vtkWeakPointerBase_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkWeakPointerBase");

  vtkWeakPointerBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkWeakPointerBase"))
  {
    vtkWeakPointerBase *op = new vtkWeakPointerBase(*temp0);

    result = PyVTKSpecialObject_New("vtkWeakPointerBase", op);
  }

  return result;
}

static PyMethodDef PyvtkWeakPointerBase_vtkWeakPointerBase_Methods[] = {
  {"vtkWeakPointerBase", PyvtkWeakPointerBase_vtkWeakPointerBase_s2, METH_VARARGS,
   "@V *vtkObjectBase"},
  {"vtkWeakPointerBase", PyvtkWeakPointerBase_vtkWeakPointerBase_s3, METH_VARARGS,
   "@W vtkWeakPointerBase"},
  {"vtkWeakPointerBase", PyvtkWeakPointerBase_vtkWeakPointerBase_s4, METH_VARARGS,
   "@W &vtkWeakPointerBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWeakPointerBase_vtkWeakPointerBase(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWeakPointerBase_vtkWeakPointerBase_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkWeakPointerBase_vtkWeakPointerBase_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkWeakPointerBase");
  return nullptr;
}


static const char *PyvtkWeakPointerBase_Doc =

  "vtkWeakPointerBase() -> vtkWeakPointerBase\nC++: vtkWeakPointerBase() noexcept;\nvtkWeakPointerBase(r:vtkObjectBase) -> vtkWeakPointerBase\nC++: vtkWeakPointerBase(vtkObjectBase *r)\nvtkWeakPointerBase(r:vtkWeakPointerBase) -> vtkWeakPointerBase\nC++: vtkWeakPointerBase(const vtkWeakPointerBase &r)\nvtkWeakPointerBase(r:vtkWeakPointerBase) -> vtkWeakPointerBase\nC++: vtkWeakPointerBase(vtkWeakPointerBase &&r) noexcept;\n""\n"
  "vtkWeakPointerBase - Non-templated superclass for vtkWeakPointer.\n\n"
  "vtkWeakPointerBase holds a pointer to a vtkObjectBase or subclass\n"
  "instance, but it never affects the reference count of the\n"
  "vtkObjectBase. However, when the vtkObjectBase referred to is\n"
  "destroyed, the pointer gets initialized to nullptr, thus avoid\n"
  "dangling references.\n\n";

static PyObject *
PyvtkWeakPointerBase_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkWeakPointerBase_vtkWeakPointerBase(nullptr, args);
}

static void PyvtkWeakPointerBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkWeakPointerBase *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkWeakPointerBase_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkWeakPointerBase *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyUnicode_FromStringAndSize(s.data(), s.size());
}

static int PyvtkWeakPointerBase_CheckExact(PyObject *ob);

static PyObject *PyvtkWeakPointerBase_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkWeakPointerBase *so1 = nullptr;
  const vtkWeakPointerBase *so2 = nullptr;
  int result = -1;

  if (PyvtkWeakPointerBase_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkWeakPointerBase *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkWeakPointerBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkWeakPointerBase", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkWeakPointerBase_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkWeakPointerBase *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkWeakPointerBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkWeakPointerBase", &n2));
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

static Py_hash_t PyvtkWeakPointerBase_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWeakPointerBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkWeakPointerBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkWeakPointerBase_Delete, // tp_dealloc
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
  PyvtkWeakPointerBase_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkWeakPointerBase_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkWeakPointerBase_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkWeakPointerBase_RichCompare, // tp_richcompare
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
  PyvtkWeakPointerBase_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkWeakPointerBase_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkWeakPointerBase_Type);
}

static void *PyvtkWeakPointerBase_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkWeakPointerBase(*static_cast<const vtkWeakPointerBase*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkWeakPointerBase_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkWeakPointerBase_TypeNew(); }
#define DECLARED_PyvtkWeakPointerBase_TypeNew
#endif

PyObject *PyvtkWeakPointerBase_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkWeakPointerBase_Type,
    PyvtkWeakPointerBase_Methods,
    PyvtkWeakPointerBase_GetSets,
    PyvtkWeakPointerBase_vtkWeakPointerBase_Methods,
    &PyvtkWeakPointerBase_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWeakPointerBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWeakPointerBase_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkWeakPointerBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

