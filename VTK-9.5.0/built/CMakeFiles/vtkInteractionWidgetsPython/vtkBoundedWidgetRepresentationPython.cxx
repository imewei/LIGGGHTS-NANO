// python wrapper for vtkBoundedWidgetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoundedWidgetRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkBoundedWidgetRepresentation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkBoundedWidgetRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkBoundedWidgetRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundedWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundedWidgetRepresentation *tempr = vtkBoundedWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedWidgetRepresentation::NewInstance());

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
PyvtkBoundedWidgetRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoundedWidgetRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoundedWidgetRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineTranslation(temp0);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetOutlineTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkBoundedWidgetRepresentation::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::OutlineTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOff();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::OutlineTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutsideBounds(temp0);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetOutsideBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkBoundedWidgetRepresentation::GetOutsideBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::OutsideBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOff();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::OutsideBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrainToWidgetBounds(temp0);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetConstrainToWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConstrainToWidgetBounds() :
      op->vtkBoundedWidgetRepresentation::GetConstrainToWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_ConstrainToWidgetBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::ConstrainToWidgetBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_ConstrainToWidgetBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOff();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::ConstrainToWidgetBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoundedWidgetRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoundedWidgetRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetWidgetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

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
      op->SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedWidgetRepresentation_SetWidgetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetBounds(temp0);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedWidgetRepresentation_SetWidgetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBoundedWidgetRepresentation_SetWidgetBounds_s1(self, args);
    case 1:
      return PyvtkBoundedWidgetRepresentation_SetWidgetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWidgetBounds");
  return nullptr;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWidgetBounds() :
      op->vtkBoundedWidgetRepresentation::GetWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkBoundedWidgetRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxis(temp0);
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkBoundedWidgetRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkBoundedWidgetRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedWidgetRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedWidgetRepresentation *op = static_cast<vtkBoundedWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkBoundedWidgetRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundedWidgetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBoundedWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundedWidgetRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundedWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoundedWidgetRepresentation\nC++: static vtkBoundedWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundedWidgetRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoundedWidgetRepresentation\nC++: vtkBoundedWidgetRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoundedWidgetRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoundedWidgetRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutlineTranslation", PyvtkBoundedWidgetRepresentation_SetOutlineTranslation, METH_VARARGS,
   "SetOutlineTranslation(self, _arg:bool) -> None\nC++: virtual void SetOutlineTranslation(bool _arg)\n\n"},
  {"GetOutlineTranslation", PyvtkBoundedWidgetRepresentation_GetOutlineTranslation, METH_VARARGS,
   "GetOutlineTranslation(self) -> bool\nC++: virtual bool GetOutlineTranslation()\n\n"},
  {"OutlineTranslationOn", PyvtkBoundedWidgetRepresentation_OutlineTranslationOn, METH_VARARGS,
   "OutlineTranslationOn(self) -> None\nC++: virtual void OutlineTranslationOn()\n\n"},
  {"OutlineTranslationOff", PyvtkBoundedWidgetRepresentation_OutlineTranslationOff, METH_VARARGS,
   "OutlineTranslationOff(self) -> None\nC++: virtual void OutlineTranslationOff()\n\n"},
  {"SetOutsideBounds", PyvtkBoundedWidgetRepresentation_SetOutsideBounds, METH_VARARGS,
   "SetOutsideBounds(self, _arg:bool) -> None\nC++: virtual void SetOutsideBounds(bool _arg)\n\n"},
  {"GetOutsideBounds", PyvtkBoundedWidgetRepresentation_GetOutsideBounds, METH_VARARGS,
   "GetOutsideBounds(self) -> bool\nC++: virtual bool GetOutsideBounds()\n\n"},
  {"OutsideBoundsOn", PyvtkBoundedWidgetRepresentation_OutsideBoundsOn, METH_VARARGS,
   "OutsideBoundsOn(self) -> None\nC++: virtual void OutsideBoundsOn()\n\n"},
  {"OutsideBoundsOff", PyvtkBoundedWidgetRepresentation_OutsideBoundsOff, METH_VARARGS,
   "OutsideBoundsOff(self) -> None\nC++: virtual void OutsideBoundsOff()\n\n"},
  {"SetConstrainToWidgetBounds", PyvtkBoundedWidgetRepresentation_SetConstrainToWidgetBounds, METH_VARARGS,
   "SetConstrainToWidgetBounds(self, _arg:bool) -> None\nC++: virtual void SetConstrainToWidgetBounds(bool _arg)\n\n"},
  {"GetConstrainToWidgetBounds", PyvtkBoundedWidgetRepresentation_GetConstrainToWidgetBounds, METH_VARARGS,
   "GetConstrainToWidgetBounds(self) -> bool\nC++: virtual bool GetConstrainToWidgetBounds()\n\n"},
  {"ConstrainToWidgetBoundsOn", PyvtkBoundedWidgetRepresentation_ConstrainToWidgetBoundsOn, METH_VARARGS,
   "ConstrainToWidgetBoundsOn(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOn()\n\n"},
  {"ConstrainToWidgetBoundsOff", PyvtkBoundedWidgetRepresentation_ConstrainToWidgetBoundsOff, METH_VARARGS,
   "ConstrainToWidgetBoundsOff(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOff()\n\n"},
  {"GetOutlineProperty", PyvtkBoundedWidgetRepresentation_GetOutlineProperty, METH_VARARGS,
   "GetOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\n"},
  {"GetSelectedOutlineProperty", PyvtkBoundedWidgetRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "GetSelectedOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\n"},
  {"SetWidgetBounds", PyvtkBoundedWidgetRepresentation_SetWidgetBounds, METH_VARARGS,
   "SetWidgetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetWidgetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetWidgetBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetWidgetBounds(const double _arg[6])\n\nSet/Get the bounds of the widget representation. PlaceWidget can\nalso be used to set the bounds of the widget but it may also have\nother effects on the internal state of the representation. Use\nthis function when only the widget bounds need to be modified.\n"},
  {"GetWidgetBounds", PyvtkBoundedWidgetRepresentation_GetWidgetBounds, METH_VARARGS,
   "GetWidgetBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetWidgetBounds()\n\n"},
  {"GetTranslationAxis", PyvtkBoundedWidgetRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\nGets/Sets the constraint axis for translations. Returns\nAxis::NONE if none. Default is Axis::NONE (-1)@see\nGetOutlineTranslation()\n"},
  {"SetTranslationAxis", PyvtkBoundedWidgetRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkBoundedWidgetRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkBoundedWidgetRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"SetXTranslationAxisOn", PyvtkBoundedWidgetRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nConstrains translation on given axis.@see SetTranslationAxis()\n"},
  {"SetYTranslationAxisOn", PyvtkBoundedWidgetRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkBoundedWidgetRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkBoundedWidgetRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkBoundedWidgetRepresentation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("outline_translation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetOutlineTranslation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetOutlineTranslation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetOutlineTranslation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutlineTranslation/SetOutlineTranslation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("outside_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetOutsideBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetOutsideBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetOutsideBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutsideBounds/SetOutsideBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("constrain_to_widget_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetConstrainToWidgetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetConstrainToWidgetBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetConstrainToWidgetBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConstrainToWidgetBounds/SetConstrainToWidgetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("widget_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetWidgetBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetWidgetBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetWidgetBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWidgetBounds/SetWidgetBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("translation_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetTranslationAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetTranslationAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetTranslationAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTranslationAxis/SetTranslationAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_translation_axis_on"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetXTranslationAxisOn(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetXTranslationAxisOn(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXTranslationAxisOn\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_translation_axis_on"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetYTranslationAxisOn(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetYTranslationAxisOn(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYTranslationAxisOn\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_translation_axis_on"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoundedWidgetRepresentation_SetZTranslationAxisOn(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoundedWidgetRepresentation_SetZTranslationAxisOn(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZTranslationAxisOn\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("outline_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetOutlineProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetOutlineProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selected_outline_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoundedWidgetRepresentation_GetSelectedOutlineProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSelectedOutlineProperty\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkBoundedWidgetRepresentation_Doc =
  "vtkBoundedWidgetRepresentation - Extends the vtkWidgetRepresentation\nto help positioning widget in space and how it should be displayed\nregarding to input bounds.\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "*\n"
  "* This adds an Outline feature for the widget: an interactive box can\n"
  "be displayed,\n"
  "* representing the bounding box of the widget. This is usually\n"
  "  initialized\n"
  "* with some input data bounding box (for instance when using widget\n"
  "  to create a slice).\n"
  "*\n"
  "* Then, different flags control the behavior of the widget origin\n"
  "  interactions:\n"
  "* - OutsideBounds: when on (default), the origin of the widget can\n"
  "  move outside the\n"
  "* InitialBounds (see vtkWidgetRepresentation::PlaceWidget)\n"
  "* - ConstrainToWidgetBounds: when on (default), the origin of the\n"
  "  Widget cannot move outside\n"
  "* the WidgetBounds. When off, the Outline is extended as needed to\n"
  "  contains the origin.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoundedWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBoundedWidgetRepresentation", // tp_name
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
  PyvtkBoundedWidgetRepresentation_Doc, // tp_doc
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

PyObject *PyvtkBoundedWidgetRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoundedWidgetRepresentation_Type, PyvtkBoundedWidgetRepresentation_Methods,
    "vtkBoundedWidgetRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkBoundedWidgetRepresentation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoundedWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundedWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundedWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

