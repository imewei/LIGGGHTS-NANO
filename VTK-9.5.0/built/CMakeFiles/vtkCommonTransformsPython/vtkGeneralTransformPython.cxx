// python wrapper for vtkGeneralTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGeneralTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGeneralTransform(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGeneralTransform_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractTransform_ClassNew
extern "C" { PyObject *PyvtkAbstractTransform_ClassNew(); }
#define DECLARED_PyvtkAbstractTransform_ClassNew
#endif

static PyObject *
PyvtkGeneralTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeneralTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeneralTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeneralTransform *tempr = vtkGeneralTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeneralTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeneralTransform::NewInstance());

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
PyvtkGeneralTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGeneralTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGeneralTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkGeneralTransform::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkGeneralTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->Translate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeneralTransform::Translate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0);
    }
    else
    {
      op->vtkGeneralTransform::Translate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGeneralTransform_Translate_s1(self, args);
    case 1:
      return PyvtkGeneralTransform_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}


static PyObject *
PyvtkGeneralTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGeneralTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->RotateWXYZ(temp0, temp1);
    }
    else
    {
      op->vtkGeneralTransform::RotateWXYZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkGeneralTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkGeneralTransform_RotateWXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return nullptr;
}


static PyObject *
PyvtkGeneralTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateX(temp0);
    }
    else
    {
      op->vtkGeneralTransform::RotateX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateY(temp0);
    }
    else
    {
      op->vtkGeneralTransform::RotateY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateZ(temp0);
    }
    else
    {
      op->vtkGeneralTransform::RotateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

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
      op->Scale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeneralTransform::Scale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0);
    }
    else
    {
      op->vtkGeneralTransform::Scale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGeneralTransform_Scale_s1(self, args);
    case 1:
      return PyvtkGeneralTransform_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}


static PyObject *
PyvtkGeneralTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkGeneralTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkGeneralTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeneralTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkGeneralTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeneralTransform_Concatenate_Methods[] = {
  {"Concatenate", PyvtkGeneralTransform_Concatenate_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"Concatenate", PyvtkGeneralTransform_Concatenate_s2, METH_VARARGS,
   "@P *d"},
  {"Concatenate", PyvtkGeneralTransform_Concatenate_s3, METH_VARARGS,
   "@V *vtkAbstractTransform"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeneralTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeneralTransform_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return nullptr;
}


static PyObject *
PyvtkGeneralTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreMultiply();
    }
    else
    {
      op->vtkGeneralTransform::PreMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PostMultiply();
    }
    else
    {
      op->vtkGeneralTransform::PostMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConcatenatedTransforms() :
      op->vtkGeneralTransform::GetNumberOfConcatenatedTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetConcatenatedTransform(temp0) :
      op->vtkGeneralTransform::GetConcatenatedTransform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkGeneralTransform::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGeneralTransform::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkGeneralTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Push();
    }
    else
    {
      op->vtkGeneralTransform::Push();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pop();
    }
    else
    {
      op->vtkGeneralTransform::Pop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkGeneralTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkGeneralTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeneralTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkGeneralTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkGeneralTransform::MakeTransform());

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
PyvtkGeneralTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralTransform *op = static_cast<vtkGeneralTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGeneralTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGeneralTransform_Methods[] = {
  {"IsTypeOf", PyvtkGeneralTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeneralTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeneralTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGeneralTransform\nC++: static vtkGeneralTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeneralTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGeneralTransform\nC++: vtkGeneralTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGeneralTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGeneralTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Identity", PyvtkGeneralTransform_Identity, METH_VARARGS,
   "Identity(self) -> None\nC++: void Identity()\n\nSet this transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {"Inverse", PyvtkGeneralTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {"Translate", PyvtkGeneralTransform_Translate, METH_VARARGS,
   "Translate(self, x:float, y:float, z:float) -> None\nC++: void Translate(double x, double y, double z)\nTranslate(self, x:(float, float, float)) -> None\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {"RotateWXYZ", PyvtkGeneralTransform_RotateWXYZ, METH_VARARGS,
   "RotateWXYZ(self, angle:float, x:float, y:float, z:float) -> None\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nRotateWXYZ(self, angle:float, axis:(float, float, float)) -> None\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {"RotateX", PyvtkGeneralTransform_RotateX, METH_VARARGS,
   "RotateX(self, angle:float) -> None\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {"RotateY", PyvtkGeneralTransform_RotateY, METH_VARARGS,
   "RotateY(self, angle:float) -> None\nC++: void RotateY(double angle)\n\n"},
  {"RotateZ", PyvtkGeneralTransform_RotateZ, METH_VARARGS,
   "RotateZ(self, angle:float) -> None\nC++: void RotateZ(double angle)\n\n"},
  {"Scale", PyvtkGeneralTransform_Scale, METH_VARARGS,
   "Scale(self, x:float, y:float, z:float) -> None\nC++: void Scale(double x, double y, double z)\nScale(self, s:(float, float, float)) -> None\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {"Concatenate", PyvtkGeneralTransform_Concatenate, METH_VARARGS,
   "Concatenate(self, matrix:vtkMatrix4x4) -> None\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nConcatenate(self, elements:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float)) -> None\nC++: void Concatenate(const double elements[16])\nConcatenate(self, transform:vtkAbstractTransform) -> None\nC++: void Concatenate(vtkAbstractTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {"PreMultiply", PyvtkGeneralTransform_PreMultiply, METH_VARARGS,
   "PreMultiply(self) -> None\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"PostMultiply", PyvtkGeneralTransform_PostMultiply, METH_VARARGS,
   "PostMultiply(self) -> None\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"GetNumberOfConcatenatedTransforms", PyvtkGeneralTransform_GetNumberOfConcatenatedTransforms, METH_VARARGS,
   "GetNumberOfConcatenatedTransforms(self) -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {"GetConcatenatedTransform", PyvtkGeneralTransform_GetConcatenatedTransform, METH_VARARGS,
   "GetConcatenatedTransform(self, i:int) -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetConcatenatedTransform(int i)\n\nGet one of the concatenated transformations as a\nvtkAbstractTransform. These transformations are applied, in\nseries, every time the transformation of a coordinate occurs. \nThis method is provided to make it possible to decompose a\ntransformation into its constituents, for example to save a\ntransformation to a file.\n"},
  {"SetInput", PyvtkGeneralTransform_SetInput, METH_VARARGS,
   "SetInput(self, input:vtkAbstractTransform) -> None\nC++: void SetInput(vtkAbstractTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {"GetInput", PyvtkGeneralTransform_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInput()\n\n"},
  {"GetInverseFlag", PyvtkGeneralTransform_GetInverseFlag, METH_VARARGS,
   "GetInverseFlag(self) -> int\nC++: vtkTypeBool GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {"Push", PyvtkGeneralTransform_Push, METH_VARARGS,
   "Push(self) -> None\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {"Pop", PyvtkGeneralTransform_Pop, METH_VARARGS,
   "Pop(self) -> None\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {"InternalTransformPoint", PyvtkGeneralTransform_InternalTransformPoint, METH_VARARGS,
   "InternalTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformDerivative", PyvtkGeneralTransform_InternalTransformDerivative, METH_VARARGS,
   "InternalTransformDerivative(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\n"},
  {"CircuitCheck", PyvtkGeneralTransform_CircuitCheck, METH_VARARGS,
   "CircuitCheck(self, transform:vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform) override;\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {"MakeTransform", PyvtkGeneralTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {"GetMTime", PyvtkGeneralTransform_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime to account for input and concatenation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGeneralTransform_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGeneralTransform_GetInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGeneralTransform_SetInput(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGeneralTransform_SetInput(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInput/SetInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("inverse_flag"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGeneralTransform_GetInverseFlag(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInverseFlag\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGeneralTransform_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGeneralTransform_Doc =
  "vtkGeneralTransform - allows operations on any transforms\n\n"
  "Superclass: vtkAbstractTransform\n\n"
  "vtkGeneralTransform is like vtkTransform and vtkPerspectiveTransform,\n"
  "but it will work with any vtkAbstractTransform as input.  It is not\n"
  "as efficient as the other two, however, because arbitrary\n"
  "transformations cannot be concatenated by matrix multiplication.\n"
  "Transform concatenation is simulated by passing each input point\n"
  "through each transform in turn.\n"
  "@sa\n"
  "vtkTransform vtkPerspectiveTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeneralTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkGeneralTransform", // tp_name
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
  PyvtkGeneralTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeneralTransform_StaticNew()
{
  return vtkGeneralTransform::New();
}

PyObject *PyvtkGeneralTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGeneralTransform_Type, PyvtkGeneralTransform_Methods,
    "vtkGeneralTransform",
 &PyvtkGeneralTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractTransform_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGeneralTransform_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeneralTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeneralTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeneralTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

