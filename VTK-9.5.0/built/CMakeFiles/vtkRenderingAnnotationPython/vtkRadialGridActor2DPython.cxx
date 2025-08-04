// python wrapper for vtkRadialGridActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRadialGridActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkRadialGridActor2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkRadialGridActor2D_ClassNew(); }


static PyObject *
PyvtkRadialGridActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRadialGridActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRadialGridActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRadialGridActor2D *tempr = vtkRadialGridActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRadialGridActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRadialGridActor2D::NewInstance());

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
PyvtkRadialGridActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRadialGridActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRadialGridActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkRadialGridActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkRadialGridActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkRadialGridActor2D::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkRadialGridActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkRadialGridActor2D::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAxes(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetNumberOfAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfAxesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxesMinValue() :
      op->vtkRadialGridActor2D::GetNumberOfAxesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfAxesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxesMaxValue() :
      op->vtkRadialGridActor2D::GetNumberOfAxesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkRadialGridActor2D::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartAngle(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngle() :
      op->vtkRadialGridActor2D::GetStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndAngle(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetEndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngle() :
      op->vtkRadialGridActor2D::GetEndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1);
    }
    else
    {
      op->vtkRadialGridActor2D::SetOrigin(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRadialGridActor2D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRadialGridActor2D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRadialGridActor2D_SetOrigin_s1(self, args);
    case 1:
      return PyvtkRadialGridActor2D_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkRadialGridActor2D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkRadialGridActor2D::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTicks(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetNumberOfTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicksMinValue() :
      op->vtkRadialGridActor2D::GetNumberOfTicksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicksMaxValue() :
      op->vtkRadialGridActor2D::GetNumberOfTicksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicks() :
      op->vtkRadialGridActor2D::GetNumberOfTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_SetAxesViewportLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesViewportLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxesViewportLength(temp0);
    }
    else
    {
      op->vtkRadialGridActor2D::SetAxesViewportLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetAxesViewportLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesViewportLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxesViewportLengthMinValue() :
      op->vtkRadialGridActor2D::GetAxesViewportLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetAxesViewportLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesViewportLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxesViewportLengthMaxValue() :
      op->vtkRadialGridActor2D::GetAxesViewportLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetAxesViewportLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesViewportLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxesViewportLength() :
      op->vtkRadialGridActor2D::GetAxesViewportLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetFirstAxesPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstAxesPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetFirstAxesPoints() :
      op->vtkRadialGridActor2D::GetFirstAxesPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRadialGridActor2D_GetLastAxesPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAxesPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRadialGridActor2D *op = static_cast<vtkRadialGridActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLastAxesPoints() :
      op->vtkRadialGridActor2D::GetLastAxesPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRadialGridActor2D_Methods[] = {
  {"IsTypeOf", PyvtkRadialGridActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRadialGridActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRadialGridActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRadialGridActor2D\nC++: static vtkRadialGridActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRadialGridActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRadialGridActor2D\nC++: vtkRadialGridActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRadialGridActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRadialGridActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOverlay", PyvtkRadialGridActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderOpaqueGeometry", PyvtkRadialGridActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nOverridden as a no-op. Needed to avoid warnings/errors from\nSuperclass. Return 1.\n"},
  {"HasOpaqueGeometry", PyvtkRadialGridActor2D_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> int\nC++: vtkTypeBool HasOpaqueGeometry() override;\n\nNo opaque geometry for this actor. Return 0.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkRadialGridActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nNo translucent geometry for this actor. Return 0.\n"},
  {"GetActors2D", PyvtkRadialGridActor2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, pc:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *pc) override;\n\nAppend the underlying 2D actors to the collection.\n"},
  {"SetTextProperty", PyvtkRadialGridActor2D_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, property:vtkTextProperty) -> None\nC++: void SetTextProperty(vtkTextProperty *property)\n\nSet/Get a text property on the underlying axes labels.\n"},
  {"GetTextProperty", PyvtkRadialGridActor2D_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\n"},
  {"SetNumberOfAxes", PyvtkRadialGridActor2D_SetNumberOfAxes, METH_VARARGS,
   "SetNumberOfAxes(self, _arg:int) -> None\nC++: virtual void SetNumberOfAxes(int _arg)\n\nSet/Get the number of axis of the grid. Default is 6.\n"},
  {"GetNumberOfAxesMinValue", PyvtkRadialGridActor2D_GetNumberOfAxesMinValue, METH_VARARGS,
   "GetNumberOfAxesMinValue(self) -> int\nC++: virtual int GetNumberOfAxesMinValue()\n\n"},
  {"GetNumberOfAxesMaxValue", PyvtkRadialGridActor2D_GetNumberOfAxesMaxValue, METH_VARARGS,
   "GetNumberOfAxesMaxValue(self) -> int\nC++: virtual int GetNumberOfAxesMaxValue()\n\n"},
  {"GetNumberOfAxes", PyvtkRadialGridActor2D_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: virtual int GetNumberOfAxes()\n\n"},
  {"SetStartAngle", PyvtkRadialGridActor2D_SetStartAngle, METH_VARARGS,
   "SetStartAngle(self, _arg:float) -> None\nC++: virtual void SetStartAngle(double _arg)\n\nSet/Get the start angle (in degrees) of the radial grid. This is\nthe orientation of the first axis, used as reference for the\nothers. Default is 0.\n\n@see SetEndAngle, GetEndAngle, SetNumberOfAxes, GetNumberOfAxes\n"},
  {"GetStartAngle", PyvtkRadialGridActor2D_GetStartAngle, METH_VARARGS,
   "GetStartAngle(self) -> float\nC++: virtual double GetStartAngle()\n\n"},
  {"SetEndAngle", PyvtkRadialGridActor2D_SetEndAngle, METH_VARARGS,
   "SetEndAngle(self, _arg:float) -> None\nC++: virtual void SetEndAngle(double _arg)\n\nSet/Get the end angle (in degrees) of the radial grid. This is\nthe orientation of the last axis. Default is 90.\n\n@see SetStartAngle, SetEndAngle, SetNumberOfAxes,\nGetNumberOfAxes.\n"},
  {"GetEndAngle", PyvtkRadialGridActor2D_GetEndAngle, METH_VARARGS,
   "GetEndAngle(self) -> float\nC++: virtual double GetEndAngle()\n\n"},
  {"SetOrigin", PyvtkRadialGridActor2D_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2)\nSetOrigin(self, _arg:(float, float)) -> None\nC++: void SetOrigin(const double _arg[2])\n\nSet/Get the origin (in normalized viewport coordinates) of the\nradial grid. Default is [0.5, 0.5]\n"},
  {"GetOrigin", PyvtkRadialGridActor2D_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetNumberOfTicks", PyvtkRadialGridActor2D_SetNumberOfTicks, METH_VARARGS,
   "SetNumberOfTicks(self, _arg:int) -> None\nC++: virtual void SetNumberOfTicks(int _arg)\n\nSet/Get the number of ticks for each axis. Default is 6.\n"},
  {"GetNumberOfTicksMinValue", PyvtkRadialGridActor2D_GetNumberOfTicksMinValue, METH_VARARGS,
   "GetNumberOfTicksMinValue(self) -> int\nC++: virtual int GetNumberOfTicksMinValue()\n\n"},
  {"GetNumberOfTicksMaxValue", PyvtkRadialGridActor2D_GetNumberOfTicksMaxValue, METH_VARARGS,
   "GetNumberOfTicksMaxValue(self) -> int\nC++: virtual int GetNumberOfTicksMaxValue()\n\n"},
  {"GetNumberOfTicks", PyvtkRadialGridActor2D_GetNumberOfTicks, METH_VARARGS,
   "GetNumberOfTicks(self) -> int\nC++: virtual int GetNumberOfTicks()\n\n"},
  {"SetAxesViewportLength", PyvtkRadialGridActor2D_SetAxesViewportLength, METH_VARARGS,
   "SetAxesViewportLength(self, _arg:float) -> None\nC++: virtual void SetAxesViewportLength(double _arg)\n\nSet/Get the length of each axis, in viewport coordinates. Default\nis 100.\n"},
  {"GetAxesViewportLengthMinValue", PyvtkRadialGridActor2D_GetAxesViewportLengthMinValue, METH_VARARGS,
   "GetAxesViewportLengthMinValue(self) -> float\nC++: virtual double GetAxesViewportLengthMinValue()\n\n"},
  {"GetAxesViewportLengthMaxValue", PyvtkRadialGridActor2D_GetAxesViewportLengthMaxValue, METH_VARARGS,
   "GetAxesViewportLengthMaxValue(self) -> float\nC++: virtual double GetAxesViewportLengthMaxValue()\n\n"},
  {"GetAxesViewportLength", PyvtkRadialGridActor2D_GetAxesViewportLength, METH_VARARGS,
   "GetAxesViewportLength(self) -> float\nC++: virtual double GetAxesViewportLength()\n\n"},
  {"GetFirstAxesPoints", PyvtkRadialGridActor2D_GetFirstAxesPoints, METH_VARARGS,
   "GetFirstAxesPoints(self) -> vtkPoints\nC++: vtkPoints *GetFirstAxesPoints()\n\nGet the first/last axes points.\n"},
  {"GetLastAxesPoints", PyvtkRadialGridActor2D_GetLastAxesPoints, METH_VARARGS,
   "GetLastAxesPoints(self) -> vtkPoints\nC++: vtkPoints *GetLastAxesPoints()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkRadialGridActor2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("text_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetTextProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTextProperty/SetTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("start_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetStartAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetStartAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetStartAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStartAngle/SetStartAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("end_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetEndAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetEndAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetEndAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetEndAngle/SetEndAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrigin/SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axes_viewport_length"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetAxesViewportLength(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetAxesViewportLength(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetAxesViewportLength(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxesViewportLength/SetAxesViewportLength\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes_min_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfAxesMinValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfAxesMinValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes_max_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfAxesMaxValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfAxesMaxValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_ticks_min_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfTicksMinValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfTicksMinValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_ticks_max_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfTicksMaxValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfTicksMaxValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("first_axes_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetFirstAxesPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFirstAxesPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("last_axes_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetLastAxesPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLastAxesPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfAxes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetNumberOfAxes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetNumberOfAxes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfAxes/SetNumberOfAxes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_ticks"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkRadialGridActor2D_GetNumberOfTicks(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkRadialGridActor2D_SetNumberOfTicks(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkRadialGridActor2D_SetNumberOfTicks(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfTicks/SetNumberOfTicks\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkRadialGridActor2D_Doc =
  "vtkRadialGridActor2D - vtkRadialGridActor2D displays in overlay a\nlist of vtkAxisActor2D sharing a same origin and rotating around it.\n\n"
  "Superclass: vtkActor2D\n\n"
  "Rotation is defined by a start and an end angle and the origin. This\n"
  "can be useful in a polar axes actor.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRadialGridActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkRadialGridActor2D", // tp_name
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
  PyvtkRadialGridActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRadialGridActor2D_StaticNew()
{
  return vtkRadialGridActor2D::New();
}

PyObject *PyvtkRadialGridActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRadialGridActor2D_Type, PyvtkRadialGridActor2D_Methods,
    "vtkRadialGridActor2D",
 &PyvtkRadialGridActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkRadialGridActor2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRadialGridActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRadialGridActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRadialGridActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

