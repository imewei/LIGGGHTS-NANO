// python wrapper for vtkTransformInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkTransformInterpolator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkTransformInterpolator_ClassNew(); }


static PyObject *
PyvtkTransformInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformInterpolator *tempr = vtkTransformInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformInterpolator::NewInstance());

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
PyvtkTransformInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTransforms() :
      op->vtkTransformInterpolator::GetNumberOfTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkTransformInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkTransformInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTransformInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_AddTransform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->AddTransform(temp0, temp1);
    }
    else
    {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->AddTransform(temp0, temp1);
    }
    else
    {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkProp3D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->AddTransform(temp0, temp1);
    }
    else
    {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_AddTransform_Methods[] = {
  {"AddTransform", PyvtkTransformInterpolator_AddTransform_s1, METH_VARARGS,
   "@dV *vtkTransform"},
  {"AddTransform", PyvtkTransformInterpolator_AddTransform_s2, METH_VARARGS,
   "@dV *vtkMatrix4x4"},
  {"AddTransform", PyvtkTransformInterpolator_AddTransform_s3, METH_VARARGS,
   "@dV *vtkProp3D"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformInterpolator_AddTransform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransformInterpolator_AddTransform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddTransform");
  return nullptr;
}


static PyObject *
PyvtkTransformInterpolator_RemoveTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTransform(temp0);
    }
    else
    {
      op->vtkTransformInterpolator::RemoveTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_InterpolateTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->InterpolateTransform(temp0, temp1);
    }
    else
    {
      op->vtkTransformInterpolator::InterpolateTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkTransformInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkTransformInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkTransformInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkTransformInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkTransformInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkTransformInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToManual();
    }
    else
    {
      op->vtkTransformInterpolator::SetInterpolationTypeToManual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetPositionInterpolator(temp0);
    }
    else
    {
      op->vtkTransformInterpolator::SetPositionInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetPositionInterpolator() :
      op->vtkTransformInterpolator::GetPositionInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetScaleInterpolator(temp0);
    }
    else
    {
      op->vtkTransformInterpolator::SetScaleInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetScaleInterpolator() :
      op->vtkTransformInterpolator::GetScaleInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkQuaternionInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuaternionInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetRotationInterpolator(temp0);
    }
    else
    {
      op->vtkTransformInterpolator::SetRotationInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionInterpolator *tempr = (ap.IsBound() ?
      op->GetRotationInterpolator() :
      op->vtkTransformInterpolator::GetRotationInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransformInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkTransformInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformInterpolator\nC++: static vtkTransformInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformInterpolator\nC++: vtkTransformInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfTransforms", PyvtkTransformInterpolator_GetNumberOfTransforms, METH_VARARGS,
   "GetNumberOfTransforms(self) -> int\nC++: int GetNumberOfTransforms()\n\nReturn the number of transforms in the list of transforms.\n"},
  {"GetMinimumT", PyvtkTransformInterpolator_GetMinimumT, METH_VARARGS,
   "GetMinimumT(self) -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\n"},
  {"GetMaximumT", PyvtkTransformInterpolator_GetMaximumT, METH_VARARGS,
   "GetMaximumT(self) -> float\nC++: double GetMaximumT()\n\n"},
  {"Initialize", PyvtkTransformInterpolator_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nClear the list of transforms.\n"},
  {"AddTransform", PyvtkTransformInterpolator_AddTransform, METH_VARARGS,
   "AddTransform(self, t:float, xform:vtkTransform) -> None\nC++: void AddTransform(double t, vtkTransform *xform)\nAddTransform(self, t:float, matrix:vtkMatrix4x4) -> None\nC++: void AddTransform(double t, vtkMatrix4x4 *matrix)\nAddTransform(self, t:float, prop3D:vtkProp3D) -> None\nC++: void AddTransform(double t, vtkProp3D *prop3D)\n\nAdd another transform to the list of transformations defining the\ntransform function. Note that using the same time t value more\nthan once replaces the previous transform value at t. At least\ntwo transforms must be added to define a function. There are\nvariants to this method depending on whether you are adding a\nvtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.\n"},
  {"RemoveTransform", PyvtkTransformInterpolator_RemoveTransform, METH_VARARGS,
   "RemoveTransform(self, t:float) -> None\nC++: void RemoveTransform(double t)\n\nDelete the transform at a particular parameter t. If there is no\ntransform defined at location t, then the method does nothing.\n"},
  {"InterpolateTransform", PyvtkTransformInterpolator_InterpolateTransform, METH_VARARGS,
   "InterpolateTransform(self, t:float, xform:vtkTransform) -> None\nC++: void InterpolateTransform(double t, vtkTransform *xform)\n\nInterpolate the list of transforms and determine a new transform\n(i.e., fill in the transformation provided). If t is outside the\nrange of (min,max) values, then t is clamped.\n"},
  {"SetInterpolationType", PyvtkTransformInterpolator_SetInterpolationType, METH_VARARGS,
   "SetInterpolationType(self, _arg:int) -> None\nC++: virtual void SetInterpolationType(int _arg)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"GetInterpolationTypeMinValue", PyvtkTransformInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   "GetInterpolationTypeMinValue(self) -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\n"},
  {"GetInterpolationTypeMaxValue", PyvtkTransformInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   "GetInterpolationTypeMaxValue(self) -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\n"},
  {"GetInterpolationType", PyvtkTransformInterpolator_GetInterpolationType, METH_VARARGS,
   "GetInterpolationType(self) -> int\nC++: virtual int GetInterpolationType()\n\n"},
  {"SetInterpolationTypeToLinear", PyvtkTransformInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "SetInterpolationTypeToLinear(self) -> None\nC++: void SetInterpolationTypeToLinear()\n\n"},
  {"SetInterpolationTypeToSpline", PyvtkTransformInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "SetInterpolationTypeToSpline(self) -> None\nC++: void SetInterpolationTypeToSpline()\n\n"},
  {"SetInterpolationTypeToManual", PyvtkTransformInterpolator_SetInterpolationTypeToManual, METH_VARARGS,
   "SetInterpolationTypeToManual(self) -> None\nC++: void SetInterpolationTypeToManual()\n\n"},
  {"SetPositionInterpolator", PyvtkTransformInterpolator_SetPositionInterpolator, METH_VARARGS,
   "SetPositionInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {"GetPositionInterpolator", PyvtkTransformInterpolator_GetPositionInterpolator, METH_VARARGS,
   "GetPositionInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetPositionInterpolator()\n\n"},
  {"SetScaleInterpolator", PyvtkTransformInterpolator_SetScaleInterpolator, METH_VARARGS,
   "SetScaleInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetScaleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the scale\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {"GetScaleInterpolator", PyvtkTransformInterpolator_GetScaleInterpolator, METH_VARARGS,
   "GetScaleInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetScaleInterpolator()\n\n"},
  {"SetRotationInterpolator", PyvtkTransformInterpolator_SetRotationInterpolator, METH_VARARGS,
   "SetRotationInterpolator(self, __a:vtkQuaternionInterpolator)\n    -> None\nC++: virtual void SetRotationInterpolator(\n    vtkQuaternionInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the\norientation portion of the transformation matrix. Note that you\ncan modify the behavior of the interpolator (linear vs spline\ninterpolation; change spline basis) by manipulating the\ninterpolator instances.\n"},
  {"GetRotationInterpolator", PyvtkTransformInterpolator_GetRotationInterpolator, METH_VARARGS,
   "GetRotationInterpolator(self) -> vtkQuaternionInterpolator\nC++: virtual vtkQuaternionInterpolator *GetRotationInterpolator()\n\n"},
  {"GetMTime", PyvtkTransformInterpolator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkTransformInterpolator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("interpolation_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetInterpolationType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkTransformInterpolator_SetInterpolationType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkTransformInterpolator_SetInterpolationType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetInterpolationType/SetInterpolationType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("position_interpolator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetPositionInterpolator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkTransformInterpolator_SetPositionInterpolator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkTransformInterpolator_SetPositionInterpolator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPositionInterpolator/SetPositionInterpolator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale_interpolator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetScaleInterpolator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkTransformInterpolator_SetScaleInterpolator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkTransformInterpolator_SetScaleInterpolator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScaleInterpolator/SetScaleInterpolator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_interpolator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetRotationInterpolator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkTransformInterpolator_SetRotationInterpolator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkTransformInterpolator_SetRotationInterpolator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationInterpolator/SetRotationInterpolator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("minimum_t"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetMinimumT(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMinimumT\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_t"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetMaximumT(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMaximumT\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_transforms"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTransformInterpolator_GetNumberOfTransforms(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfTransforms\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkTransformInterpolator_Doc =
  "vtkTransformInterpolator - interpolate a series of transformation\nmatrices\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a series of 4x4 transformation\n"
  "matrices. Position, scale and orientation (i.e., rotations) are\n"
  "interpolated separately, and can be interpolated linearly or with a\n"
  "spline function. Note that orientation is interpolated using\n"
  "quaternions via SLERP (spherical linear interpolation) or the special\n"
  "vtkQuaternionSpline class.\n\n"
  "To use this class, specify at least two pairs of (t,transformation\n"
  "matrix) with the AddTransform() method.  Then interpolated the\n"
  "transforms with the InterpolateTransform(t,transform) method, where\n"
  "\"t\" must be in the range of (min,max) times specified by the\n"
  "AddTransform() method.\n\n"
  "By default, spline interpolation is used for the interpolation of the\n"
  "transformation matrices. The position, scale and orientation of the\n"
  "matrices are interpolated with instances of the classes\n"
  "vtkTupleInterpolator (position,scale) and vtkQuaternionInterpolator\n"
  "(rotation). The user can override the interpolation behavior by\n"
  "gaining access to these separate interpolation classes.  These\n"
  "interpolator classes (vtkTupleInterpolator and\n"
  "vtkQuaternionInterpolator) can be modified to perform linear versus\n"
  "spline interpolation, and/or different spline basis functions can be\n"
  "specified.\n\n"
  "@warning\n"
  "The interpolator classes are initialized when the\n"
  "InterpolateTransform() is called. Any changes to the interpolators,\n"
  "or additions to the list of transforms to be interpolated, causes a\n"
  "reinitialization of the interpolators the next time\n"
  "InterpolateTransform() is invoked. Thus the best performance is\n"
  "obtained by 1) configuring the interpolators, 2) adding all the\n"
  "transforms, and 3) finally performing interpolation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTransformInterpolator", // tp_name
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
  PyvtkTransformInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformInterpolator_StaticNew()
{
  return vtkTransformInterpolator::New();
}

PyObject *PyvtkTransformInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformInterpolator_Type, PyvtkTransformInterpolator_Methods,
    "vtkTransformInterpolator",
 &PyvtkTransformInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "INTERPOLATION_TYPE_LINEAR", vtkTransformInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkTransformInterpolator::INTERPOLATION_TYPE_SPLINE },
        { "INTERPOLATION_TYPE_MANUAL", vtkTransformInterpolator::INTERPOLATION_TYPE_MANUAL },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkTransformInterpolator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

