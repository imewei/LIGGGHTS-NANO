// python wrapper for vtkInteractorObserver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorObserver.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkInteractorObserver(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkInteractorObserver_ClassNew(); }


static PyObject *
PyvtkInteractorObserver_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorObserver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorObserver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorObserver *tempr = vtkInteractorObserver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorObserver::NewInstance());

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
PyvtkInteractorObserver_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorObserver::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorObserver::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkInteractorObserver::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkInteractorObserver::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkInteractorObserver::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkInteractorObserver::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_On(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "On");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->On();
    }
    else
    {
      op->vtkInteractorObserver::On();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_Off(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Off");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Off();
    }
    else
    {
      op->vtkInteractorObserver::Off();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriority(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetPriority(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriorityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPriorityMinValue() :
      op->vtkInteractorObserver::GetPriorityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriorityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPriorityMaxValue() :
      op->vtkInteractorObserver::GetPriorityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPriority() :
      op->vtkInteractorObserver::GetPriority());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_PickingManagedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickingManagedOn();
    }
    else
    {
      op->vtkInteractorObserver::PickingManagedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_PickingManagedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickingManagedOff();
    }
    else
    {
      op->vtkInteractorObserver::PickingManagedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickingManaged(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetPickingManaged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPickingManaged() :
      op->vtkInteractorObserver::GetPickingManaged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetKeyPressActivation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressActivation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyPressActivation(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetKeyPressActivation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetKeyPressActivation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressActivation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeyPressActivation() :
      op->vtkInteractorObserver::GetKeyPressActivation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_KeyPressActivationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressActivationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyPressActivationOn();
    }
    else
    {
      op->vtkInteractorObserver::KeyPressActivationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_KeyPressActivationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressActivationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyPressActivationOff();
    }
    else
    {
      op->vtkInteractorObserver::KeyPressActivationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetKeyPressActivationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressActivationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyPressActivationValue(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetKeyPressActivationValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetKeyPressActivationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressActivationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyPressActivationValue() :
      op->vtkInteractorObserver::GetKeyPressActivationValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetDefaultRenderer() :
      op->vtkInteractorObserver::GetDefaultRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultRenderer(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetDefaultRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetCurrentRenderer() :
      op->vtkInteractorObserver::GetCurrentRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentRenderer(temp0);
    }
    else
    {
      op->vtkInteractorObserver::SetCurrentRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorObserver::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_ComputeDisplayToWorld(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeDisplayToWorld");

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  const size_t size4 = 4;
  double temp4[4];
  double save4[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkInteractorObserver::ComputeDisplayToWorld(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_ComputeWorldToDisplay(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeWorldToDisplay");

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkInteractorObserver::ComputeWorldToDisplay(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GrabFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrabFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkCommand *temp0 = nullptr;
  vtkCommand *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCommand") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkCommand")))
  {
    if (ap.IsBound())
    {
      op->GrabFocus(temp0, temp1);
    }
    else
    {
      op->vtkInteractorObserver::GrabFocus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorObserver_ReleaseFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseFocus();
    }
    else
    {
      op->vtkInteractorObserver::ReleaseFocus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorObserver_Methods[] = {
  {"IsTypeOf", PyvtkInteractorObserver_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorObserver_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorObserver_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorObserver\nC++: static vtkInteractorObserver *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorObserver_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorObserver\nC++: vtkInteractorObserver *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorObserver_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorObserver_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInteractor", PyvtkInteractorObserver_SetInteractor, METH_VARARGS,
   "SetInteractor(self, iren:vtkRenderWindowInteractor) -> None\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *iren)\n\nThis method is used to associate the widget with the render\nwindow interactor.  Observers of the appropriate events invoked\nin the render window interactor are set up as a result of this\nmethod invocation. The SetInteractor() method must be invoked\nprior to enabling the vtkInteractorObserver. It automatically\nregisters available pickers to the Picking Manager.\n"},
  {"GetInteractor", PyvtkInteractorObserver_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\n"},
  {"SetEnabled", PyvtkInteractorObserver_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: virtual void SetEnabled(int)\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {"GetEnabled", PyvtkInteractorObserver_GetEnabled, METH_VARARGS,
   "GetEnabled(self) -> int\nC++: int GetEnabled()\n\n"},
  {"EnabledOn", PyvtkInteractorObserver_EnabledOn, METH_VARARGS,
   "EnabledOn(self) -> None\nC++: void EnabledOn()\n\n"},
  {"EnabledOff", PyvtkInteractorObserver_EnabledOff, METH_VARARGS,
   "EnabledOff(self) -> None\nC++: void EnabledOff()\n\n"},
  {"On", PyvtkInteractorObserver_On, METH_VARARGS,
   "On(self) -> None\nC++: void On()\n\n"},
  {"Off", PyvtkInteractorObserver_Off, METH_VARARGS,
   "Off(self) -> None\nC++: void Off()\n\n"},
  {"SetPriority", PyvtkInteractorObserver_SetPriority, METH_VARARGS,
   "SetPriority(self, _arg:float) -> None\nC++: virtual void SetPriority(float _arg)\n\nSet/Get the priority at which events are processed. This is used\nwhen multiple interactor observers are used simultaneously. The\ndefault value is 0.0 (lowest priority.) Note that when multiple\ninteractor observer have the same priority, then the last\nobserver added will process the event first. (Note: once the\nSetInteractor() method has been called, changing the priority\ndoes not effect event processing. You will have to\nSetInteractor(NULL), change priority, and then\nSetInteractor(iren) to have the priority take effect.)\n"},
  {"GetPriorityMinValue", PyvtkInteractorObserver_GetPriorityMinValue, METH_VARARGS,
   "GetPriorityMinValue(self) -> float\nC++: virtual float GetPriorityMinValue()\n\n"},
  {"GetPriorityMaxValue", PyvtkInteractorObserver_GetPriorityMaxValue, METH_VARARGS,
   "GetPriorityMaxValue(self) -> float\nC++: virtual float GetPriorityMaxValue()\n\n"},
  {"GetPriority", PyvtkInteractorObserver_GetPriority, METH_VARARGS,
   "GetPriority(self) -> float\nC++: virtual float GetPriority()\n\n"},
  {"PickingManagedOn", PyvtkInteractorObserver_PickingManagedOn, METH_VARARGS,
   "PickingManagedOn(self) -> None\nC++: virtual void PickingManagedOn()\n\nEnable/Disable the use of a manager to process the picking.\nEnabled by default.\n"},
  {"PickingManagedOff", PyvtkInteractorObserver_PickingManagedOff, METH_VARARGS,
   "PickingManagedOff(self) -> None\nC++: virtual void PickingManagedOff()\n\n"},
  {"SetPickingManaged", PyvtkInteractorObserver_SetPickingManaged, METH_VARARGS,
   "SetPickingManaged(self, managed:bool) -> None\nC++: virtual void SetPickingManaged(bool managed)\n\n"},
  {"GetPickingManaged", PyvtkInteractorObserver_GetPickingManaged, METH_VARARGS,
   "GetPickingManaged(self) -> bool\nC++: virtual bool GetPickingManaged()\n\n"},
  {"SetKeyPressActivation", PyvtkInteractorObserver_SetKeyPressActivation, METH_VARARGS,
   "SetKeyPressActivation(self, _arg:int) -> None\nC++: virtual void SetKeyPressActivation(vtkTypeBool _arg)\n\nEnable/Disable of the use of a keypress to turn on and off the\ninteractor observer. (By default, the keypress is 'i' for\n\"interactor observer\".)  Set the KeyPressActivationValue to\nchange which key activates the widget.)\n"},
  {"GetKeyPressActivation", PyvtkInteractorObserver_GetKeyPressActivation, METH_VARARGS,
   "GetKeyPressActivation(self) -> int\nC++: virtual vtkTypeBool GetKeyPressActivation()\n\n"},
  {"KeyPressActivationOn", PyvtkInteractorObserver_KeyPressActivationOn, METH_VARARGS,
   "KeyPressActivationOn(self) -> None\nC++: virtual void KeyPressActivationOn()\n\n"},
  {"KeyPressActivationOff", PyvtkInteractorObserver_KeyPressActivationOff, METH_VARARGS,
   "KeyPressActivationOff(self) -> None\nC++: virtual void KeyPressActivationOff()\n\n"},
  {"SetKeyPressActivationValue", PyvtkInteractorObserver_SetKeyPressActivationValue, METH_VARARGS,
   "SetKeyPressActivationValue(self, _arg:str) -> None\nC++: virtual void SetKeyPressActivationValue(char _arg)\n\nSpecify which key press value to use to activate the interactor\nobserver (if key press activation is enabled). By default, the\nkey press activation value is 'i'. Note: once the SetInteractor()\nmethod is invoked, changing the key press activation value will\nnot affect the key press until\nSetInteractor(NULL)/SetInteractor(iren) is called.\n"},
  {"GetKeyPressActivationValue", PyvtkInteractorObserver_GetKeyPressActivationValue, METH_VARARGS,
   "GetKeyPressActivationValue(self) -> str\nC++: virtual char GetKeyPressActivationValue()\n\n"},
  {"GetDefaultRenderer", PyvtkInteractorObserver_GetDefaultRenderer, METH_VARARGS,
   "GetDefaultRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetDefaultRenderer()\n\nSet/Get the default renderer to use when activating the\ninteractor observer. Normally when the widget is activated\n(SetEnabled(1) or when keypress activation takes place), the\nrenderer over which the mouse pointer is positioned is used.\nAlternatively, you can specify the renderer to bind the\ninteractor to when the interactor observer is activated.\n"},
  {"SetDefaultRenderer", PyvtkInteractorObserver_SetDefaultRenderer, METH_VARARGS,
   "SetDefaultRenderer(self, __a:vtkRenderer) -> None\nC++: virtual void SetDefaultRenderer(vtkRenderer *)\n\n"},
  {"GetCurrentRenderer", PyvtkInteractorObserver_GetCurrentRenderer, METH_VARARGS,
   "GetCurrentRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetCurrentRenderer()\n\nSet/Get the current renderer. Normally when the widget is\nactivated (SetEnabled(1) or when keypress activation takes\nplace), the renderer over which the mouse pointer is positioned\nis used and assigned to this Ivar. Alternatively, you might want\nto set the CurrentRenderer explicitly. This is especially true\nwith multiple viewports (renderers). WARNING: note that if the\nDefaultRenderer Ivar is set (see above), it will always override\nthe parameter passed to SetCurrentRenderer, unless it is NULL.\n(i.e., SetCurrentRenderer(foo) =\nSetCurrentRenderer(DefaultRenderer).\n"},
  {"SetCurrentRenderer", PyvtkInteractorObserver_SetCurrentRenderer, METH_VARARGS,
   "SetCurrentRenderer(self, __a:vtkRenderer) -> None\nC++: virtual void SetCurrentRenderer(vtkRenderer *)\n\n"},
  {"OnChar", PyvtkInteractorObserver_OnChar, METH_VARARGS,
   "OnChar(self) -> None\nC++: virtual void OnChar()\n\nSets up the keypress-i event.\n"},
  {"ComputeDisplayToWorld", PyvtkInteractorObserver_ComputeDisplayToWorld, METH_VARARGS,
   "ComputeDisplayToWorld(ren:vtkRenderer, x:float, y:float, z:float,\n    worldPt:[float, float, float, float]) -> None\nC++: static void ComputeDisplayToWorld(vtkRenderer *ren, double x,\n     double y, double z, double worldPt[4])\n\nConvenience methods for outside classes. Make sure that the\nparameter \"ren\" is not-null.\n"},
  {"ComputeWorldToDisplay", PyvtkInteractorObserver_ComputeWorldToDisplay, METH_VARARGS,
   "ComputeWorldToDisplay(ren:vtkRenderer, x:float, y:float, z:float,\n    displayPt:[float, float, float]) -> None\nC++: static void ComputeWorldToDisplay(vtkRenderer *ren, double x,\n     double y, double z, double displayPt[3])\n\n"},
  {"GrabFocus", PyvtkInteractorObserver_GrabFocus, METH_VARARGS,
   "GrabFocus(self, mouseEvents:vtkCommand,\n    keypressEvents:vtkCommand=...) -> None\nC++: void GrabFocus(vtkCommand *mouseEvents,\n    vtkCommand *keypressEvents=nullptr)\n\nThese methods enable an interactor observer to exclusively grab\nall events invoked by its associated vtkRenderWindowInteractor.\n(This method is typically used by widgets to grab events once an\nevent sequence begins.) The GrabFocus() signature takes up to two\nvtkCommands corresponding to mouse events and keypress events.\n(These two commands are separated so that the widget can listen\nfor its activation keypress, as well as listening for\nDeleteEvents, without actually having to process mouse events.)\n"},
  {"ReleaseFocus", PyvtkInteractorObserver_ReleaseFocus, METH_VARARGS,
   "ReleaseFocus(self) -> None\nC++: void ReleaseFocus()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkInteractorObserver_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("interactor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetInteractor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetInteractor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetInteractor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInteractor/SetInteractor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("enabled"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetEnabled(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEnabled/SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("priority"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetPriority(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetPriority(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetPriority(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPriority/SetPriority\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("picking_managed"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetPickingManaged(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetPickingManaged(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetPickingManaged(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPickingManaged/SetPickingManaged\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("key_press_activation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetKeyPressActivation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetKeyPressActivation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetKeyPressActivation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetKeyPressActivation/SetKeyPressActivation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("key_press_activation_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetKeyPressActivationValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetKeyPressActivationValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetKeyPressActivationValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetKeyPressActivationValue/SetKeyPressActivationValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("default_renderer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetDefaultRenderer(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetDefaultRenderer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetDefaultRenderer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDefaultRenderer/SetDefaultRenderer\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("current_renderer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkInteractorObserver_GetCurrentRenderer(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkInteractorObserver_SetCurrentRenderer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkInteractorObserver_SetCurrentRenderer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCurrentRenderer/SetCurrentRenderer\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkInteractorObserver_Doc =
  "vtkInteractorObserver - an abstract superclass for classes observing\nevents invoked by vtkRenderWindowInteractor\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInteractorObserver is an abstract superclass for subclasses that\n"
  "observe events invoked by vtkRenderWindowInteractor. These subclasses\n"
  "are typically things like 3D widgets; objects that interact with\n"
  "actors in the scene, or interactively probe the scene for\n"
  "information.\n\n"
  "vtkInteractorObserver defines the method SetInteractor() and enables\n"
  "and disables the processing of events by the vtkInteractorObserver.\n"
  "Use the methods EnabledOn() or SetEnabled(1) to turn on the\n"
  "interactor observer, and the methods EnabledOff() or SetEnabled(0) to\n"
  "turn off the interactor. Initial value is 0.\n\n"
  "To support interactive manipulation of objects, this class (and\n"
  "subclasses) invoke the events StartInteractionEvent,\n"
  "InteractionEvent, and EndInteractionEvent.  These events are invoked\n"
  "when the vtkInteractorObserver enters a state where rapid response is\n"
  "desired: mouse motion, etc. The events can be used, for example, to\n"
  "set the desired update frame rate (StartInteractionEvent), operate on\n"
  "data or update a pipeline (InteractionEvent), and set the desired\n"
  "frame rate back to normal values (EndInteractionEvent). Two other\n"
  "events, EnableEvent and DisableEvent, are invoked when the interactor\n"
  "observer is enabled or disabled.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorObserver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkInteractorObserver", // tp_name
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
  PyvtkInteractorObserver_Doc, // tp_doc
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

PyObject *PyvtkInteractorObserver_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorObserver_Type, PyvtkInteractorObserver_Methods,
    "vtkInteractorObserver",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkInteractorObserver_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorObserver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorObserver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorObserver", o) != 0)
  {
    Py_DECREF(o);
  }

}

