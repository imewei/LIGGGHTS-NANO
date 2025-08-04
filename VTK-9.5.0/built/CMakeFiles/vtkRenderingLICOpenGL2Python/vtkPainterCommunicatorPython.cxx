// python wrapper for vtkPainterCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPainterCommunicator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPainterCommunicator(PyObject *dict); }

static PyObject *
PyvtkPainterCommunicator_GetRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRank");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetRank();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetIsNull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsNull");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetIsNull();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetWorldRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldRank");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetWorldRank();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetWorldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetWorldSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIInitialized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetMPIInitialized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPainterCommunicator_GetMPIFinalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIFinalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPainterCommunicator *op = static_cast<vtkPainterCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetMPIFinalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPainterCommunicator_Methods[] = {
  {"GetRank", PyvtkPainterCommunicator_GetRank, METH_VARARGS,
   "GetRank(self) -> int\nC++: virtual int GetRank()\n\nQuery MPI about the communicator.\n"},
  {"GetSize", PyvtkPainterCommunicator_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: virtual int GetSize()\n\n"},
  {"GetIsNull", PyvtkPainterCommunicator_GetIsNull, METH_VARARGS,
   "GetIsNull(self) -> bool\nC++: virtual bool GetIsNull()\n\n"},
  {"GetWorldRank", PyvtkPainterCommunicator_GetWorldRank, METH_VARARGS,
   "GetWorldRank(self) -> int\nC++: virtual int GetWorldRank()\n\nQuery MPI about the world communicator.\n"},
  {"GetWorldSize", PyvtkPainterCommunicator_GetWorldSize, METH_VARARGS,
   "GetWorldSize(self) -> int\nC++: virtual int GetWorldSize()\n\n"},
  {"GetMPIInitialized", PyvtkPainterCommunicator_GetMPIInitialized, METH_VARARGS,
   "GetMPIInitialized(self) -> bool\nC++: virtual bool GetMPIInitialized()\n\nQuery MPI about its state.\n"},
  {"GetMPIFinalized", PyvtkPainterCommunicator_GetMPIFinalized, METH_VARARGS,
   "GetMPIFinalized(self) -> bool\nC++: virtual bool GetMPIFinalized()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPainterCommunicator_GetSets[] = {
  {
    /*name=*/pystr("rank"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetRank(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRank\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("is_null"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetIsNull(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetIsNull\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("world_rank"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetWorldRank(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWorldRank\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("world_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetWorldSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWorldSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("mpi_initialized"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetMPIInitialized(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMPIInitialized\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("mpi_finalized"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPainterCommunicator_GetMPIFinalized(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMPIFinalized\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkPainterCommunicator_vtkPainterCommunicator_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPainterCommunicator");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPainterCommunicator *op = new vtkPainterCommunicator();

    result = PyVTKSpecialObject_New("vtkPainterCommunicator", op);
  }

  return result;
}

static PyObject *
PyvtkPainterCommunicator_vtkPainterCommunicator_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPainterCommunicator");

  vtkPainterCommunicator *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPainterCommunicator"))
  {
    vtkPainterCommunicator *op = new vtkPainterCommunicator(*temp0);

    result = PyVTKSpecialObject_New("vtkPainterCommunicator", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPainterCommunicator_vtkPainterCommunicator_Methods[] = {
  {"vtkPainterCommunicator", PyvtkPainterCommunicator_vtkPainterCommunicator_s2, METH_VARARGS,
   "@W vtkPainterCommunicator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPainterCommunicator_vtkPainterCommunicator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPainterCommunicator_vtkPainterCommunicator_s1(self, args);
    case 1:
      return PyvtkPainterCommunicator_vtkPainterCommunicator_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPainterCommunicator");
  return nullptr;
}


static const char *PyvtkPainterCommunicator_Doc =

  "vtkPainterCommunicator() -> vtkPainterCommunicator\nC++: vtkPainterCommunicator()\nvtkPainterCommunicator(other:vtkPainterCommunicator)\n    -> vtkPainterCommunicator\nC++: vtkPainterCommunicator(const vtkPainterCommunicator &other)\n""\n"
  "vtkPainterCommunicator - A communicator that can safely be used\ninside a painter.\n\n"
  "A simple container holding a handle to an MPI communicator. This API\n"
  "is sufficient to allow for control flow with/without MPI. The\n"
  "parallel parts of the code should use the derived class\n"
  "vtkPPainterCommunicator.\n\n";

static PyObject *
PyvtkPainterCommunicator_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPainterCommunicator_vtkPainterCommunicator(nullptr, args);
}

static void PyvtkPainterCommunicator_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPainterCommunicator *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPainterCommunicator_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPainterCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkPainterCommunicator", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPainterCommunicator_Delete, // tp_dealloc
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
  PyvtkPainterCommunicator_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPainterCommunicator_Doc, // tp_doc
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
  PyvtkPainterCommunicator_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPainterCommunicator_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPainterCommunicator(*static_cast<const vtkPainterCommunicator*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPainterCommunicator_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPainterCommunicator_TypeNew(); }
#define DECLARED_PyvtkPainterCommunicator_TypeNew
#endif

PyObject *PyvtkPainterCommunicator_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPainterCommunicator_Type,
    PyvtkPainterCommunicator_Methods,
    PyvtkPainterCommunicator_GetSets,
    PyvtkPainterCommunicator_vtkPainterCommunicator_Methods,
    &PyvtkPainterCommunicator_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPainterCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPainterCommunicator_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPainterCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

