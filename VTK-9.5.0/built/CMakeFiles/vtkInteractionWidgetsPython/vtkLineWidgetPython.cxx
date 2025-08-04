// python wrapper for vtkLineWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLineWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLineWidget(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLineWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static PyObject *
PyvtkLineWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLineWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLineWidget *tempr = vtkLineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineWidget::NewInstance());

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
PyvtkLineWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLineWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLineWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkLineWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkLineWidget::PlaceWidget(temp0);
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
PyvtkLineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkLineWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkLineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkLineWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkLineWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkLineWidget::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineWidget::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineWidget::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkLineWidget::SetPoint1(temp0);
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
PyvtkLineWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkLineWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkLineWidget::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->GetPoint1(temp0);
    }
    else
    {
      op->vtkLineWidget::GetPoint1(temp0);
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
PyvtkLineWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLineWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return nullptr;
}


static PyObject *
PyvtkLineWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineWidget::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkLineWidget::SetPoint2(temp0);
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
PyvtkLineWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkLineWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkLineWidget::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->GetPoint2(temp0);
    }
    else
    {
      op->vtkLineWidget::GetPoint2(temp0);
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
PyvtkLineWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLineWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return nullptr;
}


static PyObject *
PyvtkLineWidget_SetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlign(temp0);
    }
    else
    {
      op->vtkLineWidget::SetAlign(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignMinValue() :
      op->vtkLineWidget::GetAlignMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignMaxValue() :
      op->vtkLineWidget::GetAlignMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlign() :
      op->vtkLineWidget::GetAlign());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToXAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToYAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToZAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToNone();
    }
    else
    {
      op->vtkLineWidget::SetAlignToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampToBounds(temp0);
    }
    else
    {
      op->vtkLineWidget::SetClampToBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampToBounds() :
      op->vtkLineWidget::GetClampToBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampToBoundsOn();
    }
    else
    {
      op->vtkLineWidget::ClampToBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampToBoundsOff();
    }
    else
    {
      op->vtkLineWidget::ClampToBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkLineWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkLineWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkLineWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkLineWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkLineWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLineWidget_Methods[] = {
  {"IsTypeOf", PyvtkLineWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLineWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLineWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLineWidget\nC++: static vtkLineWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLineWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLineWidget\nC++: vtkLineWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLineWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLineWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkLineWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkLineWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetResolution", PyvtkLineWidget_SetResolution, METH_VARARGS,
   "SetResolution(self, r:int) -> None\nC++: void SetResolution(int r)\n\nSet/Get the resolution (number of subdivisions) of the line.\n"},
  {"GetResolution", PyvtkLineWidget_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: int GetResolution()\n\n"},
  {"SetPoint1", PyvtkLineWidget_SetPoint1, METH_VARARGS,
   "SetPoint1(self, x:float, y:float, z:float) -> None\nC++: void SetPoint1(double x, double y, double z)\nSetPoint1(self, x:[float, float, float]) -> None\nC++: void SetPoint1(double x[3])\n\nSet/Get the position of first end point.\n"},
  {"GetPoint1", PyvtkLineWidget_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: double *GetPoint1()\nGetPoint1(self, xyz:[float, float, float]) -> None\nC++: void GetPoint1(double xyz[3])\n\n"},
  {"SetPoint2", PyvtkLineWidget_SetPoint2, METH_VARARGS,
   "SetPoint2(self, x:float, y:float, z:float) -> None\nC++: void SetPoint2(double x, double y, double z)\nSetPoint2(self, x:[float, float, float]) -> None\nC++: void SetPoint2(double x[3])\n\nSet position of other end point.\n"},
  {"GetPoint2", PyvtkLineWidget_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: double *GetPoint2()\nGetPoint2(self, xyz:[float, float, float]) -> None\nC++: void GetPoint2(double xyz[3])\n\n"},
  {"SetAlign", PyvtkLineWidget_SetAlign, METH_VARARGS,
   "SetAlign(self, _arg:int) -> None\nC++: virtual void SetAlign(int _arg)\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"GetAlignMinValue", PyvtkLineWidget_GetAlignMinValue, METH_VARARGS,
   "GetAlignMinValue(self) -> int\nC++: virtual int GetAlignMinValue()\n\n"},
  {"GetAlignMaxValue", PyvtkLineWidget_GetAlignMaxValue, METH_VARARGS,
   "GetAlignMaxValue(self) -> int\nC++: virtual int GetAlignMaxValue()\n\n"},
  {"GetAlign", PyvtkLineWidget_GetAlign, METH_VARARGS,
   "GetAlign(self) -> int\nC++: virtual int GetAlign()\n\n"},
  {"SetAlignToXAxis", PyvtkLineWidget_SetAlignToXAxis, METH_VARARGS,
   "SetAlignToXAxis(self) -> None\nC++: void SetAlignToXAxis()\n\n"},
  {"SetAlignToYAxis", PyvtkLineWidget_SetAlignToYAxis, METH_VARARGS,
   "SetAlignToYAxis(self) -> None\nC++: void SetAlignToYAxis()\n\n"},
  {"SetAlignToZAxis", PyvtkLineWidget_SetAlignToZAxis, METH_VARARGS,
   "SetAlignToZAxis(self) -> None\nC++: void SetAlignToZAxis()\n\n"},
  {"SetAlignToNone", PyvtkLineWidget_SetAlignToNone, METH_VARARGS,
   "SetAlignToNone(self) -> None\nC++: void SetAlignToNone()\n\n"},
  {"SetClampToBounds", PyvtkLineWidget_SetClampToBounds, METH_VARARGS,
   "SetClampToBounds(self, _arg:int) -> None\nC++: virtual void SetClampToBounds(vtkTypeBool _arg)\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {"GetClampToBounds", PyvtkLineWidget_GetClampToBounds, METH_VARARGS,
   "GetClampToBounds(self) -> int\nC++: virtual vtkTypeBool GetClampToBounds()\n\n"},
  {"ClampToBoundsOn", PyvtkLineWidget_ClampToBoundsOn, METH_VARARGS,
   "ClampToBoundsOn(self) -> None\nC++: virtual void ClampToBoundsOn()\n\n"},
  {"ClampToBoundsOff", PyvtkLineWidget_ClampToBoundsOff, METH_VARARGS,
   "ClampToBoundsOff(self) -> None\nC++: virtual void ClampToBoundsOff()\n\n"},
  {"GetPolyData", PyvtkLineWidget_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the line.  The\npolydata consists of n+1 points, where n is the resolution of the\nline. These point values are guaranteed to be up-to-date when\neither the InteractionEvent or EndInteraction events are invoked.\nThe user provides the vtkPolyData and the points and polyline are\nadded to it.\n"},
  {"GetHandleProperty", PyvtkLineWidget_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkLineWidget_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"GetLineProperty", PyvtkLineWidget_GetLineProperty, METH_VARARGS,
   "GetLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {"GetSelectedLineProperty", PyvtkLineWidget_GetSelectedLineProperty, METH_VARARGS,
   "GetSelectedLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLineWidget_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("enabled"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetResolution/SetResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point1"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetPoint1(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetPoint1(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetPoint1(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoint1/SetPoint1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point2"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetPoint2(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetPoint2(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetPoint2(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoint2/SetPoint2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("align"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetAlign(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetAlign(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetAlign(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAlign/SetAlign\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("clamp_to_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetClampToBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLineWidget_SetClampToBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLineWidget_SetClampToBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetClampToBounds/SetClampToBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetSelectedHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedHandleProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("line_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetLineProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLineProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_line_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLineWidget_GetSelectedLineProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedLineProperty\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLineWidget_Doc =
  "vtkLineWidget - 3D widget for manipulating a line\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a line that can be interactively placed in a\n"
  "scene. The line has two handles (at its endpoints), plus the line can\n"
  "be picked to translate it in the scene.  A nice feature of the object\n"
  "is that the vtkLineWidget, like any 3D widget, will work with the\n"
  "current interactor style and any other widgets present in the scene.\n"
  "That is, if vtkLineWidget does not handle an event, then all other\n"
  "registered observers (including the interactor style) have an\n"
  "opportunity to process the event. Otherwise, the vtkLineWidget will\n"
  "terminate the processing of the event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkLineWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) By\n"
  "grabbing one of the two end point handles (use the left mouse\n"
  "button), the line can be oriented and stretched (the other end point\n"
  "remains fixed). By grabbing the line itself, or using the middle\n"
  "mouse button, the entire line can be translated.  Scaling (about the\n"
  "center of the line) is achieved by using the right mouse button. By\n"
  "moving the mouse \"up\" the render window the line will be made bigger;\n"
  "by moving \"down\" the render window the widget will be made smaller.\n"
  "Turn off the widget by pressing the \"i\" key again (or invoke the\n"
  "Off() method). (Note: picking the line or either one of the two end\n"
  "point handles causes a vtkPointWidget to appear.  This widget has the\n"
  "ability to constrain motion to an axis by pressing the \"shift\" key\n"
  "while moving the mouse.)\n\n"
  "The vtkLineWidget has several methods that can be used in conjunction\n"
  "with other VTK objects. The Set/GetResolution() methods control the\n"
  "number of subdivisions of the line; the GetPolyData() method can be\n"
  "used to get the polygonal representation and can be used for things\n"
  "like seeding streamlines. Typical usage of the widget is to make use\n"
  "of the StartInteractionEvent, InteractionEvent, and\n"
  "EndInteractionEvent events. The InteractionEvent is called on mouse\n"
  "motion; the other two events are called on button down and button up\n"
  "(either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the line. For example, you\n"
  "can set the property for the handles and line. In addition there are\n"
  "methods to constrain the line so that it is aligned along the x-y-z\n"
  "axes.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLineWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkLineWidget", // tp_name
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
  PyvtkLineWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLineWidget_StaticNew()
{
  return vtkLineWidget::New();
}

PyObject *PyvtkLineWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLineWidget_Type, PyvtkLineWidget_Methods,
    "vtkLineWidget",
 &PyvtkLineWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLineWidget_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLineWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLineWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLineWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

