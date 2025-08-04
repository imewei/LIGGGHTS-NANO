// python wrapper for vtkPieceScalars
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPieceScalars.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPieceScalars(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPieceScalars_ClassNew(); }


static PyObject *
PyvtkPieceScalars_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPieceScalars::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPieceScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPieceScalars *tempr = vtkPieceScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPieceScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPieceScalars::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPieceScalars::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPieceScalars::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetScalarModeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToCellData();
    }
    else
    {
      op->vtkPieceScalars::SetScalarModeToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetScalarModeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToPointData();
    }
    else
    {
      op->vtkPieceScalars::SetScalarModeToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkPieceScalars::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomMode(temp0);
    }
    else
    {
      op->vtkPieceScalars::SetRandomMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkPieceScalars::GetRandomMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOn();
    }
    else
    {
      op->vtkPieceScalars::RandomModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPieceScalars_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOff();
    }
    else
    {
      op->vtkPieceScalars::RandomModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPieceScalars_Methods[] = {
  {"IsTypeOf", PyvtkPieceScalars_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPieceScalars_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPieceScalars_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPieceScalars\nC++: static vtkPieceScalars *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPieceScalars_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPieceScalars\nC++: vtkPieceScalars *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPieceScalars_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPieceScalars_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScalarModeToCellData", PyvtkPieceScalars_SetScalarModeToCellData, METH_VARARGS,
   "SetScalarModeToCellData(self) -> None\nC++: void SetScalarModeToCellData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {"SetScalarModeToPointData", PyvtkPieceScalars_SetScalarModeToPointData, METH_VARARGS,
   "SetScalarModeToPointData(self) -> None\nC++: void SetScalarModeToPointData()\n\n"},
  {"GetScalarMode", PyvtkPieceScalars_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: int GetScalarMode()\n\n"},
  {"SetRandomMode", PyvtkPieceScalars_SetRandomMode, METH_VARARGS,
   "SetRandomMode(self, _arg:int) -> None\nC++: virtual void SetRandomMode(vtkTypeBool _arg)\n\nThis option uses a random mapping between pieces and scalar\nvalues. The scalar values are chosen between 0 and 1.  By\ndefault, random mode is off.\n"},
  {"GetRandomMode", PyvtkPieceScalars_GetRandomMode, METH_VARARGS,
   "GetRandomMode(self) -> int\nC++: virtual vtkTypeBool GetRandomMode()\n\nThis option uses a random mapping between pieces and scalar\nvalues. The scalar values are chosen between 0 and 1.  By\ndefault, random mode is off.\n"},
  {"RandomModeOn", PyvtkPieceScalars_RandomModeOn, METH_VARARGS,
   "RandomModeOn(self) -> None\nC++: virtual void RandomModeOn()\n\nThis option uses a random mapping between pieces and scalar\nvalues. The scalar values are chosen between 0 and 1.  By\ndefault, random mode is off.\n"},
  {"RandomModeOff", PyvtkPieceScalars_RandomModeOff, METH_VARARGS,
   "RandomModeOff(self) -> None\nC++: virtual void RandomModeOff()\n\nThis option uses a random mapping between pieces and scalar\nvalues. The scalar values are chosen between 0 and 1.  By\ndefault, random mode is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPieceScalars_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("random_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPieceScalars_GetRandomMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPieceScalars_SetRandomMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPieceScalars_SetRandomMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRandomMode/SetRandomMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scalar_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPieceScalars_GetScalarMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetScalarMode\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPieceScalars_Doc =
  "vtkPieceScalars - Sets all cell scalars from the update piece.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPieceScalars is meant to display which piece is being requested as\n"
  "scalar values.  It is useful for visualizing the partitioning for\n"
  "streaming or distributed pipelines.\n\n"
  "@sa\n"
  "vtkPolyDataStreamer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPieceScalars_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPieceScalars", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkPieceScalars_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  PyVTKObject_Init, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkPieceScalars_StaticNew()
{
  return vtkPieceScalars::New();
}

PyObject *PyvtkPieceScalars_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPieceScalars_Type, PyvtkPieceScalars_Methods,
    "vtkPieceScalars",
 &PyvtkPieceScalars_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPieceScalars_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPieceScalars(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPieceScalars_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPieceScalars", o) != 0)
  {
    Py_DECREF(o);
  }

}

