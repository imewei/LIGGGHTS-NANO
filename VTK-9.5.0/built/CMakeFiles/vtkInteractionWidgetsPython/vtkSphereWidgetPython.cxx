// python wrapper for vtkSphereWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphereWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSphereWidget(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSphereWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static PyObject *
PyvtkSphereWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereWidget *tempr = vtkSphereWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereWidget::NewInstance());

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
PyvtkSphereWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphereWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphereWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::PlaceWidget(temp0);
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
PyvtkSphereWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkSphereWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSphereWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkSphereWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkSphereWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkSphereWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkSphereWidget::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkSphereWidget::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSphereWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToOff();
    }
    else
    {
      op->vtkSphereWidget::SetRepresentationToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToWireframe();
    }
    else
    {
      op->vtkSphereWidget::SetRepresentationToWireframe();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToSurface();
    }
    else
    {
      op->vtkSphereWidget::SetRepresentationToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaResolution(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereWidget::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiResolution(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereWidget::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereWidget::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetCenter(temp0);
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
PyvtkSphereWidget_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereWidget_SetCenter_s1(self, args);
    case 1:
      return PyvtkSphereWidget_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkSphereWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereWidget::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkSphereWidget::GetCenter(temp0);
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
PyvtkSphereWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSphereWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkSphereWidget_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkSphereWidget_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkSphereWidget::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_TranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationOn();
    }
    else
    {
      op->vtkSphereWidget::TranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_TranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationOff();
    }
    else
    {
      op->vtkSphereWidget::TranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkSphereWidget::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_ScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleOn();
    }
    else
    {
      op->vtkSphereWidget::ScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_ScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleOff();
    }
    else
    {
      op->vtkSphereWidget::ScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleVisibility(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkSphereWidget::GetHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOn();
    }
    else
    {
      op->vtkSphereWidget::HandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOff();
    }
    else
    {
      op->vtkSphereWidget::HandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetHandleDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->SetHandleDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereWidget::SetHandleDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetHandleDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHandleDirection(temp0);
    }
    else
    {
      op->vtkSphereWidget::SetHandleDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetHandleDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereWidget_SetHandleDirection_s1(self, args);
    case 1:
      return PyvtkSphereWidget_SetHandleDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleDirection");
  return nullptr;
}


static PyObject *
PyvtkSphereWidget_GetHandleDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandleDirection() :
      op->vtkSphereWidget::GetHandleDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition() :
      op->vtkSphereWidget::GetHandlePosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  vtkSphere *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphere"))
  {
    if (ap.IsBound())
    {
      op->GetSphere(temp0);
    }
    else
    {
      op->vtkSphereWidget::GetSphere(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSphereProperty() :
      op->vtkSphereWidget::GetSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSelectedSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedSphereProperty() :
      op->vtkSphereWidget::GetSelectedSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSphereWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSphereWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereWidget_Methods[] = {
  {"IsTypeOf", PyvtkSphereWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphereWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphereWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphereWidget\nC++: static vtkSphereWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphereWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphereWidget\nC++: vtkSphereWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphereWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphereWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkSphereWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkSphereWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetRepresentation", PyvtkSphereWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, _arg:int) -> None\nC++: virtual void SetRepresentation(int _arg)\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {"GetRepresentationMinValue", PyvtkSphereWidget_GetRepresentationMinValue, METH_VARARGS,
   "GetRepresentationMinValue(self) -> int\nC++: virtual int GetRepresentationMinValue()\n\n"},
  {"GetRepresentationMaxValue", PyvtkSphereWidget_GetRepresentationMaxValue, METH_VARARGS,
   "GetRepresentationMaxValue(self) -> int\nC++: virtual int GetRepresentationMaxValue()\n\n"},
  {"GetRepresentation", PyvtkSphereWidget_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self) -> int\nC++: virtual int GetRepresentation()\n\n"},
  {"SetRepresentationToOff", PyvtkSphereWidget_SetRepresentationToOff, METH_VARARGS,
   "SetRepresentationToOff(self) -> None\nC++: void SetRepresentationToOff()\n\n"},
  {"SetRepresentationToWireframe", PyvtkSphereWidget_SetRepresentationToWireframe, METH_VARARGS,
   "SetRepresentationToWireframe(self) -> None\nC++: void SetRepresentationToWireframe()\n\n"},
  {"SetRepresentationToSurface", PyvtkSphereWidget_SetRepresentationToSurface, METH_VARARGS,
   "SetRepresentationToSurface(self) -> None\nC++: void SetRepresentationToSurface()\n\n"},
  {"SetThetaResolution", PyvtkSphereWidget_SetThetaResolution, METH_VARARGS,
   "SetThetaResolution(self, r:int) -> None\nC++: void SetThetaResolution(int r)\n\nSet/Get the resolution of the sphere in the Theta direction. The\ndefault is 16.\n"},
  {"GetThetaResolution", PyvtkSphereWidget_GetThetaResolution, METH_VARARGS,
   "GetThetaResolution(self) -> int\nC++: int GetThetaResolution()\n\n"},
  {"SetPhiResolution", PyvtkSphereWidget_SetPhiResolution, METH_VARARGS,
   "SetPhiResolution(self, r:int) -> None\nC++: void SetPhiResolution(int r)\n\nSet/Get the resolution of the sphere in the Phi direction. The\ndefault is 8.\n"},
  {"GetPhiResolution", PyvtkSphereWidget_GetPhiResolution, METH_VARARGS,
   "GetPhiResolution(self) -> int\nC++: int GetPhiResolution()\n\n"},
  {"SetRadius", PyvtkSphereWidget_SetRadius, METH_VARARGS,
   "SetRadius(self, r:float) -> None\nC++: void SetRadius(double r)\n\nSet/Get the radius of sphere. Default is .5.\n"},
  {"GetRadius", PyvtkSphereWidget_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: double GetRadius()\n\n"},
  {"SetCenter", PyvtkSphereWidget_SetCenter, METH_VARARGS,
   "SetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\nSetCenter(self, x:[float, float, float]) -> None\nC++: void SetCenter(double x[3])\n\nSet/Get the center of the sphere.\n"},
  {"GetCenter", PyvtkSphereWidget_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, xyz:[float, float, float]) -> None\nC++: void GetCenter(double xyz[3])\n\n"},
  {"SetTranslation", PyvtkSphereWidget_SetTranslation, METH_VARARGS,
   "SetTranslation(self, _arg:int) -> None\nC++: virtual void SetTranslation(vtkTypeBool _arg)\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {"GetTranslation", PyvtkSphereWidget_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> int\nC++: virtual vtkTypeBool GetTranslation()\n\n"},
  {"TranslationOn", PyvtkSphereWidget_TranslationOn, METH_VARARGS,
   "TranslationOn(self) -> None\nC++: virtual void TranslationOn()\n\n"},
  {"TranslationOff", PyvtkSphereWidget_TranslationOff, METH_VARARGS,
   "TranslationOff(self) -> None\nC++: virtual void TranslationOff()\n\n"},
  {"SetScale", PyvtkSphereWidget_SetScale, METH_VARARGS,
   "SetScale(self, _arg:int) -> None\nC++: virtual void SetScale(vtkTypeBool _arg)\n\n"},
  {"GetScale", PyvtkSphereWidget_GetScale, METH_VARARGS,
   "GetScale(self) -> int\nC++: virtual vtkTypeBool GetScale()\n\n"},
  {"ScaleOn", PyvtkSphereWidget_ScaleOn, METH_VARARGS,
   "ScaleOn(self) -> None\nC++: virtual void ScaleOn()\n\n"},
  {"ScaleOff", PyvtkSphereWidget_ScaleOff, METH_VARARGS,
   "ScaleOff(self) -> None\nC++: virtual void ScaleOff()\n\n"},
  {"SetHandleVisibility", PyvtkSphereWidget_SetHandleVisibility, METH_VARARGS,
   "SetHandleVisibility(self, _arg:int) -> None\nC++: virtual void SetHandleVisibility(vtkTypeBool _arg)\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {"GetHandleVisibility", PyvtkSphereWidget_GetHandleVisibility, METH_VARARGS,
   "GetHandleVisibility(self) -> int\nC++: virtual vtkTypeBool GetHandleVisibility()\n\n"},
  {"HandleVisibilityOn", PyvtkSphereWidget_HandleVisibilityOn, METH_VARARGS,
   "HandleVisibilityOn(self) -> None\nC++: virtual void HandleVisibilityOn()\n\n"},
  {"HandleVisibilityOff", PyvtkSphereWidget_HandleVisibilityOff, METH_VARARGS,
   "HandleVisibilityOff(self) -> None\nC++: virtual void HandleVisibilityOff()\n\n"},
  {"SetHandleDirection", PyvtkSphereWidget_SetHandleDirection, METH_VARARGS,
   "SetHandleDirection(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetHandleDirection(double _arg1, double _arg2,\n    double _arg3)\nSetHandleDirection(self, _arg:(float, float, float)) -> None\nC++: virtual void SetHandleDirection(const double _arg[3])\n\nSet/Get the direction vector of the handle relative to the center\nof the sphere. The direction of the handle is from the sphere\ncenter to the handle position.\n"},
  {"GetHandleDirection", PyvtkSphereWidget_GetHandleDirection, METH_VARARGS,
   "GetHandleDirection(self) -> (float, float, float)\nC++: virtual double *GetHandleDirection()\n\n"},
  {"GetHandlePosition", PyvtkSphereWidget_GetHandlePosition, METH_VARARGS,
   "GetHandlePosition(self) -> (float, float, float)\nC++: virtual double *GetHandlePosition()\n\nGet the position of the handle.\n"},
  {"GetPolyData", PyvtkSphereWidget_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the sphere. \nThe polydata consists of n+1 points, where n is the resolution of\nthe sphere. These point values are guaranteed to be up-to-date\nwhen either the InteractionEvent or EndInteraction events are\ninvoked. The user provides the vtkPolyData and the points and\npolysphere are added to it.\n"},
  {"GetSphere", PyvtkSphereWidget_GetSphere, METH_VARARGS,
   "GetSphere(self, sphere:vtkSphere) -> None\nC++: void GetSphere(vtkSphere *sphere)\n\nGet the spherical implicit function defined by this widget.  Note\nthat vtkSphere is a subclass of vtkImplicitFunction, meaning that\nit can be used by a variety of filters to perform clipping,\ncutting, and selection of data.\n"},
  {"GetSphereProperty", PyvtkSphereWidget_GetSphereProperty, METH_VARARGS,
   "GetSphereProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedSphereProperty", PyvtkSphereWidget_GetSelectedSphereProperty, METH_VARARGS,
   "GetSelectedSphereProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedSphereProperty()\n\n"},
  {"GetHandleProperty", PyvtkSphereWidget_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be manipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkSphereWidget_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSphereWidget_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("enabled"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetEnabled(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetEnabled(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetEnabled\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRepresentation/SetRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("theta_resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetThetaResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetThetaResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetThetaResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetThetaResolution/SetThetaResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("phi_resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetPhiResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetPhiResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetPhiResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPhiResolution/SetPhiResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRadius/SetRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("translation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetTranslation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetTranslation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetTranslation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTranslation/SetTranslation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScale/SetScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_visibility"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetHandleVisibility(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetHandleVisibility(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetHandleVisibility(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHandleVisibility/SetHandleVisibility\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_direction"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetHandleDirection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSphereWidget_SetHandleDirection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSphereWidget_SetHandleDirection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHandleDirection/SetHandleDirection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_position"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetHandlePosition(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHandlePosition\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("sphere_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetSphereProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSphereProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_sphere_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetSelectedSphereProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedSphereProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("handle_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSphereWidget_GetHandleProperty(self, args);
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
      auto result = PyvtkSphereWidget_GetSelectedHandleProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedHandleProperty\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSphereWidget_Doc =
  "vtkSphereWidget - 3D widget for manipulating a sphere\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a sphere that can be interactively placed in a\n"
  "scene.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkSphereWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) Events\n"
  "that occur outside of the widget (i.e., no part of the widget is\n"
  "picked) are propagated to any other registered obsevers (such as the\n"
  "interaction style).  Turn off the widget by pressing the \"i\" key\n"
  "again (or invoke the Off() method).\n\n"
  "The vtkSphereWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The Set/GetThetaResolution() and\n"
  "Set/GetPhiResolution() methods control the number of subdivisions of\n"
  "the sphere in the theta and phi directions; the GetPolyData() method\n"
  "can be used to get the polygonal representation and can be used for\n"
  "things like seeding streamlines. The GetSphere() method returns a\n"
  "sphere implicit function that can be used for cutting and clipping.\n"
  "Typical usage of the widget is to make use of the\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent\n"
  "events. The InteractionEvent is called on mouse motion; the other two\n"
  "events are called on button down and button up (any mouse button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the sphere.\n\n"
  "@sa\n"
  "vtk3DWidget vtkLineWidget vtkBoxWidget vtkPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphereWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSphereWidget", // tp_name
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
  PyvtkSphereWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereWidget_StaticNew()
{
  return vtkSphereWidget::New();
}

PyObject *PyvtkSphereWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphereWidget_Type, PyvtkSphereWidget_Methods,
    "vtkSphereWidget",
 &PyvtkSphereWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSphereWidget_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SPHERE_OFF", 0 },
        { "VTK_SPHERE_WIREFRAME", 1 },
        { "VTK_SPHERE_SURFACE", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

