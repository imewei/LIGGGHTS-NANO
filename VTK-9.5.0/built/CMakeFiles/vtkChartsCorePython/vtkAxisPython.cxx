// python wrapper for vtkAxis
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
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkAxis.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAxis(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAxis_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxis_Location_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkAxis.Location", // tp_name
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
static PyObject *PyvtkAxis_Location_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxis_Location_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAxis_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxis::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxis::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxis *tempr = vtkAxis::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxis::NewInstance());

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
PyvtkAxis_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxis::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxis::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkAxis::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkAxis::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(*temp0);
    }
    else
    {
      op->vtkAxis::SetPoint1(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetPoint1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxis_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkAxis_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxis::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition1() :
      op->vtkAxis::GetPosition1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(*temp0);
    }
    else
    {
      op->vtkAxis::SetPoint2(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetPoint2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxis_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkAxis_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxis::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkAxis::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTicks(temp0);
    }
    else
    {
      op->vtkAxis::SetNumberOfTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicks() :
      op->vtkAxis::GetNumberOfTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLength(temp0);
    }
    else
    {
      op->vtkAxis::SetTickLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTickLength() :
      op->vtkAxis::GetTickLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkAxis::GetLabelProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimum(temp0);
    }
    else
    {
      op->vtkAxis::SetMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimum() :
      op->vtkAxis::GetMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximum(temp0);
    }
    else
    {
      op->vtkAxis::SetMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkAxis::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMinimum(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimum() :
      op->vtkAxis::GetUnscaledMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMaximum(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximum() :
      op->vtkAxis::GetUnscaledMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkAxis::SetRange(temp0);
    }

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
PyvtkAxis_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkAxis_SetUnscaledRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledRange(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetUnscaledRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetUnscaledRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetUnscaledRange(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledRange(temp0);
    }

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
PyvtkAxis_SetUnscaledRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetUnscaledRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetUnscaledRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUnscaledRange");
  return nullptr;
}


static PyObject *
PyvtkAxis_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0);
    }
    else
    {
      op->vtkAxis::GetRange(temp0);
    }

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
PyvtkAxis_GetUnscaledRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledRange(temp0);
    }
    else
    {
      op->vtkAxis::GetUnscaledRange(temp0);
    }

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
PyvtkAxis_SetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetMinimumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumLimit() :
      op->vtkAxis::GetMinimumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetMaximumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLimit() :
      op->vtkAxis::GetMaximumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMinimumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMinimumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimumLimit() :
      op->vtkAxis::GetUnscaledMinimumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnscaledMaximumLimit(temp0);
    }
    else
    {
      op->vtkAxis::SetUnscaledMaximumLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximumLimit() :
      op->vtkAxis::GetUnscaledMaximumLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetMargins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMargins() :
      op->vtkAxis::GetMargins());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetMargins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0, temp1);
    }
    else
    {
      op->vtkAxis::SetMargins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0);
    }
    else
    {
      op->vtkAxis::SetMargins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxis_SetMargins_s1(self, args);
    case 1:
      return PyvtkAxis_SetMargins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMargins");
  return nullptr;
}


static PyObject *
PyvtkAxis_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkAxis::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxis::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkAxis::GetTitleProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScaleActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScaleActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogScaleActive() :
      op->vtkAxis::GetLogScaleActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogScale() :
      op->vtkAxis::GetLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogScale(temp0);
    }
    else
    {
      op->vtkAxis::SetLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOn();
    }
    else
    {
      op->vtkAxis::LogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOff();
    }
    else
    {
      op->vtkAxis::LogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetGridVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisible() :
      op->vtkAxis::GetGridVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelsVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelsVisible() :
      op->vtkAxis::GetLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRangeLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeLabelsVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetRangeLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetRangeLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRangeLabelsVisible() :
      op->vtkAxis::GetRangeLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelOffset(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkAxis::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTicksVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetTicksVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTicksVisible() :
      op->vtkAxis::GetTicksVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetAxisVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisVisible() :
      op->vtkAxis::GetAxisVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTitleVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisible(temp0);
    }
    else
    {
      op->vtkAxis::SetTitleVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTitleVisible() :
      op->vtkAxis::GetTitleVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->vtkAxis::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkAxis::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkAxis::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxis::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeLabelFormat(temp0);
    }
    else
    {
      op->vtkAxis::SetRangeLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRangeLabelFormat() :
      op->vtkAxis::GetRangeLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->vtkAxis::SetNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation() :
      op->vtkAxis::GetNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBehavior(temp0);
    }
    else
    {
      op->vtkAxis::SetBehavior(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBehavior() :
      op->vtkAxis::GetBehavior());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetPen(temp0);
    }
    else
    {
      op->vtkAxis::SetPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkAxis::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetGridPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetGridPen(temp0);
    }
    else
    {
      op->vtkAxis::SetGridPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetGridPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetGridPen() :
      op->vtkAxis::GetGridPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLabelAlgorithm(temp0);
    }
    else
    {
      op->vtkAxis::SetTickLabelAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLabelAlgorithm() :
      op->vtkAxis::GetTickLabelAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingFactor(temp0);
    }
    else
    {
      op->vtkAxis::SetScalingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalingFactor() :
      op->vtkAxis::GetScalingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkAxis::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkAxis::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAxis::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkAxis::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_AutoScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoScale();
    }
    else
    {
      op->vtkAxis::AutoScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_RecalculateTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateTickSpacing();
    }
    else
    {
      op->vtkAxis::RecalculateTickSpacing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTickPositions() :
      op->vtkAxis::GetTickPositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickScenePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickScenePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetTickScenePositions() :
      op->vtkAxis::GetTickScenePositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTickLabels() :
      op->vtkAxis::GetTickLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_SetCustomTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCustomTickPositions(temp0, temp1) :
      op->vtkAxis::SetCustomTickPositions(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkAxis::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NiceNumber(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceNumber");

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkAxis::NiceNumber(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_NiceMinMax(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceMinMax");

  double temp0;
  double temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = vtkAxis::NiceMinMax(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_GenerateSimpleLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSimpleLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GenerateSimpleLabel(temp0) :
      op->vtkAxis::GenerateSimpleLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxis_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkAxis::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAxis_Methods[] = {
  {"IsTypeOf", PyvtkAxis_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxis_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxis_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxis\nC++: static vtkAxis *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxis_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxis\nC++: vtkAxis *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxis_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxis_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPosition", PyvtkAxis_SetPosition, METH_VARARGS,
   "SetPosition(self, position:int) -> None\nC++: virtual void SetPosition(int position)\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {"GetPosition", PyvtkAxis_GetPosition, METH_VARARGS,
   "GetPosition(self) -> int\nC++: virtual int GetPosition()\n\n"},
  {"SetPoint1", PyvtkAxis_SetPoint1, METH_VARARGS,
   "SetPoint1(self, pos:vtkVector2f) -> None\nC++: void SetPoint1(const vtkVector2f &pos)\nSetPoint1(self, x:float, y:float) -> None\nC++: void SetPoint1(float x, float y)\n\nSet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {"GetPoint1", PyvtkAxis_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float)\nC++: virtual float *GetPoint1()\n\nGet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {"GetPosition1", PyvtkAxis_GetPosition1, METH_VARARGS,
   "GetPosition1(self) -> vtkVector2f\nC++: vtkVector2f GetPosition1()\n\n"},
  {"SetPoint2", PyvtkAxis_SetPoint2, METH_VARARGS,
   "SetPoint2(self, pos:vtkVector2f) -> None\nC++: void SetPoint2(const vtkVector2f &pos)\nSetPoint2(self, x:float, y:float) -> None\nC++: void SetPoint2(float x, float y)\n\nSet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {"GetPoint2", PyvtkAxis_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float)\nC++: virtual float *GetPoint2()\n\nGet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {"GetPosition2", PyvtkAxis_GetPosition2, METH_VARARGS,
   "GetPosition2(self) -> vtkVector2f\nC++: vtkVector2f GetPosition2()\n\n"},
  {"SetNumberOfTicks", PyvtkAxis_SetNumberOfTicks, METH_VARARGS,
   "SetNumberOfTicks(self, numberOfTicks:int) -> None\nC++: virtual void SetNumberOfTicks(int numberOfTicks)\n\nSet the number of tick marks for this axis. Default is -1, which\nleads to automatic calculation of nicely spaced tick marks.\n"},
  {"GetNumberOfTicks", PyvtkAxis_GetNumberOfTicks, METH_VARARGS,
   "GetNumberOfTicks(self) -> int\nC++: virtual int GetNumberOfTicks()\n\nGet the number of tick marks for this axis.\n"},
  {"SetTickLength", PyvtkAxis_SetTickLength, METH_VARARGS,
   "SetTickLength(self, _arg:float) -> None\nC++: virtual void SetTickLength(float _arg)\n\nGet/set the length of tick marks (in pixels).\n"},
  {"GetTickLength", PyvtkAxis_GetTickLength, METH_VARARGS,
   "GetTickLength(self) -> float\nC++: virtual float GetTickLength()\n\n"},
  {"GetLabelProperties", PyvtkAxis_GetLabelProperties, METH_VARARGS,
   "GetLabelProperties(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetMinimum", PyvtkAxis_SetMinimum, METH_VARARGS,
   "SetMinimum(self, minimum:float) -> None\nC++: virtual void SetMinimum(double minimum)\n\nSet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nminimum base-10 exponent.\n"},
  {"GetMinimum", PyvtkAxis_GetMinimum, METH_VARARGS,
   "GetMinimum(self) -> float\nC++: virtual double GetMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe minimum base-10 exponent.\n"},
  {"SetMaximum", PyvtkAxis_SetMaximum, METH_VARARGS,
   "SetMaximum(self, maximum:float) -> None\nC++: virtual void SetMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nmaximum base-10 exponent.\n"},
  {"GetMaximum", PyvtkAxis_GetMaximum, METH_VARARGS,
   "GetMaximum(self) -> float\nC++: virtual double GetMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe maximum base-10 exponent.\n"},
  {"SetUnscaledMinimum", PyvtkAxis_SetUnscaledMinimum, METH_VARARGS,
   "SetUnscaledMinimum(self, minimum:float) -> None\nC++: virtual void SetUnscaledMinimum(double minimum)\n\nSet the logical, unscaled minimum value of the axis, in plot\ncoordinates. Use this instead of SetMinimum() if you wish to\nprovide the actual minimum instead of log10(the minimum) as part\nof the axis scale.\n"},
  {"GetUnscaledMinimum", PyvtkAxis_GetUnscaledMinimum, METH_VARARGS,
   "GetUnscaledMinimum(self) -> float\nC++: virtual double GetUnscaledMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\n"},
  {"SetUnscaledMaximum", PyvtkAxis_SetUnscaledMaximum, METH_VARARGS,
   "SetUnscaledMaximum(self, maximum:float) -> None\nC++: virtual void SetUnscaledMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\n"},
  {"GetUnscaledMaximum", PyvtkAxis_GetUnscaledMaximum, METH_VARARGS,
   "GetUnscaledMaximum(self) -> float\nC++: virtual double GetUnscaledMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\n"},
  {"SetRange", PyvtkAxis_SetRange, METH_VARARGS,
   "SetRange(self, minimum:float, maximum:float) -> None\nC++: virtual void SetRange(double minimum, double maximum)\nSetRange(self, range:[float, float]) -> None\nC++: virtual void SetRange(double range[2])\n\nSet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* When calling SetRange() and LogScale is true, the range must be\nspecified\n* in logarithmic coordinates.\n* Using SetUnscaledRange(), you may ignore the value of LogScale.\n"},
  {"SetUnscaledRange", PyvtkAxis_SetUnscaledRange, METH_VARARGS,
   "SetUnscaledRange(self, minimum:float, maximum:float) -> None\nC++: virtual void SetUnscaledRange(double minimum, double maximum)\nSetUnscaledRange(self, range:[float, float]) -> None\nC++: virtual void SetUnscaledRange(double range[2])\n\n"},
  {"GetRange", PyvtkAxis_GetRange, METH_VARARGS,
   "GetRange(self, range:[float, ...]) -> None\nC++: virtual void GetRange(double *range)\n\nGet the logical range of the axis, in plot coordinates.\n\n* The unscaled range will always be in the same coordinate system\nof\n* the data being plotted, regardless of whether LogScale is true\n  or false.\n* Calling GetRange() when LogScale is true will return the\n  log10({min, max}).\n"},
  {"GetUnscaledRange", PyvtkAxis_GetUnscaledRange, METH_VARARGS,
   "GetUnscaledRange(self, range:[float, ...]) -> None\nC++: virtual void GetUnscaledRange(double *range)\n\n"},
  {"SetMinimumLimit", PyvtkAxis_SetMinimumLimit, METH_VARARGS,
   "SetMinimumLimit(self, lowest:float) -> None\nC++: virtual void SetMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"GetMinimumLimit", PyvtkAxis_GetMinimumLimit, METH_VARARGS,
   "GetMinimumLimit(self) -> float\nC++: virtual double GetMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"SetMaximumLimit", PyvtkAxis_SetMaximumLimit, METH_VARARGS,
   "SetMaximumLimit(self, highest:float) -> None\nC++: virtual void SetMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetMaximumLimit", PyvtkAxis_GetMaximumLimit, METH_VARARGS,
   "GetMaximumLimit(self) -> float\nC++: virtual double GetMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"SetUnscaledMinimumLimit", PyvtkAxis_SetUnscaledMinimumLimit, METH_VARARGS,
   "SetUnscaledMinimumLimit(self, lowest:float) -> None\nC++: virtual void SetUnscaledMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"GetUnscaledMinimumLimit", PyvtkAxis_GetUnscaledMinimumLimit, METH_VARARGS,
   "GetUnscaledMinimumLimit(self) -> float\nC++: virtual double GetUnscaledMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {"SetUnscaledMaximumLimit", PyvtkAxis_SetUnscaledMaximumLimit, METH_VARARGS,
   "SetUnscaledMaximumLimit(self, highest:float) -> None\nC++: virtual void SetUnscaledMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetUnscaledMaximumLimit", PyvtkAxis_GetUnscaledMaximumLimit, METH_VARARGS,
   "GetUnscaledMaximumLimit(self) -> float\nC++: virtual double GetUnscaledMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {"GetMargins", PyvtkAxis_GetMargins, METH_VARARGS,
   "GetMargins(self) -> (int, int)\nC++: virtual int *GetMargins()\n\nGet the margins of the axis, in pixels.\n"},
  {"SetMargins", PyvtkAxis_SetMargins, METH_VARARGS,
   "SetMargins(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetMargins(int _arg1, int _arg2)\nSetMargins(self, _arg:(int, int)) -> None\nC++: void SetMargins(const int _arg[2])\n\nSet the margins of the axis, in pixels.\n"},
  {"SetTitle", PyvtkAxis_SetTitle, METH_VARARGS,
   "SetTitle(self, title:str) -> None\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the axis.\n"},
  {"GetTitle", PyvtkAxis_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual vtkStdString GetTitle()\n\n"},
  {"GetTitleProperties", PyvtkAxis_GetTitleProperties, METH_VARARGS,
   "GetTitleProperties(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the axis title is\ndisplayed.\n"},
  {"GetLogScaleActive", PyvtkAxis_GetLogScaleActive, METH_VARARGS,
   "GetLogScaleActive(self) -> bool\nC++: virtual bool GetLogScaleActive()\n\nGet whether the axis is using a log scale. This will always be\nfalse when LogScale is false. It is only true when LogScale is\ntrue andthe UnscaledRange does not cross or include the origin\n(zero).\n\n* The limits ( MinimumLimit, MaximumLimit, and their\n* unscaled counterparts) do not prevent LogScaleActive from\n  becoming\n* true; they are adjusted if they cross or include the origin\n* and the original limits are preserved for when LogScaleActive\n* becomes false again.\n"},
  {"GetLogScale", PyvtkAxis_GetLogScale, METH_VARARGS,
   "GetLogScale(self) -> bool\nC++: virtual bool GetLogScale()\n\nGet/set whether the axis should attemptto use a log scale.\n\n* The default is false.\n* \\sa{LogScaleActive}.\n"},
  {"SetLogScale", PyvtkAxis_SetLogScale, METH_VARARGS,
   "SetLogScale(self, logScale:bool) -> None\nC++: virtual void SetLogScale(bool logScale)\n\n"},
  {"LogScaleOn", PyvtkAxis_LogScaleOn, METH_VARARGS,
   "LogScaleOn(self) -> None\nC++: virtual void LogScaleOn()\n\n"},
  {"LogScaleOff", PyvtkAxis_LogScaleOff, METH_VARARGS,
   "LogScaleOff(self) -> None\nC++: virtual void LogScaleOff()\n\n"},
  {"SetGridVisible", PyvtkAxis_SetGridVisible, METH_VARARGS,
   "SetGridVisible(self, _arg:bool) -> None\nC++: virtual void SetGridVisible(bool _arg)\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {"GetGridVisible", PyvtkAxis_GetGridVisible, METH_VARARGS,
   "GetGridVisible(self) -> bool\nC++: virtual bool GetGridVisible()\n\n"},
  {"SetLabelsVisible", PyvtkAxis_SetLabelsVisible, METH_VARARGS,
   "SetLabelsVisible(self, _arg:bool) -> None\nC++: virtual void SetLabelsVisible(bool _arg)\n\nGet/set whether the axis labels should be visible.\n"},
  {"GetLabelsVisible", PyvtkAxis_GetLabelsVisible, METH_VARARGS,
   "GetLabelsVisible(self) -> bool\nC++: virtual bool GetLabelsVisible()\n\n"},
  {"SetRangeLabelsVisible", PyvtkAxis_SetRangeLabelsVisible, METH_VARARGS,
   "SetRangeLabelsVisible(self, _arg:bool) -> None\nC++: virtual void SetRangeLabelsVisible(bool _arg)\n\nGet/set whether the labels for the range should be visible.\n"},
  {"GetRangeLabelsVisible", PyvtkAxis_GetRangeLabelsVisible, METH_VARARGS,
   "GetRangeLabelsVisible(self) -> bool\nC++: virtual bool GetRangeLabelsVisible()\n\n"},
  {"SetLabelOffset", PyvtkAxis_SetLabelOffset, METH_VARARGS,
   "SetLabelOffset(self, _arg:float) -> None\nC++: virtual void SetLabelOffset(float _arg)\n\nGet/set the offset (in pixels) of the label text position from\nthe axis\n"},
  {"GetLabelOffset", PyvtkAxis_GetLabelOffset, METH_VARARGS,
   "GetLabelOffset(self) -> float\nC++: virtual float GetLabelOffset()\n\n"},
  {"SetTicksVisible", PyvtkAxis_SetTicksVisible, METH_VARARGS,
   "SetTicksVisible(self, _arg:bool) -> None\nC++: virtual void SetTicksVisible(bool _arg)\n\nGet/set whether the tick marks should be visible.\n"},
  {"GetTicksVisible", PyvtkAxis_GetTicksVisible, METH_VARARGS,
   "GetTicksVisible(self) -> bool\nC++: virtual bool GetTicksVisible()\n\n"},
  {"SetAxisVisible", PyvtkAxis_SetAxisVisible, METH_VARARGS,
   "SetAxisVisible(self, _arg:bool) -> None\nC++: virtual void SetAxisVisible(bool _arg)\n\nGet/set whether the axis line should be visible.\n"},
  {"GetAxisVisible", PyvtkAxis_GetAxisVisible, METH_VARARGS,
   "GetAxisVisible(self) -> bool\nC++: virtual bool GetAxisVisible()\n\n"},
  {"SetTitleVisible", PyvtkAxis_SetTitleVisible, METH_VARARGS,
   "SetTitleVisible(self, _arg:bool) -> None\nC++: virtual void SetTitleVisible(bool _arg)\n\nGet/set whether the axis title should be visible.\n"},
  {"GetTitleVisible", PyvtkAxis_GetTitleVisible, METH_VARARGS,
   "GetTitleVisible(self) -> bool\nC++: virtual bool GetTitleVisible()\n\n"},
  {"SetPrecision", PyvtkAxis_SetPrecision, METH_VARARGS,
   "SetPrecision(self, precision:int) -> None\nC++: virtual void SetPrecision(int precision)\n\nGet/set the numerical precision to use, default is 2. This is\nignored when Notation is STANDARD_NOTATION or PRINTF_NOTATION.\n"},
  {"GetPrecision", PyvtkAxis_GetPrecision, METH_VARARGS,
   "GetPrecision(self) -> int\nC++: virtual int GetPrecision()\n\n"},
  {"SetLabelFormat", PyvtkAxis_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, fmt:str) -> None\nC++: virtual void SetLabelFormat(const std::string &fmt)\n\nGet/Set the printf-style format string used when\nTickLabelAlgorithm is TICK_SIMPLE and Notation is\nPRINTF_NOTATION. The default is \"%g\".\n"},
  {"GetLabelFormat", PyvtkAxis_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual std::string GetLabelFormat()\n\n"},
  {"SetRangeLabelFormat", PyvtkAxis_SetRangeLabelFormat, METH_VARARGS,
   "SetRangeLabelFormat(self, _arg:str) -> None\nC++: virtual void SetRangeLabelFormat(std::string _arg)\n\nGet/Set the printf-style format string used for range labels.\nThis format is always used regardless of TickLabelAlgorithm and\nNotation. Default is \"%g\".\n"},
  {"GetRangeLabelFormat", PyvtkAxis_GetRangeLabelFormat, METH_VARARGS,
   "GetRangeLabelFormat(self) -> str\nC++: virtual std::string GetRangeLabelFormat()\n\n"},
  {"SetNotation", PyvtkAxis_SetNotation, METH_VARARGS,
   "SetNotation(self, notation:int) -> None\nC++: virtual void SetNotation(int notation)\n\nGet/set the numerical notation, standard, scientific, fixed, or a\nprintf-style format string.\n\\sa SetPrecision SetLabelFormat\n"},
  {"GetNotation", PyvtkAxis_GetNotation, METH_VARARGS,
   "GetNotation(self) -> int\nC++: virtual int GetNotation()\n\n"},
  {"SetBehavior", PyvtkAxis_SetBehavior, METH_VARARGS,
   "SetBehavior(self, _arg:int) -> None\nC++: virtual void SetBehavior(int _arg)\n\nGet/set the behavior of the axis (auto or fixed). The default is\n0 (auto).\n"},
  {"GetBehavior", PyvtkAxis_GetBehavior, METH_VARARGS,
   "GetBehavior(self) -> int\nC++: virtual int GetBehavior()\n\n"},
  {"SetPen", PyvtkAxis_SetPen, METH_VARARGS,
   "SetPen(self, _arg:vtkPen) -> None\nC++: virtual void SetPen(vtkPen *_arg)\n\nSet/get the vtkPen object that controls the way this axis is\ndrawn.\n"},
  {"GetPen", PyvtkAxis_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: virtual vtkPen *GetPen()\n\n"},
  {"SetGridPen", PyvtkAxis_SetGridPen, METH_VARARGS,
   "SetGridPen(self, _arg:vtkPen) -> None\nC++: virtual void SetGridPen(vtkPen *_arg)\n\nSet/get the vtkPen object that controls the way this axis is\ndrawn.\n"},
  {"GetGridPen", PyvtkAxis_GetGridPen, METH_VARARGS,
   "GetGridPen(self) -> vtkPen\nC++: virtual vtkPen *GetGridPen()\n\n"},
  {"SetTickLabelAlgorithm", PyvtkAxis_SetTickLabelAlgorithm, METH_VARARGS,
   "SetTickLabelAlgorithm(self, _arg:int) -> None\nC++: virtual void SetTickLabelAlgorithm(int _arg)\n\nGet/set the tick label algorithm that is used to calculate the\nmin, max and tick spacing. There are currently two algorithms,\nvtkAxis::TICK_SIMPLE is the default and uses a simple algorithm.\nThe second option is vtkAxis::TICK_WILKINSON which uses an\nextended Wilkinson algorithm to find the optimal range, spacing\nand font parameters.\n"},
  {"GetTickLabelAlgorithm", PyvtkAxis_GetTickLabelAlgorithm, METH_VARARGS,
   "GetTickLabelAlgorithm(self) -> int\nC++: virtual int GetTickLabelAlgorithm()\n\n"},
  {"SetScalingFactor", PyvtkAxis_SetScalingFactor, METH_VARARGS,
   "SetScalingFactor(self, _arg:float) -> None\nC++: virtual void SetScalingFactor(double _arg)\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {"GetScalingFactor", PyvtkAxis_GetScalingFactor, METH_VARARGS,
   "GetScalingFactor(self) -> float\nC++: virtual double GetScalingFactor()\n\n"},
  {"SetShift", PyvtkAxis_SetShift, METH_VARARGS,
   "SetShift(self, _arg:float) -> None\nC++: virtual void SetShift(double _arg)\n\n"},
  {"GetShift", PyvtkAxis_GetShift, METH_VARARGS,
   "GetShift(self) -> float\nC++: virtual double GetShift()\n\n"},
  {"Update", PyvtkAxis_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {"Paint", PyvtkAxis_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {"AutoScale", PyvtkAxis_AutoScale, METH_VARARGS,
   "AutoScale(self) -> None\nC++: virtual void AutoScale()\n\nUse this function to autoscale the axes after setting the minimum\nand maximum values. This will cause the axes to select the nicest\nnumbers that enclose the minimum and maximum values, and to\nselect an appropriate number of tick marks.\n"},
  {"RecalculateTickSpacing", PyvtkAxis_RecalculateTickSpacing, METH_VARARGS,
   "RecalculateTickSpacing(self) -> None\nC++: virtual void RecalculateTickSpacing()\n\nRecalculate the spacing of the tick marks - typically useful to\ndo after scaling the axis.\n"},
  {"GetTickPositions", PyvtkAxis_GetTickPositions, METH_VARARGS,
   "GetTickPositions(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTickPositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in the plot coordinates of the\naxis.\n"},
  {"GetTickScenePositions", PyvtkAxis_GetTickScenePositions, METH_VARARGS,
   "GetTickScenePositions(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetTickScenePositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in scene coordinates.\n"},
  {"GetTickLabels", PyvtkAxis_GetTickLabels, METH_VARARGS,
   "GetTickLabels(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetTickLabels()\n\nA string array containing the tick labels for the axis.\n"},
  {"SetCustomTickPositions", PyvtkAxis_SetCustomTickPositions, METH_VARARGS,
   "SetCustomTickPositions(self, positions:vtkDoubleArray,\n    labels:vtkStringArray=...) -> bool\nC++: virtual bool SetCustomTickPositions(\n    vtkDoubleArray *positions, vtkStringArray *labels=nullptr)\n\nSet the tick positions, and optionally custom tick labels. If the\nlabels and positions are null then automatic tick labels will be\nassigned. If only positions are supplied then appropriate labels\nwill be generated according to the axis settings. If positions\nand labels are supplied they must be of the same length. Returns\ntrue on success, false on failure.\n"},
  {"GetBoundingRect", PyvtkAxis_GetBoundingRect, METH_VARARGS,
   "GetBoundingRect(self, painter:vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the axes require to be drawn. This is returned\nas a vtkRectf, with the corner being the offset from Point1, and\nthe width/ height being the total width/height required by the\naxis. In order to ensure the numbers are correct, Update() should\nbe called on the axis.\n"},
  {"NiceNumber", PyvtkAxis_NiceNumber, METH_VARARGS,
   "NiceNumber(number:float, roundUp:bool) -> float\nC++: static double NiceNumber(double number, bool roundUp)\n\nReturn a \"nice number\", often defined as 1, 2 or 5. If roundUp is\ntrue then the nice number will be rounded up, false it is rounded\ndown. The supplied number should be between 0.0 and 9.9.\n"},
  {"NiceMinMax", PyvtkAxis_NiceMinMax, METH_VARARGS,
   "NiceMinMax(min:float, max:float, pixelRange:float,\n    tickPixelSpacing:float) -> float\nC++: static double NiceMinMax(double &min, double &max,\n    float pixelRange, float tickPixelSpacing)\n\nStatic function to calculate \"nice\" minimum, maximum, and tick\nspacing values.\n"},
  {"GenerateSimpleLabel", PyvtkAxis_GenerateSimpleLabel, METH_VARARGS,
   "GenerateSimpleLabel(self, val:float) -> str\nC++: virtual vtkStdString GenerateSimpleLabel(double val)\n\nGenerate a single label using the current settings when\nTickLabelAlgorithm is TICK_SIMPLE.\n"},
  {"Hit", PyvtkAxis_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAxis_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPosition/SetPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point1"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPoint1(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPoint1(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPoint1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point1"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPoint1(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPoint1(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPoint1(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoint1/SetPoint1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point2"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPoint2(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPoint2(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPoint2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point2"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPoint2(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPoint2(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPoint2(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoint2/SetPoint2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_length"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTickLength(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetTickLength(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetTickLength(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTickLength/SetTickLength\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("minimum"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetMinimum(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetMinimum(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetMinimum(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMinimum/SetMinimum\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetMaximum(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetMaximum(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetMaximum(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaximum/SetMaximum\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unscaled_minimum"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetUnscaledMinimum(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetUnscaledMinimum(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetUnscaledMinimum(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUnscaledMinimum/SetUnscaledMinimum\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unscaled_maximum"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetUnscaledMaximum(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetUnscaledMaximum(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetUnscaledMaximum(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUnscaledMaximum/SetUnscaledMaximum\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("range"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unscaled_range"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetUnscaledRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetUnscaledRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetUnscaledRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("minimum_limit"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetMinimumLimit(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetMinimumLimit(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetMinimumLimit(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMinimumLimit/SetMinimumLimit\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_limit"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetMaximumLimit(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetMaximumLimit(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetMaximumLimit(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaximumLimit/SetMaximumLimit\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unscaled_minimum_limit"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetUnscaledMinimumLimit(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetUnscaledMinimumLimit(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetUnscaledMinimumLimit(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUnscaledMinimumLimit/SetUnscaledMinimumLimit\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unscaled_maximum_limit"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetUnscaledMaximumLimit(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetUnscaledMaximumLimit(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetUnscaledMaximumLimit(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUnscaledMaximumLimit/SetUnscaledMaximumLimit\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("margins"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetMargins(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetMargins(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetMargins(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMargins/SetMargins\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("title"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTitle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetTitle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetTitle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTitle/SetTitle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("log_scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLogScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetLogScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetLogScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLogScale/SetLogScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("grid_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetGridVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetGridVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetGridVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridVisible/SetGridVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("labels_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLabelsVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetLabelsVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetLabelsVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelsVisible/SetLabelsVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("range_labels_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetRangeLabelsVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetRangeLabelsVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetRangeLabelsVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRangeLabelsVisible/SetRangeLabelsVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLabelOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetLabelOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetLabelOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelOffset/SetLabelOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("ticks_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTicksVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetTicksVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetTicksVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTicksVisible/SetTicksVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetAxisVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetAxisVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetAxisVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxisVisible/SetAxisVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("title_visible"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTitleVisible(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetTitleVisible(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetTitleVisible(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTitleVisible/SetTitleVisible\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPrecision/SetPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLabelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetLabelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetLabelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelFormat/SetLabelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("range_label_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetRangeLabelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetRangeLabelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetRangeLabelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRangeLabelFormat/SetRangeLabelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("notation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetNotation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNotation/SetNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("behavior"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetBehavior(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetBehavior(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetBehavior(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBehavior/SetBehavior\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetPen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetPen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPen/SetPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("grid_pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetGridPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetGridPen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetGridPen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridPen/SetGridPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_label_algorithm"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTickLabelAlgorithm(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetTickLabelAlgorithm(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetTickLabelAlgorithm(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTickLabelAlgorithm/SetTickLabelAlgorithm\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scaling_factor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetScalingFactor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetScalingFactor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetScalingFactor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScalingFactor/SetScalingFactor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shift"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetShift(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetShift(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetShift(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetShift/SetShift\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position1"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPosition1(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPosition1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position2"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetPosition2(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPosition2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_properties"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLabelProperties(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLabelProperties\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("title_properties"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTitleProperties(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTitleProperties\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("log_scale_active"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetLogScaleActive(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLogScaleActive\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_positions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTickPositions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTickPositions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_scene_positions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTickScenePositions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTickScenePositions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetTickLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTickLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_ticks"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxis_GetNumberOfTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxis_SetNumberOfTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxis_SetNumberOfTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfTicks/SetNumberOfTicks\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAxis_Doc =
  "vtkAxis - takes care of drawing 2D axes\n\n"
  "Superclass: vtkContextItem\n\n"
  "The vtkAxis is drawn in screen coordinates. It is usually one of the\n"
  "last elements of a chart to be drawn. It renders the axis label, tick\n"
  "marks and tick labels. The tick marks and labels span the range of\n"
  "values betweenMinimum and Maximum. The Minimum and Maximum values are\n"
  "not allowed to extend beyond theMinimumLimit and MaximumLimit values,\n"
  "respectively.\n\n"
  "Note that many other chart elements (e.g., vtkPlotPoints) refer to\n"
  "vtkAxis instances to determine how to scale raw data for\n"
  "presentation. In particular, care must be taken with logarithmic\n"
  "scaling. The axis Minimum, Maximum, and Limit values are stored both\n"
  "unscaled and scaled (with log(x) applied when GetLogScaleActive()\n"
  "returns true). User interfaces will most likely present the unscaled\n"
  "values as they represent the values provided by the user. Other chart\n"
  "elements may need the scaled values in order to draw in the same\n"
  "coordinate system.\n\n"
  "Just because LogScale is set to true does not guarantee that the axis\n"
  "will use logarithmic scaling -- the Minimum and Maximum values for\n"
  "the axis must both lie to the same side of origin (and not include\n"
  "the origin). Also, this switch from linear- to log-scaling may occur\n"
  "during a rendering pass if autoscaling is enabled. Because the log\n"
  "and pow functions are not invertible and the axis itself decides when\n"
  "to switch between them without offering any external class managing\n"
  "the axis a chance to save the old values, it saves old Limit values\n"
  "in NonLogUnscaled{Min,Max}Limit so that behavior is consistent when\n"
  "LogScale is changed from false to true and back again.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkAxis", // tp_name
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
  PyvtkAxis_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxis_StaticNew()
{
  return vtkAxis::New();
}

PyObject *PyvtkAxis_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxis_Type, PyvtkAxis_Methods,
    "vtkAxis",
 &PyvtkAxis_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxis_Location_Type);
  PyVTKEnum_Add(&PyvtkAxis_Location_Type, "vtkAxis.Location");

  o = (PyObject *)&PyvtkAxis_Location_Type;
  if (PyDict_SetItemString(d, "Location", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkAxis::Location cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "LEFT", vtkAxis::LEFT },
        { "BOTTOM", vtkAxis::BOTTOM },
        { "RIGHT", vtkAxis::RIGHT },
        { "TOP", vtkAxis::TOP },
        { "PARALLEL", vtkAxis::PARALLEL },
      };

    o = PyvtkAxis_Location_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "TICK_SIMPLE", vtkAxis::TICK_SIMPLE },
        { "TICK_WILKINSON_EXTENDED", vtkAxis::TICK_WILKINSON_EXTENDED },
        { "STANDARD_NOTATION", vtkAxis::STANDARD_NOTATION },
        { "SCIENTIFIC_NOTATION", vtkAxis::SCIENTIFIC_NOTATION },
        { "FIXED_NOTATION", vtkAxis::FIXED_NOTATION },
        { "PRINTF_NOTATION", vtkAxis::PRINTF_NOTATION },
        { "AUTO", vtkAxis::AUTO },
        { "FIXED", vtkAxis::FIXED },
        { "CUSTOM", vtkAxis::CUSTOM },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAxis_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxis(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxis_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxis", o) != 0)
  {
    Py_DECREF(o);
  }

}

