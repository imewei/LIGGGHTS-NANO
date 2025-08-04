// python wrapper for vtkImageActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageActor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageActor_ClassNew(); }

#ifndef DECLARED_PyvtkImageSlice_ClassNew
extern "C" { PyObject *PyvtkImageSlice_ClassNew(); }
#define DECLARED_PyvtkImageSlice_ClassNew
#endif

static PyObject *
PyvtkImageActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageActor *tempr = vtkImageActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageActor::NewInstance());

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
PyvtkImageActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageActor::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageActor::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageActor::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageActor::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageActor::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkImageActor::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkImageActor::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkImageActor::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkImageActor::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayExtent(temp0);
    }
    else
    {
      op->vtkImageActor::SetDisplayExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_SetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageActor::SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_SetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageActor_SetDisplayExtent_s1(self, args);
    case 6:
      return PyvtkImageActor_SetDisplayExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayExtent");
  return nullptr;
}


static PyObject *
PyvtkImageActor_GetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDisplayExtent(temp0);
    }
    else
    {
      op->vtkImageActor::GetDisplayExtent(temp0);
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
PyvtkImageActor_GetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplayExtent() :
      op->vtkImageActor::GetDisplayExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageActor_GetDisplayExtent_s1(self, args);
    case 0:
      return PyvtkImageActor_GetDisplayExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayExtent");
  return nullptr;
}


static PyObject *
PyvtkImageActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkImageActor::GetBounds(temp0);
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
PyvtkImageActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkImageActor_GetDisplayBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayBounds() :
      op->vtkImageActor::GetDisplayBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->GetDisplayBounds(temp0);
    }
    else
    {
      op->vtkImageActor::GetDisplayBounds(temp0);
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
PyvtkImageActor_GetDisplayBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageActor_GetDisplayBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetDisplayBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayBounds");
  return nullptr;
}


static PyObject *
PyvtkImageActor_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageActor::GetSliceNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMax() :
      op->vtkImageActor::GetSliceNumberMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMin() :
      op->vtkImageActor::GetSliceNumberMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZSlice(temp0);
    }
    else
    {
      op->vtkImageActor::SetZSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageActor::GetZSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageActor::GetWholeZMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageActor::GetWholeZMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImageActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkImageActor::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkImageActor::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkImageActor::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkImageActor::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageActor_Methods[] = {
  {"IsTypeOf", PyvtkImageActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageActor\nC++: static vtkImageActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageActor\nC++: vtkImageActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkImageActor_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkImageData) -> None\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the image data input for the image actor.  This is for\nbackwards compatibility, for a proper pipeline connection you\nshould use GetMapper()->SetInputConnection() instead.\n"},
  {"GetInput", PyvtkImageActor_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\n"},
  {"SetInterpolate", PyvtkImageActor_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, __a:int) -> None\nC++: virtual void SetInterpolate(vtkTypeBool)\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {"GetInterpolate", PyvtkImageActor_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\n"},
  {"InterpolateOn", PyvtkImageActor_InterpolateOn, METH_VARARGS,
   "InterpolateOn(self) -> None\nC++: virtual void InterpolateOn()\n\n"},
  {"InterpolateOff", PyvtkImageActor_InterpolateOff, METH_VARARGS,
   "InterpolateOff(self) -> None\nC++: virtual void InterpolateOff()\n\n"},
  {"SetOpacity", PyvtkImageActor_SetOpacity, METH_VARARGS,
   "SetOpacity(self, __a:float) -> None\nC++: virtual void SetOpacity(double)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent. The default is 1.0.\n"},
  {"GetOpacity", PyvtkImageActor_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\n"},
  {"GetOpacityMinValue", PyvtkImageActor_GetOpacityMinValue, METH_VARARGS,
   "GetOpacityMinValue(self) -> float\nC++: double GetOpacityMinValue()\n\n"},
  {"GetOpacityMaxValue", PyvtkImageActor_GetOpacityMaxValue, METH_VARARGS,
   "GetOpacityMaxValue(self) -> float\nC++: double GetOpacityMaxValue()\n\n"},
  {"SetDisplayExtent", PyvtkImageActor_SetDisplayExtent, METH_VARARGS,
   "SetDisplayExtent(self, extent:(int, int, int, int, int, int))\n    -> None\nC++: void SetDisplayExtent(const int extent[6])\nSetDisplayExtent(self, minX:int, maxX:int, minY:int, maxY:int,\n    minZ:int, maxZ:int) -> None\nC++: void SetDisplayExtent(int minX, int maxX, int minY, int maxY,\n     int minZ, int maxZ)\n\nThe image extent is generally set explicitly, but if not set it\nwill be determined from the input image data.\n"},
  {"GetDisplayExtent", PyvtkImageActor_GetDisplayExtent, METH_VARARGS,
   "GetDisplayExtent(self, extent:[int, int, int, int, int, int])\n    -> None\nC++: void GetDisplayExtent(int extent[6])\nGetDisplayExtent(self) -> (int, int, int, int, int, int)\nC++: int *GetDisplayExtent()\n\n"},
  {"GetBounds", PyvtkImageActor_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds of this image actor. Either copy the bounds into a\nuser provided array or return a pointer to an array. In either\ncase the bounds is expressed as a 6-vector (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {"GetDisplayBounds", PyvtkImageActor_GetDisplayBounds, METH_VARARGS,
   "GetDisplayBounds(self) -> (float, float, float, float, float,\n    float)\nC++: double *GetDisplayBounds()\nGetDisplayBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetDisplayBounds(double bounds[6])\n\nGet the bounds of the data that is displayed by this image actor.\n If the transformation matrix for this actor is the identity\nmatrix, this will return the same value as GetBounds.\n"},
  {"GetSliceNumber", PyvtkImageActor_GetSliceNumber, METH_VARARGS,
   "GetSliceNumber(self) -> int\nC++: int GetSliceNumber()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {"GetSliceNumberMax", PyvtkImageActor_GetSliceNumberMax, METH_VARARGS,
   "GetSliceNumberMax(self) -> int\nC++: int GetSliceNumberMax()\n\n"},
  {"GetSliceNumberMin", PyvtkImageActor_GetSliceNumberMin, METH_VARARGS,
   "GetSliceNumberMin(self) -> int\nC++: int GetSliceNumberMin()\n\n"},
  {"SetZSlice", PyvtkImageActor_SetZSlice, METH_VARARGS,
   "SetZSlice(self, z:int) -> None\nC++: void SetZSlice(int z)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetZSlice", PyvtkImageActor_GetZSlice, METH_VARARGS,
   "GetZSlice(self) -> int\nC++: int GetZSlice()\n\n"},
  {"GetWholeZMin", PyvtkImageActor_GetWholeZMin, METH_VARARGS,
   "GetWholeZMin(self) -> int\nC++: int GetWholeZMin()\n\n"},
  {"GetWholeZMax", PyvtkImageActor_GetWholeZMax, METH_VARARGS,
   "GetWholeZMax(self) -> int\nC++: int GetWholeZMax()\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImageActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nInternal method, should only be used by rendering. Returns true\nif this image actor has an alpha component or if it has an\nopacity that is less than 1.0.  This can be overridden by\nForceOpaqueOn(), which forces this method to return false, or\nForceTranslucentOn(), which forces this method to return true.\n"},
  {"GetForceOpaque", PyvtkImageActor_GetForceOpaque, METH_VARARGS,
   "GetForceOpaque(self) -> bool\nC++: virtual bool GetForceOpaque()\n\nForce the actor to be rendered during the opaque rendering pass.\nDefault is false. See also: ForceTranslucentOn() to use\ntranslucent rendering pass.\n"},
  {"SetForceOpaque", PyvtkImageActor_SetForceOpaque, METH_VARARGS,
   "SetForceOpaque(self, _arg:bool) -> None\nC++: virtual void SetForceOpaque(bool _arg)\n\n"},
  {"ForceOpaqueOn", PyvtkImageActor_ForceOpaqueOn, METH_VARARGS,
   "ForceOpaqueOn(self) -> None\nC++: virtual void ForceOpaqueOn()\n\n"},
  {"ForceOpaqueOff", PyvtkImageActor_ForceOpaqueOff, METH_VARARGS,
   "ForceOpaqueOff(self) -> None\nC++: virtual void ForceOpaqueOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageActor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("input_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetInputData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetInputData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interpolate"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetInterpolate(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetInterpolate(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetInterpolate(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInterpolate/SetInterpolate\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("opacity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetOpacity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetOpacity(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetOpacity(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOpacity/SetOpacity\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("display_extent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetDisplayExtent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetDisplayExtent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetDisplayExtent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDisplayExtent/SetDisplayExtent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_slice"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetZSlice(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetZSlice(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetZSlice(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetZSlice/SetZSlice\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("force_opaque"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetForceOpaque(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageActor_SetForceOpaque(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageActor_SetForceOpaque(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetForceOpaque/SetForceOpaque\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("display_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetDisplayBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDisplayBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("slice_number"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetSliceNumber(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSliceNumber\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("slice_number_max"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetSliceNumberMax(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSliceNumberMax\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("slice_number_min"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetSliceNumberMin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSliceNumberMin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("whole_z_min"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetWholeZMin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWholeZMin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("whole_z_max"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageActor_GetWholeZMax(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWholeZMax\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageActor_Doc =
  "vtkImageActor - draw an image in a rendered 3D scene\n\n"
  "Superclass: vtkImageSlice\n\n"
  "vtkImageActor is used to render an image in a 3D scene.  The image is\n"
  "placed at the origin of the image, and its size is controlled by the\n"
  "image dimensions and image spacing. The orientation of the image is\n"
  "orthogonal to one of the x-y-z axes depending on which plane the\n"
  "image is defined in.  This class has been mostly superseded by the\n"
  "vtkImageSlice class, which provides more functionality than\n"
  "vtkImageActor.\n\n"
  "@sa\n"
  "vtkImageData vtkImageSliceMapper vtkImageProperty\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkImageActor", // tp_name
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
  PyvtkImageActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageActor_StaticNew()
{
  return vtkImageActor::New();
}

PyObject *PyvtkImageActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageActor_Type, PyvtkImageActor_Methods,
    "vtkImageActor",
 &PyvtkImageActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageSlice_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageActor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

