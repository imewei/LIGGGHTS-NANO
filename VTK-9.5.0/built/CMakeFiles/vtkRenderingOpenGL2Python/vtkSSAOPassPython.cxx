// python wrapper for vtkSSAOPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSSAOPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSSAOPass(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSSAOPass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static PyObject *
PyvtkSSAOPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSSAOPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSSAOPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSSAOPass *tempr = vtkSSAOPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSSAOPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSSAOPass::NewInstance());

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
PyvtkSSAOPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSSAOPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSSAOPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

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
      op->vtkSSAOPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_PreReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  vtkAbstractMapper *temp3 = nullptr;
  vtkProp *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp4, "vtkProp"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSSAOPass::PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_PostReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  vtkAbstractMapper *temp3 = nullptr;
  vtkProp *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp4, "vtkProp"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSSAOPass::PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkAbstractMapper *temp1 = nullptr;
  vtkProp *temp2 = nullptr;
  vtkOpenGLVertexArrayObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp2, "vtkProp") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkOpenGLVertexArrayObject")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShaderParameters(temp0, temp1, temp2, temp3) :
      op->vtkSSAOPass::SetShaderParameters(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSSAOPass::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetKernelSize() :
      op->vtkSSAOPass::GetKernelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKernelSize(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetKernelSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetKernelSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetKernelSizeMinValue() :
      op->vtkSSAOPass::GetKernelSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetKernelSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetKernelSizeMaxValue() :
      op->vtkSSAOPass::GetKernelSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBias() :
      op->vtkSSAOPass::GetBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBias(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetBlur(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlur");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlur() :
      op->vtkSSAOPass::GetBlur());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetBlur(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlur");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlur(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetBlur(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_BlurOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlurOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BlurOn();
    }
    else
    {
      op->vtkSSAOPass::BlurOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_BlurOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlurOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BlurOff();
    }
    else
    {
      op->vtkSSAOPass::BlurOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetDepthFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthFormat(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetDepthFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetVolumeOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeOpacityThreshold() :
      op->vtkSSAOPass::GetVolumeOpacityThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetVolumeOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeOpacityThreshold(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetVolumeOpacityThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetVolumeOpacityThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeOpacityThresholdMinValue() :
      op->vtkSSAOPass::GetVolumeOpacityThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetVolumeOpacityThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeOpacityThresholdMaxValue() :
      op->vtkSSAOPass::GetVolumeOpacityThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetIntensityScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensityScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntensityScale() :
      op->vtkSSAOPass::GetIntensityScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetIntensityScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensityScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntensityScale(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetIntensityScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetIntensityShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensityShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntensityShift() :
      op->vtkSSAOPass::GetIntensityShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_SetIntensityShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensityShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntensityShift(temp0);
    }
    else
    {
      op->vtkSSAOPass::SetIntensityShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetIntensityShiftMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensityShiftMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntensityShiftMinValue() :
      op->vtkSSAOPass::GetIntensityShiftMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSSAOPass_GetIntensityShiftMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensityShiftMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSSAOPass *op = static_cast<vtkSSAOPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntensityShiftMaxValue() :
      op->vtkSSAOPass::GetIntensityShiftMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSSAOPass_Methods[] = {
  {"IsTypeOf", PyvtkSSAOPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSSAOPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSSAOPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSSAOPass\nC++: static vtkSSAOPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSSAOPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSSAOPass\nC++: vtkSSAOPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSSAOPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSSAOPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkSSAOPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n"},
  {"PreReplaceShaderValues", PyvtkSSAOPass_PreReplaceShaderValues, METH_VARARGS,
   "PreReplaceShaderValues(self, vertexShader:str, geometryShader:str,\n     fragmentShader:str, mapper:vtkAbstractMapper, prop:vtkProp)\n    -> bool\nC++: bool PreReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nPre replace shader values\n"},
  {"PostReplaceShaderValues", PyvtkSSAOPass_PostReplaceShaderValues, METH_VARARGS,
   "PostReplaceShaderValues(self, vertexShader:str,\n    geometryShader:str, fragmentShader:str,\n    mapper:vtkAbstractMapper, prop:vtkProp) -> bool\nC++: bool PostReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nPost replace shader values\n"},
  {"SetShaderParameters", PyvtkSSAOPass_SetShaderParameters, METH_VARARGS,
   "SetShaderParameters(self, program:vtkShaderProgram,\n    mapper:vtkAbstractMapper, prop:vtkProp,\n    VAO:vtkOpenGLVertexArrayObject=...) -> bool\nC++: bool SetShaderParameters(vtkShaderProgram *program,\n    vtkAbstractMapper *mapper, vtkProp *prop,\n    vtkOpenGLVertexArrayObject *VAO=nullptr) override;\n\nSet shader parameters. Set the draw buffers depending on the\nmapper.\n"},
  {"GetRadius", PyvtkSSAOPass_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\nGet/Set the SSAO hemisphere radius. Default is 0.5\n"},
  {"SetRadius", PyvtkSSAOPass_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\n"},
  {"GetKernelSize", PyvtkSSAOPass_GetKernelSize, METH_VARARGS,
   "GetKernelSize(self) -> int\nC++: virtual unsigned int GetKernelSize()\n\nGet/Set the number of samples. Default is 32\n"},
  {"SetKernelSize", PyvtkSSAOPass_SetKernelSize, METH_VARARGS,
   "SetKernelSize(self, _arg:int) -> None\nC++: virtual void SetKernelSize(unsigned int _arg)\n\n"},
  {"GetKernelSizeMinValue", PyvtkSSAOPass_GetKernelSizeMinValue, METH_VARARGS,
   "GetKernelSizeMinValue(self) -> int\nC++: virtual unsigned int GetKernelSizeMinValue()\n\n"},
  {"GetKernelSizeMaxValue", PyvtkSSAOPass_GetKernelSizeMaxValue, METH_VARARGS,
   "GetKernelSizeMaxValue(self) -> int\nC++: virtual unsigned int GetKernelSizeMaxValue()\n\n"},
  {"GetBias", PyvtkSSAOPass_GetBias, METH_VARARGS,
   "GetBias(self) -> float\nC++: virtual double GetBias()\n\nGet/Set the bias when comparing samples. Default is 0.01\n"},
  {"SetBias", PyvtkSSAOPass_SetBias, METH_VARARGS,
   "SetBias(self, _arg:float) -> None\nC++: virtual void SetBias(double _arg)\n\n"},
  {"GetBlur", PyvtkSSAOPass_GetBlur, METH_VARARGS,
   "GetBlur(self) -> bool\nC++: virtual bool GetBlur()\n\nGet/Set blurring of the ambient occlusion. Blurring can help to\nimprove the result if samples number is low. Default is false\n"},
  {"SetBlur", PyvtkSSAOPass_SetBlur, METH_VARARGS,
   "SetBlur(self, _arg:bool) -> None\nC++: virtual void SetBlur(bool _arg)\n\n"},
  {"BlurOn", PyvtkSSAOPass_BlurOn, METH_VARARGS,
   "BlurOn(self) -> None\nC++: virtual void BlurOn()\n\n"},
  {"BlurOff", PyvtkSSAOPass_BlurOff, METH_VARARGS,
   "BlurOff(self) -> None\nC++: virtual void BlurOff()\n\n"},
  {"SetDepthFormat", PyvtkSSAOPass_SetDepthFormat, METH_VARARGS,
   "SetDepthFormat(self, _arg:int) -> None\nC++: virtual void SetDepthFormat(int _arg)\n\nSet the format to use for the depth texture\nvtkTextureObject::Float32 and vtkTextureObject::Fixed32 are\nsupported.\n"},
  {"GetVolumeOpacityThreshold", PyvtkSSAOPass_GetVolumeOpacityThreshold, METH_VARARGS,
   "GetVolumeOpacityThreshold(self) -> float\nC++: virtual double GetVolumeOpacityThreshold()\n\nGet/Set the opacity threshold value used to write depth\ninformation for volumes. When the opacity of the current raycast\nsample reaches this value, the fragment depth is written to the\ndepth buffer which results in SSAO being applied at this\nlocation. Default is 0.9\n"},
  {"SetVolumeOpacityThreshold", PyvtkSSAOPass_SetVolumeOpacityThreshold, METH_VARARGS,
   "SetVolumeOpacityThreshold(self, _arg:float) -> None\nC++: virtual void SetVolumeOpacityThreshold(double _arg)\n\n"},
  {"GetVolumeOpacityThresholdMinValue", PyvtkSSAOPass_GetVolumeOpacityThresholdMinValue, METH_VARARGS,
   "GetVolumeOpacityThresholdMinValue(self) -> float\nC++: virtual double GetVolumeOpacityThresholdMinValue()\n\n"},
  {"GetVolumeOpacityThresholdMaxValue", PyvtkSSAOPass_GetVolumeOpacityThresholdMaxValue, METH_VARARGS,
   "GetVolumeOpacityThresholdMaxValue(self) -> float\nC++: virtual double GetVolumeOpacityThresholdMaxValue()\n\n"},
  {"GetIntensityScale", PyvtkSSAOPass_GetIntensityScale, METH_VARARGS,
   "GetIntensityScale(self) -> float\nC++: virtual double GetIntensityScale()\n\nControl intensity of darkening. Default is 1.0. Larger value\ncauses stronger darkening. 0 means no darkening at all.\n"},
  {"SetIntensityScale", PyvtkSSAOPass_SetIntensityScale, METH_VARARGS,
   "SetIntensityScale(self, _arg:float) -> None\nC++: virtual void SetIntensityScale(double _arg)\n\n"},
  {"GetIntensityShift", PyvtkSSAOPass_GetIntensityShift, METH_VARARGS,
   "GetIntensityShift(self) -> float\nC++: virtual double GetIntensityShift()\n\nControl intensity of darkening. Range is between 0.0 and 1.0.\nDefault is 0.0. Larger value prevents darkening lightly occluded\nregions, which can be particularly noticeable when IntensityScale\nis set to a higher value.\n"},
  {"SetIntensityShift", PyvtkSSAOPass_SetIntensityShift, METH_VARARGS,
   "SetIntensityShift(self, _arg:float) -> None\nC++: virtual void SetIntensityShift(double _arg)\n\n"},
  {"GetIntensityShiftMinValue", PyvtkSSAOPass_GetIntensityShiftMinValue, METH_VARARGS,
   "GetIntensityShiftMinValue(self) -> float\nC++: virtual double GetIntensityShiftMinValue()\n\n"},
  {"GetIntensityShiftMaxValue", PyvtkSSAOPass_GetIntensityShiftMaxValue, METH_VARARGS,
   "GetIntensityShiftMaxValue(self) -> float\nC++: virtual double GetIntensityShiftMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSSAOPass_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRadius/SetRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("kernel_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetKernelSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetKernelSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetKernelSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetKernelSize/SetKernelSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bias"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetBias(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetBias(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetBias(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBias/SetBias\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blur"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetBlur(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetBlur(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetBlur(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBlur/SetBlur\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("depth_format"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetDepthFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetDepthFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetDepthFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("volume_opacity_threshold"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetVolumeOpacityThreshold(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetVolumeOpacityThreshold(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetVolumeOpacityThreshold(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVolumeOpacityThreshold/SetVolumeOpacityThreshold\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("intensity_scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetIntensityScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetIntensityScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetIntensityScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIntensityScale/SetIntensityScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("intensity_shift"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSSAOPass_GetIntensityShift(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSSAOPass_SetIntensityShift(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSSAOPass_SetIntensityShift(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIntensityShift/SetIntensityShift\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSSAOPass_Doc =
  "vtkSSAOPass - Implement a screen-space ambient occlusion pass.\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "SSAO darkens some pixels to improve depth perception simulating\n"
  "ambient occlusion in screen space. For each fragment, random samples\n"
  "inside a hemisphere at the fragment position oriented with the normal\n"
  "are tested against other fragments to compute an average occlusion.\n"
  "The number of samples and the radius of the hemisphere are\n"
  "configurables.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSSAOPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkSSAOPass", // tp_name
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
  PyvtkSSAOPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSSAOPass_StaticNew()
{
  return vtkSSAOPass::New();
}

PyObject *PyvtkSSAOPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSSAOPass_Type, PyvtkSSAOPass_Methods,
    "vtkSSAOPass",
 &PyvtkSSAOPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSSAOPass_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSSAOPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSSAOPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSSAOPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

