// python wrapper for vtkLegendScaleActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLegendScaleActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLegendScaleActor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLegendScaleActor_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLegendScaleActor_AttributeLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkLegendScaleActor.AttributeLocation", // tp_name
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
static PyObject *PyvtkLegendScaleActor_AttributeLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLegendScaleActor_AttributeLocation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLegendScaleActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLegendScaleActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLegendScaleActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLegendScaleActor *tempr = vtkLegendScaleActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendScaleActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLegendScaleActor::NewInstance());

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
PyvtkLegendScaleActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLegendScaleActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLegendScaleActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMode(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelModeMinValue() :
      op->vtkLegendScaleActor::GetLabelModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelModeMaxValue() :
      op->vtkLegendScaleActor::GetLabelModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkLegendScaleActor::GetLabelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToDistance();
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelModeToDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToXYCoordinates(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetLabelModeToXYCoordinates."
    " (" "This class can now determine current plane. Please use the generic SetLabelModeToCoordinates instead." ")"
    " -- Deprecated since version " "9.4.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetLabelModeToXYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToXYCoordinates();
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelModeToXYCoordinates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLabelModeToCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToCoordinates();
    }
    else
    {
      op->vtkLegendScaleActor::SetLabelModeToCoordinates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetRightAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightAxisVisibility() :
      op->vtkLegendScaleActor::GetRightAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::RightAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RightAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::RightAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetTopAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopAxisVisibility() :
      op->vtkLegendScaleActor::GetTopAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::TopAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_TopAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::TopAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLeftAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftAxisVisibility() :
      op->vtkLegendScaleActor::GetLeftAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::LeftAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LeftAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::LeftAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomAxisVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetBottomAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomAxisVisibility() :
      op->vtkLegendScaleActor::GetBottomAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BottomAxisVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::BottomAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BottomAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BottomAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BottomAxisVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::BottomAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkLegendScaleActor::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAxesOn();
    }
    else
    {
      op->vtkLegendScaleActor::AllAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAxesOff();
    }
    else
    {
      op->vtkLegendScaleActor::AllAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAnnotationsOn();
    }
    else
    {
      op->vtkLegendScaleActor::AllAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_AllAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllAnnotationsOff();
    }
    else
    {
      op->vtkLegendScaleActor::AllAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridVisibility(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisibility() :
      op->vtkLegendScaleActor::GetGridVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GridVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GridVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GridVisibilityOn();
    }
    else
    {
      op->vtkLegendScaleActor::GridVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GridVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GridVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GridVisibilityOff();
    }
    else
    {
      op->vtkLegendScaleActor::GridVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetRightBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetRightBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetRightBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightBorderOffset() :
      op->vtkLegendScaleActor::GetRightBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetTopBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetTopBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetTopBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopBorderOffset() :
      op->vtkLegendScaleActor::GetTopBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetLeftBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetLeftBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetLeftBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftBorderOffset() :
      op->vtkLegendScaleActor::GetLeftBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomBorderOffset(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetBottomBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffsetMinValue() :
      op->vtkLegendScaleActor::GetBottomBorderOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffsetMaxValue() :
      op->vtkLegendScaleActor::GetBottomBorderOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomBorderOffset() :
      op->vtkLegendScaleActor::GetBottomBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffsetFactor(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetCornerOffsetFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactorMinValue() :
      op->vtkLegendScaleActor::GetCornerOffsetFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactorMaxValue() :
      op->vtkLegendScaleActor::GetCornerOffsetFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetCornerOffsetFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetFactor() :
      op->vtkLegendScaleActor::GetCornerOffsetFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNotation(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation() :
      op->vtkLegendScaleActor::GetNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkLegendScaleActor::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetNumberOfHorizontalLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHorizontalLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHorizontalLabels(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetNumberOfHorizontalLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetNumberOfHorizontalLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHorizontalLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHorizontalLabels() :
      op->vtkLegendScaleActor::GetNumberOfHorizontalLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetNumberOfVerticalLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVerticalLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVerticalLabels(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetNumberOfVerticalLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetNumberOfVerticalLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticalLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticalLabels() :
      op->vtkLegendScaleActor::GetNumberOfVerticalLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLegendScaleActor::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLegendScaleActor_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLegendScaleActor_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLegendScaleActor_SetOrigin_s1(self, args);
    case 1:
      return PyvtkLegendScaleActor_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkLegendScaleActor_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkLegendScaleActor::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendTitleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendTitleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLegendTitleProperty() :
      op->vtkLegendScaleActor::GetLegendTitleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLegendLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLegendLabelProperty() :
      op->vtkLegendScaleActor::GetLegendLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxesTextProperty(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetAxesTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetAxesProperty(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetAxesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetAxesProperty() :
      op->vtkLegendScaleActor::GetAxesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetUseFontSizeFromProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFontSizeFromProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFontSizeFromProperty(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetUseFontSizeFromProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetAdjustLabels(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAdjustLabels."
    " (" "This does not respect the number of labels. Please use SetSnapToGrid instead." ")"
    " -- Deprecated since version " "9.4.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAdjustLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustLabels(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetAdjustLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_SetSnapToGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToGrid(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::SetSnapToGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetRightAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetRightAxis() :
      op->vtkLegendScaleActor::GetRightAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetTopAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetTopAxis() :
      op->vtkLegendScaleActor::GetTopAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetLeftAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetLeftAxis() :
      op->vtkLegendScaleActor::GetLeftAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetBottomAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetBottomAxis() :
      op->vtkLegendScaleActor::GetBottomAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::BuildRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkLegendScaleActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLegendScaleActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendScaleActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendScaleActor *op = static_cast<vtkLegendScaleActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLegendScaleActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLegendScaleActor_Methods[] = {
  {"IsTypeOf", PyvtkLegendScaleActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLegendScaleActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLegendScaleActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLegendScaleActor\nC++: static vtkLegendScaleActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLegendScaleActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLegendScaleActor\nC++: vtkLegendScaleActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLegendScaleActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLegendScaleActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLabelMode", PyvtkLegendScaleActor_SetLabelMode, METH_VARARGS,
   "SetLabelMode(self, _arg:int) -> None\nC++: virtual void SetLabelMode(int _arg)\n\nSpecify the mode for labeling the scale axes. By default, the\naxes are labeled with the distance between points (centered at a\ndistance of 0.0). Alternatively if you know that the view is\nalign with the scene axes, axes can be labeled with coordinates\nvalues.\n"},
  {"GetLabelModeMinValue", PyvtkLegendScaleActor_GetLabelModeMinValue, METH_VARARGS,
   "GetLabelModeMinValue(self) -> int\nC++: virtual int GetLabelModeMinValue()\n\n"},
  {"GetLabelModeMaxValue", PyvtkLegendScaleActor_GetLabelModeMaxValue, METH_VARARGS,
   "GetLabelModeMaxValue(self) -> int\nC++: virtual int GetLabelModeMaxValue()\n\n"},
  {"GetLabelMode", PyvtkLegendScaleActor_GetLabelMode, METH_VARARGS,
   "GetLabelMode(self) -> int\nC++: virtual int GetLabelMode()\n\n"},
  {"SetLabelModeToDistance", PyvtkLegendScaleActor_SetLabelModeToDistance, METH_VARARGS,
   "SetLabelModeToDistance(self) -> None\nC++: void SetLabelModeToDistance()\n\n"},
  {"SetLabelModeToXYCoordinates", PyvtkLegendScaleActor_SetLabelModeToXYCoordinates, METH_VARARGS,
   "SetLabelModeToXYCoordinates(self) -> None\nC++: void SetLabelModeToXYCoordinates()\n\n"},
  {"SetLabelModeToCoordinates", PyvtkLegendScaleActor_SetLabelModeToCoordinates, METH_VARARGS,
   "SetLabelModeToCoordinates(self) -> None\nC++: void SetLabelModeToCoordinates()\n\n"},
  {"SetRightAxisVisibility", PyvtkLegendScaleActor_SetRightAxisVisibility, METH_VARARGS,
   "SetRightAxisVisibility(self, _arg:int) -> None\nC++: virtual void SetRightAxisVisibility(vtkTypeBool _arg)\n\nSet/Get the flags that control which of the four axes to display\n(top, bottom, left and right). By default, all the axes are\ndisplayed.\n"},
  {"GetRightAxisVisibility", PyvtkLegendScaleActor_GetRightAxisVisibility, METH_VARARGS,
   "GetRightAxisVisibility(self) -> int\nC++: virtual vtkTypeBool GetRightAxisVisibility()\n\n"},
  {"RightAxisVisibilityOn", PyvtkLegendScaleActor_RightAxisVisibilityOn, METH_VARARGS,
   "RightAxisVisibilityOn(self) -> None\nC++: virtual void RightAxisVisibilityOn()\n\n"},
  {"RightAxisVisibilityOff", PyvtkLegendScaleActor_RightAxisVisibilityOff, METH_VARARGS,
   "RightAxisVisibilityOff(self) -> None\nC++: virtual void RightAxisVisibilityOff()\n\n"},
  {"SetTopAxisVisibility", PyvtkLegendScaleActor_SetTopAxisVisibility, METH_VARARGS,
   "SetTopAxisVisibility(self, _arg:int) -> None\nC++: virtual void SetTopAxisVisibility(vtkTypeBool _arg)\n\n"},
  {"GetTopAxisVisibility", PyvtkLegendScaleActor_GetTopAxisVisibility, METH_VARARGS,
   "GetTopAxisVisibility(self) -> int\nC++: virtual vtkTypeBool GetTopAxisVisibility()\n\n"},
  {"TopAxisVisibilityOn", PyvtkLegendScaleActor_TopAxisVisibilityOn, METH_VARARGS,
   "TopAxisVisibilityOn(self) -> None\nC++: virtual void TopAxisVisibilityOn()\n\n"},
  {"TopAxisVisibilityOff", PyvtkLegendScaleActor_TopAxisVisibilityOff, METH_VARARGS,
   "TopAxisVisibilityOff(self) -> None\nC++: virtual void TopAxisVisibilityOff()\n\n"},
  {"SetLeftAxisVisibility", PyvtkLegendScaleActor_SetLeftAxisVisibility, METH_VARARGS,
   "SetLeftAxisVisibility(self, _arg:int) -> None\nC++: virtual void SetLeftAxisVisibility(vtkTypeBool _arg)\n\n"},
  {"GetLeftAxisVisibility", PyvtkLegendScaleActor_GetLeftAxisVisibility, METH_VARARGS,
   "GetLeftAxisVisibility(self) -> int\nC++: virtual vtkTypeBool GetLeftAxisVisibility()\n\n"},
  {"LeftAxisVisibilityOn", PyvtkLegendScaleActor_LeftAxisVisibilityOn, METH_VARARGS,
   "LeftAxisVisibilityOn(self) -> None\nC++: virtual void LeftAxisVisibilityOn()\n\n"},
  {"LeftAxisVisibilityOff", PyvtkLegendScaleActor_LeftAxisVisibilityOff, METH_VARARGS,
   "LeftAxisVisibilityOff(self) -> None\nC++: virtual void LeftAxisVisibilityOff()\n\n"},
  {"SetBottomAxisVisibility", PyvtkLegendScaleActor_SetBottomAxisVisibility, METH_VARARGS,
   "SetBottomAxisVisibility(self, _arg:int) -> None\nC++: virtual void SetBottomAxisVisibility(vtkTypeBool _arg)\n\n"},
  {"GetBottomAxisVisibility", PyvtkLegendScaleActor_GetBottomAxisVisibility, METH_VARARGS,
   "GetBottomAxisVisibility(self) -> int\nC++: virtual vtkTypeBool GetBottomAxisVisibility()\n\n"},
  {"BottomAxisVisibilityOn", PyvtkLegendScaleActor_BottomAxisVisibilityOn, METH_VARARGS,
   "BottomAxisVisibilityOn(self) -> None\nC++: virtual void BottomAxisVisibilityOn()\n\n"},
  {"BottomAxisVisibilityOff", PyvtkLegendScaleActor_BottomAxisVisibilityOff, METH_VARARGS,
   "BottomAxisVisibilityOff(self) -> None\nC++: virtual void BottomAxisVisibilityOff()\n\n"},
  {"SetLegendVisibility", PyvtkLegendScaleActor_SetLegendVisibility, METH_VARARGS,
   "SetLegendVisibility(self, _arg:int) -> None\nC++: virtual void SetLegendVisibility(vtkTypeBool _arg)\n\nIndicate whether the legend scale should be displayed or not. The\ndefault is On.\n"},
  {"GetLegendVisibility", PyvtkLegendScaleActor_GetLegendVisibility, METH_VARARGS,
   "GetLegendVisibility(self) -> int\nC++: virtual vtkTypeBool GetLegendVisibility()\n\n"},
  {"LegendVisibilityOn", PyvtkLegendScaleActor_LegendVisibilityOn, METH_VARARGS,
   "LegendVisibilityOn(self) -> None\nC++: virtual void LegendVisibilityOn()\n\n"},
  {"LegendVisibilityOff", PyvtkLegendScaleActor_LegendVisibilityOff, METH_VARARGS,
   "LegendVisibilityOff(self) -> None\nC++: virtual void LegendVisibilityOff()\n\n"},
  {"AllAxesOn", PyvtkLegendScaleActor_AllAxesOn, METH_VARARGS,
   "AllAxesOn(self) -> None\nC++: void AllAxesOn()\n\nConvenience method that turns all the axes either on or off.\n"},
  {"AllAxesOff", PyvtkLegendScaleActor_AllAxesOff, METH_VARARGS,
   "AllAxesOff(self) -> None\nC++: void AllAxesOff()\n\n"},
  {"AllAnnotationsOn", PyvtkLegendScaleActor_AllAnnotationsOn, METH_VARARGS,
   "AllAnnotationsOn(self) -> None\nC++: void AllAnnotationsOn()\n\nConvenience method that turns all the axes and the legend scale.\n"},
  {"AllAnnotationsOff", PyvtkLegendScaleActor_AllAnnotationsOff, METH_VARARGS,
   "AllAnnotationsOff(self) -> None\nC++: void AllAnnotationsOff()\n\n"},
  {"SetGridVisibility", PyvtkLegendScaleActor_SetGridVisibility, METH_VARARGS,
   "SetGridVisibility(self, _arg:bool) -> None\nC++: virtual void SetGridVisibility(bool _arg)\n\nSet/Get visibility of the grid.\n"},
  {"GetGridVisibility", PyvtkLegendScaleActor_GetGridVisibility, METH_VARARGS,
   "GetGridVisibility(self) -> bool\nC++: virtual bool GetGridVisibility()\n\n"},
  {"GridVisibilityOn", PyvtkLegendScaleActor_GridVisibilityOn, METH_VARARGS,
   "GridVisibilityOn(self) -> None\nC++: virtual void GridVisibilityOn()\n\n"},
  {"GridVisibilityOff", PyvtkLegendScaleActor_GridVisibilityOff, METH_VARARGS,
   "GridVisibilityOff(self) -> None\nC++: virtual void GridVisibilityOff()\n\n"},
  {"SetRightBorderOffset", PyvtkLegendScaleActor_SetRightBorderOffset, METH_VARARGS,
   "SetRightBorderOffset(self, _arg:int) -> None\nC++: virtual void SetRightBorderOffset(int _arg)\n\nSet/Get the offset of the right axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetRightBorderOffsetMinValue", PyvtkLegendScaleActor_GetRightBorderOffsetMinValue, METH_VARARGS,
   "GetRightBorderOffsetMinValue(self) -> int\nC++: virtual int GetRightBorderOffsetMinValue()\n\n"},
  {"GetRightBorderOffsetMaxValue", PyvtkLegendScaleActor_GetRightBorderOffsetMaxValue, METH_VARARGS,
   "GetRightBorderOffsetMaxValue(self) -> int\nC++: virtual int GetRightBorderOffsetMaxValue()\n\n"},
  {"GetRightBorderOffset", PyvtkLegendScaleActor_GetRightBorderOffset, METH_VARARGS,
   "GetRightBorderOffset(self) -> int\nC++: virtual int GetRightBorderOffset()\n\n"},
  {"SetTopBorderOffset", PyvtkLegendScaleActor_SetTopBorderOffset, METH_VARARGS,
   "SetTopBorderOffset(self, _arg:int) -> None\nC++: virtual void SetTopBorderOffset(int _arg)\n\nSet/Get the offset of the top axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 30.\n"},
  {"GetTopBorderOffsetMinValue", PyvtkLegendScaleActor_GetTopBorderOffsetMinValue, METH_VARARGS,
   "GetTopBorderOffsetMinValue(self) -> int\nC++: virtual int GetTopBorderOffsetMinValue()\n\n"},
  {"GetTopBorderOffsetMaxValue", PyvtkLegendScaleActor_GetTopBorderOffsetMaxValue, METH_VARARGS,
   "GetTopBorderOffsetMaxValue(self) -> int\nC++: virtual int GetTopBorderOffsetMaxValue()\n\n"},
  {"GetTopBorderOffset", PyvtkLegendScaleActor_GetTopBorderOffset, METH_VARARGS,
   "GetTopBorderOffset(self) -> int\nC++: virtual int GetTopBorderOffset()\n\n"},
  {"SetLeftBorderOffset", PyvtkLegendScaleActor_SetLeftBorderOffset, METH_VARARGS,
   "SetLeftBorderOffset(self, _arg:int) -> None\nC++: virtual void SetLeftBorderOffset(int _arg)\n\nSet/Get the offset of the left axis from the border. This number\nis expressed in pixels, and represents the approximate distance\nof the axes from the sides of the renderer. The default is 50.\n"},
  {"GetLeftBorderOffsetMinValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMinValue, METH_VARARGS,
   "GetLeftBorderOffsetMinValue(self) -> int\nC++: virtual int GetLeftBorderOffsetMinValue()\n\n"},
  {"GetLeftBorderOffsetMaxValue", PyvtkLegendScaleActor_GetLeftBorderOffsetMaxValue, METH_VARARGS,
   "GetLeftBorderOffsetMaxValue(self) -> int\nC++: virtual int GetLeftBorderOffsetMaxValue()\n\n"},
  {"GetLeftBorderOffset", PyvtkLegendScaleActor_GetLeftBorderOffset, METH_VARARGS,
   "GetLeftBorderOffset(self) -> int\nC++: virtual int GetLeftBorderOffset()\n\n"},
  {"SetBottomBorderOffset", PyvtkLegendScaleActor_SetBottomBorderOffset, METH_VARARGS,
   "SetBottomBorderOffset(self, _arg:int) -> None\nC++: virtual void SetBottomBorderOffset(int _arg)\n\nSet/Get the offset of the bottom axis from the border. This\nnumber is expressed in pixels, and represents the approximate\ndistance of the axes from the sides of the renderer. The default\nis 30.\n"},
  {"GetBottomBorderOffsetMinValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMinValue, METH_VARARGS,
   "GetBottomBorderOffsetMinValue(self) -> int\nC++: virtual int GetBottomBorderOffsetMinValue()\n\n"},
  {"GetBottomBorderOffsetMaxValue", PyvtkLegendScaleActor_GetBottomBorderOffsetMaxValue, METH_VARARGS,
   "GetBottomBorderOffsetMaxValue(self) -> int\nC++: virtual int GetBottomBorderOffsetMaxValue()\n\n"},
  {"GetBottomBorderOffset", PyvtkLegendScaleActor_GetBottomBorderOffset, METH_VARARGS,
   "GetBottomBorderOffset(self) -> int\nC++: virtual int GetBottomBorderOffset()\n\n"},
  {"SetCornerOffsetFactor", PyvtkLegendScaleActor_SetCornerOffsetFactor, METH_VARARGS,
   "SetCornerOffsetFactor(self, _arg:float) -> None\nC++: virtual void SetCornerOffsetFactor(double _arg)\n\nGet/Set the corner offset. This is the offset factor used to\noffset the axes at the corners. Default value is 2.0.\n"},
  {"GetCornerOffsetFactorMinValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMinValue, METH_VARARGS,
   "GetCornerOffsetFactorMinValue(self) -> float\nC++: virtual double GetCornerOffsetFactorMinValue()\n\n"},
  {"GetCornerOffsetFactorMaxValue", PyvtkLegendScaleActor_GetCornerOffsetFactorMaxValue, METH_VARARGS,
   "GetCornerOffsetFactorMaxValue(self) -> float\nC++: virtual double GetCornerOffsetFactorMaxValue()\n\n"},
  {"GetCornerOffsetFactor", PyvtkLegendScaleActor_GetCornerOffsetFactor, METH_VARARGS,
   "GetCornerOffsetFactor(self) -> float\nC++: virtual double GetCornerOffsetFactor()\n\n"},
  {"SetNotation", PyvtkLegendScaleActor_SetNotation, METH_VARARGS,
   "SetNotation(self, notation:int) -> None\nC++: void SetNotation(int notation)\n\nGet/set the numerical notation for axes labels: standard,\nscientific or mixed (0, 1, 2). Default is 0.\n"},
  {"GetNotation", PyvtkLegendScaleActor_GetNotation, METH_VARARGS,
   "GetNotation(self) -> int\nC++: int GetNotation()\n\n"},
  {"SetPrecision", PyvtkLegendScaleActor_SetPrecision, METH_VARARGS,
   "SetPrecision(self, val:int) -> None\nC++: void SetPrecision(int val)\n\nGet/set the numerical precision to use for axis labels, default\nis 2.\n"},
  {"GetPrecision", PyvtkLegendScaleActor_GetPrecision, METH_VARARGS,
   "GetPrecision(self) -> int\nC++: int GetPrecision()\n\n"},
  {"SetNumberOfHorizontalLabels", PyvtkLegendScaleActor_SetNumberOfHorizontalLabels, METH_VARARGS,
   "SetNumberOfHorizontalLabels(self, val:int) -> None\nC++: void SetNumberOfHorizontalLabels(int val)\n\nGet/set the number of ticks (and labels) for the horizontal axis,\ndefault is 5.\n"},
  {"GetNumberOfHorizontalLabels", PyvtkLegendScaleActor_GetNumberOfHorizontalLabels, METH_VARARGS,
   "GetNumberOfHorizontalLabels(self) -> int\nC++: int GetNumberOfHorizontalLabels()\n\n"},
  {"SetNumberOfVerticalLabels", PyvtkLegendScaleActor_SetNumberOfVerticalLabels, METH_VARARGS,
   "SetNumberOfVerticalLabels(self, val:int) -> None\nC++: void SetNumberOfVerticalLabels(int val)\n\nGet/set the number of ticks (and labels) for the vertical axis,\ndefault is 5.\n"},
  {"GetNumberOfVerticalLabels", PyvtkLegendScaleActor_GetNumberOfVerticalLabels, METH_VARARGS,
   "GetNumberOfVerticalLabels(self) -> int\nC++: int GetNumberOfVerticalLabels()\n\n"},
  {"SetOrigin", PyvtkLegendScaleActor_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nGet/Set the origin of the data. Used only in Coordinates mode.\n"},
  {"GetOrigin", PyvtkLegendScaleActor_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"GetLegendTitleProperty", PyvtkLegendScaleActor_GetLegendTitleProperty, METH_VARARGS,
   "GetLegendTitleProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLegendTitleProperty()\n\nSet/Get the labels text properties for the legend title and\nlabels.\n"},
  {"GetLegendLabelProperty", PyvtkLegendScaleActor_GetLegendLabelProperty, METH_VARARGS,
   "GetLegendLabelProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLegendLabelProperty()\n\n"},
  {"SetAxesTextProperty", PyvtkLegendScaleActor_SetAxesTextProperty, METH_VARARGS,
   "SetAxesTextProperty(self, property:vtkTextProperty) -> None\nC++: void SetAxesTextProperty(vtkTextProperty *property)\n\nSet the axes text properties.\n"},
  {"SetAxesProperty", PyvtkLegendScaleActor_SetAxesProperty, METH_VARARGS,
   "SetAxesProperty(self, property:vtkProperty2D) -> None\nC++: void SetAxesProperty(vtkProperty2D *property)\n\nSet the 2D property for both axis and grid\n"},
  {"GetAxesProperty", PyvtkLegendScaleActor_GetAxesProperty, METH_VARARGS,
   "GetAxesProperty(self) -> vtkProperty2D\nC++: vtkProperty2D *GetAxesProperty()\n\nReturn the property used for the right axis which should be the\nsame as the other ones if set using `SetAxesProperty`\n"},
  {"SetUseFontSizeFromProperty", PyvtkLegendScaleActor_SetUseFontSizeFromProperty, METH_VARARGS,
   "SetUseFontSizeFromProperty(self, sizeFromProp:bool) -> None\nC++: void SetUseFontSizeFromProperty(bool sizeFromProp)\n\nSet the axes to get font size from text property.\n"},
  {"SetAdjustLabels", PyvtkLegendScaleActor_SetAdjustLabels, METH_VARARGS,
   "SetAdjustLabels(self, adjust:bool) -> None\nC++: void SetAdjustLabels(bool adjust)\n\nSet the axes to adjust labels to a \"nice\" one. As this does not\nrespect the number of labels, prefer SnapToGrid. It is ignored if\nSnapToGrid is true. Default is false.\n"},
  {"SetSnapToGrid", PyvtkLegendScaleActor_SetSnapToGrid, METH_VARARGS,
   "SetSnapToGrid(self, snap:bool) -> None\nC++: void SetSnapToGrid(bool snap)\n\nIf on, labels are positioned on rounded values. When on it\nignores `AdjustLabels`. Default is false.\n"},
  {"GetRightAxis", PyvtkLegendScaleActor_GetRightAxis, METH_VARARGS,
   "GetRightAxis(self) -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetRightAxis()\n\nThese are methods to retrieve the vtkAxisActors used to represent\nthe four axes that form this representation. Users may retrieve\nand then modify these axes to control their appearance.\n"},
  {"GetTopAxis", PyvtkLegendScaleActor_GetTopAxis, METH_VARARGS,
   "GetTopAxis(self) -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetTopAxis()\n\n"},
  {"GetLeftAxis", PyvtkLegendScaleActor_GetLeftAxis, METH_VARARGS,
   "GetLeftAxis(self) -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetLeftAxis()\n\n"},
  {"GetBottomAxis", PyvtkLegendScaleActor_GetBottomAxis, METH_VARARGS,
   "GetBottomAxis(self) -> vtkAxisActor2D\nC++: virtual vtkAxisActor2D *GetBottomAxis()\n\n"},
  {"BuildRepresentation", PyvtkLegendScaleActor_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self, viewport:vtkViewport) -> None\nC++: virtual void BuildRepresentation(vtkViewport *viewport)\n\nStandard methods supporting the rendering process.\n"},
  {"GetActors2D", PyvtkLegendScaleActor_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkLegendScaleActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkLegendScaleActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkLegendScaleActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLegendScaleActor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("label_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLabelMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetLabelMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetLabelMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelMode/SetLabelMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("right_axis_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetRightAxisVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetRightAxisVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetRightAxisVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRightAxisVisibility/SetRightAxisVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("top_axis_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetTopAxisVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetTopAxisVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetTopAxisVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTopAxisVisibility/SetTopAxisVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("left_axis_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLeftAxisVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetLeftAxisVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetLeftAxisVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLeftAxisVisibility/SetLeftAxisVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bottom_axis_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetBottomAxisVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetBottomAxisVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetBottomAxisVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBottomAxisVisibility/SetBottomAxisVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("legend_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLegendVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetLegendVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetLegendVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLegendVisibility/SetLegendVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("grid_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetGridVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetGridVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetGridVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridVisibility/SetGridVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("right_border_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetRightBorderOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetRightBorderOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetRightBorderOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRightBorderOffset/SetRightBorderOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("top_border_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetTopBorderOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetTopBorderOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetTopBorderOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTopBorderOffset/SetTopBorderOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("left_border_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLeftBorderOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetLeftBorderOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetLeftBorderOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLeftBorderOffset/SetLeftBorderOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bottom_border_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetBottomBorderOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetBottomBorderOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetBottomBorderOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBottomBorderOffset/SetBottomBorderOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("corner_offset_factor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetCornerOffsetFactor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetCornerOffsetFactor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetCornerOffsetFactor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCornerOffsetFactor/SetCornerOffsetFactor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("notation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetNotation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNotation/SetNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPrecision/SetPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrigin/SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axes_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetAxesTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetAxesTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetAxesTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axes_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetAxesProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetAxesProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetAxesProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxesProperty/SetAxesProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_font_size_from_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetUseFontSizeFromProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetUseFontSizeFromProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetUseFontSizeFromProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("adjust_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetAdjustLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetAdjustLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetAdjustLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("snap_to_grid"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetSnapToGrid(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetSnapToGrid(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSnapToGrid\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("legend_title_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLegendTitleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLegendTitleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("legend_label_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLegendLabelProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLegendLabelProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("right_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetRightAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRightAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("top_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetTopAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTopAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("left_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetLeftAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLeftAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bottom_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetBottomAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBottomAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_horizontal_labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetNumberOfHorizontalLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetNumberOfHorizontalLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetNumberOfHorizontalLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfHorizontalLabels/SetNumberOfHorizontalLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_vertical_labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLegendScaleActor_GetNumberOfVerticalLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLegendScaleActor_SetNumberOfVerticalLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLegendScaleActor_SetNumberOfVerticalLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfVerticalLabels/SetNumberOfVerticalLabels\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLegendScaleActor_Doc =
  "vtkLegendScaleActor - annotate the render window with scale and\ndistance information\n\n"
  "Superclass: vtkProp\n\n"
  "This class is used to annotate the render window. Its basic goal is\n"
  "to provide an indication of the scale of the scene. Four axes\n"
  "surrounding the render window indicate (in a variety of ways) the\n"
  "scale of what the camera is viewing. An option also exists for\n"
  "displaying a scale legend.\n\n"
  "The axes can be programmed either to display distance scales or\n"
  "coordinate values. By default, the scales display a distance.\n"
  "However, if you know that the view is down a scene axis, the scales\n"
  "can be programmed to display coordinate values.\n\n"
  "@warning\n"
  "Please be aware that the axes and scale values are subject to\n"
  "perspective effects. The distances are computed in the focal plane of\n"
  "the camera. When there are large view angles (i.e., perspective\n"
  "projection), the computed distances may provide users the wrong sense\n"
  "of scale. These effects are not present when parallel projection is\n"
  "enabled.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLegendScaleActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkLegendScaleActor", // tp_name
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
  PyvtkLegendScaleActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLegendScaleActor_StaticNew()
{
  return vtkLegendScaleActor::New();
}

PyObject *PyvtkLegendScaleActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLegendScaleActor_Type, PyvtkLegendScaleActor_Methods,
    "vtkLegendScaleActor",
 &PyvtkLegendScaleActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLegendScaleActor_AttributeLocation_Type);
  PyVTKEnum_Add(&PyvtkLegendScaleActor_AttributeLocation_Type, "vtkLegendScaleActor.AttributeLocation");

  o = (PyObject *)&PyvtkLegendScaleActor_AttributeLocation_Type;
  if (PyDict_SetItemString(d, "AttributeLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLegendScaleActor::AttributeLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DISTANCE", vtkLegendScaleActor::DISTANCE },
        { "COORDINATES", vtkLegendScaleActor::COORDINATES },
        { "XY_COORDINATES", vtkLegendScaleActor::XY_COORDINATES },
      };

    o = PyvtkLegendScaleActor_AttributeLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLegendScaleActor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLegendScaleActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLegendScaleActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLegendScaleActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

