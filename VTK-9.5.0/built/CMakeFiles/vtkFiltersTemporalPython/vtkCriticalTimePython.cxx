// python wrapper for vtkCriticalTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCriticalTime.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCriticalTime(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCriticalTime_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCriticalTime_ThresholdType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTemporal.vtkCriticalTime.ThresholdType", // tp_name
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
static PyObject *PyvtkCriticalTime_ThresholdType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCriticalTime_ThresholdType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCriticalTime_ComponentModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTemporal.vtkCriticalTime.ComponentModeType", // tp_name
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
static PyObject *PyvtkCriticalTime_ComponentModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCriticalTime_ComponentModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCriticalTime_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCriticalTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCriticalTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCriticalTime *tempr = vtkCriticalTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCriticalTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCriticalTime::NewInstance());

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
PyvtkCriticalTime_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCriticalTime::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCriticalTime::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_TimeStepsArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TimeStepsArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCriticalTime::TimeStepsArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkCriticalTime::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

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
      op->vtkCriticalTime::SetLowerThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkCriticalTime::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

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
      op->vtkCriticalTime::SetUpperThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetThresholdCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdCriterion(temp0);
    }
    else
    {
      op->vtkCriticalTime::SetThresholdCriterion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetThresholdCriterionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdCriterionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThresholdCriterionMinValue() :
      op->vtkCriticalTime::GetThresholdCriterionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetThresholdCriterionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdCriterionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThresholdCriterionMaxValue() :
      op->vtkCriticalTime::GetThresholdCriterionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetThresholdCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThresholdCriterion() :
      op->vtkCriticalTime::GetThresholdCriterion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetThresholdCriterionToBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCriterionToBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdCriterionToBetween();
    }
    else
    {
      op->vtkCriticalTime::SetThresholdCriterionToBetween();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetThresholdCriterionToLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCriterionToLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdCriterionToLower();
    }
    else
    {
      op->vtkCriticalTime::SetThresholdCriterionToLower();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetThresholdCriterionToUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCriterionToUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdCriterionToUpper();
    }
    else
    {
      op->vtkCriticalTime::SetThresholdCriterionToUpper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetThresholdFunctionAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdFunctionAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetThresholdFunctionAsString() :
      op->vtkCriticalTime::GetThresholdFunctionAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentMode(temp0);
    }
    else
    {
      op->vtkCriticalTime::SetComponentMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetComponentModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMinValue() :
      op->vtkCriticalTime::GetComponentModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetComponentModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMaxValue() :
      op->vtkCriticalTime::GetComponentModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMode() :
      op->vtkCriticalTime::GetComponentMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetComponentModeToUseSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseSelected();
    }
    else
    {
      op->vtkCriticalTime::SetComponentModeToUseSelected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetComponentModeToUseAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAll();
    }
    else
    {
      op->vtkCriticalTime::SetComponentModeToUseAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetComponentModeToUseAny(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAny");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAny();
    }
    else
    {
      op->vtkCriticalTime::SetComponentModeToUseAny();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetComponentModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetComponentModeAsString() :
      op->vtkCriticalTime::GetComponentModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedComponent(temp0);
    }
    else
    {
      op->vtkCriticalTime::SetSelectedComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetSelectedComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMinValue() :
      op->vtkCriticalTime::GetSelectedComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetSelectedComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMaxValue() :
      op->vtkCriticalTime::GetSelectedComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalTime_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalTime *op = static_cast<vtkCriticalTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkCriticalTime::GetSelectedComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCriticalTime_Methods[] = {
  {"IsTypeOf", PyvtkCriticalTime_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCriticalTime_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCriticalTime_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCriticalTime\nC++: static vtkCriticalTime *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCriticalTime_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCriticalTime\nC++: vtkCriticalTime *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCriticalTime_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCriticalTime_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TimeStepsArrayName", PyvtkCriticalTime_TimeStepsArrayName, METH_VARARGS,
   "TimeStepsArrayName() -> str\nC++: static const char *TimeStepsArrayName()\n\n"},
  {"GetLowerThreshold", PyvtkCriticalTime_GetLowerThreshold, METH_VARARGS,
   "GetLowerThreshold(self) -> float\nC++: virtual double GetLowerThreshold()\n\nSet/get the lower threshold. The default value is set to\n-infinity.\n"},
  {"SetLowerThreshold", PyvtkCriticalTime_SetLowerThreshold, METH_VARARGS,
   "SetLowerThreshold(self, _arg:float) -> None\nC++: virtual void SetLowerThreshold(double _arg)\n\n"},
  {"GetUpperThreshold", PyvtkCriticalTime_GetUpperThreshold, METH_VARARGS,
   "GetUpperThreshold(self) -> float\nC++: virtual double GetUpperThreshold()\n\nSet/get the upper threshold. The default value is set to\ninfinity.\n"},
  {"SetUpperThreshold", PyvtkCriticalTime_SetUpperThreshold, METH_VARARGS,
   "SetUpperThreshold(self, _arg:float) -> None\nC++: virtual void SetUpperThreshold(double _arg)\n\n"},
  {"SetThresholdCriterion", PyvtkCriticalTime_SetThresholdCriterion, METH_VARARGS,
   "SetThresholdCriterion(self, _arg:int) -> None\nC++: virtual void SetThresholdCriterion(int _arg)\n\nGet/Set the threshold criterion, defining which threshold bounds\nto use. The default method is `THRESHOLD_UPPER`.\n\nNote: values are clamped between THRESHOLD_BETWEEN and\nTHRESHOLD_UPPER.\n"},
  {"GetThresholdCriterionMinValue", PyvtkCriticalTime_GetThresholdCriterionMinValue, METH_VARARGS,
   "GetThresholdCriterionMinValue(self) -> int\nC++: virtual int GetThresholdCriterionMinValue()\n\n"},
  {"GetThresholdCriterionMaxValue", PyvtkCriticalTime_GetThresholdCriterionMaxValue, METH_VARARGS,
   "GetThresholdCriterionMaxValue(self) -> int\nC++: virtual int GetThresholdCriterionMaxValue()\n\n"},
  {"GetThresholdCriterion", PyvtkCriticalTime_GetThresholdCriterion, METH_VARARGS,
   "GetThresholdCriterion(self) -> int\nC++: virtual int GetThresholdCriterion()\n\n"},
  {"SetThresholdCriterionToBetween", PyvtkCriticalTime_SetThresholdCriterionToBetween, METH_VARARGS,
   "SetThresholdCriterionToBetween(self) -> None\nC++: void SetThresholdCriterionToBetween()\n\n"},
  {"SetThresholdCriterionToLower", PyvtkCriticalTime_SetThresholdCriterionToLower, METH_VARARGS,
   "SetThresholdCriterionToLower(self) -> None\nC++: void SetThresholdCriterionToLower()\n\n"},
  {"SetThresholdCriterionToUpper", PyvtkCriticalTime_SetThresholdCriterionToUpper, METH_VARARGS,
   "SetThresholdCriterionToUpper(self) -> None\nC++: void SetThresholdCriterionToUpper()\n\n"},
  {"GetThresholdFunctionAsString", PyvtkCriticalTime_GetThresholdFunctionAsString, METH_VARARGS,
   "GetThresholdFunctionAsString(self) -> str\nC++: std::string GetThresholdFunctionAsString()\n\nReturn a string representation of the threshold criterion\n"},
  {"SetComponentMode", PyvtkCriticalTime_SetComponentMode, METH_VARARGS,
   "SetComponentMode(self, _arg:int) -> None\nC++: virtual void SetComponentMode(int _arg)\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentModeMinValue", PyvtkCriticalTime_GetComponentModeMinValue, METH_VARARGS,
   "GetComponentModeMinValue(self) -> int\nC++: virtual int GetComponentModeMinValue()\n\n"},
  {"GetComponentModeMaxValue", PyvtkCriticalTime_GetComponentModeMaxValue, METH_VARARGS,
   "GetComponentModeMaxValue(self) -> int\nC++: virtual int GetComponentModeMaxValue()\n\n"},
  {"GetComponentMode", PyvtkCriticalTime_GetComponentMode, METH_VARARGS,
   "GetComponentMode(self) -> int\nC++: virtual int GetComponentMode()\n\n"},
  {"SetComponentModeToUseSelected", PyvtkCriticalTime_SetComponentModeToUseSelected, METH_VARARGS,
   "SetComponentModeToUseSelected(self) -> None\nC++: void SetComponentModeToUseSelected()\n\n"},
  {"SetComponentModeToUseAll", PyvtkCriticalTime_SetComponentModeToUseAll, METH_VARARGS,
   "SetComponentModeToUseAll(self) -> None\nC++: void SetComponentModeToUseAll()\n\n"},
  {"SetComponentModeToUseAny", PyvtkCriticalTime_SetComponentModeToUseAny, METH_VARARGS,
   "SetComponentModeToUseAny(self) -> None\nC++: void SetComponentModeToUseAny()\n\n"},
  {"GetComponentModeAsString", PyvtkCriticalTime_GetComponentModeAsString, METH_VARARGS,
   "GetComponentModeAsString(self) -> str\nC++: std::string GetComponentModeAsString()\n\nReturn a string representation of the component mode\n"},
  {"SetSelectedComponent", PyvtkCriticalTime_SetSelectedComponent, METH_VARARGS,
   "SetSelectedComponent(self, _arg:int) -> None\nC++: virtual void SetSelectedComponent(int _arg)\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. If set to the number of components of the\narray, threshold will apply on array's magnitude. The default\nvalue is 0.\n"},
  {"GetSelectedComponentMinValue", PyvtkCriticalTime_GetSelectedComponentMinValue, METH_VARARGS,
   "GetSelectedComponentMinValue(self) -> int\nC++: virtual int GetSelectedComponentMinValue()\n\n"},
  {"GetSelectedComponentMaxValue", PyvtkCriticalTime_GetSelectedComponentMaxValue, METH_VARARGS,
   "GetSelectedComponentMaxValue(self) -> int\nC++: virtual int GetSelectedComponentMaxValue()\n\n"},
  {"GetSelectedComponent", PyvtkCriticalTime_GetSelectedComponent, METH_VARARGS,
   "GetSelectedComponent(self) -> int\nC++: virtual int GetSelectedComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCriticalTime_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("lower_threshold"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCriticalTime_GetLowerThreshold(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCriticalTime_SetLowerThreshold(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCriticalTime_SetLowerThreshold(self, args);
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
      auto result = PyvtkCriticalTime_GetUpperThreshold(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCriticalTime_SetUpperThreshold(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCriticalTime_SetUpperThreshold(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUpperThreshold/SetUpperThreshold\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("threshold_criterion"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCriticalTime_GetThresholdCriterion(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCriticalTime_SetThresholdCriterion(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCriticalTime_SetThresholdCriterion(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetThresholdCriterion/SetThresholdCriterion\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("component_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCriticalTime_GetComponentMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCriticalTime_SetComponentMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCriticalTime_SetComponentMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComponentMode/SetComponentMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_component"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCriticalTime_GetSelectedComponent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCriticalTime_SetSelectedComponent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCriticalTime_SetSelectedComponent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectedComponent/SetSelectedComponent\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCriticalTime_Doc =
  "vtkCriticalTime - Compute time step at which a threshold value has\nbeen reached\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Given an input that changes over time, the `vtkCriticalTime` filter\n"
  "generates an output with similar structure, with a new data array\n"
  "containing time step values (other arrays are discarded). These\n"
  "values correspond to the time at which a specified threshold\n"
  "criterion has been met for a given point/cell array (at each\n"
  "point/cell respectively). To do so, this filter processes all\n"
  "available time steps. If the criterion is never met for a given\n"
  "point/cell, a NaN value is assigned. The output of this filter is not\n"
  "temporal.\n\n"
  "The threshold criterion can take three forms:\n"
  "1) greater than a particular value;\n"
  "2) less than a particular value;\n"
  "3) between two values.\n\n"
  "When the selected array has more than one component, you can use the\n"
  "`SetComponentMode` and `SetSelectedComponent` methods to control\n"
  "which component(s) are considered to check against the threshold\n"
  "criterion:\n"
  "1) if the component mode is set to `UseSelected`, the `Selected\n"
  "   Component` is used. The magnitude can be selected if\n"
  "   SelectedComponent is set to the number of components of the array;\n"
  "2) if the component mode is set to `UseAny`, only one component needs\n"
  "to meet the criterion;\n"
  "3) if the component mode is set to `UseAll`, all component needs to\n"
  "   meet the criterion.\n\n"
  "The output of this filter correspond to the input with the extra\n"
  "temporal field attached to the points/cells. The name of this array\n"
  "is the same of the selected array with `_critical_time` appended at\n"
  "the end.\n\n"
  "ote This filters expects that the input topology do not change over\n"
  "time.\n\n"
  "ote If the key\n"
  "`vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS()` is\n"
  "set, typically when running this filter in situ, then the filter runs\n"
  "the time steps one at a time. It requires causing the execution of\n"
  "the filter multiple times externally, by calling `UpdateTimeStep()`\n"
  "in a loop or using another filter that iterates over time downstream,\n"
  "for example. When the key is not set, the filter will execute itself\n"
  "by setting the key\n"
  "`vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING()`. In such\n"
  "case, this filter will produce an array called `time_steps` in the\n"
  "output's `FieldData`. It contains all the time steps that have been\n"
  "processed so far.\n\n"
  "@sa vtkTemporalAlgorithm vtkTemporalStatistics vtkThreshold\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCriticalTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTemporal.vtkCriticalTime", // tp_name
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
  PyvtkCriticalTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCriticalTime_StaticNew()
{
  return vtkCriticalTime::New();
}

PyObject *PyvtkCriticalTime_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCriticalTime_Type, PyvtkCriticalTime_Methods,
    "vtkCriticalTime",
 &PyvtkCriticalTime_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCriticalTime_ThresholdType_Type);
  PyVTKEnum_Add(&PyvtkCriticalTime_ThresholdType_Type, "vtkCriticalTime.ThresholdType");

  o = (PyObject *)&PyvtkCriticalTime_ThresholdType_Type;
  if (PyDict_SetItemString(d, "ThresholdType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCriticalTime_ComponentModeType_Type);
  PyVTKEnum_Add(&PyvtkCriticalTime_ComponentModeType_Type, "vtkCriticalTime.ComponentModeType");

  o = (PyObject *)&PyvtkCriticalTime_ComponentModeType_Type;
  if (PyDict_SetItemString(d, "ComponentModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCriticalTime::ThresholdType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "THRESHOLD_BETWEEN", vtkCriticalTime::THRESHOLD_BETWEEN },
        { "THRESHOLD_LOWER", vtkCriticalTime::THRESHOLD_LOWER },
        { "THRESHOLD_UPPER", vtkCriticalTime::THRESHOLD_UPPER },
      };

    o = PyvtkCriticalTime_ThresholdType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCriticalTime::ComponentModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "COMPONENT_MODE_USE_SELECTED", vtkCriticalTime::COMPONENT_MODE_USE_SELECTED },
        { "COMPONENT_MODE_USE_ALL", vtkCriticalTime::COMPONENT_MODE_USE_ALL },
        { "COMPONENT_MODE_USE_ANY", vtkCriticalTime::COMPONENT_MODE_USE_ANY },
      };

    o = PyvtkCriticalTime_ComponentModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCriticalTime_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCriticalTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCriticalTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCriticalTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

