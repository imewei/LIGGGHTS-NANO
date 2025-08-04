// python wrapper for vtkImplicitFrustumRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitFrustumRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImplicitFrustumRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImplicitFrustumRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkBoundedWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkBoundedWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitFrustumRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitFrustumRepresentation.InteractionStateType", // tp_name
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
static PyObject *PyvtkImplicitFrustumRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImplicitFrustumRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImplicitFrustumRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitFrustumRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitFrustumRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitFrustumRepresentation *tempr = vtkImplicitFrustumRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFrustumRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitFrustumRepresentation::NewInstance());

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
PyvtkImplicitFrustumRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitFrustumRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitFrustumRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetOrigin(temp0);
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
PyvtkImplicitFrustumRepresentation_SetOrigin_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(*temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetOrigin(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImplicitFrustumRepresentation_SetOrigin_Methods[] = {
  {"SetOrigin", PyvtkImplicitFrustumRepresentation_SetOrigin_s2, METH_VARARGS,
   "@P *d"},
  {"SetOrigin", PyvtkImplicitFrustumRepresentation_SetOrigin_s3, METH_VARARGS,
   "@W vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitFrustumRepresentation_SetOrigin_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitFrustumRepresentation_SetOrigin_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImplicitFrustumRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::GetOrigin(temp0);
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
PyvtkImplicitFrustumRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitFrustumRepresentation_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitFrustumRepresentation_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrientation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(*temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetOrientation(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImplicitFrustumRepresentation_SetOrientation_Methods[] = {
  {"SetOrientation", PyvtkImplicitFrustumRepresentation_SetOrientation_s2, METH_VARARGS,
   "@P *d"},
  {"SetOrientation", PyvtkImplicitFrustumRepresentation_SetOrientation_s3, METH_VARARGS,
   "@W vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitFrustumRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitFrustumRepresentation_SetOrientation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitFrustumRepresentation_SetOrientation_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientation");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImplicitFrustumRepresentation::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->GetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::GetOrientation(temp0, temp1, temp2);
    }

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_GetOrientation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->GetOrientation(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::GetOrientation(temp0);
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
PyvtkImplicitFrustumRepresentation_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitFrustumRepresentation_GetOrientation_s1(self, args);
    case 3:
      return PyvtkImplicitFrustumRepresentation_GetOrientation_s2(self, args);
    case 1:
      return PyvtkImplicitFrustumRepresentation_GetOrientation_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetHorizontalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHorizontalAngle() :
      op->vtkImplicitFrustumRepresentation::GetHorizontalAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetHorizontalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalAngle(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetHorizontalAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetVerticalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalAngle() :
      op->vtkImplicitFrustumRepresentation::GetVerticalAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetVerticalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalAngle(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetVerticalAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetNearPlaneDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearPlaneDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNearPlaneDistance() :
      op->vtkImplicitFrustumRepresentation::GetNearPlaneDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetNearPlaneDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNearPlaneDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNearPlaneDistance(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetNearPlaneDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetAlongXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongXAxis() :
      op->vtkImplicitFrustumRepresentation::GetAlongXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOn();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOff();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetAlongYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongYAxis() :
      op->vtkImplicitFrustumRepresentation::GetAlongYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOn();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOff();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetAlongZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlongZAxis() :
      op->vtkImplicitFrustumRepresentation::GetAlongZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOn();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_AlongZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOff();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::AlongZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetDrawFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawFrustum(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetDrawFrustum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetDrawFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawFrustum() :
      op->vtkImplicitFrustumRepresentation::GetDrawFrustum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_DrawFrustumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrustumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrustumOn();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::DrawFrustumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_DrawFrustumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrustumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrustumOff();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::DrawFrustumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetFrustumProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustumProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFrustumProperty() :
      op->vtkImplicitFrustumRepresentation::GetFrustumProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetEdgeHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgeHandleProperty() :
      op->vtkImplicitFrustumRepresentation::GetEdgeHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetSelectedEdgeHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEdgeHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEdgeHandleProperty() :
      op->vtkImplicitFrustumRepresentation::GetSelectedEdgeHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetInteractionColor(temp0);
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
PyvtkImplicitFrustumRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitFrustumRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkImplicitFrustumRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetHandleColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetHandleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetHandleColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetHandleColor(temp0);
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
PyvtkImplicitFrustumRepresentation_SetHandleColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitFrustumRepresentation_SetHandleColor_s1(self, args);
    case 1:
      return PyvtkImplicitFrustumRepresentation_SetHandleColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFrustumRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::SetForegroundColor(temp0);
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
PyvtkImplicitFrustumRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitFrustumRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkImplicitFrustumRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::PlaceWidget(temp0);
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
PyvtkImplicitFrustumRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::StartWidgetInteraction(temp0);
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
PyvtkImplicitFrustumRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::WidgetInteraction(temp0);
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
PyvtkImplicitFrustumRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::EndWidgetInteraction(temp0);
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
PyvtkImplicitFrustumRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImplicitFrustumRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

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
      op->vtkImplicitFrustumRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImplicitFrustumRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImplicitFrustumRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImplicitFrustumRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  typedef vtkImplicitFrustumRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitFrustumRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitFrustumRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkImplicitFrustumRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitFrustumRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitFrustumRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkImplicitFrustumRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitFrustumRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  typedef vtkImplicitFrustumRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitFrustumRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitFrustumRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkImplicitFrustumRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitFrustumRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFrustumRepresentation_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFrustumRepresentation *op = static_cast<vtkImplicitFrustumRepresentation *>(vp);

  vtkFrustum *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFrustum"))
  {
    if (ap.IsBound())
    {
      op->GetFrustum(temp0);
    }
    else
    {
      op->vtkImplicitFrustumRepresentation::GetFrustum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitFrustumRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitFrustumRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitFrustumRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitFrustumRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitFrustumRepresentation\nC++: static vtkImplicitFrustumRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitFrustumRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitFrustumRepresentation\nC++: vtkImplicitFrustumRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitFrustumRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitFrustumRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrigin", PyvtkImplicitFrustumRepresentation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, x:[float, float, float]) -> None\nC++: void SetOrigin(double x[3])\nSetOrigin(self, xyz:vtkVector3d) -> None\nC++: void SetOrigin(const vtkVector3d &xyz)\n\nGet the origin of the frustum representation. The origin is\nlocated along the frustum axis. Default is (0, 0, 0)\n"},
  {"GetOrigin", PyvtkImplicitFrustumRepresentation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: double *GetOrigin()\nGetOrigin(self, xyz:[float, float, float]) -> None\nC++: void GetOrigin(double xyz[3])\n\n"},
  {"SetOrientation", PyvtkImplicitFrustumRepresentation_SetOrientation, METH_VARARGS,
   "SetOrientation(self, x:float, y:float, z:float) -> None\nC++: void SetOrientation(double x, double y, double z)\nSetOrientation(self, xyz:(float, float, float)) -> None\nC++: void SetOrientation(const double xyz[3])\nSetOrientation(self, xyz:vtkVector3d) -> None\nC++: void SetOrientation(const vtkVector3d &xyz)\n\nGet/Set the orientation of the frustum. Defaults to (0,0,0)\n"},
  {"GetOrientation", PyvtkImplicitFrustumRepresentation_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> (float, float, float)\nC++: double *GetOrientation()\nGetOrientation(self, x:float, y:float, z:float) -> None\nC++: void GetOrientation(double &x, double &y, double &z)\nGetOrientation(self, xyz:[float, float, float]) -> None\nC++: void GetOrientation(double xyz[3])\n\n"},
  {"GetHorizontalAngle", PyvtkImplicitFrustumRepresentation_GetHorizontalAngle, METH_VARARGS,
   "GetHorizontalAngle(self) -> float\nC++: double GetHorizontalAngle()\n\nGet/Set the horizontal angle of the frustum in degrees. It\nrepresents the angle between its forward axis and its right and\nleft planes. Defaults to 30.\n"},
  {"SetHorizontalAngle", PyvtkImplicitFrustumRepresentation_SetHorizontalAngle, METH_VARARGS,
   "SetHorizontalAngle(self, angle:float) -> None\nC++: void SetHorizontalAngle(double angle)\n\n"},
  {"GetVerticalAngle", PyvtkImplicitFrustumRepresentation_GetVerticalAngle, METH_VARARGS,
   "GetVerticalAngle(self) -> float\nC++: double GetVerticalAngle()\n\nGet/Set the vertical angle of the frustum in degrees. It\nrepresents the angle between its forward axis and its top and\nbottom planes. Defaults to 30.\n"},
  {"SetVerticalAngle", PyvtkImplicitFrustumRepresentation_SetVerticalAngle, METH_VARARGS,
   "SetVerticalAngle(self, angle:float) -> None\nC++: void SetVerticalAngle(double angle)\n\n"},
  {"GetNearPlaneDistance", PyvtkImplicitFrustumRepresentation_GetNearPlaneDistance, METH_VARARGS,
   "GetNearPlaneDistance(self) -> float\nC++: double GetNearPlaneDistance()\n\nGet/Set the near plane distance of the frustum, i.e. the distance\nbetween its origin and near plane along the forward axis.\nDefaults to 0.5.\n"},
  {"SetNearPlaneDistance", PyvtkImplicitFrustumRepresentation_SetNearPlaneDistance, METH_VARARGS,
   "SetNearPlaneDistance(self, angle:float) -> None\nC++: void SetNearPlaneDistance(double angle)\n\n"},
  {"SetAlongXAxis", PyvtkImplicitFrustumRepresentation_SetAlongXAxis, METH_VARARGS,
   "SetAlongXAxis(self, __a:bool) -> None\nC++: void SetAlongXAxis(bool)\n\nForce the frustum widget to be aligned with one of the x-y-z\naxes. If one axis is set on, the other two will be set off.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the frustum to the axes if it is\noriginally not aligned. Default to false.\n"},
  {"GetAlongXAxis", PyvtkImplicitFrustumRepresentation_GetAlongXAxis, METH_VARARGS,
   "GetAlongXAxis(self) -> bool\nC++: virtual bool GetAlongXAxis()\n\n"},
  {"AlongXAxisOn", PyvtkImplicitFrustumRepresentation_AlongXAxisOn, METH_VARARGS,
   "AlongXAxisOn(self) -> None\nC++: virtual void AlongXAxisOn()\n\n"},
  {"AlongXAxisOff", PyvtkImplicitFrustumRepresentation_AlongXAxisOff, METH_VARARGS,
   "AlongXAxisOff(self) -> None\nC++: virtual void AlongXAxisOff()\n\n"},
  {"SetAlongYAxis", PyvtkImplicitFrustumRepresentation_SetAlongYAxis, METH_VARARGS,
   "SetAlongYAxis(self, __a:bool) -> None\nC++: void SetAlongYAxis(bool)\n\n"},
  {"GetAlongYAxis", PyvtkImplicitFrustumRepresentation_GetAlongYAxis, METH_VARARGS,
   "GetAlongYAxis(self) -> bool\nC++: virtual bool GetAlongYAxis()\n\n"},
  {"AlongYAxisOn", PyvtkImplicitFrustumRepresentation_AlongYAxisOn, METH_VARARGS,
   "AlongYAxisOn(self) -> None\nC++: virtual void AlongYAxisOn()\n\n"},
  {"AlongYAxisOff", PyvtkImplicitFrustumRepresentation_AlongYAxisOff, METH_VARARGS,
   "AlongYAxisOff(self) -> None\nC++: virtual void AlongYAxisOff()\n\n"},
  {"SetAlongZAxis", PyvtkImplicitFrustumRepresentation_SetAlongZAxis, METH_VARARGS,
   "SetAlongZAxis(self, __a:bool) -> None\nC++: void SetAlongZAxis(bool)\n\n"},
  {"GetAlongZAxis", PyvtkImplicitFrustumRepresentation_GetAlongZAxis, METH_VARARGS,
   "GetAlongZAxis(self) -> bool\nC++: virtual bool GetAlongZAxis()\n\n"},
  {"AlongZAxisOn", PyvtkImplicitFrustumRepresentation_AlongZAxisOn, METH_VARARGS,
   "AlongZAxisOn(self) -> None\nC++: virtual void AlongZAxisOn()\n\n"},
  {"AlongZAxisOff", PyvtkImplicitFrustumRepresentation_AlongZAxisOff, METH_VARARGS,
   "AlongZAxisOff(self) -> None\nC++: virtual void AlongZAxisOff()\n\n"},
  {"SetDrawFrustum", PyvtkImplicitFrustumRepresentation_SetDrawFrustum, METH_VARARGS,
   "SetDrawFrustum(self, draw:bool) -> None\nC++: void SetDrawFrustum(bool draw)\n\nEnable/disable the drawing of the frustum. In some cases the\nfrustum interferes with the object that it is operating on (e.g.,\nthe frustum interferes with the cut surface it produces resulting\nin z-buffer artifacts.) By default it is on.\n"},
  {"GetDrawFrustum", PyvtkImplicitFrustumRepresentation_GetDrawFrustum, METH_VARARGS,
   "GetDrawFrustum(self) -> bool\nC++: virtual bool GetDrawFrustum()\n\n"},
  {"DrawFrustumOn", PyvtkImplicitFrustumRepresentation_DrawFrustumOn, METH_VARARGS,
   "DrawFrustumOn(self) -> None\nC++: virtual void DrawFrustumOn()\n\n"},
  {"DrawFrustumOff", PyvtkImplicitFrustumRepresentation_DrawFrustumOff, METH_VARARGS,
   "DrawFrustumOff(self) -> None\nC++: virtual void DrawFrustumOff()\n\n"},
  {"GetPolyData", PyvtkImplicitFrustumRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the frustum. The polydata contains\npolygons that are clipped by the bounding box.\n"},
  {"UpdatePlacement", PyvtkImplicitFrustumRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource.\n"},
  {"GetFrustumProperty", PyvtkImplicitFrustumRepresentation_GetFrustumProperty, METH_VARARGS,
   "GetFrustumProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetFrustumProperty()\n\nGet properties of the frustum actor.\n"},
  {"GetEdgeHandleProperty", PyvtkImplicitFrustumRepresentation_GetEdgeHandleProperty, METH_VARARGS,
   "GetEdgeHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetEdgeHandleProperty()\n\nGet the properties of the edge handles actors. i.e. the\nproperties of the near plane and angles handles when selected or\nnot.\n"},
  {"GetSelectedEdgeHandleProperty", PyvtkImplicitFrustumRepresentation_GetSelectedEdgeHandleProperty, METH_VARARGS,
   "GetSelectedEdgeHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedEdgeHandleProperty()\n\n"},
  {"SetInteractionColor", PyvtkImplicitFrustumRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetInteractionColor(double, double, double)\nSetInteractionColor(self, c:[float, float, float]) -> None\nC++: void SetInteractionColor(double c[3])\n\nSet the color of all the widgets handles (origin, orientations,\nnear plane and angles) and their color during interaction.\nForeground color applies to the frustum itself\n"},
  {"SetHandleColor", PyvtkImplicitFrustumRepresentation_SetHandleColor, METH_VARARGS,
   "SetHandleColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetHandleColor(double, double, double)\nSetHandleColor(self, c:[float, float, float]) -> None\nC++: void SetHandleColor(double c[3])\n\n"},
  {"SetForegroundColor", PyvtkImplicitFrustumRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetForegroundColor(double, double, double)\nSetForegroundColor(self, c:[float, float, float]) -> None\nC++: void SetForegroundColor(double c[3])\n\n"},
  {"ComputeInteractionState", PyvtkImplicitFrustumRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkImplicitFrustumWidget.\n"},
  {"PlaceWidget", PyvtkImplicitFrustumRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkImplicitFrustumRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkImplicitFrustumRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkImplicitFrustumRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkImplicitFrustumRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"GetBounds", PyvtkImplicitFrustumRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkImplicitFrustumRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkImplicitFrustumRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkImplicitFrustumRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImplicitFrustumRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImplicitFrustumRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkImplicitFrustumRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:InteractionStateType) -> None\nC++: virtual void SetInteractionState(InteractionStateType _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitFrustumWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked and returns a state based on\ngeometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkImplicitFrustumRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkImplicitFrustumRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> InteractionStateType\nC++: virtual InteractionStateType GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkImplicitFrustumRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:InteractionStateType) -> None\nC++: virtual void SetRepresentationState(InteractionStateType)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkImplicitFrustumRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> InteractionStateType\nC++: virtual InteractionStateType GetRepresentationState()\n\n"},
  {"RegisterPickers", PyvtkImplicitFrustumRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetFrustum", PyvtkImplicitFrustumRepresentation_GetFrustum, METH_VARARGS,
   "GetFrustum(self, frustum:vtkFrustum) -> None\nC++: void GetFrustum(vtkFrustum *frustum)\n\nGet the concrete represented frustum\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImplicitFrustumRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrigin/SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("orientation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetOrientation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetOrientation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetOrientation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrientation/SetOrientation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("orientation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetOrientation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetOrientation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetOrientation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("horizontal_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetHorizontalAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetHorizontalAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetHorizontalAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHorizontalAngle/SetHorizontalAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertical_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetVerticalAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetVerticalAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetVerticalAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVerticalAngle/SetVerticalAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("near_plane_distance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetNearPlaneDistance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetNearPlaneDistance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetNearPlaneDistance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNearPlaneDistance/SetNearPlaneDistance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("along_x_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetAlongXAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongXAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongXAxis(self, args);
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
      auto result = PyvtkImplicitFrustumRepresentation_GetAlongYAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongYAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongYAxis(self, args);
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
      auto result = PyvtkImplicitFrustumRepresentation_GetAlongZAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongZAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetAlongZAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlongZAxis/SetAlongZAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("draw_frustum"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetDrawFrustum(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetDrawFrustum(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetDrawFrustum(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDrawFrustum/SetDrawFrustum\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interaction_color"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetInteractionColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetInteractionColor(self, args);
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
        auto result = PyvtkImplicitFrustumRepresentation_SetHandleColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetHandleColor(self, args);
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
        auto result = PyvtkImplicitFrustumRepresentation_SetForegroundColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetForegroundColor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetForegroundColor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interaction_state"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetInteractionState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetInteractionState(self, args);
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
      auto result = PyvtkImplicitFrustumRepresentation_GetRepresentationState(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImplicitFrustumRepresentation_SetRepresentationState(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImplicitFrustumRepresentation_SetRepresentationState(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRepresentationState/SetRepresentationState\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("frustum_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetFrustumProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFrustumProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("edge_handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetEdgeHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEdgeHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_edge_handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetSelectedEdgeHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedEdgeHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImplicitFrustumRepresentation_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImplicitFrustumRepresentation_Doc =
  "vtkImplicitFrustumRepresentation - The representation for a\nvtkImplicitFrustumWidget\n\n"
  "Superclass: vtkBoundedWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkImplicitFrustumWidget. It represents an infinite frustum defined\n"
  "by its origin, its orientation, the two angles between its forward\n"
  "axis and its horizontal and vertical planes, and the distance between\n"
  "its origin and near plane. This frustum representation can be\n"
  "manipulated by using the vtkImplicitFrustumWidget.\n\n"
  "@sa vtkImplicitFrustumWidget vtkFrustum\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitFrustumRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitFrustumRepresentation", // tp_name
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
  PyvtkImplicitFrustumRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitFrustumRepresentation_StaticNew()
{
  return vtkImplicitFrustumRepresentation::New();
}

PyObject *PyvtkImplicitFrustumRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitFrustumRepresentation_Type, PyvtkImplicitFrustumRepresentation_Methods,
    "vtkImplicitFrustumRepresentation",
 &PyvtkImplicitFrustumRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBoundedWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitFrustumRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkImplicitFrustumRepresentation_InteractionStateType_Type, "vtkImplicitFrustumRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkImplicitFrustumRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkImplicitFrustumRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "Outside", vtkImplicitFrustumRepresentation::Outside },
        { "Moving", vtkImplicitFrustumRepresentation::Moving },
        { "MovingOrigin", vtkImplicitFrustumRepresentation::MovingOrigin },
        { "AdjustingHorizontalAngle", vtkImplicitFrustumRepresentation::AdjustingHorizontalAngle },
        { "AdjustingVerticalAngle", vtkImplicitFrustumRepresentation::AdjustingVerticalAngle },
        { "AdjustingNearPlaneDistance", vtkImplicitFrustumRepresentation::AdjustingNearPlaneDistance },
        { "AdjustingYaw", vtkImplicitFrustumRepresentation::AdjustingYaw },
        { "AdjustingPitch", vtkImplicitFrustumRepresentation::AdjustingPitch },
        { "AdjustingRoll", vtkImplicitFrustumRepresentation::AdjustingRoll },
        { "TranslatingOriginOnAxis", vtkImplicitFrustumRepresentation::TranslatingOriginOnAxis },
      };

    o = PyvtkImplicitFrustumRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImplicitFrustumRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitFrustumRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitFrustumRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitFrustumRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

