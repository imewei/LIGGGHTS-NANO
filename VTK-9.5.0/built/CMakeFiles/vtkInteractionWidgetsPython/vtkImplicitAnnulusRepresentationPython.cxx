// python wrapper for vtkImplicitAnnulusRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitAnnulusRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImplicitAnnulusRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImplicitAnnulusRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkBoundedWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitAnnulusRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitAnnulusRepresentation.InteractionStateType", // tp_name
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
static PyObject *PyvtkImplicitAnnulusRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImplicitAnnulusRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitAnnulusRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitAnnulusRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitAnnulusRepresentation *tempr = vtkImplicitAnnulusRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitAnnulusRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitAnnulusRepresentation::NewInstance());

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
PyvtkImplicitAnnulusRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitAnnulusRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitAnnulusRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetCenter(temp0);
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
PyvtkImplicitAnnulusRepresentation_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitAnnulusRepresentation_SetCenter_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkImplicitAnnulusRepresentation::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::GetCenter(temp0);
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
PyvtkImplicitAnnulusRepresentation_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitAnnulusRepresentation_GetCenter_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->SetAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetAxis(temp0);
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
PyvtkImplicitAnnulusRepresentation_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitAnnulusRepresentation_SetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkImplicitAnnulusRepresentation::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetAxis(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::GetAxis(temp0);
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
PyvtkImplicitAnnulusRepresentation_GetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitAnnulusRepresentation_GetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_GetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerRadius(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetInnerRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadius() :
      op->vtkImplicitAnnulusRepresentation::GetInnerRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterRadius(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetOuterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadius() :
      op->vtkImplicitAnnulusRepresentation::GetOuterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongXAxis(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetAlongXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongXAxis() :
      op->vtkImplicitAnnulusRepresentation::GetAlongXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongYAxis(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetAlongYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongYAxis() :
      op->vtkImplicitAnnulusRepresentation::GetAlongYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongZAxis(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetAlongZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongZAxis() :
      op->vtkImplicitAnnulusRepresentation::GetAlongZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_AlongZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::AlongZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetDrawAnnulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAnnulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAnnulus(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetDrawAnnulus(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetDrawAnnulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAnnulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawAnnulus() :
      op->vtkImplicitAnnulusRepresentation::GetDrawAnnulus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_DrawAnnulusOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnulusOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnulusOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::DrawAnnulusOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_DrawAnnulusOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnulusOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnulusOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::DrawAnnulusOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkImplicitAnnulusRepresentation::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkImplicitAnnulusRepresentation::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkImplicitAnnulusRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitAnnulusRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleEnabled(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitAnnulusRepresentation::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisProperty() :
      op->vtkImplicitAnnulusRepresentation::GetAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetSelectedAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedAxisProperty() :
      op->vtkImplicitAnnulusRepresentation::GetSelectedAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAnnulusProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnulusProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAnnulusProperty() :
      op->vtkImplicitAnnulusRepresentation::GetAnnulusProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetSelectedAnnulusProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAnnulusProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedAnnulusProperty() :
      op->vtkImplicitAnnulusRepresentation::GetSelectedAnnulusProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetRadiusHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetRadiusHandleProperty() :
      op->vtkImplicitAnnulusRepresentation::GetRadiusHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetSelectedRadiusHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedRadiusHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedRadiusHandleProperty() :
      op->vtkImplicitAnnulusRepresentation::GetSelectedRadiusHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->SetInteractionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetInteractionColor(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetInteractionColor(temp0);
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
PyvtkImplicitAnnulusRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitAnnulusRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetHandleColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->SetHandleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetHandleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_SetHandleColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetHandleColor(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetHandleColor(temp0);
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
PyvtkImplicitAnnulusRepresentation_SetHandleColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitAnnulusRepresentation_SetHandleColor_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_SetHandleColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->SetForegroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitAnnulusRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetForegroundColor(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetForegroundColor(temp0);
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
PyvtkImplicitAnnulusRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitAnnulusRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkImplicitAnnulusRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkImplicitAnnulusRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::PlaceWidget(temp0);
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
PyvtkImplicitAnnulusRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::StartWidgetInteraction(temp0);
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
PyvtkImplicitAnnulusRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::WidgetInteraction(temp0);
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
PyvtkImplicitAnnulusRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::EndWidgetInteraction(temp0);
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
PyvtkImplicitAnnulusRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImplicitAnnulusRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

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
      op->vtkImplicitAnnulusRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImplicitAnnulusRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImplicitAnnulusRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImplicitAnnulusRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBumpDistance(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetBumpDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetBumpDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMinValue() :
      op->vtkImplicitAnnulusRepresentation::GetBumpDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetBumpDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMaxValue() :
      op->vtkImplicitAnnulusRepresentation::GetBumpDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistance() :
      op->vtkImplicitAnnulusRepresentation::GetBumpDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_BumpAnnulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BumpAnnulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BumpAnnulus(temp0, temp1);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::BumpAnnulus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_PushAnnulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushAnnulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushAnnulus(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::PushAnnulus(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  typedef vtkImplicitAnnulusRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitAnnulusRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitAnnulusRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkImplicitAnnulusRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitAnnulusRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitAnnulusRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkImplicitAnnulusRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitAnnulusRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  typedef vtkImplicitAnnulusRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitAnnulusRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitAnnulusRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkImplicitAnnulusRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitAnnulusRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitAnnulusRepresentation_GetAnnulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitAnnulusRepresentation *op = static_cast<vtkImplicitAnnulusRepresentation *>(vp);

  vtkAnnulus *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnulus"))
  {
    if (ap.IsBound())
    {
      op->GetAnnulus(temp0);
    }
    else
    {
      op->vtkImplicitAnnulusRepresentation::GetAnnulus(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitAnnulusRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitAnnulusRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitAnnulusRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitAnnulusRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitAnnulusRepresentation\nC++: static vtkImplicitAnnulusRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitAnnulusRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitAnnulusRepresentation\nC++: vtkImplicitAnnulusRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitAnnulusRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitAnnulusRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkImplicitAnnulusRepresentation_SetCenter, METH_VARARGS,
   "SetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\nSetCenter(self, x:[float, float, float]) -> None\nC++: void SetCenter(double x[3])\n\nGet the center of the annulus representation. The center is\nlocated along the annulus axis. Default is (0, 0, 0)\n"},
  {"GetCenter", PyvtkImplicitAnnulusRepresentation_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, xyz:[float, float, float]) -> None\nC++: void GetCenter(double xyz[3])\n\n"},
  {"SetAxis", PyvtkImplicitAnnulusRepresentation_SetAxis, METH_VARARGS,
   "SetAxis(self, x:float, y:float, z:float) -> None\nC++: void SetAxis(double x, double y, double z)\nSetAxis(self, a:[float, float, float]) -> None\nC++: void SetAxis(double a[3])\n\nSet/Get the axis of rotation for the annulus. If the axis is not\nspecified as a unit vector, it will be normalized. Default is the\nY-Axis (0, 1, 0)\n"},
  {"GetAxis", PyvtkImplicitAnnulusRepresentation_GetAxis, METH_VARARGS,
   "GetAxis(self) -> (float, float, float)\nC++: double *GetAxis()\nGetAxis(self, a:[float, float, float]) -> None\nC++: void GetAxis(double a[3])\n\n"},
  {"SetInnerRadius", PyvtkImplicitAnnulusRepresentation_SetInnerRadius, METH_VARARGS,
   "SetInnerRadius(self, r:float) -> None\nC++: void SetInnerRadius(double r)\n\nSet/Get the annulus inner radius. Should be lower than\nOuterRadius. Default is 0.25.\n\n* @see GetOuterRadius\n"},
  {"GetInnerRadius", PyvtkImplicitAnnulusRepresentation_GetInnerRadius, METH_VARARGS,
   "GetInnerRadius(self) -> float\nC++: double GetInnerRadius()\n\n"},
  {"SetOuterRadius", PyvtkImplicitAnnulusRepresentation_SetOuterRadius, METH_VARARGS,
   "SetOuterRadius(self, r:float) -> None\nC++: void SetOuterRadius(double r)\n\nSet/Get the annulus outer radius. Should be greater than\nInnerRadius. Default is 0.5.\n\n@see GetInnerRadius.\n"},
  {"GetOuterRadius", PyvtkImplicitAnnulusRepresentation_GetOuterRadius, METH_VARARGS,
   "GetOuterRadius(self) -> float\nC++: double GetOuterRadius()\n\n"},
  {"SetAlongXAxis", PyvtkImplicitAnnulusRepresentation_SetAlongXAxis, METH_VARARGS,
   "SetAlongXAxis(self, __a:bool) -> None\nC++: void SetAlongXAxis(bool)\n\nForce the annulus widget to be aligned with one of the x-y-z\naxes. If one axis is set on, the other two will be set off.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the annulus to the axes if it is\ncenterally not aligned. Default to false.\n"},
  {"GetAlongXAxis", PyvtkImplicitAnnulusRepresentation_GetAlongXAxis, METH_VARARGS,
   "GetAlongXAxis(self) -> bool\nC++: virtual bool GetAlongXAxis()\n\n"},
  {"AlongXAxisOn", PyvtkImplicitAnnulusRepresentation_AlongXAxisOn, METH_VARARGS,
   "AlongXAxisOn(self) -> None\nC++: virtual void AlongXAxisOn()\n\n"},
  {"AlongXAxisOff", PyvtkImplicitAnnulusRepresentation_AlongXAxisOff, METH_VARARGS,
   "AlongXAxisOff(self) -> None\nC++: virtual void AlongXAxisOff()\n\n"},
  {"SetAlongYAxis", PyvtkImplicitAnnulusRepresentation_SetAlongYAxis, METH_VARARGS,
   "SetAlongYAxis(self, __a:bool) -> None\nC++: void SetAlongYAxis(bool)\n\n"},
  {"GetAlongYAxis", PyvtkImplicitAnnulusRepresentation_GetAlongYAxis, METH_VARARGS,
   "GetAlongYAxis(self) -> bool\nC++: virtual bool GetAlongYAxis()\n\n"},
  {"AlongYAxisOn", PyvtkImplicitAnnulusRepresentation_AlongYAxisOn, METH_VARARGS,
   "AlongYAxisOn(self) -> None\nC++: virtual void AlongYAxisOn()\n\n"},
  {"AlongYAxisOff", PyvtkImplicitAnnulusRepresentation_AlongYAxisOff, METH_VARARGS,
   "AlongYAxisOff(self) -> None\nC++: virtual void AlongYAxisOff()\n\n"},
  {"SetAlongZAxis", PyvtkImplicitAnnulusRepresentation_SetAlongZAxis, METH_VARARGS,
   "SetAlongZAxis(self, __a:bool) -> None\nC++: void SetAlongZAxis(bool)\n\n"},
  {"GetAlongZAxis", PyvtkImplicitAnnulusRepresentation_GetAlongZAxis, METH_VARARGS,
   "GetAlongZAxis(self) -> bool\nC++: virtual bool GetAlongZAxis()\n\n"},
  {"AlongZAxisOn", PyvtkImplicitAnnulusRepresentation_AlongZAxisOn, METH_VARARGS,
   "AlongZAxisOn(self) -> None\nC++: virtual void AlongZAxisOn()\n\n"},
  {"AlongZAxisOff", PyvtkImplicitAnnulusRepresentation_AlongZAxisOff, METH_VARARGS,
   "AlongZAxisOff(self) -> None\nC++: virtual void AlongZAxisOff()\n\n"},
  {"SetDrawAnnulus", PyvtkImplicitAnnulusRepresentation_SetDrawAnnulus, METH_VARARGS,
   "SetDrawAnnulus(self, draw:bool) -> None\nC++: void SetDrawAnnulus(bool draw)\n\nEnable/disable the drawing of the annulus. In some cases the\nannulus interferes with the object that it is operating on (e.g.,\nthe annulus interferes with the cut surface it produces resulting\nin z-buffer artifacts.) By default it is off.\n"},
  {"GetDrawAnnulus", PyvtkImplicitAnnulusRepresentation_GetDrawAnnulus, METH_VARARGS,
   "GetDrawAnnulus(self) -> bool\nC++: virtual bool GetDrawAnnulus()\n\n"},
  {"DrawAnnulusOn", PyvtkImplicitAnnulusRepresentation_DrawAnnulusOn, METH_VARARGS,
   "DrawAnnulusOn(self) -> None\nC++: virtual void DrawAnnulusOn()\n\n"},
  {"DrawAnnulusOff", PyvtkImplicitAnnulusRepresentation_DrawAnnulusOff, METH_VARARGS,
   "DrawAnnulusOff(self) -> None\nC++: virtual void DrawAnnulusOff()\n\n"},
  {"SetResolution", PyvtkImplicitAnnulusRepresentation_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get the resolution of the annulus. This is the number of\npolygonal facets used to approximate the surface (for rendering\npurposes). A vtkAnnulus is used under the hood to provide an\nexact surface representation. Defaults to 128.\n"},
  {"GetResolutionMinValue", PyvtkImplicitAnnulusRepresentation_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkImplicitAnnulusRepresentation_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkImplicitAnnulusRepresentation_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetTubing", PyvtkImplicitAnnulusRepresentation_SetTubing, METH_VARARGS,
   "SetTubing(self, _arg:bool) -> None\nC++: virtual void SetTubing(bool _arg)\n\nTurn on/off tubing of the wire outline of the annulus\nintersection (against the bounding box). The tube thickens the\nline by wrapping with a vtkTubeFilter. Defaults to true.\n"},
  {"GetTubing", PyvtkImplicitAnnulusRepresentation_GetTubing, METH_VARARGS,
   "GetTubing(self) -> bool\nC++: virtual bool GetTubing()\n\n"},
  {"TubingOn", PyvtkImplicitAnnulusRepresentation_TubingOn, METH_VARARGS,
   "TubingOn(self) -> None\nC++: virtual void TubingOn()\n\n"},
  {"TubingOff", PyvtkImplicitAnnulusRepresentation_TubingOff, METH_VARARGS,
   "TubingOff(self) -> None\nC++: virtual void TubingOff()\n\n"},
  {"SetScaleEnabled", PyvtkImplicitAnnulusRepresentation_SetScaleEnabled, METH_VARARGS,
   "SetScaleEnabled(self, _arg:bool) -> None\nC++: virtual void SetScaleEnabled(bool _arg)\n\nTurn on/off the ability to scale the widget with the mouse.\nDefaults to true.\n"},
  {"GetScaleEnabled", PyvtkImplicitAnnulusRepresentation_GetScaleEnabled, METH_VARARGS,
   "GetScaleEnabled(self) -> bool\nC++: virtual bool GetScaleEnabled()\n\n"},
  {"ScaleEnabledOn", PyvtkImplicitAnnulusRepresentation_ScaleEnabledOn, METH_VARARGS,
   "ScaleEnabledOn(self) -> None\nC++: virtual void ScaleEnabledOn()\n\n"},
  {"ScaleEnabledOff", PyvtkImplicitAnnulusRepresentation_ScaleEnabledOff, METH_VARARGS,
   "ScaleEnabledOff(self) -> None\nC++: virtual void ScaleEnabledOff()\n\n"},
  {"GetPolyData", PyvtkImplicitAnnulusRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the annulus. The polydata contains\npolygons that are clipped by the bounding box.\n"},
  {"UpdatePlacement", PyvtkImplicitAnnulusRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource.\n"},
  {"GetAxisProperty", PyvtkImplicitAnnulusRepresentation_GetAxisProperty, METH_VARARGS,
   "GetAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetAxisProperty()\n\nGet the properties on the axis (line and annulus).\n"},
  {"GetSelectedAxisProperty", PyvtkImplicitAnnulusRepresentation_GetSelectedAxisProperty, METH_VARARGS,
   "GetSelectedAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedAxisProperty()\n\n"},
  {"GetAnnulusProperty", PyvtkImplicitAnnulusRepresentation_GetAnnulusProperty, METH_VARARGS,
   "GetAnnulusProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetAnnulusProperty()\n\nGet the annulus properties. The properties of the annulus when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedAnnulusProperty", PyvtkImplicitAnnulusRepresentation_GetSelectedAnnulusProperty, METH_VARARGS,
   "GetSelectedAnnulusProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedAnnulusProperty()\n\n"},
  {"GetRadiusHandleProperty", PyvtkImplicitAnnulusRepresentation_GetRadiusHandleProperty, METH_VARARGS,
   "GetRadiusHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetRadiusHandleProperty()\n\nGet the annulus radii properties. The properties of the annulus\ninner and outer radii when selected and unselected can be\nmanipulated.\n"},
  {"GetSelectedRadiusHandleProperty", PyvtkImplicitAnnulusRepresentation_GetSelectedRadiusHandleProperty, METH_VARARGS,
   "GetSelectedRadiusHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedRadiusHandleProperty()\n\n"},
  {"SetInteractionColor", PyvtkImplicitAnnulusRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetInteractionColor(double, double, double)\nSetInteractionColor(self, c:[float, float, float]) -> None\nC++: void SetInteractionColor(double c[3])\n\nSet the color of all the widgets handles (edges, axis, selected\nannulus) and their color during interaction. Foreground color\napplies to the outlines and unselected annulus.\n"},
  {"SetHandleColor", PyvtkImplicitAnnulusRepresentation_SetHandleColor, METH_VARARGS,
   "SetHandleColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetHandleColor(double, double, double)\nSetHandleColor(self, c:[float, float, float]) -> None\nC++: void SetHandleColor(double c[3])\n\n"},
  {"SetForegroundColor", PyvtkImplicitAnnulusRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetForegroundColor(double, double, double)\nSetForegroundColor(self, c:[float, float, float]) -> None\nC++: void SetForegroundColor(double c[3])\n\n"},
  {"ComputeInteractionState", PyvtkImplicitAnnulusRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkImplicitAnnulusWidget.\n"},
  {"PlaceWidget", PyvtkImplicitAnnulusRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkImplicitAnnulusRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkImplicitAnnulusRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkImplicitAnnulusRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkImplicitAnnulusRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"GetBounds", PyvtkImplicitAnnulusRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkImplicitAnnulusRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkImplicitAnnulusRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkImplicitAnnulusRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImplicitAnnulusRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImplicitAnnulusRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetBumpDistance", PyvtkImplicitAnnulusRepresentation_SetBumpDistance, METH_VARARGS,
   "SetBumpDistance(self, _arg:float) -> None\nC++: virtual void SetBumpDistance(double _arg)\n\nSpecify a translation distance used by the BumpAnnulus() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline. Defaults to 0.01.\n"},
  {"GetBumpDistanceMinValue", PyvtkImplicitAnnulusRepresentation_GetBumpDistanceMinValue, METH_VARARGS,
   "GetBumpDistanceMinValue(self) -> float\nC++: virtual double GetBumpDistanceMinValue()\n\n"},
  {"GetBumpDistanceMaxValue", PyvtkImplicitAnnulusRepresentation_GetBumpDistanceMaxValue, METH_VARARGS,
   "GetBumpDistanceMaxValue(self) -> float\nC++: virtual double GetBumpDistanceMaxValue()\n\n"},
  {"GetBumpDistance", PyvtkImplicitAnnulusRepresentation_GetBumpDistance, METH_VARARGS,
   "GetBumpDistance(self) -> float\nC++: virtual double GetBumpDistance()\n\n"},
  {"BumpAnnulus", PyvtkImplicitAnnulusRepresentation_BumpAnnulus, METH_VARARGS,
   "BumpAnnulus(self, dir:int, factor:float) -> None\nC++: void BumpAnnulus(int dir, double factor)\n\nTranslate the annulus in the direction of the view vector by the\nspecified BumpDistance. The dir parameter controls which\ndirection the pushing occurs, either in the same direction as the\nview vector, or when negative, in the opposite direction. The\nfactor controls what percentage of the bump is used.\n"},
  {"PushAnnulus", PyvtkImplicitAnnulusRepresentation_PushAnnulus, METH_VARARGS,
   "PushAnnulus(self, distance:float) -> None\nC++: void PushAnnulus(double distance)\n\nPush the annulus the distance specified along the view vector.\nPositive values are in the direction of the view vector; negative\nvalues are in the opposite direction. The distance value is\nexpressed in world coordinates.\n"},
  {"SetInteractionState", PyvtkImplicitAnnulusRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:InteractionStateType) -> None\nC++: virtual void SetInteractionState(InteractionStateType _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitAnnulusWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkImplicitAnnulusRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkImplicitAnnulusRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkImplicitAnnulusRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:InteractionStateType) -> None\nC++: virtual void SetRepresentationState(InteractionStateType)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkImplicitAnnulusRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> InteractionStateType\nC++: virtual InteractionStateType GetRepresentationState()\n\n"},
  {"RegisterPickers", PyvtkImplicitAnnulusRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetAnnulus", PyvtkImplicitAnnulusRepresentation_GetAnnulus, METH_VARARGS,
   "GetAnnulus(self, annulus:vtkAnnulus) -> None\nC++: void GetAnnulus(vtkAnnulus *annulus)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImplicitAnnulusRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("center"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxis/SetAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("inner_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetInnerRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetInnerRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetInnerRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInnerRadius/SetInnerRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("outer_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetOuterRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetOuterRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetOuterRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOuterRadius/SetOuterRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("along_x_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAlongXAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongXAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongXAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlongXAxis/SetAlongXAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("along_y_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAlongYAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongYAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongYAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlongYAxis/SetAlongYAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("along_z_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAlongZAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongZAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetAlongZAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlongZAxis/SetAlongZAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("draw_annulus"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetDrawAnnulus(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetDrawAnnulus(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetDrawAnnulus(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDrawAnnulus/SetDrawAnnulus\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetResolution/SetResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tubing"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetTubing(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetTubing(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetTubing(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTubing/SetTubing\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale_enabled"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetScaleEnabled(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetScaleEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetScaleEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScaleEnabled/SetScaleEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interaction_color"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetInteractionColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetInteractionColor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInteractionColor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_color"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetHandleColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetHandleColor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetHandleColor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("foreground_color"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetForegroundColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetForegroundColor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetForegroundColor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bump_distance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetBumpDistance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetBumpDistance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetBumpDistance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBumpDistance/SetBumpDistance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interaction_state"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetInteractionState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetInteractionState(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInteractionState\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("representation_state"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetRepresentationState(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitAnnulusRepresentation_SetRepresentationState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitAnnulusRepresentation_SetRepresentationState(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRepresentationState/SetRepresentationState\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAxisProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAxisProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_axis_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetSelectedAxisProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedAxisProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("annulus_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetAnnulusProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAnnulusProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_annulus_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetSelectedAnnulusProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedAnnulusProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("radius_handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetRadiusHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRadiusHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_radius_handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetSelectedRadiusHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedRadiusHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitAnnulusRepresentation_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImplicitAnnulusRepresentation_Doc =
  "vtkImplicitAnnulusRepresentation - defining the representation for a\nvtkImplicitAnnulusWidget\n\n"
  "Superclass: vtkBoundedWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkImplicitAnnulusWidget. It represents an infinite annulus defined\n"
  "by its inner/outer radiuses, its center, and its axis. The annulus is\n"
  "placed within its associated bounding box and the intersection of the\n"
  "annulus with the bounding box is shown to visually indicate the\n"
  "orientation and position of the representation. This annulus\n"
  "representation can be manipulated by using the\n"
  "vtkImplicitAnnulusWidget to adjust the annulus angle, axis, and/or\n"
  "center point. (Note that the bounding box is defined during\n"
  "invocation of the superclass' PlaceWidget() method.)\n\n"
  "To use this representation, you normally specify inner and outer\n"
  "radii, center, and axis, and a resolution for the annulus. Finally,\n"
  "place the widget and its representation in the scene using\n"
  "PlaceWidget().\n\n"
  "@sa\n"
  "vtkImplicitAnnulusWidget vtkAnnulus\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitAnnulusRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitAnnulusRepresentation", // tp_name
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
  PyvtkImplicitAnnulusRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitAnnulusRepresentation_StaticNew()
{
  return vtkImplicitAnnulusRepresentation::New();
}

PyObject *PyvtkImplicitAnnulusRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitAnnulusRepresentation_Type, PyvtkImplicitAnnulusRepresentation_Methods,
    "vtkImplicitAnnulusRepresentation",
 &PyvtkImplicitAnnulusRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBoundedWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitAnnulusRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkImplicitAnnulusRepresentation_InteractionStateType_Type, "vtkImplicitAnnulusRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkImplicitAnnulusRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkImplicitAnnulusRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "Outside", vtkImplicitAnnulusRepresentation::Outside },
        { "Moving", vtkImplicitAnnulusRepresentation::Moving },
        { "MovingOutline", vtkImplicitAnnulusRepresentation::MovingOutline },
        { "MovingCenter", vtkImplicitAnnulusRepresentation::MovingCenter },
        { "RotatingAxis", vtkImplicitAnnulusRepresentation::RotatingAxis },
        { "AdjustingInnerRadius", vtkImplicitAnnulusRepresentation::AdjustingInnerRadius },
        { "AdjustingOuterRadius", vtkImplicitAnnulusRepresentation::AdjustingOuterRadius },
        { "Scaling", vtkImplicitAnnulusRepresentation::Scaling },
        { "TranslatingCenter", vtkImplicitAnnulusRepresentation::TranslatingCenter },
      };

    o = PyvtkImplicitAnnulusRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImplicitAnnulusRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitAnnulusRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitAnnulusRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitAnnulusRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(2048);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_ANNULUS_RESOLUTION", o);
    Py_DECREF(o);
  }
}

