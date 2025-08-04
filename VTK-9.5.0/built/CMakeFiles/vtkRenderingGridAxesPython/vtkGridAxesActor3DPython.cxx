// python wrapper for vtkGridAxesActor3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGridAxesActor3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGridAxesActor3D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGridAxesActor3D_ClassNew(); }


static PyObject *
PyvtkGridAxesActor3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesActor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesActor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesActor3D *tempr = vtkGridAxesActor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesActor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesActor3D::NewInstance());

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
PyvtkGridAxesActor3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGridAxesActor3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGridAxesActor3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor3D_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor3D_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesActor3D_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesActor3D_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}


static PyObject *
PyvtkGridAxesActor3D_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesActor3D::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetFaceMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceMask(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetFaceMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetFaceMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFaceMask() :
      op->vtkGridAxesActor3D::GetFaceMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMask(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxesActor3D::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_UpdateGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::UpdateGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetLabelUniqueEdgesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelUniqueEdgesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelUniqueEdgesOnly(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabelUniqueEdgesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetLabelUniqueEdgesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelUniqueEdgesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelUniqueEdgesOnly() :
      op->vtkGridAxesActor3D::GetLabelUniqueEdgesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxesActor3D::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxesActor3D::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxesActor3D::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxesActor3D::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxesActor3D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetTitleTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZTitleTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkGridAxesActor3D::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXTitle(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitle(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZTitle(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetTitle(temp0) :
      &op->vtkGridAxesActor3D::GetTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomLabels(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetUseCustomLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZUseCustomLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetNumberOfLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetNumberOfXLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetNumberOfYLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetNumberOfZLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZLabels(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetNumberOfZLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  long long temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabel(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZLabel(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZLabelTextProperty(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkGridAxesActor3D::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNotation(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXNotation(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYNotation(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZNotation(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation(temp0) :
      op->vtkGridAxesActor3D::GetNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetXPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPrecision(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetXPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetYPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPrecision(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetYPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetZPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPrecision(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetZPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision(temp0) :
      op->vtkGridAxesActor3D::GetPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxesActor3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::GetBounds(temp0);
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
PyvtkGridAxesActor3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGridAxesActor3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesActor3D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkGridAxesActor3D_GetRenderedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->GetRenderedBounds(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::GetRenderedBounds(temp0);
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
PyvtkGridAxesActor3D_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkGridAxesActor3D::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkGridAxesActor3D::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkGridAxesActor3D::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxesActor3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxesActor3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxesActor3D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxesActor3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

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
      op->vtkGridAxesActor3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor3D_SetLabelDisplayOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabelDisplayOffset(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabelDisplayOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor3D_SetLabelDisplayOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLabelDisplayOffset(temp0);
    }
    else
    {
      op->vtkGridAxesActor3D::SetLabelDisplayOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor3D_SetLabelDisplayOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGridAxesActor3D_SetLabelDisplayOffset_s1(self, args);
    case 1:
      return PyvtkGridAxesActor3D_SetLabelDisplayOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelDisplayOffset");
  return nullptr;
}


static PyObject *
PyvtkGridAxesActor3D_GetLabelDisplayOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor3D *op = static_cast<vtkGridAxesActor3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLabelDisplayOffset() :
      op->vtkGridAxesActor3D::GetLabelDisplayOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesActor3D_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesActor3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesActor3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesActor3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGridAxesActor3D\nC++: static vtkGridAxesActor3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesActor3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGridAxesActor3D\nC++: vtkGridAxesActor3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGridAxesActor3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGridAxesActor3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkGridAxesActor3D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy from another vtkGridAxesActor3D.\n"},
  {"SetGridBounds", PyvtkGridAxesActor3D_SetGridBounds, METH_VARARGS,
   "SetGridBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGridBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGridBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGridBounds(const double _arg[6])\n\nSet the bounding box defining the grid space. This, together with\ntheFace identify which planar surface this class is interested\nin. This class is designed to work with a single planar surface.\n"},
  {"GetGridBounds", PyvtkGridAxesActor3D_GetGridBounds, METH_VARARGS,
   "GetGridBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGridBounds()\n\n"},
  {"SetFaceMask", PyvtkGridAxesActor3D_SetFaceMask, METH_VARARGS,
   "SetFaceMask(self, mask:int) -> None\nC++: virtual void SetFaceMask(unsigned int mask)\n\nSet the mask to select faces. The faces rendered can be a subset\nof the faces selected using the FaceMask based on the\nBackfaceCulling and FrontfaceCulling flags set on the Property.\n\nDefaults to 0.\n"},
  {"GetFaceMask", PyvtkGridAxesActor3D_GetFaceMask, METH_VARARGS,
   "GetFaceMask(self) -> int\nC++: virtual unsigned int GetFaceMask()\n\n"},
  {"SetLabelMask", PyvtkGridAxesActor3D_SetLabelMask, METH_VARARGS,
   "SetLabelMask(self, mask:int) -> None\nC++: virtual void SetLabelMask(unsigned int mask)\n\nSet the axis to label.\n\nDefault is 0xff.\n"},
  {"GetLabelMask", PyvtkGridAxesActor3D_GetLabelMask, METH_VARARGS,
   "GetLabelMask(self) -> int\nC++: unsigned int GetLabelMask()\n\n"},
  {"GetActors", PyvtkGridAxesActor3D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess. In case the viewport is not a consumer of this prop:\ncall UpdateGeometry() first for updated viewport-specific\nbillboard geometry.\n"},
  {"UpdateGeometry", PyvtkGridAxesActor3D_UpdateGeometry, METH_VARARGS,
   "UpdateGeometry(self, vp:vtkViewport) -> None\nC++: void UpdateGeometry(vtkViewport *vp)\n\nUpdates the billboard geometry without performing any rendering,\nto assist GetActors().\n"},
  {"SetLabelUniqueEdgesOnly", PyvtkGridAxesActor3D_SetLabelUniqueEdgesOnly, METH_VARARGS,
   "SetLabelUniqueEdgesOnly(self, _arg:bool) -> None\nC++: virtual void SetLabelUniqueEdgesOnly(bool _arg)\n\nSet to true to only label edges shared with 1 face. Note that if\nall faces are being rendered, this will generate no labels.\n\nDefault is true.\n"},
  {"GetLabelUniqueEdgesOnly", PyvtkGridAxesActor3D_GetLabelUniqueEdgesOnly, METH_VARARGS,
   "GetLabelUniqueEdgesOnly(self) -> bool\nC++: virtual bool GetLabelUniqueEdgesOnly()\n\n"},
  {"SetGenerateGrid", PyvtkGridAxesActor3D_SetGenerateGrid, METH_VARARGS,
   "SetGenerateGrid(self, val:bool) -> None\nC++: void SetGenerateGrid(bool val)\n\nTurn off to not generate polydata for the plane's grid.\n\nDefault is true.\n"},
  {"GetGenerateGrid", PyvtkGridAxesActor3D_GetGenerateGrid, METH_VARARGS,
   "GetGenerateGrid(self) -> bool\nC++: bool GetGenerateGrid()\n\n"},
  {"GenerateGridOn", PyvtkGridAxesActor3D_GenerateGridOn, METH_VARARGS,
   "GenerateGridOn(self) -> None\nC++: virtual void GenerateGridOn()\n\n"},
  {"GenerateGridOff", PyvtkGridAxesActor3D_GenerateGridOff, METH_VARARGS,
   "GenerateGridOff(self) -> None\nC++: virtual void GenerateGridOff()\n\n"},
  {"SetGenerateEdges", PyvtkGridAxesActor3D_SetGenerateEdges, METH_VARARGS,
   "SetGenerateEdges(self, val:bool) -> None\nC++: void SetGenerateEdges(bool val)\n\nTurn off to not generate the polydata for the plane's edges.\nWhich edges are rendered is defined by the EdgeMask.\n\nDefault is true.\n"},
  {"GetGenerateEdges", PyvtkGridAxesActor3D_GetGenerateEdges, METH_VARARGS,
   "GetGenerateEdges(self) -> bool\nC++: bool GetGenerateEdges()\n\n"},
  {"GenerateEdgesOn", PyvtkGridAxesActor3D_GenerateEdgesOn, METH_VARARGS,
   "GenerateEdgesOn(self) -> None\nC++: virtual void GenerateEdgesOn()\n\n"},
  {"GenerateEdgesOff", PyvtkGridAxesActor3D_GenerateEdgesOff, METH_VARARGS,
   "GenerateEdgesOff(self) -> None\nC++: virtual void GenerateEdgesOff()\n\n"},
  {"SetGenerateTicks", PyvtkGridAxesActor3D_SetGenerateTicks, METH_VARARGS,
   "SetGenerateTicks(self, val:bool) -> None\nC++: void SetGenerateTicks(bool val)\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n\nDefault is true.\n"},
  {"GetGenerateTicks", PyvtkGridAxesActor3D_GetGenerateTicks, METH_VARARGS,
   "GetGenerateTicks(self) -> bool\nC++: bool GetGenerateTicks()\n\n"},
  {"GenerateTicksOn", PyvtkGridAxesActor3D_GenerateTicksOn, METH_VARARGS,
   "GenerateTicksOn(self) -> None\nC++: virtual void GenerateTicksOn()\n\n"},
  {"GenerateTicksOff", PyvtkGridAxesActor3D_GenerateTicksOff, METH_VARARGS,
   "GenerateTicksOff(self) -> None\nC++: virtual void GenerateTicksOff()\n\n"},
  {"SetProperty", PyvtkGridAxesActor3D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty) -> None\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid.\n"},
  {"GetProperty", PyvtkGridAxesActor3D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: vtkProperty *GetProperty()\n\n"},
  {"SetTitleTextProperty", PyvtkGridAxesActor3D_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, axis:int, __b:vtkTextProperty) -> None\nC++: void SetTitleTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the vtkTextProperty for the title for each the axes. Note\nthat the alignment properties are not used.\n"},
  {"SetXTitleTextProperty", PyvtkGridAxesActor3D_SetXTitleTextProperty, METH_VARARGS,
   "SetXTitleTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetXTitleTextProperty(vtkTextProperty *prop)\n\n"},
  {"SetYTitleTextProperty", PyvtkGridAxesActor3D_SetYTitleTextProperty, METH_VARARGS,
   "SetYTitleTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetYTitleTextProperty(vtkTextProperty *prop)\n\n"},
  {"SetZTitleTextProperty", PyvtkGridAxesActor3D_SetZTitleTextProperty, METH_VARARGS,
   "SetZTitleTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetZTitleTextProperty(vtkTextProperty *prop)\n\n"},
  {"GetTitleTextProperty", PyvtkGridAxesActor3D_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self, axis:int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int axis)\n\n"},
  {"SetTitle", PyvtkGridAxesActor3D_SetTitle, METH_VARARGS,
   "SetTitle(self, axis:int, title:str) -> None\nC++: void SetTitle(int axis, const std::string &title)\n\nGet/Set the text to use for titles for the axis. Setting the\ntitle to an empty string will hide the title label for that axis.\n\nDefault is empty.\n"},
  {"SetXTitle", PyvtkGridAxesActor3D_SetXTitle, METH_VARARGS,
   "SetXTitle(self, title:str) -> None\nC++: void SetXTitle(const std::string &title)\n\n"},
  {"SetYTitle", PyvtkGridAxesActor3D_SetYTitle, METH_VARARGS,
   "SetYTitle(self, title:str) -> None\nC++: void SetYTitle(const std::string &title)\n\n"},
  {"SetZTitle", PyvtkGridAxesActor3D_SetZTitle, METH_VARARGS,
   "SetZTitle(self, title:str) -> None\nC++: void SetZTitle(const std::string &title)\n\n"},
  {"GetTitle", PyvtkGridAxesActor3D_GetTitle, METH_VARARGS,
   "GetTitle(self, axis:int) -> str\nC++: const std::string &GetTitle(int axis)\n\n"},
  {"SetUseCustomLabels", PyvtkGridAxesActor3D_SetUseCustomLabels, METH_VARARGS,
   "SetUseCustomLabels(self, axis:int, val:bool) -> None\nC++: void SetUseCustomLabels(int axis, bool val)\n\nSet whether the specified axis should use custom labels instead\nof automatically determined ones.\n\nDefault is false.\n"},
  {"SetXUseCustomLabels", PyvtkGridAxesActor3D_SetXUseCustomLabels, METH_VARARGS,
   "SetXUseCustomLabels(self, val:bool) -> None\nC++: void SetXUseCustomLabels(bool val)\n\n"},
  {"SetYUseCustomLabels", PyvtkGridAxesActor3D_SetYUseCustomLabels, METH_VARARGS,
   "SetYUseCustomLabels(self, val:bool) -> None\nC++: void SetYUseCustomLabels(bool val)\n\n"},
  {"SetZUseCustomLabels", PyvtkGridAxesActor3D_SetZUseCustomLabels, METH_VARARGS,
   "SetZUseCustomLabels(self, val:bool) -> None\nC++: void SetZUseCustomLabels(bool val)\n\n"},
  {"SetNumberOfLabels", PyvtkGridAxesActor3D_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, axis:int, val:int) -> None\nC++: void SetNumberOfLabels(int axis, vtkIdType val)\n\n"},
  {"SetNumberOfXLabels", PyvtkGridAxesActor3D_SetNumberOfXLabels, METH_VARARGS,
   "SetNumberOfXLabels(self, val:int) -> None\nC++: void SetNumberOfXLabels(vtkIdType val)\n\n"},
  {"SetNumberOfYLabels", PyvtkGridAxesActor3D_SetNumberOfYLabels, METH_VARARGS,
   "SetNumberOfYLabels(self, val:int) -> None\nC++: void SetNumberOfYLabels(vtkIdType val)\n\n"},
  {"SetNumberOfZLabels", PyvtkGridAxesActor3D_SetNumberOfZLabels, METH_VARARGS,
   "SetNumberOfZLabels(self, val:int) -> None\nC++: void SetNumberOfZLabels(vtkIdType val)\n\n"},
  {"SetLabel", PyvtkGridAxesActor3D_SetLabel, METH_VARARGS,
   "SetLabel(self, axis:int, index:int, value:float) -> None\nC++: void SetLabel(int axis, vtkIdType index, double value)\n\n"},
  {"SetXLabel", PyvtkGridAxesActor3D_SetXLabel, METH_VARARGS,
   "SetXLabel(self, index:int, value:float) -> None\nC++: void SetXLabel(vtkIdType index, double value)\n\n"},
  {"SetYLabel", PyvtkGridAxesActor3D_SetYLabel, METH_VARARGS,
   "SetYLabel(self, index:int, value:float) -> None\nC++: void SetYLabel(vtkIdType index, double value)\n\n"},
  {"SetZLabel", PyvtkGridAxesActor3D_SetZLabel, METH_VARARGS,
   "SetZLabel(self, index:int, value:float) -> None\nC++: void SetZLabel(vtkIdType index, double value)\n\n"},
  {"SetLabelTextProperty", PyvtkGridAxesActor3D_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, axis:int, __b:vtkTextProperty) -> None\nC++: void SetLabelTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the vtkTextProperty that governs how the axis labels are\ndisplayed. Note that the alignment properties are not used.\n"},
  {"SetXLabelTextProperty", PyvtkGridAxesActor3D_SetXLabelTextProperty, METH_VARARGS,
   "SetXLabelTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetXLabelTextProperty(vtkTextProperty *prop)\n\n"},
  {"SetYLabelTextProperty", PyvtkGridAxesActor3D_SetYLabelTextProperty, METH_VARARGS,
   "SetYLabelTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetYLabelTextProperty(vtkTextProperty *prop)\n\n"},
  {"SetZLabelTextProperty", PyvtkGridAxesActor3D_SetZLabelTextProperty, METH_VARARGS,
   "SetZLabelTextProperty(self, prop:vtkTextProperty) -> None\nC++: void SetZLabelTextProperty(vtkTextProperty *prop)\n\n"},
  {"GetLabelTextProperty", PyvtkGridAxesActor3D_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self, axis:int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int axis)\n\n"},
  {"SetNotation", PyvtkGridAxesActor3D_SetNotation, METH_VARARGS,
   "SetNotation(self, axis:int, notation:int) -> None\nC++: void SetNotation(int axis, int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n\nBy default, this is set to vtkAxis::AUTO.\n"},
  {"SetXNotation", PyvtkGridAxesActor3D_SetXNotation, METH_VARARGS,
   "SetXNotation(self, notation:int) -> None\nC++: void SetXNotation(int notation)\n\n"},
  {"SetYNotation", PyvtkGridAxesActor3D_SetYNotation, METH_VARARGS,
   "SetYNotation(self, notation:int) -> None\nC++: void SetYNotation(int notation)\n\n"},
  {"SetZNotation", PyvtkGridAxesActor3D_SetZNotation, METH_VARARGS,
   "SetZNotation(self, notation:int) -> None\nC++: void SetZNotation(int notation)\n\n"},
  {"GetNotation", PyvtkGridAxesActor3D_GetNotation, METH_VARARGS,
   "GetNotation(self, axis:int) -> int\nC++: int GetNotation(int axis)\n\n"},
  {"SetPrecision", PyvtkGridAxesActor3D_SetPrecision, METH_VARARGS,
   "SetPrecision(self, axis:int, val:int) -> None\nC++: void SetPrecision(int axis, int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"SetXPrecision", PyvtkGridAxesActor3D_SetXPrecision, METH_VARARGS,
   "SetXPrecision(self, val:int) -> None\nC++: void SetXPrecision(int val)\n\n"},
  {"SetYPrecision", PyvtkGridAxesActor3D_SetYPrecision, METH_VARARGS,
   "SetYPrecision(self, val:int) -> None\nC++: void SetYPrecision(int val)\n\n"},
  {"SetZPrecision", PyvtkGridAxesActor3D_SetZPrecision, METH_VARARGS,
   "SetZPrecision(self, val:int) -> None\nC++: void SetZPrecision(int val)\n\n"},
  {"GetPrecision", PyvtkGridAxesActor3D_GetPrecision, METH_VARARGS,
   "GetPrecision(self, axis:int) -> int\nC++: int GetPrecision(int axis)\n\n"},
  {"GetBounds", PyvtkGridAxesActor3D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nReturns the prop bounds.\n"},
  {"GetRenderedBounds", PyvtkGridAxesActor3D_GetRenderedBounds, METH_VARARGS,
   "GetRenderedBounds(self, bounds:[float, float, float, float, float,\n     float]) -> None\nC++: virtual void GetRenderedBounds(double bounds[6])\n\nGet an bounding box that is expected to contain all rendered\nelements, since GetBounds() returns the bounding box the grid\naxes describes.\n"},
  {"SetForceOpaque", PyvtkGridAxesActor3D_SetForceOpaque, METH_VARARGS,
   "SetForceOpaque(self, _arg:bool) -> None\nC++: virtual void SetForceOpaque(bool _arg)\n\nIf true, the actor will always be rendered during the opaque\npass.\n\nDefaults to false.\n"},
  {"GetForceOpaque", PyvtkGridAxesActor3D_GetForceOpaque, METH_VARARGS,
   "GetForceOpaque(self) -> bool\nC++: virtual bool GetForceOpaque()\n\n"},
  {"ForceOpaqueOn", PyvtkGridAxesActor3D_ForceOpaqueOn, METH_VARARGS,
   "ForceOpaqueOn(self) -> None\nC++: virtual void ForceOpaqueOn()\n\n"},
  {"ForceOpaqueOff", PyvtkGridAxesActor3D_ForceOpaqueOff, METH_VARARGS,
   "ForceOpaqueOff(self) -> None\nC++: virtual void ForceOpaqueOff()\n\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxesActor3D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nStandard render methods for different types of geometry\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxesActor3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxesActor3D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxesActor3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxesActor3D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nprop. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetLabelDisplayOffset", PyvtkGridAxesActor3D_SetLabelDisplayOffset, METH_VARARGS,
   "SetLabelDisplayOffset(self, xoffset:int, yoffset:int) -> None\nC++: virtual void SetLabelDisplayOffset(int xoffset, int yoffset)\nSetLabelDisplayOffset(self, offset:(int, int)) -> None\nC++: virtual void SetLabelDisplayOffset(const int offset[2])\n\nSet/Get the label display offset\n\nThis is useful to offset axes labels if they overlap at the\ncorners.\n\note Uses display space coordinates\n"},
  {"GetLabelDisplayOffset", PyvtkGridAxesActor3D_GetLabelDisplayOffset, METH_VARARGS,
   "GetLabelDisplayOffset(self) -> (int, int)\nC++: virtual int *GetLabelDisplayOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGridAxesActor3D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("grid_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetGridBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetGridBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetGridBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridBounds/SetGridBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("face_mask"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetFaceMask(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetFaceMask(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetFaceMask(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFaceMask/SetFaceMask\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_mask"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetLabelMask(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetLabelMask(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetLabelMask(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelMask/SetLabelMask\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_unique_edges_only"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetLabelUniqueEdgesOnly(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetLabelUniqueEdgesOnly(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetLabelUniqueEdgesOnly(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelUniqueEdgesOnly/SetLabelUniqueEdgesOnly\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_grid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetGenerateGrid(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetGenerateGrid(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetGenerateGrid(self, args);
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
      auto result = PyvtkGridAxesActor3D_GetGenerateEdges(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetGenerateEdges(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetGenerateEdges(self, args);
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
      auto result = PyvtkGridAxesActor3D_GetGenerateTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetGenerateTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetGenerateTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateTicks/SetGenerateTicks\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetProperty/SetProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_title_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXTitleTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXTitleTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXTitleTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_title_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYTitleTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYTitleTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYTitleTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_title_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZTitleTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZTitleTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZTitleTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_title"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXTitle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXTitle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXTitle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_title"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYTitle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYTitle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYTitle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_title"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZTitle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZTitle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZTitle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_use_custom_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXUseCustomLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXUseCustomLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXUseCustomLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_use_custom_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYUseCustomLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYUseCustomLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYUseCustomLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_use_custom_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZUseCustomLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZUseCustomLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZUseCustomLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_label_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXLabelTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXLabelTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXLabelTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_label_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYLabelTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYLabelTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYLabelTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_label_text_property"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZLabelTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZLabelTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZLabelTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("notation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_notation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_notation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_notation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("precision"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_precision"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetXPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetXPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_precision"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetYPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetYPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_precision"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetZPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetZPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("force_opaque"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetForceOpaque(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetForceOpaque(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetForceOpaque(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetForceOpaque/SetForceOpaque\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_display_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetLabelDisplayOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetLabelDisplayOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetLabelDisplayOffset(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelDisplayOffset/SetLabelDisplayOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor3D_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_x_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetNumberOfXLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetNumberOfXLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfXLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_y_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetNumberOfYLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetNumberOfYLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfYLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_z_labels"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor3D_SetNumberOfZLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor3D_SetNumberOfZLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfZLabels\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGridAxesActor3D_Doc =
  "vtkGridAxesActor3D - actor for a cube-axes like prop in the 3D view.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxesActor3D is an alternate implementation for something like\n"
  "the vtkCubeAxesActor which can be used to render a 3D grid in a\n"
  "scene. It uses vtkGridAxesActor3D to render individual axes planes\n"
  "for the box.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesActor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesActor3D", // tp_name
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
  PyvtkGridAxesActor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesActor3D_StaticNew()
{
  return vtkGridAxesActor3D::New();
}

PyObject *PyvtkGridAxesActor3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGridAxesActor3D_Type, PyvtkGridAxesActor3D_Methods,
    "vtkGridAxesActor3D",
 &PyvtkGridAxesActor3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp3D");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGridAxesActor3D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesActor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesActor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesActor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

