// python wrapper for vtkGridAxesPlaneActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGridAxesPlaneActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGridAxesPlaneActor2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGridAxesPlaneActor2D_ClassNew(); }


static PyObject *
PyvtkGridAxesPlaneActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesPlaneActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesPlaneActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesPlaneActor2D *tempr = vtkGridAxesPlaneActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesPlaneActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesPlaneActor2D::NewInstance());

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
PyvtkGridAxesPlaneActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGridAxesPlaneActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGridAxesPlaneActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesPlaneActor2D_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesPlaneActor2D_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesPlaneActor2D_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesPlaneActor2D_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesPlaneActor2D::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFace(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxesPlaneActor2D::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxesPlaneActor2D::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxesPlaneActor2D::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_UpdateGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->UpdateGeometry(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::UpdateGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateGrid(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxesPlaneActor2D::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdges(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxesPlaneActor2D::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTicks(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxesPlaneActor2D::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetTickDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickDirection(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetTickDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetTickDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirectionMinValue() :
      op->vtkGridAxesPlaneActor2D::GetTickDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetTickDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirectionMaxValue() :
      op->vtkGridAxesPlaneActor2D::GetTickDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetTickDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTickDirection() :
      op->vtkGridAxesPlaneActor2D::GetTickDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetTickPositions(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetTickPositions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkGridAxesPlaneActor2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxesPlaneActor2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxesPlaneActor2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxesPlaneActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxesPlaneActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxesPlaneActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxesPlaneActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesPlaneActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesPlaneActor2D *op = static_cast<vtkGridAxesPlaneActor2D *>(vp);

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
      op->vtkGridAxesPlaneActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesPlaneActor2D_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesPlaneActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesPlaneActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesPlaneActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGridAxesPlaneActor2D\nC++: static vtkGridAxesPlaneActor2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesPlaneActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGridAxesPlaneActor2D\nC++: vtkGridAxesPlaneActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGridAxesPlaneActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGridAxesPlaneActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGridBounds", PyvtkGridAxesPlaneActor2D_SetGridBounds, METH_VARARGS,
   "SetGridBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGridBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGridBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGridBounds(const double _arg[6])\n\nSet the bounding box defining the grid space. This, together with\ntheFace identify which planar surface this class is interested\nin. This class is designed to work with a single planar surface.\nNote: this is only needed/used when the vtkGridAxesHelper is not\nprovided when calling New(), otherwise the vtkGridAxesHelper is\nassumed to be initialized externally.\n"},
  {"GetGridBounds", PyvtkGridAxesPlaneActor2D_GetGridBounds, METH_VARARGS,
   "GetGridBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxesPlaneActor2D_SetFace, METH_VARARGS,
   "SetFace(self, _arg:int) -> None\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with. Note: this is only needed/used when the\nvtkGridAxesHelper is not provided when calling New(), otherwise\nthe vtkGridAxesHelper is assumed to be initialized externally.\n\nBy default, Face is vtkGridAxesHelper::MIN_YZ.\n"},
  {"GetFaceMinValue", PyvtkGridAxesPlaneActor2D_GetFaceMinValue, METH_VARARGS,
   "GetFaceMinValue(self) -> int\nC++: virtual int GetFaceMinValue()\n\n"},
  {"GetFaceMaxValue", PyvtkGridAxesPlaneActor2D_GetFaceMaxValue, METH_VARARGS,
   "GetFaceMaxValue(self) -> int\nC++: virtual int GetFaceMaxValue()\n\n"},
  {"GetFace", PyvtkGridAxesPlaneActor2D_GetFace, METH_VARARGS,
   "GetFace(self) -> int\nC++: virtual int GetFace()\n\n"},
  {"GetActors", PyvtkGridAxesPlaneActor2D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess. In case the viewport is not a consumer of this prop:\ncall UpdateGeometry() first for updated viewport-specific\nbillboard geometry.\n"},
  {"UpdateGeometry", PyvtkGridAxesPlaneActor2D_UpdateGeometry, METH_VARARGS,
   "UpdateGeometry(self, vp:vtkViewport) -> None\nC++: void UpdateGeometry(vtkViewport *vp)\n\nUpdates the billboard geometry without performing any rendering,\nto assist GetActors().\n"},
  {"SetGenerateGrid", PyvtkGridAxesPlaneActor2D_SetGenerateGrid, METH_VARARGS,
   "SetGenerateGrid(self, _arg:bool) -> None\nC++: virtual void SetGenerateGrid(bool _arg)\n\nGet/Set whether to generate lines for the plane's grid. Default\nis true.\n"},
  {"GetGenerateGrid", PyvtkGridAxesPlaneActor2D_GetGenerateGrid, METH_VARARGS,
   "GetGenerateGrid(self) -> bool\nC++: virtual bool GetGenerateGrid()\n\n"},
  {"GenerateGridOn", PyvtkGridAxesPlaneActor2D_GenerateGridOn, METH_VARARGS,
   "GenerateGridOn(self) -> None\nC++: virtual void GenerateGridOn()\n\n"},
  {"GenerateGridOff", PyvtkGridAxesPlaneActor2D_GenerateGridOff, METH_VARARGS,
   "GenerateGridOff(self) -> None\nC++: virtual void GenerateGridOff()\n\n"},
  {"SetGenerateEdges", PyvtkGridAxesPlaneActor2D_SetGenerateEdges, METH_VARARGS,
   "SetGenerateEdges(self, _arg:bool) -> None\nC++: virtual void SetGenerateEdges(bool _arg)\n\nGet/Set whether to generate the polydata for the plane's edges.\nDefault is true.\n"},
  {"GetGenerateEdges", PyvtkGridAxesPlaneActor2D_GetGenerateEdges, METH_VARARGS,
   "GetGenerateEdges(self) -> bool\nC++: virtual bool GetGenerateEdges()\n\n"},
  {"GenerateEdgesOn", PyvtkGridAxesPlaneActor2D_GenerateEdgesOn, METH_VARARGS,
   "GenerateEdgesOn(self) -> None\nC++: virtual void GenerateEdgesOn()\n\n"},
  {"GenerateEdgesOff", PyvtkGridAxesPlaneActor2D_GenerateEdgesOff, METH_VARARGS,
   "GenerateEdgesOff(self) -> None\nC++: virtual void GenerateEdgesOff()\n\n"},
  {"SetGenerateTicks", PyvtkGridAxesPlaneActor2D_SetGenerateTicks, METH_VARARGS,
   "SetGenerateTicks(self, _arg:bool) -> None\nC++: virtual void SetGenerateTicks(bool _arg)\n\nGet/Set whether to generate tick markers for the tick positions.\nDefault is true.\n"},
  {"GetGenerateTicks", PyvtkGridAxesPlaneActor2D_GetGenerateTicks, METH_VARARGS,
   "GetGenerateTicks(self) -> bool\nC++: virtual bool GetGenerateTicks()\n\n"},
  {"GenerateTicksOn", PyvtkGridAxesPlaneActor2D_GenerateTicksOn, METH_VARARGS,
   "GenerateTicksOn(self) -> None\nC++: virtual void GenerateTicksOn()\n\n"},
  {"GenerateTicksOff", PyvtkGridAxesPlaneActor2D_GenerateTicksOff, METH_VARARGS,
   "GenerateTicksOff(self) -> None\nC++: virtual void GenerateTicksOff()\n\n"},
  {"SetTickDirection", PyvtkGridAxesPlaneActor2D_SetTickDirection, METH_VARARGS,
   "SetTickDirection(self, _arg:int) -> None\nC++: virtual void SetTickDirection(unsigned int _arg)\n\nGet/Set the tick direction.\n\nBy defaule, it is TICK_DIRECTION_BOTH.\n"},
  {"GetTickDirectionMinValue", PyvtkGridAxesPlaneActor2D_GetTickDirectionMinValue, METH_VARARGS,
   "GetTickDirectionMinValue(self) -> int\nC++: virtual unsigned int GetTickDirectionMinValue()\n\n"},
  {"GetTickDirectionMaxValue", PyvtkGridAxesPlaneActor2D_GetTickDirectionMaxValue, METH_VARARGS,
   "GetTickDirectionMaxValue(self) -> int\nC++: virtual unsigned int GetTickDirectionMaxValue()\n\n"},
  {"GetTickDirection", PyvtkGridAxesPlaneActor2D_GetTickDirection, METH_VARARGS,
   "GetTickDirection(self) -> int\nC++: virtual unsigned int GetTickDirection()\n\n"},
  {"SetTickPositions", PyvtkGridAxesPlaneActor2D_SetTickPositions, METH_VARARGS,
   "SetTickPositions(self, axis:int, data:vtkDoubleArray) -> None\nC++: void SetTickPositions(int axis, vtkDoubleArray *data)\n\nSet the tick positions for each of the coordinate axis. Which\ntick positions get used depended on the face being rendered e.g.\nif Face is MIN_XY, then the tick positions for Z-axis i.e. axis=2\nwill not be used and hence need not be specified. Pass nullptr\nfor data will clear the ticks positions for that axis. Note: This\ncreates a deep-copy of the values in data and stores that.\n\nDefault is an empty vector.\n"},
  {"SetProperty", PyvtkGridAxesPlaneActor2D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty) -> None\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n\nInternally, this property is set on the actor representing the\ngrid.\n"},
  {"GetProperty", PyvtkGridAxesPlaneActor2D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: vtkProperty *GetProperty()\n\n"},
  {"GetBounds", PyvtkGridAxesPlaneActor2D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturns the prop bounds.\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxesPlaneActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nStandard render methods for different types of geometry\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxesPlaneActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxesPlaneActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxesPlaneActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxesPlaneActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nprop. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGridAxesPlaneActor2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("grid_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetGridBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetGridBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetGridBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridBounds/SetGridBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("face"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetFace(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetFace(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetFace(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFace/SetFace\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_grid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetGenerateGrid(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateGrid(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateGrid(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateGrid/SetGenerateGrid\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_edges"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetGenerateEdges(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateEdges(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateEdges(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateEdges/SetGenerateEdges\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_ticks"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetGenerateTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetGenerateTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateTicks/SetGenerateTicks\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tick_direction"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetTickDirection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetTickDirection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetTickDirection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTickDirection/SetTickDirection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesPlaneActor2D_SetProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesPlaneActor2D_SetProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetProperty/SetProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesPlaneActor2D_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGridAxesPlaneActor2D_Doc =
  "vtkGridAxesPlaneActor2D - renders a 2D grid for vtkGridAxesActor2D.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxesPlaneActor2D is designed for use by vtkGridAxesActor2D to\n"
  "render the wireframe for the grid plane. It can also be used directly\n"
  "to render such a wireframe in a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesPlaneActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesPlaneActor2D", // tp_name
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
  PyvtkGridAxesPlaneActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesPlaneActor2D_StaticNew()
{
  return vtkGridAxesPlaneActor2D::New();
}

PyObject *PyvtkGridAxesPlaneActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGridAxesPlaneActor2D_Type, PyvtkGridAxesPlaneActor2D_Methods,
    "vtkGridAxesPlaneActor2D",
 &PyvtkGridAxesPlaneActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp3D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "TICK_DIRECTION_INWARDS", vtkGridAxesPlaneActor2D::TICK_DIRECTION_INWARDS },
        { "TICK_DIRECTION_OUTWARDS", vtkGridAxesPlaneActor2D::TICK_DIRECTION_OUTWARDS },
        { "TICK_DIRECTION_BOTH", vtkGridAxesPlaneActor2D::TICK_DIRECTION_BOTH },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGridAxesPlaneActor2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesPlaneActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesPlaneActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesPlaneActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

