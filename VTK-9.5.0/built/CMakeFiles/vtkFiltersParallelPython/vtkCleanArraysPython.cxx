// python wrapper for vtkCleanArrays
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCleanArrays.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCleanArrays(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCleanArrays_ClassNew(); }


static PyObject *
PyvtkCleanArrays_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCleanArrays::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCleanArrays *tempr = vtkCleanArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCleanArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanArrays::NewInstance());

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
PyvtkCleanArrays_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCleanArrays::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCleanArrays::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkCleanArrays::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCleanArrays::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillPartialArrays(temp0);
    }
    else
    {
      op->vtkCleanArrays::SetFillPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFillPartialArrays() :
      op->vtkCleanArrays::GetFillPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillPartialArraysOn();
    }
    else
    {
      op->vtkCleanArrays::FillPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillPartialArraysOff();
    }
    else
    {
      op->vtkCleanArrays::FillPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetMarkFilledPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkFilledPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkFilledPartialArrays(temp0);
    }
    else
    {
      op->vtkCleanArrays::SetMarkFilledPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetMarkFilledPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkFilledPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMarkFilledPartialArrays() :
      op->vtkCleanArrays::GetMarkFilledPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_MarkFilledPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkFilledPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkFilledPartialArraysOn();
    }
    else
    {
      op->vtkCleanArrays::MarkFilledPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_MarkFilledPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkFilledPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkFilledPartialArraysOff();
    }
    else
    {
      op->vtkCleanArrays::MarkFilledPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCleanArrays_Methods[] = {
  {"IsTypeOf", PyvtkCleanArrays_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCleanArrays_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCleanArrays_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCleanArrays\nC++: static vtkCleanArrays *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCleanArrays_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCleanArrays\nC++: vtkCleanArrays *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCleanArrays_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCleanArrays_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkCleanArrays_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\nThe user can set the controller used for inter-process\ncommunication. By default set to the global communicator.\n"},
  {"GetController", PyvtkCleanArrays_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetFillPartialArrays", PyvtkCleanArrays_SetFillPartialArrays, METH_VARARGS,
   "SetFillPartialArrays(self, _arg:bool) -> None\nC++: virtual void SetFillPartialArrays(bool _arg)\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {"GetFillPartialArrays", PyvtkCleanArrays_GetFillPartialArrays, METH_VARARGS,
   "GetFillPartialArrays(self) -> bool\nC++: virtual bool GetFillPartialArrays()\n\n"},
  {"FillPartialArraysOn", PyvtkCleanArrays_FillPartialArraysOn, METH_VARARGS,
   "FillPartialArraysOn(self) -> None\nC++: virtual void FillPartialArraysOn()\n\n"},
  {"FillPartialArraysOff", PyvtkCleanArrays_FillPartialArraysOff, METH_VARARGS,
   "FillPartialArraysOff(self) -> None\nC++: virtual void FillPartialArraysOff()\n\n"},
  {"SetMarkFilledPartialArrays", PyvtkCleanArrays_SetMarkFilledPartialArrays, METH_VARARGS,
   "SetMarkFilledPartialArrays(self, _arg:bool) -> None\nC++: virtual void SetMarkFilledPartialArrays(bool _arg)\n\nWhen FillPartialArrays is true, this filter can add a\n`vtkUnsignedCharArray` for each partial array to indicate which\nentries are valid and which are simply filled in with 0. To do\nthat, set this flag to true. Default is false.\n"},
  {"GetMarkFilledPartialArrays", PyvtkCleanArrays_GetMarkFilledPartialArrays, METH_VARARGS,
   "GetMarkFilledPartialArrays(self) -> bool\nC++: virtual bool GetMarkFilledPartialArrays()\n\n"},
  {"MarkFilledPartialArraysOn", PyvtkCleanArrays_MarkFilledPartialArraysOn, METH_VARARGS,
   "MarkFilledPartialArraysOn(self) -> None\nC++: virtual void MarkFilledPartialArraysOn()\n\n"},
  {"MarkFilledPartialArraysOff", PyvtkCleanArrays_MarkFilledPartialArraysOff, METH_VARARGS,
   "MarkFilledPartialArraysOff(self) -> None\nC++: virtual void MarkFilledPartialArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCleanArrays_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCleanArrays_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCleanArrays_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCleanArrays_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fill_partial_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCleanArrays_GetFillPartialArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCleanArrays_SetFillPartialArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCleanArrays_SetFillPartialArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFillPartialArrays/SetFillPartialArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("mark_filled_partial_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCleanArrays_GetMarkFilledPartialArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCleanArrays_SetMarkFilledPartialArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCleanArrays_SetMarkFilledPartialArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMarkFilledPartialArrays/SetMarkFilledPartialArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCleanArrays_Doc =
  "vtkCleanArrays - filter used to remove partial arrays across\nprocesses.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkCleanArrays is a filter used to remove (or fill up) partial arrays\n"
  "in a vtkDataSet (or a vtkCompositeDataSet) across processes (and\n"
  "blocks). Empty dataset on any processes is skipped and doesn't affect\n"
  "the array pruned (or filled) in the output. This filter also handles\n"
  "certain non-composite data objects such a tables.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCleanArrays_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkCleanArrays", // tp_name
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
  PyvtkCleanArrays_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCleanArrays_StaticNew()
{
  return vtkCleanArrays::New();
}

PyObject *PyvtkCleanArrays_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCleanArrays_Type, PyvtkCleanArrays_Methods,
    "vtkCleanArrays",
 &PyvtkCleanArrays_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCleanArrays_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCleanArrays(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCleanArrays_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCleanArrays", o) != 0)
  {
    Py_DECREF(o);
  }

}

