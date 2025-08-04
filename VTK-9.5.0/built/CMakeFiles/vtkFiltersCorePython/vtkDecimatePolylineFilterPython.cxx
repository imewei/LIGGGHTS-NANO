// python wrapper for vtkDecimatePolylineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDecimatePolylineFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDecimatePolylineFilter_ClassNew(); }


static PyObject *
PyvtkDecimatePolylineFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDecimatePolylineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePolylineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDecimatePolylineFilter *tempr = vtkDecimatePolylineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePolylineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePolylineFilter::NewInstance());

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
PyvtkDecimatePolylineFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDecimatePolylineFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDecimatePolylineFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkDecimatePolylineFilter::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumError(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMinValue() :
      op->vtkDecimatePolylineFilter::GetMaximumErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMaxValue() :
      op->vtkDecimatePolylineFilter::GetMaximumErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkDecimatePolylineFilter::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDecimatePolylineFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetDecimationStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimationStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  vtkDecimatePolylineStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDecimatePolylineStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetDecimationStrategy(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetDecimationStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetDecimationStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePolylineStrategy *tempr = (ap.IsBound() ?
      op->GetDecimationStrategy() :
      op->vtkDecimatePolylineFilter::GetDecimationStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDecimatePolylineFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineFilter_Methods[] = {
  {"IsTypeOf", PyvtkDecimatePolylineFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDecimatePolylineFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDecimatePolylineFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDecimatePolylineFilter\nC++: static vtkDecimatePolylineFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDecimatePolylineFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDecimatePolylineFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDecimatePolylineFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTargetReduction", PyvtkDecimatePolylineFilter_SetTargetReduction, METH_VARARGS,
   "SetTargetReduction(self, _arg:float) -> None\nC++: virtual void SetTargetReduction(double _arg)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Defaults to 0.9\n.\n"},
  {"GetTargetReductionMinValue", PyvtkDecimatePolylineFilter_GetTargetReductionMinValue, METH_VARARGS,
   "GetTargetReductionMinValue(self) -> float\nC++: virtual double GetTargetReductionMinValue()\n\n"},
  {"GetTargetReductionMaxValue", PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue, METH_VARARGS,
   "GetTargetReductionMaxValue(self) -> float\nC++: virtual double GetTargetReductionMaxValue()\n\n"},
  {"GetTargetReduction", PyvtkDecimatePolylineFilter_GetTargetReduction, METH_VARARGS,
   "GetTargetReduction(self) -> float\nC++: virtual double GetTargetReduction()\n\n"},
  {"SetMaximumError", PyvtkDecimatePolylineFilter_SetMaximumError, METH_VARARGS,
   "SetMaximumError(self, _arg:float) -> None\nC++: virtual void SetMaximumError(double _arg)\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is dependent on the decimation\nstrategy used, by default it is specified as a fraction of the\nmaximum length of the input data bounding box. Defaults to\nVTK_DOUBLE_MAX.\n"},
  {"GetMaximumErrorMinValue", PyvtkDecimatePolylineFilter_GetMaximumErrorMinValue, METH_VARARGS,
   "GetMaximumErrorMinValue(self) -> float\nC++: virtual double GetMaximumErrorMinValue()\n\n"},
  {"GetMaximumErrorMaxValue", PyvtkDecimatePolylineFilter_GetMaximumErrorMaxValue, METH_VARARGS,
   "GetMaximumErrorMaxValue(self) -> float\nC++: virtual double GetMaximumErrorMaxValue()\n\n"},
  {"GetMaximumError", PyvtkDecimatePolylineFilter_GetMaximumError, METH_VARARGS,
   "GetMaximumError(self) -> float\nC++: virtual double GetMaximumError()\n\n"},
  {"SetOutputPointsPrecision", PyvtkDecimatePolylineFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. Defaults\nto DEFAULT_PRECISION.\n"},
  {"GetOutputPointsPrecision", PyvtkDecimatePolylineFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetDecimationStrategy", PyvtkDecimatePolylineFilter_SetDecimationStrategy, METH_VARARGS,
   "SetDecimationStrategy(self, _arg:vtkDecimatePolylineStrategy)\n    -> None\nC++: virtual void SetDecimationStrategy(\n    vtkDecimatePolylineStrategy *_arg)\n\nSet/get the decimation strategy. See the class that inherits\n`vtkDecimatePolylineStrategy` to look at the implemented\nstrategies. Defaults to vtkDecimatePolylineDistanceStrategy.\n"},
  {"GetDecimationStrategy", PyvtkDecimatePolylineFilter_GetDecimationStrategy, METH_VARARGS,
   "GetDecimationStrategy(self) -> vtkDecimatePolylineStrategy\nC++: virtual vtkDecimatePolylineStrategy *GetDecimationStrategy()\n\n"},
  {"GetMTime", PyvtkDecimatePolylineFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDecimatePolylineFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("target_reduction"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineFilter_GetTargetReduction(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDecimatePolylineFilter_SetTargetReduction(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDecimatePolylineFilter_SetTargetReduction(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTargetReduction/SetTargetReduction\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_error"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineFilter_GetMaximumError(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDecimatePolylineFilter_SetMaximumError(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDecimatePolylineFilter_SetMaximumError(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaximumError/SetMaximumError\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_points_precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineFilter_GetOutputPointsPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDecimatePolylineFilter_SetOutputPointsPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDecimatePolylineFilter_SetOutputPointsPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputPointsPrecision/SetOutputPointsPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("decimation_strategy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineFilter_GetDecimationStrategy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDecimatePolylineFilter_SetDecimationStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDecimatePolylineFilter_SetDecimationStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDecimationStrategy/SetDecimationStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineFilter_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDecimatePolylineFilter_Doc =
  "vtkDecimatePolylineFilter - reduce the number of lines in a polyline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDecimatePolylineFilter is a filter to reduce the number of lines\n"
  "in a polyline. The algorithm functions by evaluating an error metric\n"
  "for each vertex (i.e., the distance of the vertex to a line defined\n"
  "from the two vertices on either side of the vertex). This error\n"
  "metric is computed through strategies, there are multiple\n"
  "implementations available and the default one is\n"
  "`vtkDecimatePolylineDistanceStrategy`. Then, these vertices are\n"
  "placed into a priority queue, and those with smaller errors are\n"
  "deleted first. The decimation continues until the target reduction is\n"
  "reached. While the filter will not delete end points, it will\n"
  "decimate closed loops down to a single line, thereby changing\n"
  "topology.\n\n"
  "Note that a maximum error value (which expression depends on the\n"
  "strategy used) can also be specified. This may limit the amount of\n"
  "decimation so the target reduction may not be met. When using the\n"
  "`vtkDecimatePolylineDistanceStrategy`, setting the maximum error\n"
  "value to a very small number, will eliminate colinear points.\n\n"
  "@warning\n"
  "This algorithm is a very simple implementation that overlooks some\n"
  "potential complexities. For example, if a vertex is multiply\n"
  "connected, meaning that it is used by multiple distinct polylines,\n"
  "then the extra topological constraints are ignored. This can produce\n"
  "less than optimal results.\n\n"
  "@sa\n"
  "vtkDecimate vtkDecimateProp vtkQuadricClustering vtkQuadricDecimation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDecimatePolylineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDecimatePolylineFilter", // tp_name
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
  PyvtkDecimatePolylineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDecimatePolylineFilter_StaticNew()
{
  return vtkDecimatePolylineFilter::New();
}

PyObject *PyvtkDecimatePolylineFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDecimatePolylineFilter_Type, PyvtkDecimatePolylineFilter_Methods,
    "vtkDecimatePolylineFilter",
 &PyvtkDecimatePolylineFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDecimatePolylineFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDecimatePolylineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDecimatePolylineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDecimatePolylineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

