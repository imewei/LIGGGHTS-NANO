// python wrapper for vtkPlot
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkPlot.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPlot(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPlot_ClassNew(); }


static PyObject *
PyvtkPlot_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlot *tempr = vtkPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot::NewInstance());

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
PyvtkPlot_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlot::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlot::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPlot::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendVisibility(temp0);
    }
    else
    {
      op->vtkPlot::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkPlot::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkPlot::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkPlot::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlot::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltipLabelFormat(temp0);
    }
    else
    {
      op->vtkPlot::SetTooltipLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabelFormat() :
      op->vtkPlot::GetTooltipLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltipNotation(temp0);
    }
    else
    {
      op->vtkPlot::SetTooltipNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation() :
      op->vtkPlot::GetTooltipNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltipPrecision(temp0);
    }
    else
    {
      op->vtkPlot::SetTooltipPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision() :
      op->vtkPlot::GetTooltipPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabel(*temp0, temp1, temp2) :
      op->vtkPlot::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkPlot::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SelectPointsInPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPointsInPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContextPolygon *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPointsInPolygon(*temp0) :
      op->vtkPlot::SelectPointsInPolygon(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlot::SetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlot::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlot_SetColor_s1(self, args);
    case 3:
      return PyvtkPlot_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkPlot_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColorF(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlot::SetColorF(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      op->SetColorF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlot::SetColorF(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlot_SetColorF_s1(self, args);
    case 3:
      return PyvtkPlot_SetColorF_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return nullptr;
}


static PyObject *
PyvtkPlot_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  unsigned char save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColor(temp0);
    }
    else
    {
      op->vtkPlot::GetColor(temp0);
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
PyvtkPlot_GetColorRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  unsigned char save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorRGBA(temp0);
    }
    else
    {
      op->vtkPlot::GetColorRGBA(temp0);
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
PyvtkPlot_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      op->GetColorF(temp0);
    }
    else
    {
      op->vtkPlot::GetColorF(temp0);
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
PyvtkPlot_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkPlot::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkPlot::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetPen(temp0);
    }
    else
    {
      op->vtkPlot::SetPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkPlot::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->SetBrush(temp0);
    }
    else
    {
      op->vtkPlot::SetBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkPlot::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionPen(temp0);
    }
    else
    {
      op->vtkPlot::SetSelectionPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectionPen() :
      op->vtkPlot::GetSelectionPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetSelectionBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionBrush(temp0);
    }
    else
    {
      op->vtkPlot::SetSelectionBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetSelectionBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetSelectionBrush() :
      op->vtkPlot::GetSelectionBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0);
    }
    else
    {
      op->vtkPlot::SetLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkPlot::GetLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkPlot::GetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlot_GetLabel_s1(self, args);
    case 1:
      return PyvtkPlot_GetLabel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabel");
  return nullptr;
}


static PyObject *
PyvtkPlot_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabels(temp0);
    }
    else
    {
      op->vtkPlot::SetLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPlot::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkPlot::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetIndexedLabels(temp0);
    }
    else
    {
      op->vtkPlot::SetIndexedLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetIndexedLabels() :
      op->vtkPlot::GetIndexedLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextMapper2D *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPlot::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXSeries() :
      op->vtkPlot::GetUseIndexForXSeries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIndexForXSeries(temp0);
    }
    else
    {
      op->vtkPlot::SetUseIndexForXSeries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPlot::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlot::SetInputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlot_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlot::SetInputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot_SetInputData_Methods[] = {
  {"SetInputData", PyvtkPlot_SetInputData_s2, METH_VARARGS,
   "@Vss *vtkTable"},
  {"SetInputData", PyvtkPlot_SetInputData_s3, METH_VARARGS,
   "@Vkk *vtkTable"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlot_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlot_SetInputData_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkPlot_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkPlot::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPlot::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputConnection() :
      op->vtkPlot::GetInputConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArray(temp0, temp1);
    }
    else
    {
      op->vtkPlot::SetInputArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetXAxisInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisInputArrayToProcess(temp0);
    }
    else
    {
      op->vtkPlot::SetXAxisInputArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetXAxisInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetXAxisInputArrayToProcess() :
      op->vtkPlot::GetXAxisInputArrayToProcess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetYAxisInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisInputArrayToProcess(temp0);
    }
    else
    {
      op->vtkPlot::SetYAxisInputArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetYAxisInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetYAxisInputArrayToProcess() :
      op->vtkPlot::GetYAxisInputArrayToProcess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkPlot::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkPlot::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkPlot::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkPlot::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkPlot::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPlot::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkPlot::GetXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetXAxis(temp0);
    }
    else
    {
      op->vtkPlot::SetXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkPlot::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetYAxis(temp0);
    }
    else
    {
      op->vtkPlot::SetYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_SetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkRectd *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectd"))
  {
    if (ap.IsBound())
    {
      op->SetShiftScale(*temp0);
    }
    else
    {
      op->vtkPlot::SetShiftScale(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_GetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectd tempr = (ap.IsBound() ?
      op->GetShiftScale() :
      op->vtkPlot::GetShiftScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectd");
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkPlot::GetBounds(temp0);
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
PyvtkPlot_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledInputBounds(temp0);
    }
    else
    {
      op->vtkPlot::GetUnscaledInputBounds(temp0);
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
PyvtkPlot_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0, *temp1);
    }
    else
    {
      op->vtkPlot::SetProperty(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkPlot::GetProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_ClampPos_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampPos");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkPlot::ClampPos(temp0, temp1);

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
PyvtkPlot_ClampPos_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->ClampPos(temp0) :
      op->vtkPlot::ClampPos(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot_ClampPos_Methods[] = {
  {"ClampPos", PyvtkPlot_ClampPos_s1, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlot_ClampPos(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_ClampPos_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlot_ClampPos_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClampPos");
  return nullptr;
}


static PyObject *
PyvtkPlot_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkPlot::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCache() :
      op->vtkPlot::UpdateCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot_FilterSelectedPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FilterSelectedPoints");

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkPlot::FilterSelectedPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot_Methods[] = {
  {"IsTypeOf", PyvtkPlot_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlot_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlot_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlot\nC++: static vtkPlot *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlot_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlot\nC++: vtkPlot *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlot_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlot_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkPlot_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"SetLegendVisibility", PyvtkPlot_SetLegendVisibility, METH_VARARGS,
   "SetLegendVisibility(self, _arg:bool) -> None\nC++: virtual void SetLegendVisibility(bool _arg)\n\nSet whether the plot renders an entry in the legend. Default is\ntrue. vtkPlot::PaintLegend will get called to render the legend\nmarker on when this is true.\n"},
  {"GetLegendVisibility", PyvtkPlot_GetLegendVisibility, METH_VARARGS,
   "GetLegendVisibility(self) -> bool\nC++: virtual bool GetLegendVisibility()\n\n"},
  {"LegendVisibilityOn", PyvtkPlot_LegendVisibilityOn, METH_VARARGS,
   "LegendVisibilityOn(self) -> None\nC++: virtual void LegendVisibilityOn()\n\n"},
  {"LegendVisibilityOff", PyvtkPlot_LegendVisibilityOff, METH_VARARGS,
   "LegendVisibilityOff(self) -> None\nC++: virtual void LegendVisibilityOff()\n\n"},
  {"PaintLegend", PyvtkPlot_PaintLegend, METH_VARARGS,
   "PaintLegend(self, painter:vtkContext2D, rect:vtkRectf,\n    legendIndex:int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the plot, called whenever the legend needs\nthe plot items symbol/mark/line drawn. A rect is supplied with\nthe lower left corner of the rect (elements 0 and 1) and with\nwidth x height (elements 2 and 3). The plot can choose how to\nfill the space supplied. The index is used by Plots that return\nmore than one label.\n"},
  {"SetTooltipLabelFormat", PyvtkPlot_SetTooltipLabelFormat, METH_VARARGS,
   "SetTooltipLabelFormat(self, label:str) -> None\nC++: virtual void SetTooltipLabelFormat(const vtkStdString &label)\n\nSets/gets a printf-style string to build custom tooltip labels\nfrom. An empty string generates the default tooltip labels. The\nfollowing case-sensitive format tags (without quotes) are\nrecognized: '%x' The X value of the plot element '%y' The Y value\nof the plot element '%i' The IndexedLabels entry for the plot\nelement '%l' The value of the plot's GetLabel() function '%s'\n(vtkPlotBar only) The Labels entry for the bar segment Any other\ncharacters or unrecognized format tags are printed in the tooltip\nlabel verbatim.\n"},
  {"GetTooltipLabelFormat", PyvtkPlot_GetTooltipLabelFormat, METH_VARARGS,
   "GetTooltipLabelFormat(self) -> str\nC++: virtual vtkStdString GetTooltipLabelFormat()\n\n"},
  {"SetTooltipNotation", PyvtkPlot_SetTooltipNotation, METH_VARARGS,
   "SetTooltipNotation(self, notation:int) -> None\nC++: virtual void SetTooltipNotation(int notation)\n\nSets/gets the tooltip notation style.\n"},
  {"GetTooltipNotation", PyvtkPlot_GetTooltipNotation, METH_VARARGS,
   "GetTooltipNotation(self) -> int\nC++: virtual int GetTooltipNotation()\n\n"},
  {"SetTooltipPrecision", PyvtkPlot_SetTooltipPrecision, METH_VARARGS,
   "SetTooltipPrecision(self, precision:int) -> None\nC++: virtual void SetTooltipPrecision(int precision)\n\nSets/gets the tooltip precision.\n"},
  {"GetTooltipPrecision", PyvtkPlot_GetTooltipPrecision, METH_VARARGS,
   "GetTooltipPrecision(self) -> int\nC++: virtual int GetTooltipPrecision()\n\n"},
  {"GetTooltipLabel", PyvtkPlot_GetTooltipLabel, METH_VARARGS,
   "GetTooltipLabel(self, plotPos:vtkVector2d, seriesIndex:int,\n    segmentIndex:int) -> str\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2d &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {"SelectPoints", PyvtkPlot_SelectPoints, METH_VARARGS,
   "SelectPoints(self, min:vtkVector2f, max:vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {"SelectPointsInPolygon", PyvtkPlot_SelectPointsInPolygon, METH_VARARGS,
   "SelectPointsInPolygon(self, polygon:vtkContextPolygon) -> bool\nC++: virtual bool SelectPointsInPolygon(\n    const vtkContextPolygon &polygon)\n\nSelect all points in the specified polygon.\n"},
  {"SetColor", PyvtkPlot_SetColor, METH_VARARGS,
   "SetColor(self, r:int, g:int, b:int, a:int) -> None\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nSetColor(self, r:int, g:int, b:int) -> None\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b)\n\nSet the plot color with integer values (comprised between 0 and\n255)\n"},
  {"SetColorF", PyvtkPlot_SetColorF, METH_VARARGS,
   "SetColorF(self, r:float, g:float, b:float, a:float) -> None\nC++: virtual void SetColorF(double r, double g, double b,\n    double a)\nSetColorF(self, r:float, g:float, b:float) -> None\nC++: virtual void SetColorF(double r, double g, double b)\n\nSet the plot color with floating values (comprised between 0.0\nand 1.0)\n"},
  {"GetColor", PyvtkPlot_GetColor, METH_VARARGS,
   "GetColor(self, rgb:[int, int, int]) -> None\nC++: virtual void GetColor(unsigned char rgb[3])\n\nGet the plot color as integer rgb values (comprised between 0 and\n255)\n"},
  {"GetColorRGBA", PyvtkPlot_GetColorRGBA, METH_VARARGS,
   "GetColorRGBA(self, rgba:[int, int, int, int]) -> None\nC++: void GetColorRGBA(unsigned char rgba[4])\n\n"},
  {"GetColorF", PyvtkPlot_GetColorF, METH_VARARGS,
   "GetColorF(self, rgb:[float, float, float]) -> None\nC++: virtual void GetColorF(double rgb[3])\n\nGet the plot color as floating rgb values (comprised between 0.0\nand 1.0)\n"},
  {"SetWidth", PyvtkPlot_SetWidth, METH_VARARGS,
   "SetWidth(self, width:float) -> None\nC++: virtual void SetWidth(float width)\n\n@\n\nSet the width of the line.\n"},
  {"GetWidth", PyvtkPlot_GetWidth, METH_VARARGS,
   "GetWidth(self) -> float\nC++: virtual float GetWidth()\n\nGet the width of the line.\n"},
  {"SetPen", PyvtkPlot_SetPen, METH_VARARGS,
   "SetPen(self, pen:vtkPen) -> None\nC++: void SetPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {"GetPen", PyvtkPlot_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: vtkPen *GetPen()\n\n"},
  {"SetBrush", PyvtkPlot_SetBrush, METH_VARARGS,
   "SetBrush(self, brush:vtkBrush) -> None\nC++: void SetBrush(vtkBrush *brush)\n\nSet/get the vtkBrush object that controls how this plot fills\nshapes.\n"},
  {"GetBrush", PyvtkPlot_GetBrush, METH_VARARGS,
   "GetBrush(self) -> vtkBrush\nC++: vtkBrush *GetBrush()\n\n"},
  {"SetSelectionPen", PyvtkPlot_SetSelectionPen, METH_VARARGS,
   "SetSelectionPen(self, pen:vtkPen) -> None\nC++: void SetSelectionPen(vtkPen *pen)\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {"GetSelectionPen", PyvtkPlot_GetSelectionPen, METH_VARARGS,
   "GetSelectionPen(self) -> vtkPen\nC++: vtkPen *GetSelectionPen()\n\n"},
  {"SetSelectionBrush", PyvtkPlot_SetSelectionBrush, METH_VARARGS,
   "SetSelectionBrush(self, brush:vtkBrush) -> None\nC++: void SetSelectionBrush(vtkBrush *brush)\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {"GetSelectionBrush", PyvtkPlot_GetSelectionBrush, METH_VARARGS,
   "GetSelectionBrush(self) -> vtkBrush\nC++: vtkBrush *GetSelectionBrush()\n\n"},
  {"SetLabel", PyvtkPlot_SetLabel, METH_VARARGS,
   "SetLabel(self, label:str) -> None\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the label of this plot.\n"},
  {"GetLabel", PyvtkPlot_GetLabel, METH_VARARGS,
   "GetLabel(self) -> str\nC++: virtual vtkStdString GetLabel()\nGetLabel(self, index:int) -> str\nC++: vtkStdString GetLabel(vtkIdType index)\n\nGet the label of this plot.\n"},
  {"SetLabels", PyvtkPlot_SetLabels, METH_VARARGS,
   "SetLabels(self, labels:vtkStringArray) -> None\nC++: virtual void SetLabels(vtkStringArray *labels)\n\nSet the plot labels, these are used for stacked chart variants,\nwith the index referring to the stacking index.\n"},
  {"GetLabels", PyvtkPlot_GetLabels, METH_VARARGS,
   "GetLabels(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\nGet the plot labels. If this array has a length greater than 1\nthe index refers to the stacked objects in the plot. See\nvtkPlotBar for example.\n"},
  {"GetNumberOfLabels", PyvtkPlot_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: virtual int GetNumberOfLabels()\n\nGet the number of labels associated with this plot.\n"},
  {"SetIndexedLabels", PyvtkPlot_SetIndexedLabels, METH_VARARGS,
   "SetIndexedLabels(self, labels:vtkStringArray) -> None\nC++: void SetIndexedLabels(vtkStringArray *labels)\n\nSet indexed labels for the plot. If set, this array can be used\nto provide custom labels for each point in a plot. This array\nshould be the same length as the points array. Default is null\n(no indexed labels).\n"},
  {"GetIndexedLabels", PyvtkPlot_GetIndexedLabels, METH_VARARGS,
   "GetIndexedLabels(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetIndexedLabels()\n\nGet the indexed labels array.\n"},
  {"GetData", PyvtkPlot_GetData, METH_VARARGS,
   "GetData(self) -> vtkContextMapper2D\nC++: vtkContextMapper2D *GetData()\n\nGet the data object that the plot will draw.\n"},
  {"GetUseIndexForXSeries", PyvtkPlot_GetUseIndexForXSeries, METH_VARARGS,
   "GetUseIndexForXSeries(self) -> bool\nC++: virtual bool GetUseIndexForXSeries()\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {"SetUseIndexForXSeries", PyvtkPlot_SetUseIndexForXSeries, METH_VARARGS,
   "SetUseIndexForXSeries(self, _arg:bool) -> None\nC++: virtual void SetUseIndexForXSeries(bool _arg)\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {"SetInputData", PyvtkPlot_SetInputData, METH_VARARGS,
   "SetInputData(self, table:vtkTable) -> None\nC++: virtual void SetInputData(vtkTable *table)\nSetInputData(self, table:vtkTable, xColumn:str, yColumn:str)\n    -> None\nC++: virtual void SetInputData(vtkTable *table,\n    const vtkStdString &xColumn, const vtkStdString &yColumn)\nSetInputData(self, table:vtkTable, xColumn:int, yColumn:int)\n    -> None\nC++: void SetInputData(vtkTable *table, vtkIdType xColumn,\n    vtkIdType yColumn)\n\nThis is a convenience function to set the input table and the x,\ny column for the plot.\n"},
  {"SetInputConnection", PyvtkPlot_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\n"},
  {"GetInput", PyvtkPlot_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkTable\nC++: virtual vtkTable *GetInput()\n\nGet the input table used by the plot.\n"},
  {"GetInputConnection", PyvtkPlot_GetInputConnection, METH_VARARGS,
   "GetInputConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection()\n\n"},
  {"SetInputArray", PyvtkPlot_SetInputArray, METH_VARARGS,
   "SetInputArray(self, index:int, name:str) -> None\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nConvenience function to set the input arrays. For most plots\nindex 0 is the x axis, and index 1 is the y axis. The name is the\nname of the column in the vtkTable.\n"},
  {"SetXAxisInputArrayToProcess", PyvtkPlot_SetXAxisInputArrayToProcess, METH_VARARGS,
   "SetXAxisInputArrayToProcess(self, name:str) -> None\nC++: void SetXAxisInputArrayToProcess(const std::string &name)\n\nConvenient function to directly set/get the names of columns used\nfor X and Y axis respectively.\n"},
  {"GetXAxisInputArrayToProcess", PyvtkPlot_GetXAxisInputArrayToProcess, METH_VARARGS,
   "GetXAxisInputArrayToProcess(self) -> str\nC++: std::string GetXAxisInputArrayToProcess()\n\n"},
  {"SetYAxisInputArrayToProcess", PyvtkPlot_SetYAxisInputArrayToProcess, METH_VARARGS,
   "SetYAxisInputArrayToProcess(self, name:str) -> None\nC++: void SetYAxisInputArrayToProcess(const std::string &name)\n\n"},
  {"GetYAxisInputArrayToProcess", PyvtkPlot_GetYAxisInputArrayToProcess, METH_VARARGS,
   "GetYAxisInputArrayToProcess(self) -> str\nC++: std::string GetYAxisInputArrayToProcess()\n\n"},
  {"SetSelectable", PyvtkPlot_SetSelectable, METH_VARARGS,
   "SetSelectable(self, _arg:bool) -> None\nC++: virtual void SetSelectable(bool _arg)\n\nSet whether the plot can be selected. True by default. If not,\nthen SetSelection(), SelectPoints() or SelectPointsInPolygon()\nwon't have any effect.\n\\sa SetSelection(), SelectPoints(), SelectPointsInPolygon()\n"},
  {"GetSelectable", PyvtkPlot_GetSelectable, METH_VARARGS,
   "GetSelectable(self) -> bool\nC++: virtual bool GetSelectable()\n\n"},
  {"SelectableOn", PyvtkPlot_SelectableOn, METH_VARARGS,
   "SelectableOn(self) -> None\nC++: virtual void SelectableOn()\n\n"},
  {"SelectableOff", PyvtkPlot_SelectableOff, METH_VARARGS,
   "SelectableOff(self) -> None\nC++: virtual void SelectableOff()\n\n"},
  {"SetSelection", PyvtkPlot_SetSelection, METH_VARARGS,
   "SetSelection(self, id:vtkIdTypeArray) -> None\nC++: virtual void SetSelection(vtkIdTypeArray *id)\n\nSets the list of points that must be selected. If Selectable is\nfalse, then this method does nothing.\n\\sa SetSelectable()\n"},
  {"GetSelection", PyvtkPlot_GetSelection, METH_VARARGS,
   "GetSelection(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetSelection()\n\n"},
  {"GetXAxis", PyvtkPlot_GetXAxis, METH_VARARGS,
   "GetXAxis(self) -> vtkAxis\nC++: virtual vtkAxis *GetXAxis()\n\nGet/set the X axis associated with this plot.\n"},
  {"SetXAxis", PyvtkPlot_SetXAxis, METH_VARARGS,
   "SetXAxis(self, axis:vtkAxis) -> None\nC++: virtual void SetXAxis(vtkAxis *axis)\n\n"},
  {"GetYAxis", PyvtkPlot_GetYAxis, METH_VARARGS,
   "GetYAxis(self) -> vtkAxis\nC++: virtual vtkAxis *GetYAxis()\n\nGet/set the Y axis associated with this plot.\n"},
  {"SetYAxis", PyvtkPlot_SetYAxis, METH_VARARGS,
   "SetYAxis(self, axis:vtkAxis) -> None\nC++: virtual void SetYAxis(vtkAxis *axis)\n\n"},
  {"SetShiftScale", PyvtkPlot_SetShiftScale, METH_VARARGS,
   "SetShiftScale(self, shiftScale:vtkRectd) -> None\nC++: void SetShiftScale(const vtkRectd &shiftScale)\n\nGet/set the origin shift and scaling factor used by the plot,\nthis is normally 0.0 offset and 1.0 scaling, but can be used to\nrender data outside of the single precision range. The chart that\nowns the plot should set this and ensure the appropriate matrix\nis used when rendering the plot.\n"},
  {"GetShiftScale", PyvtkPlot_GetShiftScale, METH_VARARGS,
   "GetShiftScale(self) -> vtkRectd\nC++: vtkRectd GetShiftScale()\n\n"},
  {"GetBounds", PyvtkPlot_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n\n* See GetUnscaledInputBounds for more information.\n"},
  {"GetUnscaledInputBounds", PyvtkPlot_GetUnscaledInputBounds, METH_VARARGS,
   "GetUnscaledInputBounds(self, bounds:[float, float, float, float])\n    -> None\nC++: virtual void GetUnscaledInputBounds(double bounds[4])\n\nProvide un-log-scaled bounds for the plot inputs.\n\n* This function is analogous to GetBounds() with 2 exceptions:\n* 1. It will never return log-scaled bounds even when the\n* x- and/or y-axes are log-scaled.\n* 2. It will always return the bounds along the *input* axes\n* rather than the output chart coordinates. Thus GetXAxis()\n* returns the axis associated with the first 2 bounds entries\n* and GetYAxis() returns the axis associated with the next 2\n* bounds entries.\n\n* For example, vtkPlotBar's GetBounds() method\n* will swap axis bounds when its orientation is vertical while\n* its GetUnscaledInputBounds() will not swap axis bounds.\n\n* This method is provided so user interfaces can determine\n* whether or not to allow log-scaling of a particular vtkAxis.\n\n* Subclasses of vtkPlot are responsible for implementing this\n* function to transform input plot data.\n\n* The returned bounds are stored as (Xmin, Xmax, Ymin, Ymax).\n"},
  {"SetProperty", PyvtkPlot_SetProperty, METH_VARARGS,
   "SetProperty(self, property:str, var:vtkVariant) -> None\nC++: virtual void SetProperty(const vtkStdString &property,\n    const vtkVariant &var)\n\nA General setter/getter that should be overridden. It can\nsilently drop options, case is important\n"},
  {"GetProperty", PyvtkPlot_GetProperty, METH_VARARGS,
   "GetProperty(self, property:str) -> vtkVariant\nC++: virtual vtkVariant GetProperty(const vtkStdString &property)\n\n"},
  {"ClampPos", PyvtkPlot_ClampPos, METH_VARARGS,
   "ClampPos(pos:[float, float], bounds:[float, float, float, float])\n    -> bool\nC++: static bool ClampPos(double pos[2], double bounds[4])\nClampPos(self, pos:[float, float]) -> bool\nC++: virtual bool ClampPos(double pos[2])\n\nClamp the given 2D pos into the provided bounds Return true if\nthe pos has been clamped, false otherwise.\n"},
  {"Hit", PyvtkPlot_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the supplied x, y coordinate is inside the item.\n"},
  {"UpdateCache", PyvtkPlot_UpdateCache, METH_VARARGS,
   "UpdateCache(self) -> bool\nC++: virtual bool UpdateCache()\n\nUpdate the internal cache. Returns true if cache was successfully\nupdated. Default does nothing. This method is called by Update()\nwhen either the plot's data has changed or CacheRequiresUpdate()\nreturns true. It is not necessary to call this method explicitly.\n"},
  {"FilterSelectedPoints", PyvtkPlot_FilterSelectedPoints, METH_VARARGS,
   "FilterSelectedPoints(points:vtkDataArray,\n    selectedPoints:vtkDataArray, selectedIds:vtkIdTypeArray)\n    -> None\nC++: static void FilterSelectedPoints(vtkDataArray *points,\n    vtkDataArray *selectedPoints, vtkIdTypeArray *selectedIds)\n\nUtility function that fills up `selectedPoints` with tuples from\n`points`. Indices from `selectedIds` are used to index into\n`points`.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPlot_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("legend_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetLegendVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetLegendVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetLegendVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLegendVisibility/SetLegendVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tooltip_label_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetTooltipLabelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetTooltipLabelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetTooltipLabelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTooltipLabelFormat/SetTooltipLabelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tooltip_notation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetTooltipNotation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetTooltipNotation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetTooltipNotation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTooltipNotation/SetTooltipNotation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tooltip_precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetTooltipPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetTooltipPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetTooltipPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTooltipPrecision/SetTooltipPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("color"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetColor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetColor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetColor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("color_f"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetColorF(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetColorF(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetColorF\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetWidth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetWidth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWidth/SetWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetPen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetPen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPen/SetPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("brush"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetBrush(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetBrush(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetBrush(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBrush/SetBrush\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetSelectionPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetSelectionPen(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetSelectionPen(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionPen/SetSelectionPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_brush"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetSelectionBrush(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetSelectionBrush(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetSelectionBrush(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionBrush/SetSelectionBrush\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetLabel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetLabel(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetLabel(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabel/SetLabel\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabels/SetLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("indexed_labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetIndexedLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetIndexedLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetIndexedLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIndexedLabels/SetIndexedLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_index_for_x_series"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetUseIndexForXSeries(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetUseIndexForXSeries(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetUseIndexForXSeries(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseIndexForXSeries/SetUseIndexForXSeries\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetInputData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetInputData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_connection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetInputConnection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetInputConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetInputConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInputConnection/SetInputConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_axis_input_array_to_process"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetXAxisInputArrayToProcess(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetXAxisInputArrayToProcess(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetXAxisInputArrayToProcess(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetXAxisInputArrayToProcess/SetXAxisInputArrayToProcess\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_axis_input_array_to_process"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetYAxisInputArrayToProcess(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetYAxisInputArrayToProcess(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetYAxisInputArrayToProcess(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetYAxisInputArrayToProcess/SetYAxisInputArrayToProcess\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selectable"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetSelectable(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetSelectable(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetSelectable(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectable/SetSelectable\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetSelection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetSelection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelection/SetSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetXAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetXAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetXAxis(self, args);
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
      auto result = PyvtkPlot_GetYAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetYAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetYAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetYAxis/SetYAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shift_scale"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPlot_SetShiftScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPlot_SetShiftScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetShiftScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInput\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shift_scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPlot_GetShiftScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetShiftScale\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPlot_Doc =
  "vtkPlot - Abstract class for 2D plots.\n\n"
  "Superclass: vtkContextItem\n\n"
  "The base class for all plot types used in vtkChart derived charts.\n\n"
  "@sa\n"
  "vtkPlotPoints vtkPlotLine vtkPlotBar vtkChart vtkChartXY\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlot", // tp_name
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
  PyvtkPlot_Doc, // tp_doc
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

PyObject *PyvtkPlot_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlot_Type, PyvtkPlot_Methods,
    "vtkPlot",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPlot_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlot", o) != 0)
  {
    Py_DECREF(o);
  }

}

