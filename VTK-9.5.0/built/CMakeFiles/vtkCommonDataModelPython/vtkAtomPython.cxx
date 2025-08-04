// python wrapper for vtkAtom
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkAtom.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAtom(PyObject *dict); }

static PyObject *
PyvtkAtom_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_GetMolecule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMolecule");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = op->GetMolecule();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_GetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumber");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = op->GetAtomicNumber();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_SetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicNumber");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetAtomicNumber(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAtom_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetPosition(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3f tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkAtom_GetPosition_s1(self, args);
    case 0:
      return PyvtkAtom_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkAtom_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->SetPosition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetPosition(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAtom_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtom *op = static_cast<vtkAtom *>(vp);

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
  {
    op->SetPosition(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAtom_SetPosition_Methods[] = {
  {"SetPosition", PyvtkAtom_SetPosition_s1, METH_VARARGS,
   "@P *f"},
  {"SetPosition", PyvtkAtom_SetPosition_s3, METH_VARARGS,
   "@W vtkVector3f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAtom_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAtom_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkAtom_SetPosition_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}

static PyMethodDef PyvtkAtom_Methods[] = {
  {"GetId", PyvtkAtom_GetId, METH_VARARGS,
   "GetId(self) -> int\nC++: vtkIdType GetId()\n\nReturn the Id used to identify this atom in the parent molecule.\n"},
  {"GetMolecule", PyvtkAtom_GetMolecule, METH_VARARGS,
   "GetMolecule(self) -> vtkMolecule\nC++: vtkMolecule *GetMolecule()\n\nReturn the parent molecule of this atom.\n"},
  {"GetAtomicNumber", PyvtkAtom_GetAtomicNumber, METH_VARARGS,
   "GetAtomicNumber(self) -> int\nC++: unsigned short GetAtomicNumber()\n\nGet/Set the atomic number of this atom\n"},
  {"SetAtomicNumber", PyvtkAtom_SetAtomicNumber, METH_VARARGS,
   "SetAtomicNumber(self, atomicNum:int) -> None\nC++: void SetAtomicNumber(unsigned short atomicNum)\n\n"},
  {"GetPosition", PyvtkAtom_GetPosition, METH_VARARGS,
   "GetPosition(self, pos:[float, float, float]) -> None\nC++: void GetPosition(double pos[3])\nGetPosition(self) -> vtkVector3f\nC++: vtkVector3f GetPosition()\n\n"},
  {"SetPosition", PyvtkAtom_SetPosition, METH_VARARGS,
   "SetPosition(self, pos:(float, float, float)) -> None\nC++: void SetPosition(const float pos[3])\nSetPosition(self, x:float, y:float, z:float) -> None\nC++: void SetPosition(float x, float y, float z)\nSetPosition(self, pos:vtkVector3f) -> None\nC++: void SetPosition(const vtkVector3f &pos)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAtom_GetSets[] = {
  {
    /*name=*/pystr("atomic_number"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAtom_GetAtomicNumber(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAtom_SetAtomicNumber(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAtom_SetAtomicNumber(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAtomicNumber/SetAtomicNumber\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAtom_SetPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAtom_SetPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAtom_SetPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAtom_SetPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAtom_GetId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("molecule"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAtom_GetMolecule(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMolecule\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAtom_GetPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPosition\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkAtom_vtkAtom(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAtom");

  vtkAtom *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAtom"))
  {
    vtkAtom *op = new vtkAtom(*temp0);

    result = PyVTKSpecialObject_New("vtkAtom", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAtom_vtkAtom_Methods[] = {
  {"vtkAtom", PyvtkAtom_vtkAtom, METH_VARARGS,
   "@W vtkAtom"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkAtom_Doc =

  "vtkAtom(__a:vtkAtom) -> vtkAtom\nC++: vtkAtom(const &vtkAtom)\n""\n"
  "vtkAtom - convenience proxy for vtkMolecule\n\n"
;

static PyObject *
PyvtkAtom_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAtom_vtkAtom(nullptr, args);
}

static void PyvtkAtom_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAtom *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAtom_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAtom_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAtom", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAtom_Delete, // tp_dealloc
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
  PyvtkAtom_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAtom_Doc, // tp_doc
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
  PyvtkAtom_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAtom_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAtom(*static_cast<const vtkAtom*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkAtom_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAtom_TypeNew(); }
#define DECLARED_PyvtkAtom_TypeNew
#endif

PyObject *PyvtkAtom_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkAtom_Type,
    PyvtkAtom_Methods,
    PyvtkAtom_GetSets,
    PyvtkAtom_vtkAtom_Methods,
    &PyvtkAtom_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAtom(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAtom_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAtom", o) != 0)
  {
    Py_DECREF(o);
  }

}

