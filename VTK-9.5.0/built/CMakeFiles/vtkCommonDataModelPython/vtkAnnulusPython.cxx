// python wrapper for vtkAnnulus
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnnulus.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAnnulus(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAnnulus_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkAnnulus_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnulus::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnulus::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnulus *tempr = vtkAnnulus::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnulus *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnulus::NewInstance());

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
PyvtkAnnulus_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnnulus::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnnulus::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkAnnulus::EvaluateFunction(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkAnnulus::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkAnnulus::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAnnulus_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkAnnulus_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkAnnulus_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkAnnulus_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkAnnulus::EvaluateGradient(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::SetInnerRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadius() :
      op->vtkAnnulus::GetInnerRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::SetOuterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadius() :
      op->vtkAnnulus::GetOuterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnulus_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkAnnulus::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_SetCenter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetCenter(*temp0);
    }
    else
    {
      op->vtkAnnulus::SetCenter(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAnnulus_SetCenter_Methods[] = {
  {"SetCenter", PyvtkAnnulus_SetCenter_s2, METH_VARARGS,
   "@P *d"},
  {"SetCenter", PyvtkAnnulus_SetCenter_s3, METH_VARARGS,
   "@W vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAnnulus_SetCenter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnulus_SetCenter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAnnulus_SetCenter_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkAnnulus_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->GetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAnnulus::GetCenter(temp0, temp1, temp2);
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
PyvtkAnnulus_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::GetCenter(temp0);
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
PyvtkAnnulus_GetCenter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkAnnulus::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAnnulus_GetCenter_s1(self, args);
    case 1:
      return PyvtkAnnulus_GetCenter_s2(self, args);
    case 0:
      return PyvtkAnnulus_GetCenter_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkAnnulus_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::SetAxis(temp0);
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
PyvtkAnnulus_SetAxis_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(*temp0);
    }
    else
    {
      op->vtkAnnulus::SetAxis(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAnnulus_SetAxis_Methods[] = {
  {"SetAxis", PyvtkAnnulus_SetAxis_s2, METH_VARARGS,
   "@P *d"},
  {"SetAxis", PyvtkAnnulus_SetAxis_s3, METH_VARARGS,
   "@W vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAnnulus_SetAxis(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnulus_SetAxis_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAnnulus_SetAxis_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkAnnulus_GetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->GetAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAnnulus::GetAxis(temp0, temp1, temp2);
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
PyvtkAnnulus_GetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

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
      op->vtkAnnulus::GetAxis(temp0);
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
PyvtkAnnulus_GetAxis_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnulus *op = static_cast<vtkAnnulus *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkAnnulus::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnulus_GetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAnnulus_GetAxis_s1(self, args);
    case 1:
      return PyvtkAnnulus_GetAxis_s2(self, args);
    case 0:
      return PyvtkAnnulus_GetAxis_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAxis");
  return nullptr;
}

static PyMethodDef PyvtkAnnulus_Methods[] = {
  {"IsTypeOf", PyvtkAnnulus_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnulus_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnulus_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnnulus\nC++: static vtkAnnulus *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnulus_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnnulus\nC++: vtkAnnulus *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnnulus_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnnulus_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkAnnulus_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkAnnulus_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], g:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate annulus function gradient.\n"},
  {"SetInnerRadius", PyvtkAnnulus_SetInnerRadius, METH_VARARGS,
   "SetInnerRadius(self, radius:float) -> None\nC++: void SetInnerRadius(double radius)\n\nSet/Get the inner annulus radius. Default is 0.25.\n"},
  {"GetInnerRadius", PyvtkAnnulus_GetInnerRadius, METH_VARARGS,
   "GetInnerRadius(self) -> float\nC++: double GetInnerRadius()\n\n"},
  {"SetOuterRadius", PyvtkAnnulus_SetOuterRadius, METH_VARARGS,
   "SetOuterRadius(self, radius:float) -> None\nC++: void SetOuterRadius(double radius)\n\nSet/Get the outer annulus radius. Default is 0.5.\n"},
  {"GetOuterRadius", PyvtkAnnulus_GetOuterRadius, METH_VARARGS,
   "GetOuterRadius(self) -> float\nC++: double GetOuterRadius()\n\n"},
  {"SetCenter", PyvtkAnnulus_SetCenter, METH_VARARGS,
   "SetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\nSetCenter(self, xyz:(float, float, float)) -> None\nC++: void SetCenter(const double xyz[3])\nSetCenter(self, xyz:vtkVector3d) -> None\nC++: void SetCenter(const vtkVector3d &xyz)\n\nSet/Get the annulus center. Default is (0, 0, 0).\n"},
  {"GetCenter", PyvtkAnnulus_GetCenter, METH_VARARGS,
   "GetCenter(self, x:float, y:float, z:float) -> None\nC++: void GetCenter(double &x, double &y, double &z)\nGetCenter(self, xyz:[float, float, float]) -> None\nC++: void GetCenter(double xyz[3])\nGetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetAxis", PyvtkAnnulus_SetAxis, METH_VARARGS,
   "SetAxis(self, x:float, y:float, z:float) -> None\nC++: void SetAxis(double x, double y, double z)\nSetAxis(self, axis:[float, float, float]) -> None\nC++: void SetAxis(double axis[3])\nSetAxis(self, axis:vtkVector3d) -> None\nC++: void SetAxis(const vtkVector3d &axis)\n\nSet/Get the axis of the annulus. If the axis is not specified as\na unit vector, it will be normalized. If zero-length axis vector\nis used as input to this method, it will be ignored. Default is\nthe Y-axis (0, 1, 0)\n"},
  {"GetAxis", PyvtkAnnulus_GetAxis, METH_VARARGS,
   "GetAxis(self, x:float, y:float, z:float) -> None\nC++: void GetAxis(double &x, double &y, double &z)\nGetAxis(self, xyz:[float, float, float]) -> None\nC++: void GetAxis(double xyz[3])\nGetAxis(self) -> (float, float, float)\nC++: double *GetAxis()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAnnulus_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("inner_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnnulus_GetInnerRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetInnerRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetInnerRadius(self, args);
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
      auto result = PyvtkAnnulus_GetOuterRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetOuterRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetOuterRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOuterRadius/SetOuterRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnnulus_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAnnulus_GetAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxis/SetAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAnnulus_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAnnulus_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetAxis\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAnnulus_Doc =
  "vtkAnnulus - implicit function for a annulus\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkAnnulus computes the implicit function and function gradient for\n"
  "an annulus composed of two co-axial cylinders. vtkAnnulus is a\n"
  "concrete implementation of vtkImplicitFunction. By default the\n"
  "Annulus is centered at the origin and the axis of rotation is along\n"
  "the y-axis. You can redefine the center and axis of rotation by\n"
  "setting the Center and Axis data members. (Note that it is also\n"
  "possible to use the superclass' vtkImplicitFunction transformation\n"
  "matrix if necessary to reposition by using FunctionValue() and\n"
  "FunctionGradient().)\n\n"
  "@warning\n"
  "The annulus is infinite in extent. To truncate the annulus in\n"
  "modeling operations use the vtkImplicitBoolean in combination with\n"
  "clipping planes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnnulus_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAnnulus", // tp_name
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
  PyvtkAnnulus_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnulus_StaticNew()
{
  return vtkAnnulus::New();
}

PyObject *PyvtkAnnulus_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnnulus_Type, PyvtkAnnulus_Methods,
    "vtkAnnulus",
 &PyvtkAnnulus_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAnnulus_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnnulus(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnulus_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnulus", o) != 0)
  {
    Py_DECREF(o);
  }

}

