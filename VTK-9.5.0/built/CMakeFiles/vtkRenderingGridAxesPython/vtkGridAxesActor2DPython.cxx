// python wrapper for vtkGridAxesActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGridAxesActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGridAxesActor2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGridAxesActor2D_ClassNew(); }


static PyObject *
PyvtkGridAxesActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesActor2D *tempr = vtkGridAxesActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesActor2D::NewInstance());

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
PyvtkGridAxesActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGridAxesActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGridAxesActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor2D_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor2D_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesActor2D_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesActor2D_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}


static PyObject *
PyvtkGridAxesActor2D_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesActor2D::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxesActor2D::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxesActor2D::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxesActor2D::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxesActor2D::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_UpdateGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateGeometry(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor2D::UpdateGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkGridAxesActor2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetTitleTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkGridAxesActor2D::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkGridAxesActor2D::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetTitle(temp0) :
      &op->vtkGridAxesActor2D::GetTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotation(temp0) :
      op->vtkGridAxesActor2D::GetNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision(temp0) :
      op->vtkGridAxesActor2D::GetPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetCustomTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetCustomTickPositions(temp0, temp1);
    }
    else
    {
      op->vtkGridAxesActor2D::SetCustomTickPositions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetGenerateGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetGenerateGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateGrid() :
      op->vtkGridAxesActor2D::GetGenerateGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOn();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateGridOff();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetGenerateEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetGenerateEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdges() :
      op->vtkGridAxesActor2D::GetGenerateEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOn();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgesOff();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetGenerateTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetGenerateTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTicks() :
      op->vtkGridAxesActor2D::GetGenerateTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateTicksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOn();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateTicksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GenerateTicksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTicksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTicksOff();
    }
    else
    {
      op->vtkGridAxesActor2D::GenerateTicksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGridAxesActor2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkGridAxesActor2D::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkGridAxesActor2D::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkGridAxesActor2D::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkGridAxesActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkGridAxesActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkGridAxesActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkGridAxesActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGridAxesActor2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesActor2D_SetLabelDisplayOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetLabelDisplayOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor2D_SetLabelDisplayOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

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
      op->vtkGridAxesActor2D::SetLabelDisplayOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesActor2D_SetLabelDisplayOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGridAxesActor2D_SetLabelDisplayOffset_s1(self, args);
    case 1:
      return PyvtkGridAxesActor2D_SetLabelDisplayOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelDisplayOffset");
  return nullptr;
}


static PyObject *
PyvtkGridAxesActor2D_GetLabelDisplayOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesActor2D *op = static_cast<vtkGridAxesActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLabelDisplayOffset() :
      op->vtkGridAxesActor2D::GetLabelDisplayOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesActor2D_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGridAxesActor2D\nC++: static vtkGridAxesActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGridAxesActor2D\nC++: vtkGridAxesActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGridAxesActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGridAxesActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGridBounds", PyvtkGridAxesActor2D_SetGridBounds, METH_VARARGS,
   "SetGridBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGridBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGridBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGridBounds(const double _arg[6])\n\nSet the bounding box defining the grid space. This, together with\ntheFace identify which planar surface this class is interested\nin. This class is designed to work with a single planar surface.\n"},
  {"GetGridBounds", PyvtkGridAxesActor2D_GetGridBounds, METH_VARARGS,
   "GetGridBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxesActor2D_SetFace, METH_VARARGS,
   "SetFace(self, _arg:int) -> None\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with.\n\nDefaults to vtkGridAxesHelper::MIN_YZ.\n"},
  {"GetFaceMinValue", PyvtkGridAxesActor2D_GetFaceMinValue, METH_VARARGS,
   "GetFaceMinValue(self) -> int\nC++: virtual int GetFaceMinValue()\n\n"},
  {"GetFaceMaxValue", PyvtkGridAxesActor2D_GetFaceMaxValue, METH_VARARGS,
   "GetFaceMaxValue(self) -> int\nC++: virtual int GetFaceMaxValue()\n\n"},
  {"GetFace", PyvtkGridAxesActor2D_GetFace, METH_VARARGS,
   "GetFace(self) -> int\nC++: virtual int GetFace()\n\n"},
  {"SetLabelMask", PyvtkGridAxesActor2D_SetLabelMask, METH_VARARGS,
   "SetLabelMask(self, _arg:int) -> None\nC++: virtual void SetLabelMask(unsigned int _arg)\n\nSet the axes to label. The mask can be generated by or-ing values\nin vtkGridAxesActor2D::LabelMasks to label multiple axes. Any\nrequest to label an axes not present on the selected `Face` is\nignored e.g. if `Face` is `MIN_YZ`, then `LabelMask` set to\n`MIN_X` will have no effect.\n\nDefault is 0xff.\n"},
  {"GetLabelMask", PyvtkGridAxesActor2D_GetLabelMask, METH_VARARGS,
   "GetLabelMask(self) -> int\nC++: virtual unsigned int GetLabelMask()\n\n"},
  {"GetActors", PyvtkGridAxesActor2D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess. In case the viewport is not a consumer of this prop:\ncall UpdateGeometry() first for updated viewport-specific\nbillboard geometry.\n"},
  {"UpdateGeometry", PyvtkGridAxesActor2D_UpdateGeometry, METH_VARARGS,
   "UpdateGeometry(self, viewport:vtkViewport, doRegularUpdate:bool)\n    -> None\nC++: void UpdateGeometry(vtkViewport *viewport,\n    bool doRegularUpdate)\n\nUpdates the billboard geometry without performing any rendering,\nto assist GetActors().\n"},
  {"SetProperty", PyvtkGridAxesActor2D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty) -> None\nC++: void SetProperty(vtkProperty *)\n\nGet/Set the property used to control the appearance of the\nrendered grid, including edges.\n"},
  {"GetProperty", PyvtkGridAxesActor2D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: vtkProperty *GetProperty()\n\n"},
  {"SetTitleTextProperty", PyvtkGridAxesActor2D_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, axis:int, __b:vtkTextProperty) -> None\nC++: void SetTitleTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the title text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"GetTitleTextProperty", PyvtkGridAxesActor2D_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self, axis:int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int axis)\n\n"},
  {"SetLabelTextProperty", PyvtkGridAxesActor2D_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, axis:int, __b:vtkTextProperty) -> None\nC++: void SetLabelTextProperty(int axis, vtkTextProperty *)\n\nGet/Set the label text properties for each of the coordinate\naxes. Which properties will be used depends on the selected Face\nbeing rendered.\n"},
  {"GetLabelTextProperty", PyvtkGridAxesActor2D_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self, axis:int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int axis)\n\n"},
  {"SetTitle", PyvtkGridAxesActor2D_SetTitle, METH_VARARGS,
   "SetTitle(self, axis:int, title:str) -> None\nC++: void SetTitle(int axis, const std::string &title)\n\nSet titles for each of the axes.\n\nDefault is empty.\n"},
  {"GetTitle", PyvtkGridAxesActor2D_GetTitle, METH_VARARGS,
   "GetTitle(self, axis:int) -> str\nC++: const std::string &GetTitle(int axis)\n\n"},
  {"SetNotation", PyvtkGridAxesActor2D_SetNotation, METH_VARARGS,
   "SetNotation(self, axis:int, notation:int) -> None\nC++: void SetNotation(int axis, int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2). Accepted values are vtkAxis::AUTO, vtkAxis::FIXED,\nvtkAxis::CUSTOM.\n\nDefault is vtkAxis::AUTO\n"},
  {"GetNotation", PyvtkGridAxesActor2D_GetNotation, METH_VARARGS,
   "GetNotation(self, axis:int) -> int\nC++: int GetNotation(int axis)\n\n"},
  {"SetPrecision", PyvtkGridAxesActor2D_SetPrecision, METH_VARARGS,
   "SetPrecision(self, axis:int, val:int) -> None\nC++: void SetPrecision(int axis, int val)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {"GetPrecision", PyvtkGridAxesActor2D_GetPrecision, METH_VARARGS,
   "GetPrecision(self, axis:int) -> int\nC++: int GetPrecision(int axis)\n\n"},
  {"SetCustomTickPositions", PyvtkGridAxesActor2D_SetCustomTickPositions, METH_VARARGS,
   "SetCustomTickPositions(self, axis:int, positions:vtkDoubleArray)\n    -> None\nC++: void SetCustomTickPositions(int axis,\n    vtkDoubleArray *positions)\n\nSet custom tick positions for each of the axes. The positions are\ndeep copied. Set to nullptr to not use custom tick positions for\nthe axis.\n\nDefault is nullptr.\n"},
  {"SetGenerateGrid", PyvtkGridAxesActor2D_SetGenerateGrid, METH_VARARGS,
   "SetGenerateGrid(self, val:bool) -> None\nC++: void SetGenerateGrid(bool val)\n\nTurn off to not generate polydata for the plane's grid.\n\nDefault is true.\n"},
  {"GetGenerateGrid", PyvtkGridAxesActor2D_GetGenerateGrid, METH_VARARGS,
   "GetGenerateGrid(self) -> bool\nC++: bool GetGenerateGrid()\n\n"},
  {"GenerateGridOn", PyvtkGridAxesActor2D_GenerateGridOn, METH_VARARGS,
   "GenerateGridOn(self) -> None\nC++: virtual void GenerateGridOn()\n\n"},
  {"GenerateGridOff", PyvtkGridAxesActor2D_GenerateGridOff, METH_VARARGS,
   "GenerateGridOff(self) -> None\nC++: virtual void GenerateGridOff()\n\n"},
  {"SetGenerateEdges", PyvtkGridAxesActor2D_SetGenerateEdges, METH_VARARGS,
   "SetGenerateEdges(self, val:bool) -> None\nC++: void SetGenerateEdges(bool val)\n\nTurn off to not generate the polydata for the plane's edges.\n\nDefault is true.\n"},
  {"GetGenerateEdges", PyvtkGridAxesActor2D_GetGenerateEdges, METH_VARARGS,
   "GetGenerateEdges(self) -> bool\nC++: bool GetGenerateEdges()\n\n"},
  {"GenerateEdgesOn", PyvtkGridAxesActor2D_GenerateEdgesOn, METH_VARARGS,
   "GenerateEdgesOn(self) -> None\nC++: virtual void GenerateEdgesOn()\n\n"},
  {"GenerateEdgesOff", PyvtkGridAxesActor2D_GenerateEdgesOff, METH_VARARGS,
   "GenerateEdgesOff(self) -> None\nC++: virtual void GenerateEdgesOff()\n\n"},
  {"SetGenerateTicks", PyvtkGridAxesActor2D_SetGenerateTicks, METH_VARARGS,
   "SetGenerateTicks(self, val:bool) -> None\nC++: void SetGenerateTicks(bool val)\n\nTurn off to not generate the markers for the tick positions.\nWhich edges are rendered is defined by the TickMask.\n\nDefault is true.\n"},
  {"GetGenerateTicks", PyvtkGridAxesActor2D_GetGenerateTicks, METH_VARARGS,
   "GetGenerateTicks(self) -> bool\nC++: bool GetGenerateTicks()\n\n"},
  {"GenerateTicksOn", PyvtkGridAxesActor2D_GenerateTicksOn, METH_VARARGS,
   "GenerateTicksOn(self) -> None\nC++: virtual void GenerateTicksOn()\n\n"},
  {"GenerateTicksOff", PyvtkGridAxesActor2D_GenerateTicksOff, METH_VARARGS,
   "GenerateTicksOff(self) -> None\nC++: virtual void GenerateTicksOff()\n\n"},
  {"GetBounds", PyvtkGridAxesActor2D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturns the prop bounds.\n"},
  {"SetForceOpaque", PyvtkGridAxesActor2D_SetForceOpaque, METH_VARARGS,
   "SetForceOpaque(self, _arg:bool) -> None\nC++: virtual void SetForceOpaque(bool _arg)\n\nIf true, the actor will always be rendered during the opaque\npass.\n\nDefault is false.\n"},
  {"GetForceOpaque", PyvtkGridAxesActor2D_GetForceOpaque, METH_VARARGS,
   "GetForceOpaque(self) -> bool\nC++: virtual bool GetForceOpaque()\n\n"},
  {"ForceOpaqueOn", PyvtkGridAxesActor2D_ForceOpaqueOn, METH_VARARGS,
   "ForceOpaqueOn(self) -> None\nC++: virtual void ForceOpaqueOn()\n\n"},
  {"ForceOpaqueOff", PyvtkGridAxesActor2D_ForceOpaqueOff, METH_VARARGS,
   "ForceOpaqueOff(self) -> None\nC++: virtual void ForceOpaqueOff()\n\n"},
  {"RenderOpaqueGeometry", PyvtkGridAxesActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nStandard render methods for different types of geometry\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkGridAxesActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkGridAxesActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkGridAxesActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkGridAxesActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nprop. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMTime", PyvtkGridAxesActor2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include the mtime for the text properties.\n"},
  {"SetLabelDisplayOffset", PyvtkGridAxesActor2D_SetLabelDisplayOffset, METH_VARARGS,
   "SetLabelDisplayOffset(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetLabelDisplayOffset(int _arg1, int _arg2)\nSetLabelDisplayOffset(self, _arg:(int, int)) -> None\nC++: void SetLabelDisplayOffset(const int _arg[2])\n\nSet/Get the label display offset\n\nThis is useful to offset axes labels if they overlap at the\ncorners.\n\nDefaults to [0, 0]\n\note Uses display space coordinates\n"},
  {"GetLabelDisplayOffset", PyvtkGridAxesActor2D_GetLabelDisplayOffset, METH_VARARGS,
   "GetLabelDisplayOffset(self) -> (int, int)\nC++: virtual int *GetLabelDisplayOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGridAxesActor2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("grid_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetGridBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetGridBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetGridBounds(self, args);
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
      auto result = PyvtkGridAxesActor2D_GetFace(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetFace(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetFace(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFace/SetFace\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_mask"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetLabelMask(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetLabelMask(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetLabelMask(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelMask/SetLabelMask\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetProperty/SetProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("notation"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("precision"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_grid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetGenerateGrid(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetGenerateGrid(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetGenerateGrid(self, args);
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
      auto result = PyvtkGridAxesActor2D_GetGenerateEdges(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetGenerateEdges(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetGenerateEdges(self, args);
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
      auto result = PyvtkGridAxesActor2D_GetGenerateTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetGenerateTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetGenerateTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateTicks/SetGenerateTicks\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("force_opaque"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetForceOpaque(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetForceOpaque(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetForceOpaque(self, args);
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
      auto result = PyvtkGridAxesActor2D_GetLabelDisplayOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesActor2D_SetLabelDisplayOffset(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesActor2D_SetLabelDisplayOffset(self, args);
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
      auto result = PyvtkGridAxesActor2D_GetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesActor2D_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGridAxesActor2D_Doc =
  "vtkGridAxesActor2D - actor for an axes plane in a 3D view.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkGridAxesActor2D is a vtkProp3D that renders a single axes plane\n"
  "(or face). Despite the name, it renders a prop in 3D with ability to\n"
  "render lines for the axes bounds along with labels on them.\n\n"
  "To use this, one sets the `GridBounds` and then the `Face` which\n"
  "identifies the face of the cube defined by the `GridBounds` along\n"
  "which this prop will render the grid. Parameters available allow\n"
  "additional controls including labeling, grid rendering, edge\n"
  "rendering etc.\n\n"
  "@sa vtkGridAxesActor3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesActor2D", // tp_name
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
  PyvtkGridAxesActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesActor2D_StaticNew()
{
  return vtkGridAxesActor2D::New();
}

PyObject *PyvtkGridAxesActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGridAxesActor2D_Type, PyvtkGridAxesActor2D_Methods,
    "vtkGridAxesActor2D",
 &PyvtkGridAxesActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp3D");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGridAxesActor2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

