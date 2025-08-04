// python wrapper for vtkSelectPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSelectPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSelectPolyData(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSelectPolyData_ClassNew(); }


static PyObject *
PyvtkSelectPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectPolyData *tempr = vtkSelectPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectPolyData::NewInstance());

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
PyvtkSelectPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSelectPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSelectPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateSelectionScalars(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetGenerateSelectionScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateSelectionScalars() :
      op->vtkSelectPolyData::GetGenerateSelectionScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSelectionScalarsOn();
    }
    else
    {
      op->vtkSelectPolyData::GenerateSelectionScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSelectionScalarsOff();
    }
    else
    {
      op->vtkSelectPolyData::GenerateSelectionScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionScalarsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionScalarsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionScalarsArrayName(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionScalarsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionScalarsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionScalarsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSelectionScalarsArrayName() :
      op->vtkSelectPolyData::GetSelectionScalarsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkSelectPolyData::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkSelectPolyData::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkSelectPolyData::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetEdgeSearchMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSearchMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSearchMode(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetEdgeSearchMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetEdgeSearchModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSearchModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeSearchModeMinValue() :
      op->vtkSelectPolyData::GetEdgeSearchModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetEdgeSearchModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSearchModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeSearchModeMaxValue() :
      op->vtkSelectPolyData::GetEdgeSearchModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetEdgeSearchMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSearchMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeSearchMode() :
      op->vtkSelectPolyData::GetEdgeSearchMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetEdgeSearchModeToGreedy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSearchModeToGreedy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSearchModeToGreedy();
    }
    else
    {
      op->vtkSelectPolyData::SetEdgeSearchModeToGreedy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetEdgeSearchModeToDijkstra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSearchModeToDijkstra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSearchModeToDijkstra();
    }
    else
    {
      op->vtkSelectPolyData::SetEdgeSearchModeToDijkstra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetEdgeSearchModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSearchModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeSearchModeAsString() :
      op->vtkSelectPolyData::GetEdgeSearchModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkSelectPolyData::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectPolyData::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClosestPoint(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSelectPolyData_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkSelectPolyData_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkSelectPolyData_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkSelectPolyData::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMinValue() :
      op->vtkSelectPolyData::GetSelectionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMaxValue() :
      op->vtkSelectPolyData::GetSelectionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkSelectPolyData::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToSmallestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSmallestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToSmallestRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToSmallestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToLargestRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToClosestPointRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelectionModeAsString() :
      op->vtkSelectPolyData::GetSelectionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateUnselectedOutput(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetGenerateUnselectedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateUnselectedOutput() :
      op->vtkSelectPolyData::GetGenerateUnselectedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateUnselectedOutputOn();
    }
    else
    {
      op->vtkSelectPolyData::GenerateUnselectedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateUnselectedOutputOff();
    }
    else
    {
      op->vtkSelectPolyData::GenerateUnselectedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUnselectedOutput() :
      op->vtkSelectPolyData::GetUnselectedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetUnselectedOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnselectedOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetUnselectedOutputPort() :
      op->vtkSelectPolyData::GetUnselectedOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSelectionEdges() :
      op->vtkSelectPolyData::GetSelectionEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectPolyData_Methods[] = {
  {"IsTypeOf", PyvtkSelectPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSelectPolyData\nC++: static vtkSelectPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSelectPolyData\nC++: vtkSelectPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSelectPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSelectPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGenerateSelectionScalars", PyvtkSelectPolyData_SetGenerateSelectionScalars, METH_VARARGS,
   "SetGenerateSelectionScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateSelectionScalars(vtkTypeBool _arg)\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {"GetGenerateSelectionScalars", PyvtkSelectPolyData_GetGenerateSelectionScalars, METH_VARARGS,
   "GetGenerateSelectionScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateSelectionScalars()\n\n"},
  {"GenerateSelectionScalarsOn", PyvtkSelectPolyData_GenerateSelectionScalarsOn, METH_VARARGS,
   "GenerateSelectionScalarsOn(self) -> None\nC++: virtual void GenerateSelectionScalarsOn()\n\n"},
  {"GenerateSelectionScalarsOff", PyvtkSelectPolyData_GenerateSelectionScalarsOff, METH_VARARGS,
   "GenerateSelectionScalarsOff(self) -> None\nC++: virtual void GenerateSelectionScalarsOff()\n\n"},
  {"SetSelectionScalarsArrayName", PyvtkSelectPolyData_SetSelectionScalarsArrayName, METH_VARARGS,
   "SetSelectionScalarsArrayName(self, _arg:str) -> None\nC++: virtual void SetSelectionScalarsArrayName(const char *_arg)\n\nName of the Selection Scalars array. Default is \"Selection\".\n"},
  {"GetSelectionScalarsArrayName", PyvtkSelectPolyData_GetSelectionScalarsArrayName, METH_VARARGS,
   "GetSelectionScalarsArrayName(self) -> str\nC++: virtual char *GetSelectionScalarsArrayName()\n\n"},
  {"SetInsideOut", PyvtkSelectPolyData_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {"GetInsideOut", PyvtkSelectPolyData_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkSelectPolyData_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkSelectPolyData_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetEdgeSearchMode", PyvtkSelectPolyData_SetEdgeSearchMode, METH_VARARGS,
   "SetEdgeSearchMode(self, _arg:int) -> None\nC++: virtual void SetEdgeSearchMode(int _arg)\n\nSet the edge search mode. VTK_GREEDY_EDGE_SEARCH is simple and\nfast, VTK_DIJKSTRA_EDGE_SEARCH is more robust and guaranteed to\nprovide shortest path between loop points. If the algorithm fails\nwith \"Can't follow edge\" error then switch to Dijkstra method.\nThe default is VTK_GREEDY_EDGE_SEARCH for backward compatibility.\n"},
  {"GetEdgeSearchModeMinValue", PyvtkSelectPolyData_GetEdgeSearchModeMinValue, METH_VARARGS,
   "GetEdgeSearchModeMinValue(self) -> int\nC++: virtual int GetEdgeSearchModeMinValue()\n\n"},
  {"GetEdgeSearchModeMaxValue", PyvtkSelectPolyData_GetEdgeSearchModeMaxValue, METH_VARARGS,
   "GetEdgeSearchModeMaxValue(self) -> int\nC++: virtual int GetEdgeSearchModeMaxValue()\n\n"},
  {"GetEdgeSearchMode", PyvtkSelectPolyData_GetEdgeSearchMode, METH_VARARGS,
   "GetEdgeSearchMode(self) -> int\nC++: virtual int GetEdgeSearchMode()\n\n"},
  {"SetEdgeSearchModeToGreedy", PyvtkSelectPolyData_SetEdgeSearchModeToGreedy, METH_VARARGS,
   "SetEdgeSearchModeToGreedy(self) -> None\nC++: void SetEdgeSearchModeToGreedy()\n\n"},
  {"SetEdgeSearchModeToDijkstra", PyvtkSelectPolyData_SetEdgeSearchModeToDijkstra, METH_VARARGS,
   "SetEdgeSearchModeToDijkstra(self) -> None\nC++: void SetEdgeSearchModeToDijkstra()\n\n"},
  {"GetEdgeSearchModeAsString", PyvtkSelectPolyData_GetEdgeSearchModeAsString, METH_VARARGS,
   "GetEdgeSearchModeAsString(self) -> str\nC++: const char *GetEdgeSearchModeAsString()\n\n"},
  {"SetLoop", PyvtkSelectPolyData_SetLoop, METH_VARARGS,
   "SetLoop(self, __a:vtkPoints) -> None\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"GetLoop", PyvtkSelectPolyData_GetLoop, METH_VARARGS,
   "GetLoop(self) -> vtkPoints\nC++: virtual vtkPoints *GetLoop()\n\n"},
  {"SetClosestPoint", PyvtkSelectPolyData_SetClosestPoint, METH_VARARGS,
   "SetClosestPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetClosestPoint(double _arg1, double _arg2,\n    double _arg3)\nSetClosestPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetClosestPoint(const double _arg[3])\n\nSet/Get the point used in SelectionModeToClosestPointRegion.\n"},
  {"GetClosestPoint", PyvtkSelectPolyData_GetClosestPoint, METH_VARARGS,
   "GetClosestPoint(self) -> (float, float, float)\nC++: virtual double *GetClosestPoint()\n\n"},
  {"SetSelectionMode", PyvtkSelectPolyData_SetSelectionMode, METH_VARARGS,
   "SetSelectionMode(self, _arg:int) -> None\nC++: virtual void SetSelectionMode(int _arg)\n\nControl how inside/outside of loop is defined.\n"},
  {"GetSelectionModeMinValue", PyvtkSelectPolyData_GetSelectionModeMinValue, METH_VARARGS,
   "GetSelectionModeMinValue(self) -> int\nC++: virtual int GetSelectionModeMinValue()\n\n"},
  {"GetSelectionModeMaxValue", PyvtkSelectPolyData_GetSelectionModeMaxValue, METH_VARARGS,
   "GetSelectionModeMaxValue(self) -> int\nC++: virtual int GetSelectionModeMaxValue()\n\n"},
  {"GetSelectionMode", PyvtkSelectPolyData_GetSelectionMode, METH_VARARGS,
   "GetSelectionMode(self) -> int\nC++: virtual int GetSelectionMode()\n\n"},
  {"SetSelectionModeToSmallestRegion", PyvtkSelectPolyData_SetSelectionModeToSmallestRegion, METH_VARARGS,
   "SetSelectionModeToSmallestRegion(self) -> None\nC++: void SetSelectionModeToSmallestRegion()\n\n"},
  {"SetSelectionModeToLargestRegion", PyvtkSelectPolyData_SetSelectionModeToLargestRegion, METH_VARARGS,
   "SetSelectionModeToLargestRegion(self) -> None\nC++: void SetSelectionModeToLargestRegion()\n\n"},
  {"SetSelectionModeToClosestPointRegion", PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion, METH_VARARGS,
   "SetSelectionModeToClosestPointRegion(self) -> None\nC++: void SetSelectionModeToClosestPointRegion()\n\n"},
  {"GetSelectionModeAsString", PyvtkSelectPolyData_GetSelectionModeAsString, METH_VARARGS,
   "GetSelectionModeAsString(self) -> str\nC++: const char *GetSelectionModeAsString()\n\n"},
  {"SetGenerateUnselectedOutput", PyvtkSelectPolyData_SetGenerateUnselectedOutput, METH_VARARGS,
   "SetGenerateUnselectedOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateUnselectedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {"GetGenerateUnselectedOutput", PyvtkSelectPolyData_GetGenerateUnselectedOutput, METH_VARARGS,
   "GetGenerateUnselectedOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateUnselectedOutput()\n\n"},
  {"GenerateUnselectedOutputOn", PyvtkSelectPolyData_GenerateUnselectedOutputOn, METH_VARARGS,
   "GenerateUnselectedOutputOn(self) -> None\nC++: virtual void GenerateUnselectedOutputOn()\n\n"},
  {"GenerateUnselectedOutputOff", PyvtkSelectPolyData_GenerateUnselectedOutputOff, METH_VARARGS,
   "GenerateUnselectedOutputOff(self) -> None\nC++: virtual void GenerateUnselectedOutputOff()\n\n"},
  {"GetUnselectedOutput", PyvtkSelectPolyData_GetUnselectedOutput, METH_VARARGS,
   "GetUnselectedOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetUnselectedOutput()\n\nReturn output that hasn't been selected (if\nGenreateUnselectedOutput is enabled).\n"},
  {"GetUnselectedOutputPort", PyvtkSelectPolyData_GetUnselectedOutputPort, METH_VARARGS,
   "GetUnselectedOutputPort(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetUnselectedOutputPort()\n\nReturn output port that hasn't been selected (if\nGenreateUnselectedOutput is enabled).\n"},
  {"GetSelectionEdges", PyvtkSelectPolyData_GetSelectionEdges, METH_VARARGS,
   "GetSelectionEdges(self) -> vtkPolyData\nC++: vtkPolyData *GetSelectionEdges()\n\nReturn the (mesh) edges of the selection region.\n"},
  {"GetMTime", PyvtkSelectPolyData_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSelectPolyData_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("generate_selection_scalars"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetGenerateSelectionScalars(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetGenerateSelectionScalars(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetGenerateSelectionScalars(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateSelectionScalars/SetGenerateSelectionScalars\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_scalars_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetSelectionScalarsArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetSelectionScalarsArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetSelectionScalarsArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionScalarsArrayName/SetSelectionScalarsArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("inside_out"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetInsideOut(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetInsideOut(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetInsideOut(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInsideOut/SetInsideOut\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("edge_search_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetEdgeSearchMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetEdgeSearchMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetEdgeSearchMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEdgeSearchMode/SetEdgeSearchMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("loop"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetLoop(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetLoop(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetLoop(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLoop/SetLoop\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("closest_point"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetClosestPoint(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetClosestPoint(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetClosestPoint(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetClosestPoint/SetClosestPoint\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetSelectionMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetSelectionMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetSelectionMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionMode/SetSelectionMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_unselected_output"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetGenerateUnselectedOutput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSelectPolyData_SetGenerateUnselectedOutput(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSelectPolyData_SetGenerateUnselectedOutput(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateUnselectedOutput/SetGenerateUnselectedOutput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unselected_output"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetUnselectedOutput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetUnselectedOutput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unselected_output_port"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetUnselectedOutputPort(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetUnselectedOutputPort\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_edges"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetSelectionEdges(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectionEdges\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSelectPolyData_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSelectPolyData_Doc =
  "vtkSelectPolyData - select portion of polygonal mesh; generate\nselection scalars\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSelectPolyData is a filter that selects polygonal data based on\n"
  "defining a \"loop\" and indicating the region inside of the loop. The\n"
  "mesh within the loop consists of complete cells (the cells are not\n"
  "cut). Alternatively, this filter can be used to generate scalars.\n"
  "These scalar values, which are a distance measure to the loop, can be\n"
  "used to clip, contour. or extract data (i.e., anything that an\n"
  "implicit function can do).\n\n"
  "The loop is defined by an array of x-y-z point coordinates.\n"
  "(Coordinates should be in the same coordinate space as the input\n"
  "polygonal data.) The loop can be concave and non-planar, but not\n"
  "self-intersecting. The input to the filter is a polygonal mesh (only\n"
  "surface primitives such as triangle strips and polygons); the output\n"
  "is either a) a portion of the original mesh laying within the\n"
  "selection loop (GenerateSelectionScalarsOff); or b) the same\n"
  "polygonal mesh with the addition of scalar values\n"
  "(GenerateSelectionScalarsOn).\n\n"
  "The algorithm works as follows. For each point coordinate in the\n"
  "loop, the closest point in the mesh is found. The result is a loop of\n"
  "closest point ids from the mesh. Then, the edges in the mesh\n"
  "connecting the closest points (and laying along the lines forming the\n"
  "loop) are found. Edges between the points can be searched using one\n"
  "of these methods: A) Greedy edge tracking. At the current point, the\n"
  "mesh edge oriented in the direction of and whose end point is closest\n"
  "to the line is chosen. The edge is followed to the new end point, and\n"
  "the procedure is repeated. This process continues until the entire\n"
  "loop has been created. This method is simple and fast but heuristic,\n"
  "and edge search can randomly fail (\"Can't follow edge\" error) even\n"
  "for simple, flawless meshes when edge search arrives to a point from\n"
  "where there is no edge pointing towards the next loop point. B)\n"
  "Dijkstra shortest path. This method guarantees to find the shortest\n"
  "path between the loop points.\n\n"
  "By default the greedy edge tracking method is used to preserve\n"
  "backward compatibility, but generally the Dijkstra shortest path\n"
  "method is recommended due to its robustness.\n\n"
  "To determine what portion of the mesh is inside and outside of the\n"
  "loop, three options are possible. 1) the smallest connected region,\n"
  "2) the largest connected region, and 3) the connected region closest\n"
  "   to a user specified point. (Set the ivar SelectionMode.)\n\n"
  "Once the loop is computed as above, the GenerateSelectionScalars\n"
  "controls the output of the filter. If on, then scalar values are\n"
  "generated based on distance to the loop lines. Otherwise, the cells\n"
  "laying inside the selection loop are output. By default, the mesh\n"
  "laying within the loop is output; however, if InsideOut is on, then\n"
  "the portion of the mesh laying outside of the loop is output.\n\n"
  "The filter can be configured to generate the unselected portions of\n"
  "the mesh as output by setting GenerateUnselectedOutput. Use the\n"
  "method GetUnselectedOutput to access this output. (Note: this flag is\n"
  "pertinent only when GenerateSelectionScalars is off.)\n\n"
  "@warning\n"
  "Make sure that the points you pick are on a connected surface. If\n"
  "not, then the filter will generate an empty or partial result. Also,\n"
  "self-intersecting loops will generate unpredictable results.\n\n"
  "@warning\n"
  "During processing of the data, non-triangular cells are converted to\n"
  "triangles if GenerateSelectionScalars is off.\n\n"
  "@sa\n"
  "vtkImplicitSelectionLoop\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkSelectPolyData", // tp_name
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
  PyvtkSelectPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectPolyData_StaticNew()
{
  return vtkSelectPolyData::New();
}

PyObject *PyvtkSelectPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSelectPolyData_Type, PyvtkSelectPolyData_Methods,
    "vtkSelectPolyData",
 &PyvtkSelectPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSelectPolyData_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_INSIDE_SMALLEST_REGION", 0 },
        { "VTK_INSIDE_LARGEST_REGION", 1 },
        { "VTK_INSIDE_CLOSEST_POINT_REGION", 2 },
        { "VTK_GREEDY_EDGE_SEARCH", 0 },
        { "VTK_DIJKSTRA_EDGE_SEARCH", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

