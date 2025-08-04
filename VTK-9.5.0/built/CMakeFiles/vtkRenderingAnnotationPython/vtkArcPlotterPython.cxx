// python wrapper for vtkArcPlotter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkArcPlotter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkArcPlotter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkArcPlotter_ClassNew(); }


static PyObject *
PyvtkArcPlotter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArcPlotter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArcPlotter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArcPlotter *tempr = vtkArcPlotter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArcPlotter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArcPlotter::NewInstance());

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
PyvtkArcPlotter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArcPlotter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArcPlotter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkArcPlotter::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotMode(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetPlotMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotMode() :
      op->vtkArcPlotter::GetPlotMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotScalars();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotVectors();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotNormals();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotNormals();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotTCoords();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotTCoords();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotTensors();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotTensors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlotModeToPlotFieldData();
    }
    else
    {
      op->vtkArcPlotter::SetPlotModeToPlotFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotComponent(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetPlotComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotComponent() :
      op->vtkArcPlotter::GetPlotComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

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
      op->vtkArcPlotter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkArcPlotter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkArcPlotter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkArcPlotter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkArcPlotter::GetHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkArcPlotter::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkArcPlotter::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkArcPlotter::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkArcPlotter::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkArcPlotter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDefaultNormal(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetUseDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkArcPlotter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOn();
    }
    else
    {
      op->vtkArcPlotter::UseDefaultNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOff();
    }
    else
    {
      op->vtkArcPlotter::UseDefaultNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArcPlotter::SetDefaultNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormal(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcPlotter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkArcPlotter_SetDefaultNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return nullptr;
}


static PyObject *
PyvtkArcPlotter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkArcPlotter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataArray(temp0);
    }
    else
    {
      op->vtkArcPlotter::SetFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMinValue() :
      op->vtkArcPlotter::GetFieldDataArrayMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMaxValue() :
      op->vtkArcPlotter::GetFieldDataArrayMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArray() :
      op->vtkArcPlotter::GetFieldDataArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkArcPlotter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArcPlotter_Methods[] = {
  {"IsTypeOf", PyvtkArcPlotter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArcPlotter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArcPlotter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArcPlotter\nC++: static vtkArcPlotter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArcPlotter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArcPlotter\nC++: vtkArcPlotter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArcPlotter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArcPlotter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCamera", PyvtkArcPlotter_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera used to orient the plot along the arc. If no\ncamera is specified, then the orientation of the plot is\narbitrary.\n"},
  {"GetCamera", PyvtkArcPlotter_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\n"},
  {"SetPlotMode", PyvtkArcPlotter_SetPlotMode, METH_VARARGS,
   "SetPlotMode(self, _arg:int) -> None\nC++: virtual void SetPlotMode(int _arg)\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {"GetPlotMode", PyvtkArcPlotter_GetPlotMode, METH_VARARGS,
   "GetPlotMode(self) -> int\nC++: virtual int GetPlotMode()\n\n"},
  {"SetPlotModeToPlotScalars", PyvtkArcPlotter_SetPlotModeToPlotScalars, METH_VARARGS,
   "SetPlotModeToPlotScalars(self) -> None\nC++: void SetPlotModeToPlotScalars()\n\n"},
  {"SetPlotModeToPlotVectors", PyvtkArcPlotter_SetPlotModeToPlotVectors, METH_VARARGS,
   "SetPlotModeToPlotVectors(self) -> None\nC++: void SetPlotModeToPlotVectors()\n\n"},
  {"SetPlotModeToPlotNormals", PyvtkArcPlotter_SetPlotModeToPlotNormals, METH_VARARGS,
   "SetPlotModeToPlotNormals(self) -> None\nC++: void SetPlotModeToPlotNormals()\n\n"},
  {"SetPlotModeToPlotTCoords", PyvtkArcPlotter_SetPlotModeToPlotTCoords, METH_VARARGS,
   "SetPlotModeToPlotTCoords(self) -> None\nC++: void SetPlotModeToPlotTCoords()\n\n"},
  {"SetPlotModeToPlotTensors", PyvtkArcPlotter_SetPlotModeToPlotTensors, METH_VARARGS,
   "SetPlotModeToPlotTensors(self) -> None\nC++: void SetPlotModeToPlotTensors()\n\n"},
  {"SetPlotModeToPlotFieldData", PyvtkArcPlotter_SetPlotModeToPlotFieldData, METH_VARARGS,
   "SetPlotModeToPlotFieldData(self) -> None\nC++: void SetPlotModeToPlotFieldData()\n\n"},
  {"SetPlotComponent", PyvtkArcPlotter_SetPlotComponent, METH_VARARGS,
   "SetPlotComponent(self, _arg:int) -> None\nC++: virtual void SetPlotComponent(int _arg)\n\nSet/Get the component number to plot if the data has more than\none component. If the value of the plot component is == (-1),\nthen all the components will be plotted.\n"},
  {"GetPlotComponent", PyvtkArcPlotter_GetPlotComponent, METH_VARARGS,
   "GetPlotComponent(self) -> int\nC++: virtual int GetPlotComponent()\n\n"},
  {"SetRadius", PyvtkArcPlotter_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {"GetRadiusMinValue", PyvtkArcPlotter_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkArcPlotter_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkArcPlotter_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetHeight", PyvtkArcPlotter_SetHeight, METH_VARARGS,
   "SetHeight(self, _arg:float) -> None\nC++: virtual void SetHeight(double _arg)\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {"GetHeightMinValue", PyvtkArcPlotter_GetHeightMinValue, METH_VARARGS,
   "GetHeightMinValue(self) -> float\nC++: virtual double GetHeightMinValue()\n\n"},
  {"GetHeightMaxValue", PyvtkArcPlotter_GetHeightMaxValue, METH_VARARGS,
   "GetHeightMaxValue(self) -> float\nC++: virtual double GetHeightMaxValue()\n\n"},
  {"GetHeight", PyvtkArcPlotter_GetHeight, METH_VARARGS,
   "GetHeight(self) -> float\nC++: virtual double GetHeight()\n\n"},
  {"SetOffset", PyvtkArcPlotter_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg:float) -> None\nC++: virtual void SetOffset(double _arg)\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {"GetOffsetMinValue", PyvtkArcPlotter_GetOffsetMinValue, METH_VARARGS,
   "GetOffsetMinValue(self) -> float\nC++: virtual double GetOffsetMinValue()\n\n"},
  {"GetOffsetMaxValue", PyvtkArcPlotter_GetOffsetMaxValue, METH_VARARGS,
   "GetOffsetMaxValue(self) -> float\nC++: virtual double GetOffsetMaxValue()\n\n"},
  {"GetOffset", PyvtkArcPlotter_GetOffset, METH_VARARGS,
   "GetOffset(self) -> float\nC++: virtual double GetOffset()\n\n"},
  {"SetUseDefaultNormal", PyvtkArcPlotter_SetUseDefaultNormal, METH_VARARGS,
   "SetUseDefaultNormal(self, _arg:int) -> None\nC++: virtual void SetUseDefaultNormal(vtkTypeBool _arg)\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {"GetUseDefaultNormal", PyvtkArcPlotter_GetUseDefaultNormal, METH_VARARGS,
   "GetUseDefaultNormal(self) -> int\nC++: virtual vtkTypeBool GetUseDefaultNormal()\n\n"},
  {"UseDefaultNormalOn", PyvtkArcPlotter_UseDefaultNormalOn, METH_VARARGS,
   "UseDefaultNormalOn(self) -> None\nC++: virtual void UseDefaultNormalOn()\n\n"},
  {"UseDefaultNormalOff", PyvtkArcPlotter_UseDefaultNormalOff, METH_VARARGS,
   "UseDefaultNormalOff(self) -> None\nC++: virtual void UseDefaultNormalOff()\n\n"},
  {"SetDefaultNormal", PyvtkArcPlotter_SetDefaultNormal, METH_VARARGS,
   "SetDefaultNormal(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDefaultNormal(float _arg1, float _arg2,\n    float _arg3)\nSetDefaultNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultNormal(const float _arg[3])\n\nSet the default normal to use if you do not wish automatic normal\ncalculation. The arc plot will be generated using this normal.\n"},
  {"GetDefaultNormal", PyvtkArcPlotter_GetDefaultNormal, METH_VARARGS,
   "GetDefaultNormal(self) -> (float, float, float)\nC++: virtual float *GetDefaultNormal()\n\n"},
  {"SetFieldDataArray", PyvtkArcPlotter_SetFieldDataArray, METH_VARARGS,
   "SetFieldDataArray(self, _arg:int) -> None\nC++: virtual void SetFieldDataArray(int _arg)\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {"GetFieldDataArrayMinValue", PyvtkArcPlotter_GetFieldDataArrayMinValue, METH_VARARGS,
   "GetFieldDataArrayMinValue(self) -> int\nC++: virtual int GetFieldDataArrayMinValue()\n\n"},
  {"GetFieldDataArrayMaxValue", PyvtkArcPlotter_GetFieldDataArrayMaxValue, METH_VARARGS,
   "GetFieldDataArrayMaxValue(self) -> int\nC++: virtual int GetFieldDataArrayMaxValue()\n\n"},
  {"GetFieldDataArray", PyvtkArcPlotter_GetFieldDataArray, METH_VARARGS,
   "GetFieldDataArray(self) -> int\nC++: virtual int GetFieldDataArray()\n\n"},
  {"GetMTime", PyvtkArcPlotter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nNew GetMTime because of camera dependency.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkArcPlotter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("camera"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetCamera(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetCamera(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetCamera(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCamera/SetCamera\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("plot_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetPlotMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetPlotMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetPlotMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPlotMode/SetPlotMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("plot_component"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetPlotComponent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetPlotComponent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetPlotComponent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPlotComponent/SetPlotComponent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRadius/SetRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("height"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetHeight(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetHeight(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetHeight(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHeight/SetHeight\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOffset/SetOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_default_normal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetUseDefaultNormal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetUseDefaultNormal(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetUseDefaultNormal(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseDefaultNormal/SetUseDefaultNormal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("default_normal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetDefaultNormal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetDefaultNormal(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetDefaultNormal(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDefaultNormal/SetDefaultNormal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_data_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetFieldDataArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArcPlotter_SetFieldDataArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArcPlotter_SetFieldDataArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFieldDataArray/SetFieldDataArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArcPlotter_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkArcPlotter_Doc =
  "vtkArcPlotter - plot data along an arbitrary polyline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkArcPlotter performs plotting of attribute data along polylines\n"
  "defined with an input vtkPolyData data object. Any type of attribute\n"
  "data can be plotted including scalars, vectors, tensors, normals,\n"
  "texture coordinates, and field data. Either one or multiple data\n"
  "components can be plotted.\n\n"
  "To use this class you must specify an input data set that contains\n"
  "one or more polylines, and some attribute data including which\n"
  "component of the attribute data. (By default, this class processes\n"
  "the first component of scalar data.) You will also need to set an\n"
  "offset radius (the distance of the polyline to the median line of the\n"
  "plot), a width for the plot (the distance that the minimum and\n"
  "maximum plot values are mapped into), an possibly an offset (used to\n"
  "offset attribute data with multiple components).\n\n"
  "Normally the filter automatically computes normals for generating the\n"
  "offset arc plot. However, you can specify a default normal and use\n"
  "that instead.\n\n"
  "@sa\n"
  "vtkXYPlotActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArcPlotter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkArcPlotter", // tp_name
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
  PyvtkArcPlotter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArcPlotter_StaticNew()
{
  return vtkArcPlotter::New();
}

PyObject *PyvtkArcPlotter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArcPlotter_Type, PyvtkArcPlotter_Methods,
    "vtkArcPlotter",
 &PyvtkArcPlotter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkArcPlotter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArcPlotter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArcPlotter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArcPlotter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_PLOT_SCALARS", 1 },
        { "VTK_PLOT_VECTORS", 2 },
        { "VTK_PLOT_NORMALS", 3 },
        { "VTK_PLOT_TCOORDS", 4 },
        { "VTK_PLOT_TENSORS", 5 },
        { "VTK_PLOT_FIELD_DATA", 6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

