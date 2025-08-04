// python wrapper for vtkHyperTreeGridThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridThreshold.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridThreshold(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridThreshold_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridThreshold.MemoryStrategyChoice", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHyperTreeGridThreshold_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridThreshold *tempr = vtkHyperTreeGridThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridThreshold::NewInstance());

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
PyvtkHyperTreeGridThreshold_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridThreshold::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridThreshold::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerThreshold(temp0);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::SetLowerThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkHyperTreeGridThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperThreshold(temp0);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::SetUpperThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkHyperTreeGridThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetMemoryStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMemoryStrategy() :
      op->vtkHyperTreeGridThreshold::GetMemoryStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_SetMemoryStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMemoryStrategy(temp0);
    }
    else
    {
      op->vtkHyperTreeGridThreshold::SetMemoryStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetMemoryStrategyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryStrategyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMemoryStrategyMinValue() :
      op->vtkHyperTreeGridThreshold::GetMemoryStrategyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridThreshold_GetMemoryStrategyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryStrategyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridThreshold *op = static_cast<vtkHyperTreeGridThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMemoryStrategyMaxValue() :
      op->vtkHyperTreeGridThreshold::GetMemoryStrategyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridThreshold_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridThreshold_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridThreshold_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridThreshold_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridThreshold\nC++: static vtkHyperTreeGridThreshold *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridThreshold_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridThreshold\nC++: vtkHyperTreeGridThreshold *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridThreshold_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridThreshold_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLowerThreshold", PyvtkHyperTreeGridThreshold_SetLowerThreshold, METH_VARARGS,
   "SetLowerThreshold(self, _arg:float) -> None\nC++: virtual void SetLowerThreshold(double _arg)\n\nSet/Get minimum scalar value of threshold\n"},
  {"GetLowerThreshold", PyvtkHyperTreeGridThreshold_GetLowerThreshold, METH_VARARGS,
   "GetLowerThreshold(self) -> float\nC++: virtual double GetLowerThreshold()\n\n"},
  {"SetUpperThreshold", PyvtkHyperTreeGridThreshold_SetUpperThreshold, METH_VARARGS,
   "SetUpperThreshold(self, _arg:float) -> None\nC++: virtual void SetUpperThreshold(double _arg)\n\nSet/Get maximum scalar value of threshold\n"},
  {"GetUpperThreshold", PyvtkHyperTreeGridThreshold_GetUpperThreshold, METH_VARARGS,
   "GetUpperThreshold(self) -> float\nC++: virtual double GetUpperThreshold()\n\n"},
  {"ThresholdBetween", PyvtkHyperTreeGridThreshold_ThresholdBetween, METH_VARARGS,
   "ThresholdBetween(self, __a:float, __b:float) -> None\nC++: void ThresholdBetween(double, double)\n\nConvenience method to set both threshold values at once\n"},
  {"GetMemoryStrategy", PyvtkHyperTreeGridThreshold_GetMemoryStrategy, METH_VARARGS,
   "GetMemoryStrategy(self) -> int\nC++: virtual int GetMemoryStrategy()\n\nSetter and Getter for the memory strategy\n\nDefault is MaskInput\n"},
  {"SetMemoryStrategy", PyvtkHyperTreeGridThreshold_SetMemoryStrategy, METH_VARARGS,
   "SetMemoryStrategy(self, _arg:int) -> None\nC++: virtual void SetMemoryStrategy(int _arg)\n\n"},
  {"GetMemoryStrategyMinValue", PyvtkHyperTreeGridThreshold_GetMemoryStrategyMinValue, METH_VARARGS,
   "GetMemoryStrategyMinValue(self) -> int\nC++: virtual int GetMemoryStrategyMinValue()\n\n"},
  {"GetMemoryStrategyMaxValue", PyvtkHyperTreeGridThreshold_GetMemoryStrategyMaxValue, METH_VARARGS,
   "GetMemoryStrategyMaxValue(self) -> int\nC++: virtual int GetMemoryStrategyMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridThreshold_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("lower_threshold"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridThreshold_GetLowerThreshold(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridThreshold_SetLowerThreshold(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridThreshold_SetLowerThreshold(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLowerThreshold/SetLowerThreshold\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("upper_threshold"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridThreshold_GetUpperThreshold(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridThreshold_SetUpperThreshold(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridThreshold_SetUpperThreshold(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUpperThreshold/SetUpperThreshold\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("memory_strategy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridThreshold_GetMemoryStrategy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridThreshold_SetMemoryStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridThreshold_SetMemoryStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMemoryStrategy/SetMemoryStrategy\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridThreshold_Doc =
  "vtkHyperTreeGridThreshold - Extract cells from a hyper tree grid\nwhere selected scalar value is within given range.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This filter extracts cells from a hyper tree grid that satisfy the\n"
  "following threshold: a cell is considered to be within range if its\n"
  "value for the active scalar is within a specified range (inclusive).\n"
  "The output remains a hyper tree grid. A parameter (JustCreateNewMask)\n"
  "allows to only redefine the mask and not create a new HTG.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkThreshold\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien 2014 This class was revised by Philippe Pebay,\n"
  "2016 This class was optimized by Jacques-Bernard Lekien, 2018. This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridThreshold", // tp_name
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
  PyvtkHyperTreeGridThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridThreshold_StaticNew()
{
  return vtkHyperTreeGridThreshold::New();
}

PyObject *PyvtkHyperTreeGridThreshold_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridThreshold_Type, PyvtkHyperTreeGridThreshold_Methods,
    "vtkHyperTreeGridThreshold",
 &PyvtkHyperTreeGridThreshold_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_Type, "vtkHyperTreeGridThreshold.MemoryStrategyChoice");

  o = (PyObject *)&PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_Type;
  if (PyDict_SetItemString(d, "MemoryStrategyChoice", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkHyperTreeGridThreshold::MemoryStrategyChoice cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MaskInput", vtkHyperTreeGridThreshold::MaskInput },
        { "CopyStructureAndIndexArrays", vtkHyperTreeGridThreshold::CopyStructureAndIndexArrays },
        { "DeepThreshold", vtkHyperTreeGridThreshold::DeepThreshold },
      };

    o = PyvtkHyperTreeGridThreshold_MemoryStrategyChoice_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridThreshold_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

}

