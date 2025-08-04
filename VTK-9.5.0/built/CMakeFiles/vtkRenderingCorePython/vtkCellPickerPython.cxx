// python wrapper for vtkCellPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellPicker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellPicker(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellPicker_ClassNew(); }

#ifndef DECLARED_PyvtkPicker_ClassNew
extern "C" { PyObject *PyvtkPicker_ClassNew(); }
#define DECLARED_PyvtkPicker_ClassNew
#endif

static PyObject *
PyvtkCellPicker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellPicker *tempr = vtkCellPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellPicker::NewInstance());

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
PyvtkCellPicker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellPicker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellPicker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkCellPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_Pick3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Pick3DRay(temp0, temp1, temp2) :
      op->vtkCellPicker::Pick3DRay(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_AddLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->AddLocator(temp0);
    }
    else
    {
      op->vtkCellPicker::AddLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->RemoveLocator(temp0);
    }
    else
    {
      op->vtkCellPicker::RemoveLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveAllLocators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocators();
    }
    else
    {
      op->vtkCellPicker::RemoveAllLocators();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeOpacityIsovalue(temp0);
    }
    else
    {
      op->vtkCellPicker::SetVolumeOpacityIsovalue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeOpacityIsovalue() :
      op->vtkCellPicker::GetVolumeOpacityIsovalue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseVolumeGradientOpacity(temp0);
    }
    else
    {
      op->vtkCellPicker::SetUseVolumeGradientOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVolumeGradientOpacityOn();
    }
    else
    {
      op->vtkCellPicker::UseVolumeGradientOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVolumeGradientOpacityOff();
    }
    else
    {
      op->vtkCellPicker::UseVolumeGradientOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseVolumeGradientOpacity() :
      op->vtkCellPicker::GetUseVolumeGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickClippingPlanes(temp0);
    }
    else
    {
      op->vtkCellPicker::SetPickClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickClippingPlanesOn();
    }
    else
    {
      op->vtkCellPicker::PickClippingPlanesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickClippingPlanesOff();
    }
    else
    {
      op->vtkCellPicker::PickClippingPlanesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickClippingPlanes() :
      op->vtkCellPicker::GetPickClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetClippingPlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClippingPlaneId() :
      op->vtkCellPicker::GetClippingPlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPickNormal() :
      op->vtkCellPicker::GetPickNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetMapperNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapperNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMapperNormal() :
      op->vtkCellPicker::GetMapperNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPointIJK() :
      op->vtkCellPicker::GetPointIJK());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCellIJK() :
      op->vtkCellPicker::GetCellIJK());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkCellPicker::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkCellPicker::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetSubId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubId() :
      op->vtkCellPicker::GetSubId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPCoords() :
      op->vtkCellPicker::GetPCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkCellPicker::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickTextureData(temp0);
    }
    else
    {
      op->vtkCellPicker::SetPickTextureData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickTextureDataOn();
    }
    else
    {
      op->vtkCellPicker::PickTextureDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickTextureDataOff();
    }
    else
    {
      op->vtkCellPicker::PickTextureDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickTextureData() :
      op->vtkCellPicker::GetPickTextureData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellPicker_Methods[] = {
  {"IsTypeOf", PyvtkCellPicker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellPicker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellPicker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellPicker\nC++: static vtkCellPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellPicker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellPicker\nC++: vtkCellPicker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellPicker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellPicker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Pick", PyvtkCellPicker_Pick, METH_VARARGS,
   "Pick(self, selectionX:float, selectionY:float, selectionZ:float,\n    renderer:vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\n\nPerform pick operation with selection point provided. Normally\nthe first two values are the (x,y) pixel coordinates for the\npick, and the third value is z=0. The return value will be\nnon-zero if something was successfully picked.\n"},
  {"Pick3DRay", PyvtkCellPicker_Pick3DRay, METH_VARARGS,
   "Pick3DRay(self, selectionPt:[float, float, float], orient:[float,\n    float, float, float], ren:vtkRenderer) -> int\nC++: int Pick3DRay(double selectionPt[3], double orient[4],\n    vtkRenderer *ren) override;\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {"AddLocator", PyvtkCellPicker_AddLocator, METH_VARARGS,
   "AddLocator(self, locator:vtkAbstractCellLocator) -> None\nC++: void AddLocator(vtkAbstractCellLocator *locator)\n\nAdd a locator for one of the data sets that will be included in\nthe scene.  You must set up the locator with exactly the same\ndata set that was input to the mapper of one or more of the\nactors in the scene. Note that if you try to add the same locator\nto the picker twice, the second addition will be ignored.\n"},
  {"RemoveLocator", PyvtkCellPicker_RemoveLocator, METH_VARARGS,
   "RemoveLocator(self, locator:vtkAbstractCellLocator) -> None\nC++: void RemoveLocator(vtkAbstractCellLocator *locator)\n\nRemove a locator that was previously added.  If you try to remove\na nonexistent locator, then nothing will happen and no errors\nwill be raised.\n"},
  {"RemoveAllLocators", PyvtkCellPicker_RemoveAllLocators, METH_VARARGS,
   "RemoveAllLocators(self) -> None\nC++: void RemoveAllLocators()\n\nRemove all locators associated with this picker.\n"},
  {"SetVolumeOpacityIsovalue", PyvtkCellPicker_SetVolumeOpacityIsovalue, METH_VARARGS,
   "SetVolumeOpacityIsovalue(self, _arg:float) -> None\nC++: virtual void SetVolumeOpacityIsovalue(double _arg)\n\nSet the opacity isovalue to use for defining volume surfaces. \nThe pick will occur at the location along the pick ray where the\nopacity of the volume is equal to this isovalue.  If you want to\ndo the pick based on an actual data isovalue rather than the\nopacity, then pass the data value through the scalar opacity\nfunction before using this method.\n"},
  {"GetVolumeOpacityIsovalue", PyvtkCellPicker_GetVolumeOpacityIsovalue, METH_VARARGS,
   "GetVolumeOpacityIsovalue(self) -> float\nC++: virtual double GetVolumeOpacityIsovalue()\n\n"},
  {"SetUseVolumeGradientOpacity", PyvtkCellPicker_SetUseVolumeGradientOpacity, METH_VARARGS,
   "SetUseVolumeGradientOpacity(self, _arg:int) -> None\nC++: virtual void SetUseVolumeGradientOpacity(vtkTypeBool _arg)\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {"UseVolumeGradientOpacityOn", PyvtkCellPicker_UseVolumeGradientOpacityOn, METH_VARARGS,
   "UseVolumeGradientOpacityOn(self) -> None\nC++: virtual void UseVolumeGradientOpacityOn()\n\n"},
  {"UseVolumeGradientOpacityOff", PyvtkCellPicker_UseVolumeGradientOpacityOff, METH_VARARGS,
   "UseVolumeGradientOpacityOff(self) -> None\nC++: virtual void UseVolumeGradientOpacityOff()\n\n"},
  {"GetUseVolumeGradientOpacity", PyvtkCellPicker_GetUseVolumeGradientOpacity, METH_VARARGS,
   "GetUseVolumeGradientOpacity(self) -> int\nC++: virtual vtkTypeBool GetUseVolumeGradientOpacity()\n\n"},
  {"SetPickClippingPlanes", PyvtkCellPicker_SetPickClippingPlanes, METH_VARARGS,
   "SetPickClippingPlanes(self, _arg:int) -> None\nC++: virtual void SetPickClippingPlanes(vtkTypeBool _arg)\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked.\n"},
  {"PickClippingPlanesOn", PyvtkCellPicker_PickClippingPlanesOn, METH_VARARGS,
   "PickClippingPlanesOn(self) -> None\nC++: virtual void PickClippingPlanesOn()\n\n"},
  {"PickClippingPlanesOff", PyvtkCellPicker_PickClippingPlanesOff, METH_VARARGS,
   "PickClippingPlanesOff(self) -> None\nC++: virtual void PickClippingPlanesOff()\n\n"},
  {"GetPickClippingPlanes", PyvtkCellPicker_GetPickClippingPlanes, METH_VARARGS,
   "GetPickClippingPlanes(self) -> int\nC++: virtual vtkTypeBool GetPickClippingPlanes()\n\n"},
  {"GetClippingPlaneId", PyvtkCellPicker_GetClippingPlaneId, METH_VARARGS,
   "GetClippingPlaneId(self) -> int\nC++: virtual int GetClippingPlaneId()\n\nGet the index of the clipping plane that was intersected during\nthe pick.  This will be set regardless of whether\nPickClippingPlanes is On, all that is required is that the pick\nintersected a clipping plane of the Prop3D that was picked.  The\nresult will be -1 if the Prop3D that was picked has no clipping\nplanes, or if the ray didn't intersect the planes.\n"},
  {"GetPickNormal", PyvtkCellPicker_GetPickNormal, METH_VARARGS,
   "GetPickNormal(self) -> (float, float, float)\nC++: virtual double *GetPickNormal()\n\nReturn the normal of the picked surface at the PickPosition.  If\nno surface was picked, then a vector pointing back at the camera\nis returned.\n"},
  {"GetMapperNormal", PyvtkCellPicker_GetMapperNormal, METH_VARARGS,
   "GetMapperNormal(self) -> (float, float, float)\nC++: virtual double *GetMapperNormal()\n\nReturn the normal of the surface at the PickPosition in mapper\ncoordinates.  The result is undefined if no prop was picked.\n"},
  {"GetPointIJK", PyvtkCellPicker_GetPointIJK, METH_VARARGS,
   "GetPointIJK(self) -> (int, int, int)\nC++: virtual int *GetPointIJK()\n\nGet the structured coordinates of the point at the PickPosition.\nOnly valid for image actors and volumes with vtkImageData.\n"},
  {"GetCellIJK", PyvtkCellPicker_GetCellIJK, METH_VARARGS,
   "GetCellIJK(self) -> (int, int, int)\nC++: virtual int *GetCellIJK()\n\nGet the structured coordinates of the cell at the PickPosition.\nOnly valid for image actors and volumes with vtkImageData.\nCombine this with the PCoords to get the position within the\ncell.\n"},
  {"GetPointId", PyvtkCellPicker_GetPointId, METH_VARARGS,
   "GetPointId(self) -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked. This point will be a member of any cell that is picked.\n"},
  {"GetCellId", PyvtkCellPicker_GetCellId, METH_VARARGS,
   "GetCellId(self) -> int\nC++: virtual vtkIdType GetCellId()\n\nGet the id of the picked cell. If CellId = -1, nothing was\npicked.\n"},
  {"GetSubId", PyvtkCellPicker_GetSubId, METH_VARARGS,
   "GetSubId(self) -> int\nC++: virtual int GetSubId()\n\nGet the subId of the picked cell. This is useful, for example, if\nthe data is made of triangle strips. If SubId = -1, nothing was\npicked.\n"},
  {"GetPCoords", PyvtkCellPicker_GetPCoords, METH_VARARGS,
   "GetPCoords(self) -> (float, float, float)\nC++: virtual double *GetPCoords()\n\nGet the parametric coordinates of the picked cell. Only valid if\na prop was picked.  The PCoords can be used to compute the\nweights that are needed to interpolate data values within the\ncell.\n"},
  {"GetTexture", PyvtkCellPicker_GetTexture, METH_VARARGS,
   "GetTexture(self) -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nGet the texture that was picked.  This will always be set if the\npicked prop has a texture, and will always be null otherwise.\n"},
  {"SetPickTextureData", PyvtkCellPicker_SetPickTextureData, METH_VARARGS,
   "SetPickTextureData(self, _arg:int) -> None\nC++: virtual void SetPickTextureData(vtkTypeBool _arg)\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {"PickTextureDataOn", PyvtkCellPicker_PickTextureDataOn, METH_VARARGS,
   "PickTextureDataOn(self) -> None\nC++: virtual void PickTextureDataOn()\n\n"},
  {"PickTextureDataOff", PyvtkCellPicker_PickTextureDataOff, METH_VARARGS,
   "PickTextureDataOff(self) -> None\nC++: virtual void PickTextureDataOff()\n\n"},
  {"GetPickTextureData", PyvtkCellPicker_GetPickTextureData, METH_VARARGS,
   "GetPickTextureData(self) -> int\nC++: virtual vtkTypeBool GetPickTextureData()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellPicker_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("volume_opacity_isovalue"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetVolumeOpacityIsovalue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellPicker_SetVolumeOpacityIsovalue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellPicker_SetVolumeOpacityIsovalue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVolumeOpacityIsovalue/SetVolumeOpacityIsovalue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_volume_gradient_opacity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetUseVolumeGradientOpacity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellPicker_SetUseVolumeGradientOpacity(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellPicker_SetUseVolumeGradientOpacity(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseVolumeGradientOpacity/SetUseVolumeGradientOpacity\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pick_clipping_planes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPickClippingPlanes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellPicker_SetPickClippingPlanes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellPicker_SetPickClippingPlanes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPickClippingPlanes/SetPickClippingPlanes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pick_texture_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPickTextureData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellPicker_SetPickTextureData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellPicker_SetPickTextureData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPickTextureData/SetPickTextureData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("clipping_plane_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetClippingPlaneId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClippingPlaneId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pick_normal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPickNormal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPickNormal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("mapper_normal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetMapperNormal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMapperNormal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_ijk"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPointIJK(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointIJK\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_ijk"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetCellIJK(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellIJK\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPointId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetCellId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("sub_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetSubId(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSubId\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("p_coords"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetPCoords(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPCoords\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("texture"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellPicker_GetTexture(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTexture\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellPicker_Doc =
  "vtkCellPicker - ray-cast cell picker for all kinds of Prop3Ds\n\n"
  "Superclass: vtkPicker\n\n"
  "vtkCellPicker will shoot a ray into a 3D scene and return information\n"
  "about the first object that the ray hits.  It works for all Prop3Ds.\n"
  "For vtkVolume objects, it shoots a ray into the volume and returns\n"
  "the point where the ray intersects an isosurface of a chosen opacity.\n"
  "For vtkImage objects, it intersects the ray with the displayed slice.\n"
  "For vtkActor objects, it intersects the actor's polygons. If the\n"
  "object's mapper has ClippingPlanes, then it takes the clipping into\n"
  "account, and will return the Id of the clipping plane that was\n"
  "intersected. For all prop types, it returns point and cell\n"
  "information, plus the normal of the surface that was intersected at\n"
  "the pick position.  For volumes and images, it also returns (i,j,k)\n"
  "coordinates for the point and the cell that were picked.\n\n"
  "@sa\n"
  "vtkPicker vtkPointPicker vtkVolumePicker\n\n"
  "@par Thanks: This class was contributed to VTK by David Gobbi on\n"
  "behalf of Atamai Inc., as an enhancement to the original\n"
  "vtkCellPicker.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCellPicker", // tp_name
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
  PyvtkCellPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellPicker_StaticNew()
{
  return vtkCellPicker::New();
}

PyObject *PyvtkCellPicker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellPicker_Type, PyvtkCellPicker_Methods,
    "vtkCellPicker",
 &PyvtkCellPicker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPicker_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellPicker_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

