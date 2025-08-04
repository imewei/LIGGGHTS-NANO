// python wrapper for vtkResliceCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResliceCursor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkResliceCursor(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkResliceCursor_ClassNew(); }


static PyObject *
PyvtkResliceCursor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursor *tempr = vtkResliceCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursor::NewInstance());

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
PyvtkResliceCursor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResliceCursor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResliceCursor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImage(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkResliceCursor::GetImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->vtkResliceCursor::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->vtkResliceCursor::SetCenter(temp0);
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
PyvtkResliceCursor_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetCenter_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkResliceCursor::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickness_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetThickness(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetThickness(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetThickness_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetThickness_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetThickness");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkResliceCursor::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickMode(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetThickMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickMode() :
      op->vtkResliceCursor::GetThickMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThickModeOn();
    }
    else
    {
      op->vtkResliceCursor::ThickModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThickModeOff();
    }
    else
    {
      op->vtkResliceCursor::ThickModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyData() :
      op->vtkResliceCursor::GetPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetCenterlineAxisPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxisPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxisPolyData(temp0) :
      op->vtkResliceCursor::GetCenterlineAxisPolyData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkResliceCursor::GetPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkResliceCursor::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkResliceCursor::GetXAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkResliceCursor::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZAxis() :
      op->vtkResliceCursor::GetZAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetXAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetXAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetXAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetXAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetXAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxis");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_SetYAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetYAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetYAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetYAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetYAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxis");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_SetZAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetZAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetZAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetZAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetZAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxis");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkResliceCursor::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetXViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXViewUp() :
      op->vtkResliceCursor::GetXViewUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetYViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYViewUp() :
      op->vtkResliceCursor::GetYViewUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetZViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZViewUp() :
      op->vtkResliceCursor::GetZViewUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetXViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetXViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetXViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXViewUp(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetXViewUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetXViewUp_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetXViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewUp");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_SetYViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetYViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetYViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYViewUp(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetYViewUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetYViewUp_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetYViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewUp");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_SetZViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetZViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetZViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZViewUp(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetZViewUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetZViewUp_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetZViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewUp");
  return nullptr;
}


static PyObject *
PyvtkResliceCursor_GetViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewUp(temp0) :
      op->vtkResliceCursor::GetViewUp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHole(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHole(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHole() :
      op->vtkResliceCursor::GetHole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleWidth(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHoleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidth() :
      op->vtkResliceCursor::GetHoleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleWidthInPixels(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHoleWidthInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidthInPixels() :
      op->vtkResliceCursor::GetHoleWidthInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkResliceCursor::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursor_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceCursor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceCursor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResliceCursor\nC++: static vtkResliceCursor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceCursor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResliceCursor\nC++: vtkResliceCursor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResliceCursor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResliceCursor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImage", PyvtkResliceCursor_SetImage, METH_VARARGS,
   "SetImage(self, __a:vtkImageData) -> None\nC++: virtual void SetImage(vtkImageData *)\n\nSet the image (3D) that we are slicing\n"},
  {"GetImage", PyvtkResliceCursor_GetImage, METH_VARARGS,
   "GetImage(self) -> vtkImageData\nC++: virtual vtkImageData *GetImage()\n\n"},
  {"SetCenter", PyvtkResliceCursor_SetCenter, METH_VARARGS,
   "SetCenter(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetCenter(double, double, double)\nSetCenter(self, center:[float, float, float]) -> None\nC++: virtual void SetCenter(double center[3])\n\nSet/Get the cente of the reslice cursor.\n"},
  {"GetCenter", PyvtkResliceCursor_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetThickness", PyvtkResliceCursor_SetThickness, METH_VARARGS,
   "SetThickness(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetThickness(double _arg1, double _arg2,\n    double _arg3)\nSetThickness(self, _arg:(float, float, float)) -> None\nC++: virtual void SetThickness(const double _arg[3])\n\nSet/Get the thickness of the cursor\n"},
  {"GetThickness", PyvtkResliceCursor_GetThickness, METH_VARARGS,
   "GetThickness(self) -> (float, float, float)\nC++: virtual double *GetThickness()\n\n"},
  {"SetThickMode", PyvtkResliceCursor_SetThickMode, METH_VARARGS,
   "SetThickMode(self, _arg:int) -> None\nC++: virtual void SetThickMode(vtkTypeBool _arg)\n\nEnable disable thick mode. Default is to enable it.\n"},
  {"GetThickMode", PyvtkResliceCursor_GetThickMode, METH_VARARGS,
   "GetThickMode(self) -> int\nC++: virtual vtkTypeBool GetThickMode()\n\n"},
  {"ThickModeOn", PyvtkResliceCursor_ThickModeOn, METH_VARARGS,
   "ThickModeOn(self) -> None\nC++: virtual void ThickModeOn()\n\n"},
  {"ThickModeOff", PyvtkResliceCursor_ThickModeOff, METH_VARARGS,
   "ThickModeOff(self) -> None\nC++: virtual void ThickModeOff()\n\n"},
  {"GetPolyData", PyvtkResliceCursor_GetPolyData, METH_VARARGS,
   "GetPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetPolyData()\n\nGet the 3D PolyData representation\n"},
  {"GetCenterlineAxisPolyData", PyvtkResliceCursor_GetCenterlineAxisPolyData, METH_VARARGS,
   "GetCenterlineAxisPolyData(self, axis:int) -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxisPolyData(int axis)\n\nGet the slab and centerline polydata along an axis\n"},
  {"GetPlane", PyvtkResliceCursor_GetPlane, METH_VARARGS,
   "GetPlane(self, n:int) -> vtkPlane\nC++: virtual vtkPlane *GetPlane(int n)\n\nGet the planes that represent normals along the X, Y and Z. The\nargument passed to this method must be an integer in the range\n0-2 (corresponding to the X, Y and Z axes.\n"},
  {"Update", PyvtkResliceCursor_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nBuild the polydata\n"},
  {"GetXAxis", PyvtkResliceCursor_GetXAxis, METH_VARARGS,
   "GetXAxis(self) -> (float, float, float)\nC++: virtual double *GetXAxis()\n\nGet the computed axes directions\n"},
  {"GetYAxis", PyvtkResliceCursor_GetYAxis, METH_VARARGS,
   "GetYAxis(self) -> (float, float, float)\nC++: virtual double *GetYAxis()\n\n"},
  {"GetZAxis", PyvtkResliceCursor_GetZAxis, METH_VARARGS,
   "GetZAxis(self) -> (float, float, float)\nC++: virtual double *GetZAxis()\n\n"},
  {"SetXAxis", PyvtkResliceCursor_SetXAxis, METH_VARARGS,
   "SetXAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetXAxis(double _arg1, double _arg2,\n    double _arg3)\nSetXAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetXAxis(const double _arg[3])\n\n"},
  {"SetYAxis", PyvtkResliceCursor_SetYAxis, METH_VARARGS,
   "SetYAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetYAxis(double _arg1, double _arg2,\n    double _arg3)\nSetYAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetYAxis(const double _arg[3])\n\n"},
  {"SetZAxis", PyvtkResliceCursor_SetZAxis, METH_VARARGS,
   "SetZAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetZAxis(double _arg1, double _arg2,\n    double _arg3)\nSetZAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetZAxis(const double _arg[3])\n\n"},
  {"GetAxis", PyvtkResliceCursor_GetAxis, METH_VARARGS,
   "GetAxis(self, i:int) -> Pointer\nC++: virtual double *GetAxis(int i)\n\n"},
  {"GetXViewUp", PyvtkResliceCursor_GetXViewUp, METH_VARARGS,
   "GetXViewUp(self) -> (float, float, float)\nC++: virtual double *GetXViewUp()\n\nGet/Set the view up\n"},
  {"GetYViewUp", PyvtkResliceCursor_GetYViewUp, METH_VARARGS,
   "GetYViewUp(self) -> (float, float, float)\nC++: virtual double *GetYViewUp()\n\n"},
  {"GetZViewUp", PyvtkResliceCursor_GetZViewUp, METH_VARARGS,
   "GetZViewUp(self) -> (float, float, float)\nC++: virtual double *GetZViewUp()\n\n"},
  {"SetXViewUp", PyvtkResliceCursor_SetXViewUp, METH_VARARGS,
   "SetXViewUp(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetXViewUp(double _arg1, double _arg2,\n    double _arg3)\nSetXViewUp(self, _arg:(float, float, float)) -> None\nC++: virtual void SetXViewUp(const double _arg[3])\n\n"},
  {"SetYViewUp", PyvtkResliceCursor_SetYViewUp, METH_VARARGS,
   "SetYViewUp(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetYViewUp(double _arg1, double _arg2,\n    double _arg3)\nSetYViewUp(self, _arg:(float, float, float)) -> None\nC++: virtual void SetYViewUp(const double _arg[3])\n\n"},
  {"SetZViewUp", PyvtkResliceCursor_SetZViewUp, METH_VARARGS,
   "SetZViewUp(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetZViewUp(double _arg1, double _arg2,\n    double _arg3)\nSetZViewUp(self, _arg:(float, float, float)) -> None\nC++: virtual void SetZViewUp(const double _arg[3])\n\n"},
  {"GetViewUp", PyvtkResliceCursor_GetViewUp, METH_VARARGS,
   "GetViewUp(self, i:int) -> Pointer\nC++: double *GetViewUp(int i)\n\n"},
  {"SetHole", PyvtkResliceCursor_SetHole, METH_VARARGS,
   "SetHole(self, _arg:int) -> None\nC++: virtual void SetHole(int _arg)\n\nShow a hole in the center of the cursor, so its easy to see the\npixels within the hole. ON by default\n"},
  {"GetHole", PyvtkResliceCursor_GetHole, METH_VARARGS,
   "GetHole(self) -> int\nC++: virtual int GetHole()\n\n"},
  {"SetHoleWidth", PyvtkResliceCursor_SetHoleWidth, METH_VARARGS,
   "SetHoleWidth(self, _arg:float) -> None\nC++: virtual void SetHoleWidth(double _arg)\n\nSet the width of the hole in mm\n"},
  {"GetHoleWidth", PyvtkResliceCursor_GetHoleWidth, METH_VARARGS,
   "GetHoleWidth(self) -> float\nC++: virtual double GetHoleWidth()\n\n"},
  {"SetHoleWidthInPixels", PyvtkResliceCursor_SetHoleWidthInPixels, METH_VARARGS,
   "SetHoleWidthInPixels(self, _arg:float) -> None\nC++: virtual void SetHoleWidthInPixels(double _arg)\n\nSet the width of the hole in pixels. If set, this will override\nthe hole with in mm.\n"},
  {"GetHoleWidthInPixels", PyvtkResliceCursor_GetHoleWidthInPixels, METH_VARARGS,
   "GetHoleWidthInPixels(self) -> float\nC++: virtual double GetHoleWidthInPixels()\n\n"},
  {"GetMTime", PyvtkResliceCursor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime. Check the MTime of the internal planes as well.\n"},
  {"Reset", PyvtkResliceCursor_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\nReset the cursor to the default position, ie with the axes,\nnormal to each other and axis aligned and with the cursor pointed\nat the center of the image.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkResliceCursor_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("image"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetImage(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetImage(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetImage(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetImage/SetImage\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("thickness"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetThickness(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetThickness(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetThickness(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetThickness/SetThickness\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("thick_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetThickMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetThickMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetThickMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetThickMode/SetThickMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetXAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetXAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetXAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetXAxis/SetXAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetYAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetYAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetYAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetYAxis/SetYAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetZAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetZAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetZAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetZAxis/SetZAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_view_up"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetXViewUp(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetXViewUp(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetXViewUp(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetXViewUp/SetXViewUp\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_view_up"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetYViewUp(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetYViewUp(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetYViewUp(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetYViewUp/SetYViewUp\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_view_up"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetZViewUp(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetZViewUp(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetZViewUp(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetZViewUp/SetZViewUp\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("hole"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetHole(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetHole(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetHole(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHole/SetHole\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("hole_width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetHoleWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetHoleWidth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetHoleWidth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHoleWidth/SetHoleWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("hole_width_in_pixels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetHoleWidthInPixels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkResliceCursor_SetHoleWidthInPixels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkResliceCursor_SetHoleWidthInPixels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHoleWidthInPixels/SetHoleWidthInPixels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("poly_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetPolyData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPolyData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkResliceCursor_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkResliceCursor_Doc =
  "vtkResliceCursor - Geometry for a reslice cursor\n\n"
  "Superclass: vtkObject\n\n"
  "This class represents a reslice cursor. It consists of two cross\n"
  "sectional hairs, with an optional thickness. The crosshairs hairs may\n"
  "have a hole in the center. These may be translated or rotated\n"
  "independent of each other in the view. The result is used to reslice\n"
  "the data along these cross sections. This allows the user to perform\n"
  "multi-planar thin or thick reformat of the data on an image view,\n"
  "rather than a 3D view.\n"
  "@sa\n"
  "vtkResliceCursorWidget vtkResliceCursor\n"
  "vtkResliceCursorPolyDataAlgorithm vtkResliceCursorRepresentation\n"
  "vtkResliceCursorThickLineRepresentation vtkResliceCursorActor\n"
  "vtkImagePlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResliceCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkResliceCursor", // tp_name
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
  PyvtkResliceCursor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursor_StaticNew()
{
  return vtkResliceCursor::New();
}

PyObject *PyvtkResliceCursor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResliceCursor_Type, PyvtkResliceCursor_Methods,
    "vtkResliceCursor",
 &PyvtkResliceCursor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkResliceCursor_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

