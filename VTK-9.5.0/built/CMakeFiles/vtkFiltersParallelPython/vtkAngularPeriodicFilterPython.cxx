// python wrapper for vtkAngularPeriodicFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAngularPeriodicFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAngularPeriodicFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAngularPeriodicFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPeriodicFilter_ClassNew
extern "C" { PyObject *PyvtkPeriodicFilter_ClassNew(); }
#define DECLARED_PyvtkPeriodicFilter_ClassNew
#endif

static PyObject *
PyvtkAngularPeriodicFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngularPeriodicFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngularPeriodicFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngularPeriodicFilter *tempr = vtkAngularPeriodicFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngularPeriodicFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngularPeriodicFilter::NewInstance());

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
PyvtkAngularPeriodicFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAngularPeriodicFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAngularPeriodicFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeRotationsOnTheFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeRotationsOnTheFly(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetComputeRotationsOnTheFly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetComputeRotationsOnTheFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeRotationsOnTheFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeRotationsOnTheFly() :
      op->vtkAngularPeriodicFilter::GetComputeRotationsOnTheFly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRotationsOnTheFlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeRotationsOnTheFlyOn();
    }
    else
    {
      op->vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRotationsOnTheFlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeRotationsOnTheFlyOff();
    }
    else
    {
      op->vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationMode(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationModeMinValue() :
      op->vtkAngularPeriodicFilter::GetRotationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationModeMaxValue() :
      op->vtkAngularPeriodicFilter::GetRotationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationMode() :
      op->vtkAngularPeriodicFilter::GetRotationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationModeToDirectAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationModeToDirectAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationModeToDirectAngle();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationModeToDirectAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationModeToArrayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationModeToArrayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationModeToArrayValue();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationModeToArrayValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkAngularPeriodicFilter::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationArrayName(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRotationArrayName() :
      op->vtkAngularPeriodicFilter::GetRotationArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxis(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMinValue() :
      op->vtkAngularPeriodicFilter::GetRotationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMaxValue() :
      op->vtkAngularPeriodicFilter::GetRotationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxis() :
      op->vtkAngularPeriodicFilter::GetRotationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToX();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToY();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToZ();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

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
      op->vtkAngularPeriodicFilter::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAngularPeriodicFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAngularPeriodicFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAngularPeriodicFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkAngularPeriodicFilter_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkAngularPeriodicFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkAngularPeriodicFilter_Methods[] = {
  {"IsTypeOf", PyvtkAngularPeriodicFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAngularPeriodicFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAngularPeriodicFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAngularPeriodicFilter\nC++: static vtkAngularPeriodicFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAngularPeriodicFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAngularPeriodicFilter\nC++: vtkAngularPeriodicFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAngularPeriodicFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAngularPeriodicFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComputeRotationsOnTheFly", PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly, METH_VARARGS,
   "SetComputeRotationsOnTheFly(self, _arg:bool) -> None\nC++: virtual void SetComputeRotationsOnTheFly(bool _arg)\n\nSet/Get whether the rotated array values should be computed\non-the-fly (default), which is compute-intensive, or the arrays\nshould be explicitly generated and stored, at the cost of using\nmore memory.\n"},
  {"GetComputeRotationsOnTheFly", PyvtkAngularPeriodicFilter_GetComputeRotationsOnTheFly, METH_VARARGS,
   "GetComputeRotationsOnTheFly(self) -> bool\nC++: virtual bool GetComputeRotationsOnTheFly()\n\n"},
  {"ComputeRotationsOnTheFlyOn", PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOn, METH_VARARGS,
   "ComputeRotationsOnTheFlyOn(self) -> None\nC++: virtual void ComputeRotationsOnTheFlyOn()\n\n"},
  {"ComputeRotationsOnTheFlyOff", PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOff, METH_VARARGS,
   "ComputeRotationsOnTheFlyOff(self) -> None\nC++: virtual void ComputeRotationsOnTheFlyOff()\n\n"},
  {"SetRotationMode", PyvtkAngularPeriodicFilter_SetRotationMode, METH_VARARGS,
   "SetRotationMode(self, _arg:int) -> None\nC++: virtual void SetRotationMode(int _arg)\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"GetRotationModeMinValue", PyvtkAngularPeriodicFilter_GetRotationModeMinValue, METH_VARARGS,
   "GetRotationModeMinValue(self) -> int\nC++: virtual int GetRotationModeMinValue()\n\n"},
  {"GetRotationModeMaxValue", PyvtkAngularPeriodicFilter_GetRotationModeMaxValue, METH_VARARGS,
   "GetRotationModeMaxValue(self) -> int\nC++: virtual int GetRotationModeMaxValue()\n\n"},
  {"GetRotationMode", PyvtkAngularPeriodicFilter_GetRotationMode, METH_VARARGS,
   "GetRotationMode(self) -> int\nC++: virtual int GetRotationMode()\n\n"},
  {"SetRotationModeToDirectAngle", PyvtkAngularPeriodicFilter_SetRotationModeToDirectAngle, METH_VARARGS,
   "SetRotationModeToDirectAngle(self) -> None\nC++: void SetRotationModeToDirectAngle()\n\n"},
  {"SetRotationModeToArrayValue", PyvtkAngularPeriodicFilter_SetRotationModeToArrayValue, METH_VARARGS,
   "SetRotationModeToArrayValue(self) -> None\nC++: void SetRotationModeToArrayValue()\n\n"},
  {"SetRotationAngle", PyvtkAngularPeriodicFilter_SetRotationAngle, METH_VARARGS,
   "SetRotationAngle(self, _arg:float) -> None\nC++: virtual void SetRotationAngle(double _arg)\n\nSet/Get Rotation angle, in degrees. Used only with\nVTK_ROTATION_MODE_DIRECT_ANGLE. Default is 180.\n"},
  {"GetRotationAngle", PyvtkAngularPeriodicFilter_GetRotationAngle, METH_VARARGS,
   "GetRotationAngle(self) -> float\nC++: virtual double GetRotationAngle()\n\n"},
  {"SetRotationArrayName", PyvtkAngularPeriodicFilter_SetRotationArrayName, METH_VARARGS,
   "SetRotationArrayName(self, _arg:str) -> None\nC++: virtual void SetRotationArrayName(const char *_arg)\n\nSet/Get Name of array to get the angle from. Used only with\nVTK_ROTATION_MODE_ARRAY_VALUE.\n"},
  {"GetRotationArrayName", PyvtkAngularPeriodicFilter_GetRotationArrayName, METH_VARARGS,
   "GetRotationArrayName(self) -> str\nC++: virtual char *GetRotationArrayName()\n\n"},
  {"SetRotationAxis", PyvtkAngularPeriodicFilter_SetRotationAxis, METH_VARARGS,
   "SetRotationAxis(self, _arg:int) -> None\nC++: virtual void SetRotationAxis(int _arg)\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"GetRotationAxisMinValue", PyvtkAngularPeriodicFilter_GetRotationAxisMinValue, METH_VARARGS,
   "GetRotationAxisMinValue(self) -> int\nC++: virtual int GetRotationAxisMinValue()\n\n"},
  {"GetRotationAxisMaxValue", PyvtkAngularPeriodicFilter_GetRotationAxisMaxValue, METH_VARARGS,
   "GetRotationAxisMaxValue(self) -> int\nC++: virtual int GetRotationAxisMaxValue()\n\n"},
  {"GetRotationAxis", PyvtkAngularPeriodicFilter_GetRotationAxis, METH_VARARGS,
   "GetRotationAxis(self) -> int\nC++: virtual int GetRotationAxis()\n\n"},
  {"SetRotationAxisToX", PyvtkAngularPeriodicFilter_SetRotationAxisToX, METH_VARARGS,
   "SetRotationAxisToX(self) -> None\nC++: void SetRotationAxisToX()\n\n"},
  {"SetRotationAxisToY", PyvtkAngularPeriodicFilter_SetRotationAxisToY, METH_VARARGS,
   "SetRotationAxisToY(self) -> None\nC++: void SetRotationAxisToY()\n\n"},
  {"SetRotationAxisToZ", PyvtkAngularPeriodicFilter_SetRotationAxisToZ, METH_VARARGS,
   "SetRotationAxisToZ(self) -> None\nC++: void SetRotationAxisToZ()\n\n"},
  {"SetCenter", PyvtkAngularPeriodicFilter_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet/Get Rotation Center\n"},
  {"GetCenter", PyvtkAngularPeriodicFilter_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAngularPeriodicFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("compute_rotations_on_the_fly"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetComputeRotationsOnTheFly(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeRotationsOnTheFly/SetComputeRotationsOnTheFly\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetRotationMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetRotationMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetRotationMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationMode/SetRotationMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetRotationAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetRotationAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetRotationAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationAngle/SetRotationAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetRotationArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetRotationArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetRotationArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationArrayName/SetRotationArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetRotationAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetRotationAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetRotationAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationAxis/SetRotationAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAngularPeriodicFilter_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAngularPeriodicFilter_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAngularPeriodicFilter_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAngularPeriodicFilter_Doc =
  "vtkAngularPeriodicFilter - A filter to produce mapped angular\nperiodic multiblock dataset from a single block, by rotation.\n\n"
  "Superclass: vtkPeriodicFilter\n\n"
  "Generate angular periodic dataset by rotating points, vectors and\n"
  "tensors data arrays from an original data array. The generated\n"
  "dataset is of the same type than the input (float or double). To\n"
  "compute the rotation this filter needs i) a number of periods, which\n"
  "can be the maximum, i.e. a full period, ii) an angle, which can be\n"
  "fetched from a field data array in radian or directly in degrees;\n"
  "iii) the axis (X, Y or Z) and the center of rotation. Point\n"
  "coordinates are transformed, as well as all vectors (3-components)\n"
  "and tensors (9 components) in points and cell data arrays. The\n"
  "generated multiblock will have the same tree architecture than the\n"
  "input, except transformed leaves are replaced by a\n"
  "vtkMultipieceDataSet. Supported input leaf dataset type are:\n"
  "vtkPolyData, vtkStructuredGrid and vtkUnstructuredGrid. Other data\n"
  "objects are rotated using the transform filter (at a high cost!).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAngularPeriodicFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkAngularPeriodicFilter", // tp_name
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
  PyvtkAngularPeriodicFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAngularPeriodicFilter_StaticNew()
{
  return vtkAngularPeriodicFilter::New();
}

PyObject *PyvtkAngularPeriodicFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAngularPeriodicFilter_Type, PyvtkAngularPeriodicFilter_Methods,
    "vtkAngularPeriodicFilter",
 &PyvtkAngularPeriodicFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPeriodicFilter_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAngularPeriodicFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAngularPeriodicFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngularPeriodicFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngularPeriodicFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ROTATION_MODE_DIRECT_ANGLE", 0 },
        { "VTK_ROTATION_MODE_ARRAY_VALUE", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

