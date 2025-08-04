// python wrapper for vtkAxisAlignedReflectionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAxisAlignedReflectionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAxisAlignedReflectionFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAxisAlignedReflectionFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedReflectionFilter_PlaneAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedReflectionFilter.PlaneAxis", // tp_name
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
static PyObject *PyvtkAxisAlignedReflectionFilter_PlaneAxis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisAlignedReflectionFilter_PlaneAxis_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedReflectionFilter_PlaneModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedReflectionFilter.PlaneModes", // tp_name
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
static PyObject *PyvtkAxisAlignedReflectionFilter_PlaneModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisAlignedReflectionFilter_PlaneModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisAlignedReflectionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisAlignedReflectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisAlignedReflectionFilter *tempr = vtkAxisAlignedReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisAlignedReflectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisAlignedReflectionFilter::NewInstance());

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
PyvtkAxisAlignedReflectionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxisAlignedReflectionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxisAlignedReflectionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetReflectionPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReflectionPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetReflectionPlane(temp0);
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetReflectionPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetReflectionPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReflectionPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetReflectionPlane() :
      op->vtkAxisAlignedReflectionFilter::GetReflectionPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneMode(temp0);
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetPlaneModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneModeMinValue() :
      op->vtkAxisAlignedReflectionFilter::GetPlaneModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetPlaneModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneModeMaxValue() :
      op->vtkAxisAlignedReflectionFilter::GetPlaneModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMode() :
      op->vtkAxisAlignedReflectionFilter::GetPlaneMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToPlane();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToXMin();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToXMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToYMin();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToYMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToZMin();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToZMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToXMax();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToXMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToYMax();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToYMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetPlaneModeToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneModeToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneModeToZMax();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetPlaneModeToZMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyInput(temp0);
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkAxisAlignedReflectionFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOn();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::CopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOff();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::CopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_SetReflectAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReflectAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReflectAllInputArrays(temp0);
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::SetReflectAllInputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetReflectAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReflectAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReflectAllInputArrays() :
      op->vtkAxisAlignedReflectionFilter::GetReflectAllInputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_ReflectAllInputArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReflectAllInputArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReflectAllInputArraysOn();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::ReflectAllInputArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_ReflectAllInputArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReflectAllInputArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReflectAllInputArraysOff();
    }
    else
    {
      op->vtkAxisAlignedReflectionFilter::ReflectAllInputArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedReflectionFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedReflectionFilter *op = static_cast<vtkAxisAlignedReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAxisAlignedReflectionFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisAlignedReflectionFilter_Methods[] = {
  {"IsTypeOf", PyvtkAxisAlignedReflectionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisAlignedReflectionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisAlignedReflectionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxisAlignedReflectionFilter\nC++: static vtkAxisAlignedReflectionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisAlignedReflectionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxisAlignedReflectionFilter\nC++: vtkAxisAlignedReflectionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxisAlignedReflectionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxisAlignedReflectionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetReflectionPlane", PyvtkAxisAlignedReflectionFilter_SetReflectionPlane, METH_VARARGS,
   "SetReflectionPlane(self, _arg:vtkPlane) -> None\nC++: virtual void SetReflectionPlane(vtkPlane *_arg)\n\nSpecify the vtkPlane to perform the reflection when using PLANE\nmode. Default is AxisAligned true, Offset 0, Normal (1.0, 0.0,\n0.0) and Origin (0.0, 0.0, 0.0)\n"},
  {"GetReflectionPlane", PyvtkAxisAlignedReflectionFilter_GetReflectionPlane, METH_VARARGS,
   "GetReflectionPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetReflectionPlane()\n\n"},
  {"SetPlaneMode", PyvtkAxisAlignedReflectionFilter_SetPlaneMode, METH_VARARGS,
   "SetPlaneMode(self, _arg:int) -> None\nC++: virtual void SetPlaneMode(int _arg)\n\nDetermines which plane to reflect across. If the value is PLANE,\nthe plane is defined by the ReflectionPlane. The other six\noptions (X Min, X Max, etc.) place the reflection plane at the\nspecified face of the bounding box of the input dataset. Default\nis PLANE.\n"},
  {"GetPlaneModeMinValue", PyvtkAxisAlignedReflectionFilter_GetPlaneModeMinValue, METH_VARARGS,
   "GetPlaneModeMinValue(self) -> int\nC++: virtual int GetPlaneModeMinValue()\n\n"},
  {"GetPlaneModeMaxValue", PyvtkAxisAlignedReflectionFilter_GetPlaneModeMaxValue, METH_VARARGS,
   "GetPlaneModeMaxValue(self) -> int\nC++: virtual int GetPlaneModeMaxValue()\n\n"},
  {"GetPlaneMode", PyvtkAxisAlignedReflectionFilter_GetPlaneMode, METH_VARARGS,
   "GetPlaneMode(self) -> int\nC++: virtual int GetPlaneMode()\n\n"},
  {"SetPlaneModeToPlane", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToPlane, METH_VARARGS,
   "SetPlaneModeToPlane(self) -> None\nC++: void SetPlaneModeToPlane()\n\n"},
  {"SetPlaneModeToXMin", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToXMin, METH_VARARGS,
   "SetPlaneModeToXMin(self) -> None\nC++: void SetPlaneModeToXMin()\n\n"},
  {"SetPlaneModeToYMin", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToYMin, METH_VARARGS,
   "SetPlaneModeToYMin(self) -> None\nC++: void SetPlaneModeToYMin()\n\n"},
  {"SetPlaneModeToZMin", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToZMin, METH_VARARGS,
   "SetPlaneModeToZMin(self) -> None\nC++: void SetPlaneModeToZMin()\n\n"},
  {"SetPlaneModeToXMax", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToXMax, METH_VARARGS,
   "SetPlaneModeToXMax(self) -> None\nC++: void SetPlaneModeToXMax()\n\n"},
  {"SetPlaneModeToYMax", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToYMax, METH_VARARGS,
   "SetPlaneModeToYMax(self) -> None\nC++: void SetPlaneModeToYMax()\n\n"},
  {"SetPlaneModeToZMax", PyvtkAxisAlignedReflectionFilter_SetPlaneModeToZMax, METH_VARARGS,
   "SetPlaneModeToZMax(self) -> None\nC++: void SetPlaneModeToZMax()\n\n"},
  {"SetCopyInput", PyvtkAxisAlignedReflectionFilter_SetCopyInput, METH_VARARGS,
   "SetCopyInput(self, _arg:bool) -> None\nC++: virtual void SetCopyInput(bool _arg)\n\nCopy the input geometry to the output. If false, the output will\nonly contain the reflection. Default is true.\n"},
  {"GetCopyInput", PyvtkAxisAlignedReflectionFilter_GetCopyInput, METH_VARARGS,
   "GetCopyInput(self) -> bool\nC++: virtual bool GetCopyInput()\n\n"},
  {"CopyInputOn", PyvtkAxisAlignedReflectionFilter_CopyInputOn, METH_VARARGS,
   "CopyInputOn(self) -> None\nC++: virtual void CopyInputOn()\n\n"},
  {"CopyInputOff", PyvtkAxisAlignedReflectionFilter_CopyInputOff, METH_VARARGS,
   "CopyInputOff(self) -> None\nC++: virtual void CopyInputOff()\n\n"},
  {"SetReflectAllInputArrays", PyvtkAxisAlignedReflectionFilter_SetReflectAllInputArrays, METH_VARARGS,
   "SetReflectAllInputArrays(self, _arg:bool) -> None\nC++: virtual void SetReflectAllInputArrays(bool _arg)\n\nIf false, only Vectors, Normals and Tensors will be reflected. If\ntrue, all 3-component data arrays ( considered as 3D vectors),\n6-component data arrays (considered as symmetric tensors),\n9-component data arrays (considered as tensors ) of signed type\nwill be reflected. All other won't be reflected and will only be\ncopied. Default is false.\n"},
  {"GetReflectAllInputArrays", PyvtkAxisAlignedReflectionFilter_GetReflectAllInputArrays, METH_VARARGS,
   "GetReflectAllInputArrays(self) -> bool\nC++: virtual bool GetReflectAllInputArrays()\n\n"},
  {"ReflectAllInputArraysOn", PyvtkAxisAlignedReflectionFilter_ReflectAllInputArraysOn, METH_VARARGS,
   "ReflectAllInputArraysOn(self) -> None\nC++: virtual void ReflectAllInputArraysOn()\n\n"},
  {"ReflectAllInputArraysOff", PyvtkAxisAlignedReflectionFilter_ReflectAllInputArraysOff, METH_VARARGS,
   "ReflectAllInputArraysOff(self) -> None\nC++: virtual void ReflectAllInputArraysOff()\n\n"},
  {"GetMTime", PyvtkAxisAlignedReflectionFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the last modified time of this filter. This time also depends\non the modified time of the internal ReflectionFunction instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAxisAlignedReflectionFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("reflection_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedReflectionFilter_GetReflectionPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedReflectionFilter_SetReflectionPlane(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedReflectionFilter_SetReflectionPlane(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetReflectionPlane/SetReflectionPlane\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("plane_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedReflectionFilter_GetPlaneMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedReflectionFilter_SetPlaneMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedReflectionFilter_SetPlaneMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPlaneMode/SetPlaneMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedReflectionFilter_GetCopyInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedReflectionFilter_SetCopyInput(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedReflectionFilter_SetCopyInput(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyInput/SetCopyInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("reflect_all_input_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedReflectionFilter_GetReflectAllInputArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedReflectionFilter_SetReflectAllInputArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedReflectionFilter_SetReflectAllInputArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetReflectAllInputArrays/SetReflectAllInputArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedReflectionFilter_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAxisAlignedReflectionFilter_Doc =
  "vtkAxisAlignedReflectionFilter - Reflects the input over an\naxis-aligned plane\n\n"
  "Superclass: vtkCompositeDataSetAlgorithm\n\n"
  "The Axis Aligned Reflection filter reflects the input dataset across\n"
  "the specified plane. This filter operates on any type of data set or\n"
  "hyper tree grid and produces a Partitioned DataSet Collection\n"
  "containing partitions of the same type as the input (the reflection\n"
  "and the input if CopyInput is enabled). Data arrays are also\n"
  "reflected (if ReflectAllInputArrays is false, only Vectors, Normals\n"
  "and Tensors will be reflected, otherwise, all 3, 6 and 9-component\n"
  "data arrays are reflected).\n\n"
  "@sa vtkReflectionFilter vtkHyperTreeGridAxisReflection\n"
  "The main difference between vtkReflectionFilter and\n"
  "vtkAxisAlignedReflectionFilter is the output type\n"
  "(vtkReflectionFilter produces an Unstructured Grid no matter the\n"
  "input type). Also, vtkAxisAlignedReflectionFilter supports Hyper Tree\n"
  "Grids (vtkReflectionFilter does not).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedReflectionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedReflectionFilter", // tp_name
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
  PyvtkAxisAlignedReflectionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisAlignedReflectionFilter_StaticNew()
{
  return vtkAxisAlignedReflectionFilter::New();
}

PyObject *PyvtkAxisAlignedReflectionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxisAlignedReflectionFilter_Type, PyvtkAxisAlignedReflectionFilter_Methods,
    "vtkAxisAlignedReflectionFilter",
 &PyvtkAxisAlignedReflectionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCompositeDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxisAlignedReflectionFilter_PlaneAxis_Type);
  PyVTKEnum_Add(&PyvtkAxisAlignedReflectionFilter_PlaneAxis_Type, "vtkAxisAlignedReflectionFilter.PlaneAxis");

  o = (PyObject *)&PyvtkAxisAlignedReflectionFilter_PlaneAxis_Type;
  if (PyDict_SetItemString(d, "PlaneAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisAlignedReflectionFilter_PlaneModes_Type);
  PyVTKEnum_Add(&PyvtkAxisAlignedReflectionFilter_PlaneModes_Type, "vtkAxisAlignedReflectionFilter.PlaneModes");

  o = (PyObject *)&PyvtkAxisAlignedReflectionFilter_PlaneModes_Type;
  if (PyDict_SetItemString(d, "PlaneModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAxisAlignedReflectionFilter::PlaneAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X_PLANE", vtkAxisAlignedReflectionFilter::X_PLANE },
        { "Y_PLANE", vtkAxisAlignedReflectionFilter::Y_PLANE },
        { "Z_PLANE", vtkAxisAlignedReflectionFilter::Z_PLANE },
      };

    o = PyvtkAxisAlignedReflectionFilter_PlaneAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkAxisAlignedReflectionFilter::PlaneModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "PLANE", vtkAxisAlignedReflectionFilter::PLANE },
        { "X_MIN", vtkAxisAlignedReflectionFilter::X_MIN },
        { "Y_MIN", vtkAxisAlignedReflectionFilter::Y_MIN },
        { "Z_MIN", vtkAxisAlignedReflectionFilter::Z_MIN },
        { "X_MAX", vtkAxisAlignedReflectionFilter::X_MAX },
        { "Y_MAX", vtkAxisAlignedReflectionFilter::Y_MAX },
        { "Z_MAX", vtkAxisAlignedReflectionFilter::Z_MAX },
      };

    o = PyvtkAxisAlignedReflectionFilter_PlaneModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAxisAlignedReflectionFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisAlignedReflectionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisAlignedReflectionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisAlignedReflectionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

