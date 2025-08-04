// python wrapper for vtkImplicitConeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitConeRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImplicitConeRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImplicitConeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkBoundedWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitConeRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitConeRepresentation.InteractionStateType", // tp_name
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
static PyObject *PyvtkImplicitConeRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImplicitConeRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImplicitConeRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitConeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitConeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitConeRepresentation *tempr = vtkImplicitConeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitConeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitConeRepresentation::NewInstance());

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
PyvtkImplicitConeRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitConeRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitConeRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::SetOrigin(temp0);
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
PyvtkImplicitConeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitConeRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImplicitConeRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::GetOrigin(temp0);
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
PyvtkImplicitConeRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitConeRepresentation_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetAxis(temp0);
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
PyvtkImplicitConeRepresentation_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitConeRepresentation_SetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkImplicitConeRepresentation::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_GetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::GetAxis(temp0);
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
PyvtkImplicitConeRepresentation_GetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitConeRepresentation_GetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_GetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkImplicitConeRepresentation::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetAlongXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongXAxis() :
      op->vtkImplicitConeRepresentation::GetAlongXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetAlongYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongYAxis() :
      op->vtkImplicitConeRepresentation::GetAlongYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetAlongZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongZAxis() :
      op->vtkImplicitConeRepresentation::GetAlongZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_AlongZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::AlongZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetDrawCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawCone(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::SetDrawCone(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetDrawCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawCone() :
      op->vtkImplicitConeRepresentation::GetDrawCone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_DrawConeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawConeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawConeOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::DrawConeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_DrawConeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawConeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawConeOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::DrawConeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkImplicitConeRepresentation::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkImplicitConeRepresentation::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkImplicitConeRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitConeRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitConeRepresentation::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkImplicitConeRepresentation::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkImplicitConeRepresentation::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitConeRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisProperty() :
      op->vtkImplicitConeRepresentation::GetAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetSelectedAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedAxisProperty() :
      op->vtkImplicitConeRepresentation::GetSelectedAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetConeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetConeProperty() :
      op->vtkImplicitConeRepresentation::GetConeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetSelectedConeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedConeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedConeProperty() :
      op->vtkImplicitConeRepresentation::GetSelectedConeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkImplicitConeRepresentation::GetEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetInteractionColor(temp0);
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
PyvtkImplicitConeRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitConeRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetHandleColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetHandleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_SetHandleColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetHandleColor(temp0);
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
PyvtkImplicitConeRepresentation_SetHandleColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitConeRepresentation_SetHandleColor_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_SetHandleColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitConeRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetForegroundColor(temp0);
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
PyvtkImplicitConeRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitConeRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkImplicitConeRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitConeRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::PlaceWidget(temp0);
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
PyvtkImplicitConeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitConeRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::StartWidgetInteraction(temp0);
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
PyvtkImplicitConeRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::WidgetInteraction(temp0);
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
PyvtkImplicitConeRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::EndWidgetInteraction(temp0);
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
PyvtkImplicitConeRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImplicitConeRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImplicitConeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImplicitConeRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImplicitConeRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

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
      op->vtkImplicitConeRepresentation::SetBumpDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetBumpDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMinValue() :
      op->vtkImplicitConeRepresentation::GetBumpDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetBumpDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMaxValue() :
      op->vtkImplicitConeRepresentation::GetBumpDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistance() :
      op->vtkImplicitConeRepresentation::GetBumpDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_BumpCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BumpCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BumpCone(temp0, temp1);
    }
    else
    {
      op->vtkImplicitConeRepresentation::BumpCone(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_PushCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushCone(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::PushCone(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  typedef vtkImplicitConeRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitConeRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitConeRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkImplicitConeRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitConeRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitConeRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkImplicitConeRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitConeRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  typedef vtkImplicitConeRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitConeRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitConeRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkImplicitConeRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitConeRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkImplicitConeRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitConeRepresentation_GetCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitConeRepresentation *op = static_cast<vtkImplicitConeRepresentation *>(vp);

  vtkCone *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCone"))
  {
    if (ap.IsBound())
    {
      op->GetCone(temp0);
    }
    else
    {
      op->vtkImplicitConeRepresentation::GetCone(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitConeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitConeRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitConeRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitConeRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitConeRepresentation\nC++: static vtkImplicitConeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitConeRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitConeRepresentation\nC++: vtkImplicitConeRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitConeRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitConeRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrigin", PyvtkImplicitConeRepresentation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, x:[float, float, float]) -> None\nC++: void SetOrigin(double x[3])\n\nGet the origin of the cone representation. The origin is located\nalong the cone axis.\n"},
  {"GetOrigin", PyvtkImplicitConeRepresentation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: double *GetOrigin()\nGetOrigin(self, xyz:[float, float, float]) -> None\nC++: void GetOrigin(double xyz[3])\n\n"},
  {"SetAxis", PyvtkImplicitConeRepresentation_SetAxis, METH_VARARGS,
   "SetAxis(self, x:float, y:float, z:float) -> None\nC++: void SetAxis(double x, double y, double z)\nSetAxis(self, a:[float, float, float]) -> None\nC++: void SetAxis(double a[3])\n\nSet/Get the axis of rotation for the cone. If the axis is not\nspecified as a unit vector, it will be normalized.\n"},
  {"GetAxis", PyvtkImplicitConeRepresentation_GetAxis, METH_VARARGS,
   "GetAxis(self) -> (float, float, float)\nC++: double *GetAxis()\nGetAxis(self, a:[float, float, float]) -> None\nC++: void GetAxis(double a[3])\n\n"},
  {"SetAngle", PyvtkImplicitConeRepresentation_SetAngle, METH_VARARGS,
   "SetAngle(self, r:float) -> None\nC++: void SetAngle(double r)\n\nSet/Get the cone angle (expressed in degrees).\n"},
  {"GetAngle", PyvtkImplicitConeRepresentation_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: double GetAngle()\n\n"},
  {"SetAlongXAxis", PyvtkImplicitConeRepresentation_SetAlongXAxis, METH_VARARGS,
   "SetAlongXAxis(self, __a:bool) -> None\nC++: void SetAlongXAxis(bool)\n\nForce the cone widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the cone to the axes if it is originally not\naligned. Default to false.\n"},
  {"GetAlongXAxis", PyvtkImplicitConeRepresentation_GetAlongXAxis, METH_VARARGS,
   "GetAlongXAxis(self) -> bool\nC++: virtual bool GetAlongXAxis()\n\n"},
  {"AlongXAxisOn", PyvtkImplicitConeRepresentation_AlongXAxisOn, METH_VARARGS,
   "AlongXAxisOn(self) -> None\nC++: virtual void AlongXAxisOn()\n\n"},
  {"AlongXAxisOff", PyvtkImplicitConeRepresentation_AlongXAxisOff, METH_VARARGS,
   "AlongXAxisOff(self) -> None\nC++: virtual void AlongXAxisOff()\n\n"},
  {"SetAlongYAxis", PyvtkImplicitConeRepresentation_SetAlongYAxis, METH_VARARGS,
   "SetAlongYAxis(self, __a:bool) -> None\nC++: void SetAlongYAxis(bool)\n\n"},
  {"GetAlongYAxis", PyvtkImplicitConeRepresentation_GetAlongYAxis, METH_VARARGS,
   "GetAlongYAxis(self) -> bool\nC++: virtual bool GetAlongYAxis()\n\n"},
  {"AlongYAxisOn", PyvtkImplicitConeRepresentation_AlongYAxisOn, METH_VARARGS,
   "AlongYAxisOn(self) -> None\nC++: virtual void AlongYAxisOn()\n\n"},
  {"AlongYAxisOff", PyvtkImplicitConeRepresentation_AlongYAxisOff, METH_VARARGS,
   "AlongYAxisOff(self) -> None\nC++: virtual void AlongYAxisOff()\n\n"},
  {"SetAlongZAxis", PyvtkImplicitConeRepresentation_SetAlongZAxis, METH_VARARGS,
   "SetAlongZAxis(self, __a:bool) -> None\nC++: void SetAlongZAxis(bool)\n\n"},
  {"GetAlongZAxis", PyvtkImplicitConeRepresentation_GetAlongZAxis, METH_VARARGS,
   "GetAlongZAxis(self) -> bool\nC++: virtual bool GetAlongZAxis()\n\n"},
  {"AlongZAxisOn", PyvtkImplicitConeRepresentation_AlongZAxisOn, METH_VARARGS,
   "AlongZAxisOn(self) -> None\nC++: virtual void AlongZAxisOn()\n\n"},
  {"AlongZAxisOff", PyvtkImplicitConeRepresentation_AlongZAxisOff, METH_VARARGS,
   "AlongZAxisOff(self) -> None\nC++: virtual void AlongZAxisOff()\n\n"},
  {"SetDrawCone", PyvtkImplicitConeRepresentation_SetDrawCone, METH_VARARGS,
   "SetDrawCone(self, draw:bool) -> None\nC++: void SetDrawCone(bool draw)\n\nEnable/disable the drawing of the cone. In some cases the cone\ninterferes with the object that it is operating on (e.g., the\ncone interferes with the cut surface it produces resulting in\nz-buffer artifacts.) By default it is off.\n"},
  {"GetDrawCone", PyvtkImplicitConeRepresentation_GetDrawCone, METH_VARARGS,
   "GetDrawCone(self) -> bool\nC++: virtual bool GetDrawCone()\n\n"},
  {"DrawConeOn", PyvtkImplicitConeRepresentation_DrawConeOn, METH_VARARGS,
   "DrawConeOn(self) -> None\nC++: virtual void DrawConeOn()\n\n"},
  {"DrawConeOff", PyvtkImplicitConeRepresentation_DrawConeOff, METH_VARARGS,
   "DrawConeOff(self) -> None\nC++: virtual void DrawConeOff()\n\n"},
  {"SetResolution", PyvtkImplicitConeRepresentation_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get the resolution of the cone. This is the number of\npolygonal facets used to approximate the surface (for rendering\npurposes). A vtkCone is used under the hood to provide an exact\nsurface representation. Defaults to 128.\n"},
  {"GetResolutionMinValue", PyvtkImplicitConeRepresentation_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkImplicitConeRepresentation_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkImplicitConeRepresentation_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetTubing", PyvtkImplicitConeRepresentation_SetTubing, METH_VARARGS,
   "SetTubing(self, _arg:bool) -> None\nC++: virtual void SetTubing(bool _arg)\n\nTurn on/off tubing of the wire outline of the cone intersection\n(against the bounding box). The tube thickens the line by\nwrapping with a vtkTubeFilter. Defaults to true.\n"},
  {"GetTubing", PyvtkImplicitConeRepresentation_GetTubing, METH_VARARGS,
   "GetTubing(self) -> bool\nC++: virtual bool GetTubing()\n\n"},
  {"TubingOn", PyvtkImplicitConeRepresentation_TubingOn, METH_VARARGS,
   "TubingOn(self) -> None\nC++: virtual void TubingOn()\n\n"},
  {"TubingOff", PyvtkImplicitConeRepresentation_TubingOff, METH_VARARGS,
   "TubingOff(self) -> None\nC++: virtual void TubingOff()\n\n"},
  {"SetScaleEnabled", PyvtkImplicitConeRepresentation_SetScaleEnabled, METH_VARARGS,
   "SetScaleEnabled(self, _arg:bool) -> None\nC++: virtual void SetScaleEnabled(bool _arg)\n\nTurn on/off the ability to scale the widget with the mouse.\nDefaults to true.\n"},
  {"GetScaleEnabled", PyvtkImplicitConeRepresentation_GetScaleEnabled, METH_VARARGS,
   "GetScaleEnabled(self) -> bool\nC++: virtual bool GetScaleEnabled()\n\n"},
  {"ScaleEnabledOn", PyvtkImplicitConeRepresentation_ScaleEnabledOn, METH_VARARGS,
   "ScaleEnabledOn(self) -> None\nC++: virtual void ScaleEnabledOn()\n\n"},
  {"ScaleEnabledOff", PyvtkImplicitConeRepresentation_ScaleEnabledOff, METH_VARARGS,
   "ScaleEnabledOff(self) -> None\nC++: virtual void ScaleEnabledOff()\n\n"},
  {"GetPolyData", PyvtkImplicitConeRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the cone. The polydata contains\npolygons that are clipped by the bounding box.\n"},
  {"UpdatePlacement", PyvtkImplicitConeRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource.\n"},
  {"GetAxisProperty", PyvtkImplicitConeRepresentation_GetAxisProperty, METH_VARARGS,
   "GetAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetAxisProperty()\n\nGet the properties on the axis (line and cone).\n"},
  {"GetSelectedAxisProperty", PyvtkImplicitConeRepresentation_GetSelectedAxisProperty, METH_VARARGS,
   "GetSelectedAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedAxisProperty()\n\n"},
  {"GetConeProperty", PyvtkImplicitConeRepresentation_GetConeProperty, METH_VARARGS,
   "GetConeProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetConeProperty()\n\nGet the cone properties. The properties of the cone when selected\nand unselected can be manipulated.\n"},
  {"GetSelectedConeProperty", PyvtkImplicitConeRepresentation_GetSelectedConeProperty, METH_VARARGS,
   "GetSelectedConeProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedConeProperty()\n\n"},
  {"GetEdgesProperty", PyvtkImplicitConeRepresentation_GetEdgesProperty, METH_VARARGS,
   "GetEdgesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {"SetInteractionColor", PyvtkImplicitConeRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetInteractionColor(double, double, double)\nSetInteractionColor(self, c:[float, float, float]) -> None\nC++: void SetInteractionColor(double c[3])\n\nSet the color of all the widgets handles (edges, axis, selected\ncone) and their color during interaction. Foreground color\napplies to the outlines and unselected cone.\n"},
  {"SetHandleColor", PyvtkImplicitConeRepresentation_SetHandleColor, METH_VARARGS,
   "SetHandleColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetHandleColor(double, double, double)\nSetHandleColor(self, c:[float, float, float]) -> None\nC++: void SetHandleColor(double c[3])\n\n"},
  {"SetForegroundColor", PyvtkImplicitConeRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetForegroundColor(double, double, double)\nSetForegroundColor(self, c:[float, float, float]) -> None\nC++: void SetForegroundColor(double c[3])\n\n"},
  {"ComputeInteractionState", PyvtkImplicitConeRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkImplicitConeWidget.\n"},
  {"PlaceWidget", PyvtkImplicitConeRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkImplicitConeRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkImplicitConeRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkImplicitConeRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkImplicitConeRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"GetBounds", PyvtkImplicitConeRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkImplicitConeRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkImplicitConeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkImplicitConeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImplicitConeRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImplicitConeRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetBumpDistance", PyvtkImplicitConeRepresentation_SetBumpDistance, METH_VARARGS,
   "SetBumpDistance(self, _arg:float) -> None\nC++: virtual void SetBumpDistance(double _arg)\n\nSpecify a translation distance used by the BumpCone() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline. Defaults to 0.01.\n"},
  {"GetBumpDistanceMinValue", PyvtkImplicitConeRepresentation_GetBumpDistanceMinValue, METH_VARARGS,
   "GetBumpDistanceMinValue(self) -> float\nC++: virtual double GetBumpDistanceMinValue()\n\n"},
  {"GetBumpDistanceMaxValue", PyvtkImplicitConeRepresentation_GetBumpDistanceMaxValue, METH_VARARGS,
   "GetBumpDistanceMaxValue(self) -> float\nC++: virtual double GetBumpDistanceMaxValue()\n\n"},
  {"GetBumpDistance", PyvtkImplicitConeRepresentation_GetBumpDistance, METH_VARARGS,
   "GetBumpDistance(self) -> float\nC++: virtual double GetBumpDistance()\n\n"},
  {"BumpCone", PyvtkImplicitConeRepresentation_BumpCone, METH_VARARGS,
   "BumpCone(self, dir:int, factor:float) -> None\nC++: void BumpCone(int dir, double factor)\n\nTranslate the cone in the direction of the view vector by the\nspecified BumpDistance. The dir parameter controls which\ndirection the pushing occurs, either in the same direction as the\nview vector, or when negative, in the opposite direction. The\nfactor controls what percentage of the bump is used.\n"},
  {"PushCone", PyvtkImplicitConeRepresentation_PushCone, METH_VARARGS,
   "PushCone(self, distance:float) -> None\nC++: void PushCone(double distance)\n\nPush the cone the distance specified along the view vector.\nPositive values are in the direction of the view vector; negative\nvalues are in the opposite direction. The distance value is\nexpressed in world coordinates.\n"},
  {"SetInteractionState", PyvtkImplicitConeRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:InteractionStateType) -> None\nC++: virtual void SetInteractionState(InteractionStateType _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitConeWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkImplicitConeRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkImplicitConeRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkImplicitConeRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:InteractionStateType) -> None\nC++: virtual void SetRepresentationState(InteractionStateType)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkImplicitConeRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> InteractionStateType\nC++: virtual InteractionStateType GetRepresentationState()\n\n"},
  {"RegisterPickers", PyvtkImplicitConeRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetCone", PyvtkImplicitConeRepresentation_GetCone, METH_VARARGS,
   "GetCone(self, cone:vtkCone) -> None\nC++: void GetCone(vtkCone *cone)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImplicitConeRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrigin/SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxis/SetAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAngle/SetAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("along_x_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetAlongXAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetAlongXAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetAlongXAxis(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetAlongYAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetAlongYAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetAlongYAxis(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetAlongZAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetAlongZAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetAlongZAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlongZAxis/SetAlongZAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("draw_cone"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetDrawCone(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetDrawCone(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetDrawCone(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDrawCone/SetDrawCone\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetResolution(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetTubing(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetTubing(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetTubing(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetScaleEnabled(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetScaleEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetScaleEnabled(self, args);
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
        auto result = PyvtkImplicitConeRepresentation_SetInteractionColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetInteractionColor(self, args);
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
        auto result = PyvtkImplicitConeRepresentation_SetHandleColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetHandleColor(self, args);
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
        auto result = PyvtkImplicitConeRepresentation_SetForegroundColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetForegroundColor(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetBumpDistance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetBumpDistance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetBumpDistance(self, args);
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
        auto result = PyvtkImplicitConeRepresentation_SetInteractionState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetInteractionState(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetRepresentationState(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitConeRepresentation_SetRepresentationState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitConeRepresentation_SetRepresentationState(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetAxisProperty(self, args);
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
      auto result = PyvtkImplicitConeRepresentation_GetSelectedAxisProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedAxisProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cone_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetConeProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetConeProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_cone_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetSelectedConeProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedConeProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("edges_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetEdgesProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEdgesProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitConeRepresentation_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImplicitConeRepresentation_Doc =
  "vtkImplicitConeRepresentation - defining the representation for a\nvtkImplicitConeWidget\n\n"
  "Superclass: vtkBoundedWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkImplicitConeWidget. It represents an infinite cone defined by an\n"
  "angle, a origin, and an axis. The cone is placed within its\n"
  "associated bounding box and the intersection of the cone with the\n"
  "bounding box is shown to visually indicate the orientation and\n"
  "position of the representation. This cone representation can be\n"
  "manipulated by using the vtkImplicitConeWidget to adjust the cone\n"
  "angle, axis, and/or origin point. (Note that the bounding box is\n"
  "defined during invocation of the superclass' PlaceWidget() method.)\n\n"
  "To use this representation, you normally specify a angle, origin, and\n"
  "axis. Optionally you can specify a minimum and maximum angle, and a\n"
  "resolution for the cone. Finally, place the widget and its\n"
  "representation in the scene using PlaceWidget().\n\n"
  "@sa\n"
  "vtkImplicitConeWidget vtkCone\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitConeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitConeRepresentation", // tp_name
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
  PyvtkImplicitConeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitConeRepresentation_StaticNew()
{
  return vtkImplicitConeRepresentation::New();
}

PyObject *PyvtkImplicitConeRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitConeRepresentation_Type, PyvtkImplicitConeRepresentation_Methods,
    "vtkImplicitConeRepresentation",
 &PyvtkImplicitConeRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBoundedWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitConeRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkImplicitConeRepresentation_InteractionStateType_Type, "vtkImplicitConeRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkImplicitConeRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkImplicitConeRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "Outside", vtkImplicitConeRepresentation::Outside },
        { "Moving", vtkImplicitConeRepresentation::Moving },
        { "MovingOutline", vtkImplicitConeRepresentation::MovingOutline },
        { "MovingOrigin", vtkImplicitConeRepresentation::MovingOrigin },
        { "RotatingAxis", vtkImplicitConeRepresentation::RotatingAxis },
        { "AdjustingAngle", vtkImplicitConeRepresentation::AdjustingAngle },
        { "Scaling", vtkImplicitConeRepresentation::Scaling },
        { "TranslatingOrigin", vtkImplicitConeRepresentation::TranslatingOrigin },
      };

    o = PyvtkImplicitConeRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImplicitConeRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitConeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitConeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitConeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(2048);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_CONE_RESOLUTION", o);
    Py_DECREF(o);
  }
}

