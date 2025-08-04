// python wrapper for vtkChartLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkChartLegend.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkChartLegend(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkChartLegend_ClassNew(); }


static PyObject *
PyvtkChartLegend_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartLegend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartLegend *tempr = vtkChartLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartLegend::NewInstance());

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
PyvtkChartLegend_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartLegend::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartLegend::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkChartLegend::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0);
    }
    else
    {
      op->vtkChartLegend::SetPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPoint(*temp0);
    }
    else
    {
      op->vtkChartLegend::SetPoint(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartLegend_SetPoint_Methods[] = {
  {"SetPoint", PyvtkChartLegend_SetPoint_s2, METH_VARARGS,
   "@P *f"},
  {"SetPoint", PyvtkChartLegend_SetPoint_s3, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartLegend_SetPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartLegend_SetPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkChartLegend_SetPoint_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}


static PyObject *
PyvtkChartLegend_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkChartLegend::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPointVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkVector2f *tempr = (ap.IsBound() ?
      &op->GetPointVector() :
      &op->vtkChartLegend::GetPointVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPointIsNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIsNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIsNormalized(temp0);
    }
    else
    {
      op->vtkChartLegend::SetPointIsNormalized(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPointIsNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIsNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointIsNormalized() :
      op->vtkChartLegend::GetPointIsNormalized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_PointIsNormalizedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIsNormalizedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIsNormalizedOn();
    }
    else
    {
      op->vtkChartLegend::PointIsNormalizedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_PointIsNormalizedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIsNormalizedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIsNormalizedOff();
    }
    else
    {
      op->vtkChartLegend::PointIsNormalizedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalAlignment(temp0);
    }
    else
    {
      op->vtkChartLegend::SetHorizontalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHorizontalAlignment() :
      op->vtkChartLegend::GetHorizontalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalAlignment(temp0);
    }
    else
    {
      op->vtkChartLegend::SetVerticalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalAlignment() :
      op->vtkChartLegend::GetVerticalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkChartLegend::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkChartLegend::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymbolWidth(temp0);
    }
    else
    {
      op->vtkChartLegend::SetSymbolWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSymbolWidth() :
      op->vtkChartLegend::GetSymbolWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelSize(temp0);
    }
    else
    {
      op->vtkChartLegend::SetLabelSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelSize() :
      op->vtkChartLegend::GetLabelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInline(temp0);
    }
    else
    {
      op->vtkChartLegend::SetInline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInline() :
      op->vtkChartLegend::GetInline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragEnabled(temp0);
    }
    else
    {
      op->vtkChartLegend::SetDragEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragEnabled() :
      op->vtkChartLegend::GetDragEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkChart *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChart"))
  {
    if (ap.IsBound())
    {
      op->SetChart(temp0);
    }
    else
    {
      op->vtkChartLegend::SetChart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkChartLegend::GetChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartLegend::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkChartLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkChartLegend::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkChartLegend::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkChartLegend::GetLabelProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_SetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheBounds(temp0);
    }
    else
    {
      op->vtkChartLegend::SetCacheBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_GetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheBounds() :
      op->vtkChartLegend::GetCacheBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheBoundsOn();
    }
    else
    {
      op->vtkChartLegend::CacheBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheBoundsOff();
    }
    else
    {
      op->vtkChartLegend::CacheBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartLegend_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartLegend::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartLegend::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartLegend::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartLegend_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartLegend::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartLegend_Methods[] = {
  {"IsTypeOf", PyvtkChartLegend_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartLegend_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartLegend_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartLegend\nC++: static vtkChartLegend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartLegend_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartLegend\nC++: vtkChartLegend *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartLegend_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartLegend_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPoint", PyvtkChartLegend_SetPoint, METH_VARARGS,
   "SetPoint(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPoint(float _arg1, float _arg2)\nSetPoint(self, _arg:(float, float)) -> None\nC++: void SetPoint(const float _arg[2])\nSetPoint(self, point:vtkVector2f) -> None\nC++: void SetPoint(const vtkVector2f &point)\n\nSet point the legend box is anchored to.\n"},
  {"GetPoint", PyvtkChartLegend_GetPoint, METH_VARARGS,
   "GetPoint(self) -> (float, float)\nC++: virtual float *GetPoint()\n\nGet point the legend box is anchored to.\n"},
  {"GetPointVector", PyvtkChartLegend_GetPointVector, METH_VARARGS,
   "GetPointVector(self) -> vtkVector2f\nC++: const vtkVector2f &GetPointVector()\n\nGet point the legend box is anchored to.\n"},
  {"SetPointIsNormalized", PyvtkChartLegend_SetPointIsNormalized, METH_VARARGS,
   "SetPointIsNormalized(self, _arg:bool) -> None\nC++: virtual void SetPointIsNormalized(bool _arg)\n\nSet/Get whether the anchor point is in normalized chart\ncoordinates or screen coordinates. By default, this is disabled\nand the point is in screen coordinates.\n"},
  {"GetPointIsNormalized", PyvtkChartLegend_GetPointIsNormalized, METH_VARARGS,
   "GetPointIsNormalized(self) -> bool\nC++: virtual bool GetPointIsNormalized()\n\n"},
  {"PointIsNormalizedOn", PyvtkChartLegend_PointIsNormalizedOn, METH_VARARGS,
   "PointIsNormalizedOn(self) -> None\nC++: virtual void PointIsNormalizedOn()\n\n"},
  {"PointIsNormalizedOff", PyvtkChartLegend_PointIsNormalizedOff, METH_VARARGS,
   "PointIsNormalizedOff(self) -> None\nC++: virtual void PointIsNormalizedOff()\n\n"},
  {"SetHorizontalAlignment", PyvtkChartLegend_SetHorizontalAlignment, METH_VARARGS,
   "SetHorizontalAlignment(self, _arg:int) -> None\nC++: virtual void SetHorizontalAlignment(int _arg)\n\nSet the horizontal alignment of the legend to the point\nspecified. Valid values are LEFT, CENTER and RIGHT.\n"},
  {"GetHorizontalAlignment", PyvtkChartLegend_GetHorizontalAlignment, METH_VARARGS,
   "GetHorizontalAlignment(self) -> int\nC++: virtual int GetHorizontalAlignment()\n\nGet the horizontal alignment of the legend to the point\nspecified.\n"},
  {"SetVerticalAlignment", PyvtkChartLegend_SetVerticalAlignment, METH_VARARGS,
   "SetVerticalAlignment(self, _arg:int) -> None\nC++: virtual void SetVerticalAlignment(int _arg)\n\nSet the vertical alignment of the legend to the point specified.\nValid values are TOP, CENTER and BOTTOM.\n"},
  {"GetVerticalAlignment", PyvtkChartLegend_GetVerticalAlignment, METH_VARARGS,
   "GetVerticalAlignment(self) -> int\nC++: virtual int GetVerticalAlignment()\n\nGet the vertical alignment of the legend to the point specified.\n"},
  {"SetPadding", PyvtkChartLegend_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:int) -> None\nC++: virtual void SetPadding(int _arg)\n\nSet the padding between legend marks, default is 5.\n"},
  {"GetPadding", PyvtkChartLegend_GetPadding, METH_VARARGS,
   "GetPadding(self) -> int\nC++: virtual int GetPadding()\n\nGet the padding between legend marks.\n"},
  {"SetSymbolWidth", PyvtkChartLegend_SetSymbolWidth, METH_VARARGS,
   "SetSymbolWidth(self, _arg:int) -> None\nC++: virtual void SetSymbolWidth(int _arg)\n\nSet the symbol width, default is 15.\n"},
  {"GetSymbolWidth", PyvtkChartLegend_GetSymbolWidth, METH_VARARGS,
   "GetSymbolWidth(self) -> int\nC++: virtual int GetSymbolWidth()\n\nGet the legend symbol width.\n"},
  {"SetLabelSize", PyvtkChartLegend_SetLabelSize, METH_VARARGS,
   "SetLabelSize(self, size:int) -> None\nC++: virtual void SetLabelSize(int size)\n\nSet the point size of the label text.\n"},
  {"GetLabelSize", PyvtkChartLegend_GetLabelSize, METH_VARARGS,
   "GetLabelSize(self) -> int\nC++: virtual int GetLabelSize()\n\nGet the point size of the label text.\n"},
  {"SetInline", PyvtkChartLegend_SetInline, METH_VARARGS,
   "SetInline(self, _arg:bool) -> None\nC++: virtual void SetInline(bool _arg)\n\nGet/set if the legend should be drawn inline (inside the chart),\nor not. True would generally request that the chart draws it\ninside the chart, false would adjust the chart axes and make\nspace to draw the axes outside.\n"},
  {"GetInline", PyvtkChartLegend_GetInline, METH_VARARGS,
   "GetInline(self) -> bool\nC++: virtual bool GetInline()\n\n"},
  {"SetDragEnabled", PyvtkChartLegend_SetDragEnabled, METH_VARARGS,
   "SetDragEnabled(self, _arg:bool) -> None\nC++: virtual void SetDragEnabled(bool _arg)\n\nGet/set if the legend can be dragged with the mouse button, or\nnot. True results in left click and drag causing the legend to\nmove around the scene. False disables response to mouse events.\nThe default is true.\n"},
  {"GetDragEnabled", PyvtkChartLegend_GetDragEnabled, METH_VARARGS,
   "GetDragEnabled(self) -> bool\nC++: virtual bool GetDragEnabled()\n\n"},
  {"SetChart", PyvtkChartLegend_SetChart, METH_VARARGS,
   "SetChart(self, chart:vtkChart) -> None\nC++: void SetChart(vtkChart *chart)\n\nSet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {"GetChart", PyvtkChartLegend_GetChart, METH_VARARGS,
   "GetChart(self) -> vtkChart\nC++: vtkChart *GetChart()\n\nGet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {"Update", PyvtkChartLegend_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {"Paint", PyvtkChartLegend_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {"GetBoundingRect", PyvtkChartLegend_GetBoundingRect, METH_VARARGS,
   "GetBoundingRect(self, painter:vtkContext2D) -> vtkRectf\nC++: virtual vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {"GetPen", PyvtkChartLegend_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen used to draw the legend outline.\n"},
  {"GetBrush", PyvtkChartLegend_GetBrush, METH_VARARGS,
   "GetBrush(self) -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the brush used to draw the legend background.\n"},
  {"GetLabelProperties", PyvtkChartLegend_GetLabelProperties, METH_VARARGS,
   "GetLabelProperties(self) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty for the legend's labels.\n"},
  {"SetCacheBounds", PyvtkChartLegend_SetCacheBounds, METH_VARARGS,
   "SetCacheBounds(self, _arg:bool) -> None\nC++: virtual void SetCacheBounds(bool _arg)\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {"GetCacheBounds", PyvtkChartLegend_GetCacheBounds, METH_VARARGS,
   "GetCacheBounds(self) -> bool\nC++: virtual bool GetCacheBounds()\n\n"},
  {"CacheBoundsOn", PyvtkChartLegend_CacheBoundsOn, METH_VARARGS,
   "CacheBoundsOn(self) -> None\nC++: virtual void CacheBoundsOn()\n\n"},
  {"CacheBoundsOff", PyvtkChartLegend_CacheBoundsOff, METH_VARARGS,
   "CacheBoundsOff(self) -> None\nC++: virtual void CacheBoundsOff()\n\n"},
  {"Hit", PyvtkChartLegend_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkChartLegend_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkChartLegend_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartLegend_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkChartLegend_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("point"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetPoint(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetPoint(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetPoint(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoint/SetPoint\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetPoint(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetPoint(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPoint\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_is_normalized"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetPointIsNormalized(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetPointIsNormalized(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetPointIsNormalized(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPointIsNormalized/SetPointIsNormalized\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("horizontal_alignment"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetHorizontalAlignment(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetHorizontalAlignment(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetHorizontalAlignment(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHorizontalAlignment/SetHorizontalAlignment\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertical_alignment"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetVerticalAlignment(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetVerticalAlignment(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetVerticalAlignment(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVerticalAlignment/SetVerticalAlignment\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("padding"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetPadding(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetPadding(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetPadding(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPadding/SetPadding\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("symbol_width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetSymbolWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetSymbolWidth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetSymbolWidth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSymbolWidth/SetSymbolWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetLabelSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetLabelSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetLabelSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelSize/SetLabelSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("inline"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetInline(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetInline(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetInline(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInline/SetInline\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("drag_enabled"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetDragEnabled(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetDragEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetDragEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDragEnabled/SetDragEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("chart"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetChart(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetChart(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetChart(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetChart/SetChart\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cache_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetCacheBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkChartLegend_SetCacheBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkChartLegend_SetCacheBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCacheBounds/SetCacheBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_vector"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetPointVector(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointVector\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pen"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetPen(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPen\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("brush"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetBrush(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBrush\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_properties"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkChartLegend_GetLabelProperties(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLabelProperties\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkChartLegend_Doc =
  "vtkChartLegend - draw the chart legend\n\n"
  "Superclass: vtkContextItem\n\n"
  "The vtkChartLegend is drawn in screen coordinates. It is usually one\n"
  "of the last elements of a chart to be drawn. It renders the mark/line\n"
  "for each plot, and the plot labels.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartLegend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartLegend", // tp_name
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
  PyvtkChartLegend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartLegend_StaticNew()
{
  return vtkChartLegend::New();
}

PyObject *PyvtkChartLegend_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartLegend_Type, PyvtkChartLegend_Methods,
    "vtkChartLegend",
 &PyvtkChartLegend_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "LEFT", vtkChartLegend::LEFT },
        { "CENTER", vtkChartLegend::CENTER },
        { "RIGHT", vtkChartLegend::RIGHT },
        { "TOP", vtkChartLegend::TOP },
        { "BOTTOM", vtkChartLegend::BOTTOM },
        { "CUSTOM", vtkChartLegend::CUSTOM },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkChartLegend_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartLegend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartLegend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartLegend", o) != 0)
  {
    Py_DECREF(o);
  }

}

