// python wrapper for vtkRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCommand.h"
#include "vtkRenderWindowInteractor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkRenderWindowInteractor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkRenderWindowInteractor_ClassNew(); }


static PyObject *
PyvtkRenderWindowInteractor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindowInteractor *tempr = vtkRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowInteractor::NewInstance());

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
PyvtkRenderWindowInteractor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderWindowInteractor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderWindowInteractor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkRenderWindowInteractor::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ReInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReInitialize();
    }
    else
    {
      op->vtkRenderWindowInteractor::ReInitialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkRenderWindowInteractor::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEvents();
    }
    else
    {
      op->vtkRenderWindowInteractor::ProcessEvents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDone() :
      op->vtkRenderWindowInteractor::GetDone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDone(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetDone(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkRenderWindowInteractor::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkRenderWindowInteractor::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkRenderWindowInteractor::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableRenderOn();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnableRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableRenderOff();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnableRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableRender(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEnableRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableRender() :
      op->vtkRenderWindowInteractor::GetEnableRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderWindowInteractor::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetHardwareWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHardwareWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkHardwareWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHardwareWindow"))
  {
    if (ap.IsBound())
    {
      op->SetHardwareWindow(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetHardwareWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetHardwareWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardwareWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHardwareWindow *tempr = (ap.IsBound() ?
      op->GetHardwareWindow() :
      op->vtkRenderWindowInteractor::GetHardwareWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::UpdateSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer() :
      op->vtkRenderWindowInteractor::DestroyTimer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer(temp0) :
      op->vtkRenderWindowInteractor::DestroyTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderWindowInteractor_DestroyTimer_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_DestroyTimer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DestroyTimer");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateRepeatingTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepeatingTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateRepeatingTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateRepeatingTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::IsOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration(temp0) :
      op->vtkRenderWindowInteractor::GetTimerDuration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkRenderWindowInteractor::GetTimerDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s1(self, args);
    case 0:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTimerDuration");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_ResetTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ResetTimer(temp0) :
      op->vtkRenderWindowInteractor::ResetTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetVTKTimerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKTimerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVTKTimerId(temp0) :
      op->vtkRenderWindowInteractor::GetVTKTimerId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerDuration(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventId(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventId() :
      op->vtkRenderWindowInteractor::GetTimerEventId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventType(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventType() :
      op->vtkRenderWindowInteractor::GetTimerEventType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventDuration(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventDuration() :
      op->vtkRenderWindowInteractor::GetTimerEventDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventPlatformId(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventPlatformId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventPlatformId() :
      op->vtkRenderWindowInteractor::GetTimerEventPlatformId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateApp();
    }
    else
    {
      op->vtkRenderWindowInteractor::TerminateApp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkInteractorObserver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
  {
    if (ap.IsBound())
    {
      op->SetInteractorStyle(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetInteractorStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkRenderWindowInteractor::GetInteractorStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightFollowCamera(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLightFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightFollowCamera() :
      op->vtkRenderWindowInteractor::GetLightFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOn();
    }
    else
    {
      op->vtkRenderWindowInteractor::LightFollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOff();
    }
    else
    {
      op->vtkRenderWindowInteractor::LightFollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetDesiredUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRate() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStillUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetStillUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRate() :
      op->vtkRenderWindowInteractor::GetStillUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialized() :
      op->vtkRenderWindowInteractor::GetInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
  {
    if (ap.IsBound())
    {
      op->SetPicker(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPicker *tempr = (ap.IsBound() ?
      op->GetPicker() :
      op->vtkRenderWindowInteractor::GetPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateDefaultPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->CreateDefaultPicker() :
      op->vtkRenderWindowInteractor::CreateDefaultPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkPickingManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPickingManager"))
  {
    if (ap.IsBound())
    {
      op->SetPickingManager(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPickingManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPickingManager *tempr = (ap.IsBound() ?
      op->GetPickingManager() :
      op->vtkRenderWindowInteractor::GetPickingManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExitCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExitCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UserCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::UserCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPickCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPickCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPickCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPickCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetMousePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMousePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetMousePosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::GetMousePosition(temp0, temp1);
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
PyvtkRenderWindowInteractor_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkRenderWindowInteractor::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkRenderWindowInteractor::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderWindowInteractor::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->FlyTo(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FlyTo(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyTo(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkRenderWindowInteractor_FlyTo_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyTo_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FlyTo");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FlyToImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FlyToImage(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyToImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRenderWindowInteractor_FlyToImage_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyToImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FlyToImage");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFlyFrames(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetNumberOfFlyFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMinValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMaxValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFrames() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDolly(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetDolly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDolly() :
      op->vtkRenderWindowInteractor::GetDolly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventPosition() :
      op->vtkRenderWindowInteractor::GetEventPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPosition() :
      op->vtkRenderWindowInteractor::GetLastEventPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLastEventPosition(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastEventPosition");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPosition(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0);
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
PyvtkRenderWindowInteractor_SetEventPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPosition_Methods[] = {
  {"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition_s1, METH_VARARGS,
   "@ii"},
  {"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition_s4, METH_VARARGS,
   "@Pi *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPosition_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPosition_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPosition");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0);
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
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods[] = {
  {"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1, METH_VARARGS,
   "@ii"},
  {"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4, METH_VARARGS,
   "@Pi *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPositionFlipY");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetEventPositions(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetLastEventPositions(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAltKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetAltKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAltKey() :
      op->vtkRenderWindowInteractor::GetAltKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetControlKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetControlKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlKey() :
      op->vtkRenderWindowInteractor::GetControlKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShiftKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetShiftKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkRenderWindowInteractor::GetShiftKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyCode(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkRenderWindowInteractor::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeatCount(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkRenderWindowInteractor::GetRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeySym(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeySym(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkRenderWindowInteractor::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointerIndex(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPointerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndex() :
      op->vtkRenderWindowInteractor::GetPointerIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotation(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkRenderWindowInteractor::GetRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRotation() :
      op->vtkRenderWindowInteractor::GetLastRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkRenderWindowInteractor::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastScale() :
      op->vtkRenderWindowInteractor::GetLastScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTranslation(temp0);
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
PyvtkRenderWindowInteractor_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkRenderWindowInteractor::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastTranslation() :
      op->vtkRenderWindowInteractor::GetLastTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  const char *temp6 = nullptr;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  const char *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    if (ap.IsBound())
    {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformation_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformation");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  const char *temp6 = nullptr;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  const char *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    if (ap.IsBound())
    {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformationFlipY");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyEventInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  char temp2 = 0;
  int temp3 = 0;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRenderWindowInteractor::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEventSize(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventSize");
  return nullptr;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventSize() :
      op->vtkRenderWindowInteractor::GetEventSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FindPokedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPokedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->FindPokedRenderer(temp0, temp1) :
      op->vtkRenderWindowInteractor::FindPokedRenderer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetObserverMediator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserverMediator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObserverMediator *tempr = (ap.IsBound() ?
      op->GetObserverMediator() :
      op->vtkRenderWindowInteractor::GetObserverMediator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTDx(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetUseTDx(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTDx() :
      op->vtkRenderWindowInteractor::GetUseTDx());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseMoveEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseMoveEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RightButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RightButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeftButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeftButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MiddleButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MiddleButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelForwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelForwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelForwardEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelForwardEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelBackwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelBackwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelBackwardEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelBackwardEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelLeftEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelLeftEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelLeftEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelLeftEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelRightEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelRightEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelRightEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelRightEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExposeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExposeEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExposeEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ConfigureEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConfigureEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ConfigureEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnterEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnterEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeaveEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeaveEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::KeyPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::KeyReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CharEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CharEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::CharEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExitEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExitEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FourthButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FourthButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FourthButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FourthButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FourthButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FourthButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FourthButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FourthButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FifthButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FifthButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FifthButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FifthButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FifthButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FifthButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FifthButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FifthButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_PinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::PinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartRotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartRotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartRotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndRotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndRotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndRotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_PanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::PanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TapEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TapEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TapEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::TapEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LongTapEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LongTapEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LongTapEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LongTapEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SwipeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwipeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwipeEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::SwipeEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRecognizeGestures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecognizeGestures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecognizeGestures(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRecognizeGestures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRecognizeGestures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecognizeGestures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRecognizeGestures() :
      op->vtkRenderWindowInteractor::GetRecognizeGestures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointersDownCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointersDownCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointersDownCount() :
      op->vtkRenderWindowInteractor::GetPointersDownCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ClearContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearContact(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::ClearContact(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndexForContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndexForContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndexForContact(temp0) :
      op->vtkRenderWindowInteractor::GetPointerIndexForContact(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndexForExistingContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndexForExistingContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndexForExistingContact(temp0) :
      op->vtkRenderWindowInteractor::GetPointerIndexForExistingContact(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsPointerIndexSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointerIndexSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointerIndexSet(temp0) :
      op->vtkRenderWindowInteractor::IsPointerIndexSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ClearPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearPointerIndex(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::ClearPointerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetCurrentGesture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentGesture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand::EventIds tempr = (ap.IsBound() ?
      op->GetCurrentGesture() :
      op->vtkRenderWindowInteractor::GetCurrentGesture());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkCommand.EventIds");
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetCurrentGesture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentGesture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkCommand::EventIds temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCommand.EventIds"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentGesture(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetCurrentGesture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindowInteractor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderWindowInteractor\nC++: static vtkRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindowInteractor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderWindowInteractor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderWindowInteractor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkRenderWindowInteractor_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nPrepare for handling events and set the Enabled flag to true.\nThis will be called automatically by Start() if the interactor is\nnot initialized, but it can be called manually if you need to\nperform any operations between initialization and the start of\nthe event loop.\n"},
  {"ReInitialize", PyvtkRenderWindowInteractor_ReInitialize, METH_VARARGS,
   "ReInitialize(self) -> None\nC++: void ReInitialize()\n\n"},
  {"Start", PyvtkRenderWindowInteractor_Start, METH_VARARGS,
   "Start(self) -> None\nC++: virtual void Start()\n\nStart the event loop. This is provided so that you do not have to\nimplement your own event loop. You still can use your own event\nloop if you want.\n"},
  {"ProcessEvents", PyvtkRenderWindowInteractor_ProcessEvents, METH_VARARGS,
   "ProcessEvents(self) -> None\nC++: virtual void ProcessEvents()\n\nProcess all user-interaction, timer events and return. If there\nare no events, this method returns immediately. This method is\nimplemented only on desktop (macOS, linux, windows) and\nWebAssembly (SDL2). It is not implemented on iOS and Android\nplatforms.\n"},
  {"GetDone", PyvtkRenderWindowInteractor_GetDone, METH_VARARGS,
   "GetDone(self) -> bool\nC++: virtual bool GetDone()\n\nIs the interactor loop done\n"},
  {"SetDone", PyvtkRenderWindowInteractor_SetDone, METH_VARARGS,
   "SetDone(self, _arg:bool) -> None\nC++: virtual void SetDone(bool _arg)\n\n"},
  {"Enable", PyvtkRenderWindowInteractor_Enable, METH_VARARGS,
   "Enable(self) -> None\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkRenderWindowInteractor_Disable, METH_VARARGS,
   "Disable(self) -> None\nC++: virtual void Disable()\n\n"},
  {"GetEnabled", PyvtkRenderWindowInteractor_GetEnabled, METH_VARARGS,
   "GetEnabled(self) -> int\nC++: virtual int GetEnabled()\n\n"},
  {"EnableRenderOn", PyvtkRenderWindowInteractor_EnableRenderOn, METH_VARARGS,
   "EnableRenderOn(self) -> None\nC++: virtual void EnableRenderOn()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {"EnableRenderOff", PyvtkRenderWindowInteractor_EnableRenderOff, METH_VARARGS,
   "EnableRenderOff(self) -> None\nC++: virtual void EnableRenderOff()\n\n"},
  {"SetEnableRender", PyvtkRenderWindowInteractor_SetEnableRender, METH_VARARGS,
   "SetEnableRender(self, _arg:bool) -> None\nC++: virtual void SetEnableRender(bool _arg)\n\n"},
  {"GetEnableRender", PyvtkRenderWindowInteractor_GetEnableRender, METH_VARARGS,
   "GetEnableRender(self) -> bool\nC++: virtual bool GetEnableRender()\n\n"},
  {"SetRenderWindow", PyvtkRenderWindowInteractor_SetRenderWindow, METH_VARARGS,
   "SetRenderWindow(self, aren:vtkRenderWindow) -> None\nC++: void SetRenderWindow(vtkRenderWindow *aren)\n\nSet/Get the rendering window being controlled by this object.\n"},
  {"GetRenderWindow", PyvtkRenderWindowInteractor_GetRenderWindow, METH_VARARGS,
   "GetRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\n"},
  {"SetHardwareWindow", PyvtkRenderWindowInteractor_SetHardwareWindow, METH_VARARGS,
   "SetHardwareWindow(self, aren:vtkHardwareWindow) -> None\nC++: void SetHardwareWindow(vtkHardwareWindow *aren)\n\nSet/Get the hardware window being controlled by this object. For\nopengl the hardware window is not used as the opengl subclasses\nof RenderWindow provide the functionality.\n"},
  {"GetHardwareWindow", PyvtkRenderWindowInteractor_GetHardwareWindow, METH_VARARGS,
   "GetHardwareWindow(self) -> vtkHardwareWindow\nC++: virtual vtkHardwareWindow *GetHardwareWindow()\n\n"},
  {"UpdateSize", PyvtkRenderWindowInteractor_UpdateSize, METH_VARARGS,
   "UpdateSize(self, x:int, y:int) -> None\nC++: virtual void UpdateSize(int x, int y)\n\nWhen the event loop notifies the interactor that the window size\nhas changed, this method is called to update the Size of the\ninteractor and its vtkRenderWindow.\n\nThe interactor will fire vtkCommand::ConfigureEvent after the\nsize has updated.\n"},
  {"CreateTimer", PyvtkRenderWindowInteractor_CreateTimer, METH_VARARGS,
   "CreateTimer(self, timerType:int) -> int\nC++: virtual int CreateTimer(int timerType)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Make sure you run Initialize() before\ncreating the timer in order for it to work.\n"},
  {"DestroyTimer", PyvtkRenderWindowInteractor_DestroyTimer, METH_VARARGS,
   "DestroyTimer(self) -> int\nC++: virtual int DestroyTimer()\nDestroyTimer(self, timerId:int) -> int\nC++: int DestroyTimer(int timerId)\n\n"},
  {"CreateRepeatingTimer", PyvtkRenderWindowInteractor_CreateRepeatingTimer, METH_VARARGS,
   "CreateRepeatingTimer(self, duration:int) -> int\nC++: int CreateRepeatingTimer(unsigned long duration)\n\nCreate a repeating timer, with the specified duration (in\nmilliseconds).\n\\return the timer id.\n"},
  {"CreateOneShotTimer", PyvtkRenderWindowInteractor_CreateOneShotTimer, METH_VARARGS,
   "CreateOneShotTimer(self, duration:int) -> int\nC++: int CreateOneShotTimer(unsigned long duration)\n\nCreate a one shot timer, with the specified duration (in\nmilliseconds).\n\\return the timer id.\n"},
  {"IsOneShotTimer", PyvtkRenderWindowInteractor_IsOneShotTimer, METH_VARARGS,
   "IsOneShotTimer(self, timerId:int) -> int\nC++: int IsOneShotTimer(int timerId)\n\nQuery whether the specified timerId is a one shot timer.\n\\return 1 if the timer is a one shot timer.\n"},
  {"GetTimerDuration", PyvtkRenderWindowInteractor_GetTimerDuration, METH_VARARGS,
   "GetTimerDuration(self, timerId:int) -> int\nC++: unsigned long GetTimerDuration(int timerId)\nGetTimerDuration(self) -> int\nC++: virtual unsigned long GetTimerDuration()\n\nGet the duration (in milliseconds) for the specified timerId.\n"},
  {"ResetTimer", PyvtkRenderWindowInteractor_ResetTimer, METH_VARARGS,
   "ResetTimer(self, timerId:int) -> int\nC++: int ResetTimer(int timerId)\n\nReset the specified timer.\n"},
  {"GetVTKTimerId", PyvtkRenderWindowInteractor_GetVTKTimerId, METH_VARARGS,
   "GetVTKTimerId(self, platformTimerId:int) -> int\nC++: virtual int GetVTKTimerId(int platformTimerId)\n\nGet the VTK timer ID that corresponds to the supplied platform\nID.\n"},
  {"SetTimerDuration", PyvtkRenderWindowInteractor_SetTimerDuration, METH_VARARGS,
   "SetTimerDuration(self, _arg:int) -> None\nC++: virtual void SetTimerDuration(unsigned long _arg)\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {"GetTimerDurationMinValue", PyvtkRenderWindowInteractor_GetTimerDurationMinValue, METH_VARARGS,
   "GetTimerDurationMinValue(self) -> int\nC++: virtual unsigned long GetTimerDurationMinValue()\n\n"},
  {"GetTimerDurationMaxValue", PyvtkRenderWindowInteractor_GetTimerDurationMaxValue, METH_VARARGS,
   "GetTimerDurationMaxValue(self) -> int\nC++: virtual unsigned long GetTimerDurationMaxValue()\n\n"},
  {"SetTimerEventId", PyvtkRenderWindowInteractor_SetTimerEventId, METH_VARARGS,
   "SetTimerEventId(self, _arg:int) -> None\nC++: virtual void SetTimerEventId(int _arg)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"GetTimerEventId", PyvtkRenderWindowInteractor_GetTimerEventId, METH_VARARGS,
   "GetTimerEventId(self) -> int\nC++: virtual int GetTimerEventId()\n\n"},
  {"SetTimerEventType", PyvtkRenderWindowInteractor_SetTimerEventType, METH_VARARGS,
   "SetTimerEventType(self, _arg:int) -> None\nC++: virtual void SetTimerEventType(int _arg)\n\n"},
  {"GetTimerEventType", PyvtkRenderWindowInteractor_GetTimerEventType, METH_VARARGS,
   "GetTimerEventType(self) -> int\nC++: virtual int GetTimerEventType()\n\n"},
  {"SetTimerEventDuration", PyvtkRenderWindowInteractor_SetTimerEventDuration, METH_VARARGS,
   "SetTimerEventDuration(self, _arg:int) -> None\nC++: virtual void SetTimerEventDuration(int _arg)\n\n"},
  {"GetTimerEventDuration", PyvtkRenderWindowInteractor_GetTimerEventDuration, METH_VARARGS,
   "GetTimerEventDuration(self) -> int\nC++: virtual int GetTimerEventDuration()\n\n"},
  {"SetTimerEventPlatformId", PyvtkRenderWindowInteractor_SetTimerEventPlatformId, METH_VARARGS,
   "SetTimerEventPlatformId(self, _arg:int) -> None\nC++: virtual void SetTimerEventPlatformId(int _arg)\n\n"},
  {"GetTimerEventPlatformId", PyvtkRenderWindowInteractor_GetTimerEventPlatformId, METH_VARARGS,
   "GetTimerEventPlatformId(self) -> int\nC++: virtual int GetTimerEventPlatformId()\n\n"},
  {"TerminateApp", PyvtkRenderWindowInteractor_TerminateApp, METH_VARARGS,
   "TerminateApp(self) -> None\nC++: virtual void TerminateApp()\n\nThis function is called on 'q','e' keypress if exitmethod is not\nspecified and should be overridden by platform dependent\nsubclasses to provide a termination procedure if one is required.\n"},
  {"SetInteractorStyle", PyvtkRenderWindowInteractor_SetInteractorStyle, METH_VARARGS,
   "SetInteractorStyle(self, __a:vtkInteractorObserver) -> None\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *)\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {"GetInteractorStyle", PyvtkRenderWindowInteractor_GetInteractorStyle, METH_VARARGS,
   "GetInteractorStyle(self) -> vtkInteractorObserver\nC++: virtual vtkInteractorObserver *GetInteractorStyle()\n\n"},
  {"SetLightFollowCamera", PyvtkRenderWindowInteractor_SetLightFollowCamera, METH_VARARGS,
   "SetLightFollowCamera(self, _arg:int) -> None\nC++: virtual void SetLightFollowCamera(vtkTypeBool _arg)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {"GetLightFollowCamera", PyvtkRenderWindowInteractor_GetLightFollowCamera, METH_VARARGS,
   "GetLightFollowCamera(self) -> int\nC++: virtual vtkTypeBool GetLightFollowCamera()\n\n"},
  {"LightFollowCameraOn", PyvtkRenderWindowInteractor_LightFollowCameraOn, METH_VARARGS,
   "LightFollowCameraOn(self) -> None\nC++: virtual void LightFollowCameraOn()\n\n"},
  {"LightFollowCameraOff", PyvtkRenderWindowInteractor_LightFollowCameraOff, METH_VARARGS,
   "LightFollowCameraOff(self) -> None\nC++: virtual void LightFollowCameraOff()\n\n"},
  {"SetDesiredUpdateRate", PyvtkRenderWindowInteractor_SetDesiredUpdateRate, METH_VARARGS,
   "SetDesiredUpdateRate(self, _arg:float) -> None\nC++: virtual void SetDesiredUpdateRate(double _arg)\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {"GetDesiredUpdateRateMinValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue, METH_VARARGS,
   "GetDesiredUpdateRateMinValue(self) -> float\nC++: virtual double GetDesiredUpdateRateMinValue()\n\n"},
  {"GetDesiredUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue, METH_VARARGS,
   "GetDesiredUpdateRateMaxValue(self) -> float\nC++: virtual double GetDesiredUpdateRateMaxValue()\n\n"},
  {"GetDesiredUpdateRate", PyvtkRenderWindowInteractor_GetDesiredUpdateRate, METH_VARARGS,
   "GetDesiredUpdateRate(self) -> float\nC++: virtual double GetDesiredUpdateRate()\n\n"},
  {"SetStillUpdateRate", PyvtkRenderWindowInteractor_SetStillUpdateRate, METH_VARARGS,
   "SetStillUpdateRate(self, _arg:float) -> None\nC++: virtual void SetStillUpdateRate(double _arg)\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {"GetStillUpdateRateMinValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue, METH_VARARGS,
   "GetStillUpdateRateMinValue(self) -> float\nC++: virtual double GetStillUpdateRateMinValue()\n\n"},
  {"GetStillUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue, METH_VARARGS,
   "GetStillUpdateRateMaxValue(self) -> float\nC++: virtual double GetStillUpdateRateMaxValue()\n\n"},
  {"GetStillUpdateRate", PyvtkRenderWindowInteractor_GetStillUpdateRate, METH_VARARGS,
   "GetStillUpdateRate(self) -> float\nC++: virtual double GetStillUpdateRate()\n\n"},
  {"GetInitialized", PyvtkRenderWindowInteractor_GetInitialized, METH_VARARGS,
   "GetInitialized(self) -> int\nC++: virtual int GetInitialized()\n\nSee whether interactor has been initialized yet. Default is 0.\n"},
  {"SetPicker", PyvtkRenderWindowInteractor_SetPicker, METH_VARARGS,
   "SetPicker(self, __a:vtkAbstractPicker) -> None\nC++: virtual void SetPicker(vtkAbstractPicker *)\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {"GetPicker", PyvtkRenderWindowInteractor_GetPicker, METH_VARARGS,
   "GetPicker(self) -> vtkAbstractPicker\nC++: virtual vtkAbstractPicker *GetPicker()\n\n"},
  {"CreateDefaultPicker", PyvtkRenderWindowInteractor_CreateDefaultPicker, METH_VARARGS,
   "CreateDefaultPicker(self) -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *CreateDefaultPicker()\n\nCreate default picker. Used to create one when none is specified.\nDefault is an instance of vtkPropPicker.\n"},
  {"SetPickingManager", PyvtkRenderWindowInteractor_SetPickingManager, METH_VARARGS,
   "SetPickingManager(self, __a:vtkPickingManager) -> None\nC++: virtual void SetPickingManager(vtkPickingManager *)\n\nSet the picking manager. Set/Get the object used to perform\noperations through the interactor By default, a valid but\ndisabled picking manager is instantiated.\n"},
  {"GetPickingManager", PyvtkRenderWindowInteractor_GetPickingManager, METH_VARARGS,
   "GetPickingManager(self) -> vtkPickingManager\nC++: virtual vtkPickingManager *GetPickingManager()\n\n"},
  {"ExitCallback", PyvtkRenderWindowInteractor_ExitCallback, METH_VARARGS,
   "ExitCallback(self) -> None\nC++: virtual void ExitCallback()\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {"UserCallback", PyvtkRenderWindowInteractor_UserCallback, METH_VARARGS,
   "UserCallback(self) -> None\nC++: virtual void UserCallback()\n\n"},
  {"StartPickCallback", PyvtkRenderWindowInteractor_StartPickCallback, METH_VARARGS,
   "StartPickCallback(self) -> None\nC++: virtual void StartPickCallback()\n\n"},
  {"EndPickCallback", PyvtkRenderWindowInteractor_EndPickCallback, METH_VARARGS,
   "EndPickCallback(self) -> None\nC++: virtual void EndPickCallback()\n\n"},
  {"GetMousePosition", PyvtkRenderWindowInteractor_GetMousePosition, METH_VARARGS,
   "GetMousePosition(self, x:[int, ...], y:[int, ...]) -> None\nC++: virtual void GetMousePosition(int *x, int *y)\n\nGet the current position of the mouse.\n"},
  {"HideCursor", PyvtkRenderWindowInteractor_HideCursor, METH_VARARGS,
   "HideCursor(self) -> None\nC++: void HideCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {"ShowCursor", PyvtkRenderWindowInteractor_ShowCursor, METH_VARARGS,
   "ShowCursor(self) -> None\nC++: void ShowCursor()\n\n"},
  {"Render", PyvtkRenderWindowInteractor_Render, METH_VARARGS,
   "Render(self) -> None\nC++: virtual void Render()\n\nRender the scene. Just pass the render call on to the associated\nvtkRenderWindow.\n"},
  {"FlyTo", PyvtkRenderWindowInteractor_FlyTo, METH_VARARGS,
   "FlyTo(self, ren:vtkRenderer, x:float, y:float, z:float) -> None\nC++: void FlyTo(vtkRenderer *ren, double x, double y, double z)\nFlyTo(self, ren:vtkRenderer, x:[float, ...]) -> None\nC++: void FlyTo(vtkRenderer *ren, double *x)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {"FlyToImage", PyvtkRenderWindowInteractor_FlyToImage, METH_VARARGS,
   "FlyToImage(self, ren:vtkRenderer, x:float, y:float) -> None\nC++: void FlyToImage(vtkRenderer *ren, double x, double y)\nFlyToImage(self, ren:vtkRenderer, x:[float, ...]) -> None\nC++: void FlyToImage(vtkRenderer *ren, double *x)\n\n"},
  {"SetNumberOfFlyFrames", PyvtkRenderWindowInteractor_SetNumberOfFlyFrames, METH_VARARGS,
   "SetNumberOfFlyFrames(self, _arg:int) -> None\nC++: virtual void SetNumberOfFlyFrames(int _arg)\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {"GetNumberOfFlyFramesMinValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue, METH_VARARGS,
   "GetNumberOfFlyFramesMinValue(self) -> int\nC++: virtual int GetNumberOfFlyFramesMinValue()\n\n"},
  {"GetNumberOfFlyFramesMaxValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue, METH_VARARGS,
   "GetNumberOfFlyFramesMaxValue(self) -> int\nC++: virtual int GetNumberOfFlyFramesMaxValue()\n\n"},
  {"GetNumberOfFlyFrames", PyvtkRenderWindowInteractor_GetNumberOfFlyFrames, METH_VARARGS,
   "GetNumberOfFlyFrames(self) -> int\nC++: virtual int GetNumberOfFlyFrames()\n\n"},
  {"SetDolly", PyvtkRenderWindowInteractor_SetDolly, METH_VARARGS,
   "SetDolly(self, _arg:float) -> None\nC++: virtual void SetDolly(double _arg)\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {"GetDolly", PyvtkRenderWindowInteractor_GetDolly, METH_VARARGS,
   "GetDolly(self) -> float\nC++: virtual double GetDolly()\n\n"},
  {"GetEventPosition", PyvtkRenderWindowInteractor_GetEventPosition, METH_VARARGS,
   "GetEventPosition(self) -> (int, int)\nC++: virtual int *GetEventPosition()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {"GetLastEventPosition", PyvtkRenderWindowInteractor_GetLastEventPosition, METH_VARARGS,
   "GetLastEventPosition(self) -> (int, int)\nC++: virtual int *GetLastEventPosition()\n\n"},
  {"SetLastEventPosition", PyvtkRenderWindowInteractor_SetLastEventPosition, METH_VARARGS,
   "SetLastEventPosition(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetLastEventPosition(int _arg1, int _arg2)\nSetLastEventPosition(self, _arg:(int, int)) -> None\nC++: void SetLastEventPosition(const int _arg[2])\n\n"},
  {"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition, METH_VARARGS,
   "SetEventPosition(self, x:int, y:int) -> None\nC++: virtual void SetEventPosition(int x, int y)\nSetEventPosition(self, pos:[int, int]) -> None\nC++: virtual void SetEventPosition(int pos[2])\nSetEventPosition(self, x:int, y:int, pointerIndex:int) -> None\nC++: virtual void SetEventPosition(int x, int y, int pointerIndex)\nSetEventPosition(self, pos:[int, int], pointerIndex:int) -> None\nC++: virtual void SetEventPosition(int pos[2], int pointerIndex)\n\n"},
  {"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY, METH_VARARGS,
   "SetEventPositionFlipY(self, x:int, y:int) -> None\nC++: virtual void SetEventPositionFlipY(int x, int y)\nSetEventPositionFlipY(self, pos:[int, int]) -> None\nC++: virtual void SetEventPositionFlipY(int pos[2])\nSetEventPositionFlipY(self, x:int, y:int, pointerIndex:int)\n    -> None\nC++: virtual void SetEventPositionFlipY(int x, int y,\n    int pointerIndex)\nSetEventPositionFlipY(self, pos:[int, int], pointerIndex:int)\n    -> None\nC++: virtual void SetEventPositionFlipY(int pos[2],\n    int pointerIndex)\n\n"},
  {"GetEventPositions", PyvtkRenderWindowInteractor_GetEventPositions, METH_VARARGS,
   "GetEventPositions(self, pointerIndex:int) -> Pointer\nC++: virtual int *GetEventPositions(int pointerIndex)\n\n"},
  {"GetLastEventPositions", PyvtkRenderWindowInteractor_GetLastEventPositions, METH_VARARGS,
   "GetLastEventPositions(self, pointerIndex:int) -> Pointer\nC++: virtual int *GetLastEventPositions(int pointerIndex)\n\n"},
  {"SetAltKey", PyvtkRenderWindowInteractor_SetAltKey, METH_VARARGS,
   "SetAltKey(self, _arg:int) -> None\nC++: virtual void SetAltKey(int _arg)\n\nSet/get whether alt modifier key was pressed. On macOS, this\ncorresponds to the Option key which may have unexpected effect on\nthe KeyCode and KeySym.\n\nAltGr does NOT trigger this modifier.\n"},
  {"GetAltKey", PyvtkRenderWindowInteractor_GetAltKey, METH_VARARGS,
   "GetAltKey(self) -> int\nC++: virtual int GetAltKey()\n\n"},
  {"SetControlKey", PyvtkRenderWindowInteractor_SetControlKey, METH_VARARGS,
   "SetControlKey(self, _arg:int) -> None\nC++: virtual void SetControlKey(int _arg)\n\nSet/get whether control modifier key was pressed. On macOS,\npressing either Cmd or Control turn this modifier on.\n"},
  {"GetControlKey", PyvtkRenderWindowInteractor_GetControlKey, METH_VARARGS,
   "GetControlKey(self) -> int\nC++: virtual int GetControlKey()\n\n"},
  {"SetShiftKey", PyvtkRenderWindowInteractor_SetShiftKey, METH_VARARGS,
   "SetShiftKey(self, _arg:int) -> None\nC++: virtual void SetShiftKey(int _arg)\n\nSet/get whether shift modifier key was pressed.\n"},
  {"GetShiftKey", PyvtkRenderWindowInteractor_GetShiftKey, METH_VARARGS,
   "GetShiftKey(self) -> int\nC++: virtual int GetShiftKey()\n\n"},
  {"SetKeyCode", PyvtkRenderWindowInteractor_SetKeyCode, METH_VARARGS,
   "SetKeyCode(self, _arg:str) -> None\nC++: virtual void SetKeyCode(char _arg)\n\nSet/get the unicode value for the key that was pressed, as an\n8-bit char value. This restricts the value to the Basic Latin and\nLatin1 blocks of unicode.\n\nSince the 'char' type may be signed, one should cast to 'unsigned\nchar' before retrieving the code value.\n\nunsigned char keyCode = static_cast<unsigned\nchar>(rwi->GetKeyCode())\n\nPlease note KeyCode is impacted by modifiers:\n\n\"A\" -> 'a' \"Shift\" + \"A\" -> 'A' \"Ctrl\" + \"A\" -> 1 \"Alt\" + \"A\" ->\n'a'\n\nThe behavior with Control modifier is related to C0 and C1\ncontrol codes.\n\nPlease note KeyCode IS NOT reliable across platforms, especially\nfor special characters with modifiers. Using KeySym should be\nmore reliable.\n\nDefault is 0.\n"},
  {"GetKeyCode", PyvtkRenderWindowInteractor_GetKeyCode, METH_VARARGS,
   "GetKeyCode(self) -> str\nC++: virtual char GetKeyCode()\n\n"},
  {"SetRepeatCount", PyvtkRenderWindowInteractor_SetRepeatCount, METH_VARARGS,
   "SetRepeatCount(self, _arg:int) -> None\nC++: virtual void SetRepeatCount(int _arg)\n\nSet/get the repeat count for the key or mouse event. This\nspecifies how many times a key has been pressed.\n"},
  {"GetRepeatCount", PyvtkRenderWindowInteractor_GetRepeatCount, METH_VARARGS,
   "GetRepeatCount(self) -> int\nC++: virtual int GetRepeatCount()\n\n"},
  {"SetKeySym", PyvtkRenderWindowInteractor_SetKeySym, METH_VARARGS,
   "SetKeySym(self, _arg:str) -> None\nC++: virtual void SetKeySym(const char *_arg)\n\nSet/get the key symbol for the key that was pressed. This is the\nkey symbol as defined by the relevant X headers\n(xlib/X11/keysymdef.h). On X based platforms this corresponds to\nthe installed X server, whereas on other platforms the native key\ncodes are translated into a string representation using VTK\ndefined tables.\n\nPlease note the KeySym is impacted by modifiers:\n\n\"A\" -> \"a\" \"Shift\" + \"A\" -> \"A\" \"Alt\" + \"A\" -> \"a\" \"Ctrl\" + \"A\"\n-> \"a\"\n\nPlease note KeySym may NOT be fully reliable across platforms,\nespecially for special characters with modifiers. Please check\nthe actual KeySym on supported platform before relying on it.\nHowever, KeySym is intended to always correspond to the key the\nuser intended to press, even across layouts and platforms.\n\nDefault is nullptr.\n"},
  {"GetKeySym", PyvtkRenderWindowInteractor_GetKeySym, METH_VARARGS,
   "GetKeySym(self) -> str\nC++: virtual char *GetKeySym()\n\n"},
  {"SetPointerIndex", PyvtkRenderWindowInteractor_SetPointerIndex, METH_VARARGS,
   "SetPointerIndex(self, _arg:int) -> None\nC++: virtual void SetPointerIndex(int _arg)\n\nSet/get the index of the most recent pointer to have an event\n"},
  {"GetPointerIndex", PyvtkRenderWindowInteractor_GetPointerIndex, METH_VARARGS,
   "GetPointerIndex(self) -> int\nC++: virtual int GetPointerIndex()\n\n"},
  {"SetRotation", PyvtkRenderWindowInteractor_SetRotation, METH_VARARGS,
   "SetRotation(self, rotation:float) -> None\nC++: void SetRotation(double rotation)\n\nSet/get the rotation for the gesture in degrees, update\nLastRotation\n"},
  {"GetRotation", PyvtkRenderWindowInteractor_GetRotation, METH_VARARGS,
   "GetRotation(self) -> float\nC++: virtual double GetRotation()\n\n"},
  {"GetLastRotation", PyvtkRenderWindowInteractor_GetLastRotation, METH_VARARGS,
   "GetLastRotation(self) -> float\nC++: virtual double GetLastRotation()\n\n"},
  {"SetScale", PyvtkRenderWindowInteractor_SetScale, METH_VARARGS,
   "SetScale(self, scale:float) -> None\nC++: void SetScale(double scale)\n\nSet/get the scale for the gesture, updates LastScale\n"},
  {"GetScale", PyvtkRenderWindowInteractor_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"GetLastScale", PyvtkRenderWindowInteractor_GetLastScale, METH_VARARGS,
   "GetLastScale(self) -> float\nC++: virtual double GetLastScale()\n\n"},
  {"SetTranslation", PyvtkRenderWindowInteractor_SetTranslation, METH_VARARGS,
   "SetTranslation(self, val:[float, float]) -> None\nC++: void SetTranslation(double val[2])\n\nSet/get the translation for pan/swipe gestures, update\nLastTranslation\n"},
  {"GetTranslation", PyvtkRenderWindowInteractor_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> (float, float)\nC++: virtual double *GetTranslation()\n\n"},
  {"GetLastTranslation", PyvtkRenderWindowInteractor_GetLastTranslation, METH_VARARGS,
   "GetLastTranslation(self) -> (float, float)\nC++: virtual double *GetLastTranslation()\n\n"},
  {"SetEventInformation", PyvtkRenderWindowInteractor_SetEventInformation, METH_VARARGS,
   "SetEventInformation(self, x:int, y:int, ctrl:int, shift:int,\n    keycode:str, repeatcount:int, keysym:str, pointerIndex:int)\n    -> None\nC++: void SetEventInformation(int x, int y, int ctrl, int shift,\n    char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nSetEventInformation(self, x:int, y:int, ctrl:int=0, shift:int=0,\n    keycode:str=..., repeatcount:int=0, keysym:str=...) -> None\nC++: void SetEventInformation(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=nullptr)\n\nSet all the event information in one call.\n"},
  {"SetEventInformationFlipY", PyvtkRenderWindowInteractor_SetEventInformationFlipY, METH_VARARGS,
   "SetEventInformationFlipY(self, x:int, y:int, ctrl:int, shift:int,\n    keycode:str, repeatcount:int, keysym:str, pointerIndex:int)\n    -> None\nC++: void SetEventInformationFlipY(int x, int y, int ctrl,\n    int shift, char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nSetEventInformationFlipY(self, x:int, y:int, ctrl:int=0,\n    shift:int=0, keycode:str=..., repeatcount:int=0,\n    keysym:str=...) -> None\nC++: void SetEventInformationFlipY(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=nullptr)\n\nCalls SetEventInformation, but flips the Y based on the current\nSize[1] value (i.e. y = this->Size[1] - y - 1).\n"},
  {"SetKeyEventInformation", PyvtkRenderWindowInteractor_SetKeyEventInformation, METH_VARARGS,
   "SetKeyEventInformation(self, ctrl:int=0, shift:int=0,\n    keycode:str=..., repeatcount:int=0, keysym:str=...) -> None\nC++: void SetKeyEventInformation(int ctrl=0, int shift=0,\n    char keycode=0, int repeatcount=0, const char *keysym=nullptr)\n\nSet all the keyboard-related event information in one call.\n"},
  {"SetSize", PyvtkRenderWindowInteractor_SetSize, METH_VARARGS,
   "SetSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSize(int _arg1, int _arg2)\nSetSize(self, _arg:(int, int)) -> None\nC++: void SetSize(const int _arg[2])\n\nThis methods sets the Size ivar of the interactor without\nactually changing the size of the window. Normally application\nprogrammers would use UpdateSize if anything. This is useful for\nletting someone else change the size of the rendering window and\njust letting the interactor know about the change. The current\nevent width/height (if any) is in EventSize (Expose event, for\nexample). Window size is measured in pixels.\n"},
  {"GetSize", PyvtkRenderWindowInteractor_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\n"},
  {"SetEventSize", PyvtkRenderWindowInteractor_SetEventSize, METH_VARARGS,
   "SetEventSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetEventSize(int _arg1, int _arg2)\nSetEventSize(self, _arg:(int, int)) -> None\nC++: void SetEventSize(const int _arg[2])\n\n"},
  {"GetEventSize", PyvtkRenderWindowInteractor_GetEventSize, METH_VARARGS,
   "GetEventSize(self) -> (int, int)\nC++: virtual int *GetEventSize()\n\n"},
  {"FindPokedRenderer", PyvtkRenderWindowInteractor_FindPokedRenderer, METH_VARARGS,
   "FindPokedRenderer(self, __a:int, __b:int) -> vtkRenderer\nC++: virtual vtkRenderer *FindPokedRenderer(int, int)\n\nWhen an event occurs, we must determine which Renderer the event\noccurred within, since one RenderWindow may contain multiple\nrenderers.\n"},
  {"GetObserverMediator", PyvtkRenderWindowInteractor_GetObserverMediator, METH_VARARGS,
   "GetObserverMediator(self) -> vtkObserverMediator\nC++: vtkObserverMediator *GetObserverMediator()\n\nReturn the object used to mediate between vtkInteractorObservers\ncontending for resources. Multiple interactor observers will\noften request different resources (e.g., cursor shape); the\nmediator uses a strategy to provide the resource based on\npriority of the observer plus the particular request (default\nversus non-default cursor shape).\n"},
  {"SetUseTDx", PyvtkRenderWindowInteractor_SetUseTDx, METH_VARARGS,
   "SetUseTDx(self, _arg:bool) -> None\nC++: virtual void SetUseTDx(bool _arg)\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {"GetUseTDx", PyvtkRenderWindowInteractor_GetUseTDx, METH_VARARGS,
   "GetUseTDx(self) -> bool\nC++: virtual bool GetUseTDx()\n\n"},
  {"MouseMoveEvent", PyvtkRenderWindowInteractor_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self) -> None\nC++: virtual void MouseMoveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"RightButtonPressEvent", PyvtkRenderWindowInteractor_RightButtonPressEvent, METH_VARARGS,
   "RightButtonPressEvent(self) -> None\nC++: virtual void RightButtonPressEvent()\n\n"},
  {"RightButtonReleaseEvent", PyvtkRenderWindowInteractor_RightButtonReleaseEvent, METH_VARARGS,
   "RightButtonReleaseEvent(self) -> None\nC++: virtual void RightButtonReleaseEvent()\n\n"},
  {"LeftButtonPressEvent", PyvtkRenderWindowInteractor_LeftButtonPressEvent, METH_VARARGS,
   "LeftButtonPressEvent(self) -> None\nC++: virtual void LeftButtonPressEvent()\n\n"},
  {"LeftButtonReleaseEvent", PyvtkRenderWindowInteractor_LeftButtonReleaseEvent, METH_VARARGS,
   "LeftButtonReleaseEvent(self) -> None\nC++: virtual void LeftButtonReleaseEvent()\n\n"},
  {"MiddleButtonPressEvent", PyvtkRenderWindowInteractor_MiddleButtonPressEvent, METH_VARARGS,
   "MiddleButtonPressEvent(self) -> None\nC++: virtual void MiddleButtonPressEvent()\n\n"},
  {"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent, METH_VARARGS,
   "MiddleButtonReleaseEvent(self) -> None\nC++: virtual void MiddleButtonReleaseEvent()\n\n"},
  {"MouseWheelForwardEvent", PyvtkRenderWindowInteractor_MouseWheelForwardEvent, METH_VARARGS,
   "MouseWheelForwardEvent(self) -> None\nC++: virtual void MouseWheelForwardEvent()\n\n"},
  {"MouseWheelBackwardEvent", PyvtkRenderWindowInteractor_MouseWheelBackwardEvent, METH_VARARGS,
   "MouseWheelBackwardEvent(self) -> None\nC++: virtual void MouseWheelBackwardEvent()\n\n"},
  {"MouseWheelLeftEvent", PyvtkRenderWindowInteractor_MouseWheelLeftEvent, METH_VARARGS,
   "MouseWheelLeftEvent(self) -> None\nC++: virtual void MouseWheelLeftEvent()\n\n"},
  {"MouseWheelRightEvent", PyvtkRenderWindowInteractor_MouseWheelRightEvent, METH_VARARGS,
   "MouseWheelRightEvent(self) -> None\nC++: virtual void MouseWheelRightEvent()\n\n"},
  {"ExposeEvent", PyvtkRenderWindowInteractor_ExposeEvent, METH_VARARGS,
   "ExposeEvent(self) -> None\nC++: virtual void ExposeEvent()\n\n"},
  {"ConfigureEvent", PyvtkRenderWindowInteractor_ConfigureEvent, METH_VARARGS,
   "ConfigureEvent(self) -> None\nC++: virtual void ConfigureEvent()\n\n"},
  {"EnterEvent", PyvtkRenderWindowInteractor_EnterEvent, METH_VARARGS,
   "EnterEvent(self) -> None\nC++: virtual void EnterEvent()\n\n"},
  {"LeaveEvent", PyvtkRenderWindowInteractor_LeaveEvent, METH_VARARGS,
   "LeaveEvent(self) -> None\nC++: virtual void LeaveEvent()\n\n"},
  {"KeyPressEvent", PyvtkRenderWindowInteractor_KeyPressEvent, METH_VARARGS,
   "KeyPressEvent(self) -> None\nC++: virtual void KeyPressEvent()\n\n"},
  {"KeyReleaseEvent", PyvtkRenderWindowInteractor_KeyReleaseEvent, METH_VARARGS,
   "KeyReleaseEvent(self) -> None\nC++: virtual void KeyReleaseEvent()\n\n"},
  {"CharEvent", PyvtkRenderWindowInteractor_CharEvent, METH_VARARGS,
   "CharEvent(self) -> None\nC++: virtual void CharEvent()\n\n"},
  {"ExitEvent", PyvtkRenderWindowInteractor_ExitEvent, METH_VARARGS,
   "ExitEvent(self) -> None\nC++: virtual void ExitEvent()\n\n"},
  {"FourthButtonPressEvent", PyvtkRenderWindowInteractor_FourthButtonPressEvent, METH_VARARGS,
   "FourthButtonPressEvent(self) -> None\nC++: virtual void FourthButtonPressEvent()\n\n"},
  {"FourthButtonReleaseEvent", PyvtkRenderWindowInteractor_FourthButtonReleaseEvent, METH_VARARGS,
   "FourthButtonReleaseEvent(self) -> None\nC++: virtual void FourthButtonReleaseEvent()\n\n"},
  {"FifthButtonPressEvent", PyvtkRenderWindowInteractor_FifthButtonPressEvent, METH_VARARGS,
   "FifthButtonPressEvent(self) -> None\nC++: virtual void FifthButtonPressEvent()\n\n"},
  {"FifthButtonReleaseEvent", PyvtkRenderWindowInteractor_FifthButtonReleaseEvent, METH_VARARGS,
   "FifthButtonReleaseEvent(self) -> None\nC++: virtual void FifthButtonReleaseEvent()\n\n"},
  {"StartPinchEvent", PyvtkRenderWindowInteractor_StartPinchEvent, METH_VARARGS,
   "StartPinchEvent(self) -> None\nC++: virtual void StartPinchEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"PinchEvent", PyvtkRenderWindowInteractor_PinchEvent, METH_VARARGS,
   "PinchEvent(self) -> None\nC++: virtual void PinchEvent()\n\n"},
  {"EndPinchEvent", PyvtkRenderWindowInteractor_EndPinchEvent, METH_VARARGS,
   "EndPinchEvent(self) -> None\nC++: virtual void EndPinchEvent()\n\n"},
  {"StartRotateEvent", PyvtkRenderWindowInteractor_StartRotateEvent, METH_VARARGS,
   "StartRotateEvent(self) -> None\nC++: virtual void StartRotateEvent()\n\n"},
  {"RotateEvent", PyvtkRenderWindowInteractor_RotateEvent, METH_VARARGS,
   "RotateEvent(self) -> None\nC++: virtual void RotateEvent()\n\n"},
  {"EndRotateEvent", PyvtkRenderWindowInteractor_EndRotateEvent, METH_VARARGS,
   "EndRotateEvent(self) -> None\nC++: virtual void EndRotateEvent()\n\n"},
  {"StartPanEvent", PyvtkRenderWindowInteractor_StartPanEvent, METH_VARARGS,
   "StartPanEvent(self) -> None\nC++: virtual void StartPanEvent()\n\n"},
  {"PanEvent", PyvtkRenderWindowInteractor_PanEvent, METH_VARARGS,
   "PanEvent(self) -> None\nC++: virtual void PanEvent()\n\n"},
  {"EndPanEvent", PyvtkRenderWindowInteractor_EndPanEvent, METH_VARARGS,
   "EndPanEvent(self) -> None\nC++: virtual void EndPanEvent()\n\n"},
  {"TapEvent", PyvtkRenderWindowInteractor_TapEvent, METH_VARARGS,
   "TapEvent(self) -> None\nC++: virtual void TapEvent()\n\n"},
  {"LongTapEvent", PyvtkRenderWindowInteractor_LongTapEvent, METH_VARARGS,
   "LongTapEvent(self) -> None\nC++: virtual void LongTapEvent()\n\n"},
  {"SwipeEvent", PyvtkRenderWindowInteractor_SwipeEvent, METH_VARARGS,
   "SwipeEvent(self) -> None\nC++: virtual void SwipeEvent()\n\n"},
  {"SetRecognizeGestures", PyvtkRenderWindowInteractor_SetRecognizeGestures, METH_VARARGS,
   "SetRecognizeGestures(self, _arg:bool) -> None\nC++: virtual void SetRecognizeGestures(bool _arg)\n\nConvert multitouch events into gestures. When this is on (its\ndefault) multitouch events received by this interactor will be\nconverted into gestures by VTK. If turned off the raw multitouch\nevents will be passed down.\n"},
  {"GetRecognizeGestures", PyvtkRenderWindowInteractor_GetRecognizeGestures, METH_VARARGS,
   "GetRecognizeGestures(self) -> bool\nC++: virtual bool GetRecognizeGestures()\n\n"},
  {"GetPointersDownCount", PyvtkRenderWindowInteractor_GetPointersDownCount, METH_VARARGS,
   "GetPointersDownCount(self) -> int\nC++: virtual int GetPointersDownCount()\n\nWhen handling gestures you can query this value to determine how\nmany pointers are down for the gesture this is useful for pan\ngestures for example\n"},
  {"ClearContact", PyvtkRenderWindowInteractor_ClearContact, METH_VARARGS,
   "ClearContact(self, contactID:int) -> None\nC++: void ClearContact(size_t contactID)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {"GetPointerIndexForContact", PyvtkRenderWindowInteractor_GetPointerIndexForContact, METH_VARARGS,
   "GetPointerIndexForContact(self, contactID:int) -> int\nC++: int GetPointerIndexForContact(size_t contactID)\n\n"},
  {"GetPointerIndexForExistingContact", PyvtkRenderWindowInteractor_GetPointerIndexForExistingContact, METH_VARARGS,
   "GetPointerIndexForExistingContact(self, contactID:int) -> int\nC++: int GetPointerIndexForExistingContact(size_t contactID)\n\n"},
  {"IsPointerIndexSet", PyvtkRenderWindowInteractor_IsPointerIndexSet, METH_VARARGS,
   "IsPointerIndexSet(self, i:int) -> bool\nC++: bool IsPointerIndexSet(int i)\n\n"},
  {"ClearPointerIndex", PyvtkRenderWindowInteractor_ClearPointerIndex, METH_VARARGS,
   "ClearPointerIndex(self, i:int) -> None\nC++: void ClearPointerIndex(int i)\n\n"},
  {"GetCurrentGesture", PyvtkRenderWindowInteractor_GetCurrentGesture, METH_VARARGS,
   "GetCurrentGesture(self) -> vtkCommand.EventIds\nC++: virtual vtkCommand::EventIds GetCurrentGesture()\n\nGet the current gesture that was recognized when handling\nmultitouch and VR events.\n\n\\sa RecognizeGestures()\n\\sa vtkVRRenderWindowInteractor::RecognizeComplexGesture()\n"},
  {"SetCurrentGesture", PyvtkRenderWindowInteractor_SetCurrentGesture, METH_VARARGS,
   "SetCurrentGesture(self, eid:vtkCommand.EventIds) -> None\nC++: virtual void SetCurrentGesture(vtkCommand::EventIds eid)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkRenderWindowInteractor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("done"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetDone(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetDone(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetDone(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDone/SetDone\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("enable_render"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetEnableRender(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEnableRender(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEnableRender(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEnableRender/SetEnableRender\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("render_window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetRenderWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetRenderWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetRenderWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRenderWindow/SetRenderWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("hardware_window"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetHardwareWindow(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetHardwareWindow(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetHardwareWindow(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHardwareWindow/SetHardwareWindow\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("timer_duration"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTimerDuration(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTimerDuration(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTimerDuration(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimerDuration/SetTimerDuration\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("timer_event_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTimerEventId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTimerEventId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTimerEventId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimerEventId/SetTimerEventId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("timer_event_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTimerEventType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTimerEventType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTimerEventType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimerEventType/SetTimerEventType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("timer_event_duration"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTimerEventDuration(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTimerEventDuration(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTimerEventDuration(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimerEventDuration/SetTimerEventDuration\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("timer_event_platform_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTimerEventPlatformId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTimerEventPlatformId(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTimerEventPlatformId(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimerEventPlatformId/SetTimerEventPlatformId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interactor_style"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetInteractorStyle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetInteractorStyle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetInteractorStyle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInteractorStyle/SetInteractorStyle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("light_follow_camera"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetLightFollowCamera(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetLightFollowCamera(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetLightFollowCamera(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLightFollowCamera/SetLightFollowCamera\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("desired_update_rate"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetDesiredUpdateRate(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetDesiredUpdateRate(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetDesiredUpdateRate(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDesiredUpdateRate/SetDesiredUpdateRate\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("still_update_rate"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetStillUpdateRate(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetStillUpdateRate(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetStillUpdateRate(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStillUpdateRate/SetStillUpdateRate\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("picker"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetPicker(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetPicker(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetPicker(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPicker/SetPicker\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("picking_manager"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetPickingManager(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetPickingManager(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetPickingManager(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPickingManager/SetPickingManager\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dolly"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetDolly(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetDolly(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetDolly(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDolly/SetDolly\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_event_position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetLastEventPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetLastEventPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetLastEventPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLastEventPosition/SetLastEventPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetEventPosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEventPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEventPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEventPosition/SetEventPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_position_flip_y"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEventPositionFlipY(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEventPositionFlipY(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEventPositionFlipY\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_position"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEventPosition(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEventPosition(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEventPosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_position_flip_y"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEventPositionFlipY(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEventPositionFlipY(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEventPositionFlipY\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("alt_key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetAltKey(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetAltKey(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetAltKey(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAltKey/SetAltKey\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("control_key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetControlKey(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetControlKey(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetControlKey(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetControlKey/SetControlKey\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shift_key"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetShiftKey(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetShiftKey(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetShiftKey(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetShiftKey/SetShiftKey\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("key_code"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetKeyCode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetKeyCode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetKeyCode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetKeyCode/SetKeyCode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("repeat_count"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetRepeatCount(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetRepeatCount(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetRepeatCount(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRepeatCount/SetRepeatCount\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("key_sym"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetKeySym(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetKeySym(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetKeySym(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetKeySym/SetKeySym\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pointer_index"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetPointerIndex(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetPointerIndex(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetPointerIndex(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPointerIndex/SetPointerIndex\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetRotation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetRotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetRotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotation/SetRotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScale/SetScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("translation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetTranslation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetTranslation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetTranslation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTranslation/SetTranslation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSize/SetSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("event_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetEventSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetEventSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetEventSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEventSize/SetEventSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_t_dx"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetUseTDx(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetUseTDx(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetUseTDx(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseTDx/SetUseTDx\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("recognize_gestures"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetRecognizeGestures(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetRecognizeGestures(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetRecognizeGestures(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRecognizeGestures/SetRecognizeGestures\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("current_gesture"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetCurrentGesture(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetCurrentGesture(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetCurrentGesture(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCurrentGesture/SetCurrentGesture\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("enabled"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetEnabled(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("initialized"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetInitialized(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInitialized\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_fly_frames_min_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfFlyFramesMinValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_fly_frames_max_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfFlyFramesMaxValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_rotation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetLastRotation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastRotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetLastScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_translation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetLastTranslation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastTranslation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("observer_mediator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetObserverMediator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetObserverMediator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pointers_down_count"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetPointersDownCount(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointersDownCount\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_fly_frames"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRenderWindowInteractor_GetNumberOfFlyFrames(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfFlyFrames/SetNumberOfFlyFrames\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkRenderWindowInteractor_Doc =
  "vtkRenderWindowInteractor - platform-independent render window\ninteraction including picking and frame rate control.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRenderWindowInteractor provides a platform-independent interaction\n"
  "mechanism for mouse/key/time events. It serves as a base class for\n"
  "platform-dependent implementations that handle routing of\n"
  "mouse/key/timer messages to vtkInteractorObserver and its subclasses.\n"
  "vtkRenderWindowInteractor also provides controls for picking,\n"
  "rendering frame rate, and headlights.\n\n"
  "vtkRenderWindowInteractor has changed from previous implementations\n"
  "and now serves only as a shell to hold user preferences and route\n"
  "messages to vtkInteractorStyle. Callbacks are available for many\n"
  "events.  Platform specific subclasses should provide methods for\n"
  "manipulating timers, TerminateApp, and an event loop if required via\n"
  "Initialize/Start/Enable/Disable.\n\n"
  "@warning\n"
  "vtkRenderWindowInteractor routes events through VTK's\n"
  "command/observer design pattern. That is, when\n"
  "vtkRenderWindowInteractor (actually, one of its subclasses) sees a\n"
  "platform-dependent event, it translates this into a VTK event using\n"
  "the InvokeEvent() method. Then any vtkInteractorObservers registered\n"
  "for that event are expected to respond as appropriate.\n\n"
  "@sa\n"
  "vtkInteractorObserver\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkRenderWindowInteractor", // tp_name
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
  PyvtkRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindowInteractor_StaticNew()
{
  return vtkRenderWindowInteractor::New();
}

PyObject *PyvtkRenderWindowInteractor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderWindowInteractor_Type, PyvtkRenderWindowInteractor_Methods,
    "vtkRenderWindowInteractor",
 &PyvtkRenderWindowInteractor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "OneShotTimer", vtkRenderWindowInteractor::OneShotTimer },
        { "RepeatingTimer", vtkRenderWindowInteractor::RepeatingTimer },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkRenderWindowInteractor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTKI_TIMER_FIRST", 0 },
        { "VTKI_TIMER_UPDATE", 1 },
        { "VTKI_MAX_POINTERS", 5 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

