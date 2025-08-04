// python wrapper for vtkCone
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCone.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCone(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCone_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkCone_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCone::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCone::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCone *tempr = vtkCone::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCone *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCone::NewInstance());

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
PyvtkCone_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCone::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCone::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkCone::EvaluateFunction(temp0));

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

static PyObject *
PyvtkCone_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkCone::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCone_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkCone::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCone_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCone_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkCone_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkCone_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkCone_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkCone::EvaluateGradient(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCone_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkCone::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCone_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkCone::GetAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkCone::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkCone::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCone::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCone_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkCone::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCone_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCone_SetOrigin_s1(self, args);
    case 1:
      return PyvtkCone_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkCone_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkCone::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

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
      op->SetAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCone::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCone_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

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
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkCone::SetAxis(temp0);
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
PyvtkCone_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCone_SetAxis_s1(self, args);
    case 1:
      return PyvtkCone_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkCone_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkCone::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_SetIsDoubleCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsDoubleCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsDoubleCone(temp0);
    }
    else
    {
      op->vtkCone::SetIsDoubleCone(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCone_GetIsDoubleCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsDoubleCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsDoubleCone() :
      op->vtkCone::GetIsDoubleCone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCone_IsDoubleConeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoubleConeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsDoubleConeOn();
    }
    else
    {
      op->vtkCone::IsDoubleConeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCone_IsDoubleConeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoubleConeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCone *op = static_cast<vtkCone *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsDoubleConeOff();
    }
    else
    {
      op->vtkCone::IsDoubleConeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCone_Methods[] = {
  {"IsTypeOf", PyvtkCone_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCone_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCone_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCone\nC++: static vtkCone *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCone_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCone\nC++: vtkCone *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCone_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCone_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkCone_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate cone equation.\n"},
  {"EvaluateGradient", PyvtkCone_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], g:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate cone normal.\n"},
  {"SetAngle", PyvtkCone_SetAngle, METH_VARARGS,
   "SetAngle(self, _arg:float) -> None\nC++: virtual void SetAngle(double _arg)\n\nSet/Get the cone angle (expressed in degrees). Defaults to 45\ndegrees.\n"},
  {"GetAngleMinValue", PyvtkCone_GetAngleMinValue, METH_VARARGS,
   "GetAngleMinValue(self) -> float\nC++: virtual double GetAngleMinValue()\n\n"},
  {"GetAngleMaxValue", PyvtkCone_GetAngleMaxValue, METH_VARARGS,
   "GetAngleMaxValue(self) -> float\nC++: virtual double GetAngleMaxValue()\n\n"},
  {"GetAngle", PyvtkCone_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\n"},
  {"SetOrigin", PyvtkCone_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, xyz:(float, float, float)) -> None\nC++: void SetOrigin(const double xyz[3])\n\nSet/Get the cone origin. Defaults to (0, 0, 0).\n"},
  {"GetOrigin", PyvtkCone_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetAxis", PyvtkCone_SetAxis, METH_VARARGS,
   "SetAxis(self, x:float, y:float, z:float) -> None\nC++: void SetAxis(double x, double y, double z)\nSetAxis(self, axis:[float, float, float]) -> None\nC++: void SetAxis(double axis[3])\n\nGet/Set the vector defining the direction of the cone. If the\naxis is not specified as a unit vector, it will be normalized. If\nzero-length axis vector is used as input to this method, it will\nbe ignored. Defaults to the X axis (1, 0, 0).\n"},
  {"GetAxis", PyvtkCone_GetAxis, METH_VARARGS,
   "GetAxis(self) -> (float, float, float)\nC++: virtual double *GetAxis()\n\n"},
  {"SetIsDoubleCone", PyvtkCone_SetIsDoubleCone, METH_VARARGS,
   "SetIsDoubleCone(self, _arg:bool) -> None\nC++: virtual void SetIsDoubleCone(bool _arg)\n\nSet/Get whether this is a double cone (extends to infinity on\nboth directions along axis) or a one sided one (extends towards\nthe axis direction only). vtkCone is a double cone by default.\n"},
  {"GetIsDoubleCone", PyvtkCone_GetIsDoubleCone, METH_VARARGS,
   "GetIsDoubleCone(self) -> bool\nC++: virtual bool GetIsDoubleCone()\n\n"},
  {"IsDoubleConeOn", PyvtkCone_IsDoubleConeOn, METH_VARARGS,
   "IsDoubleConeOn(self) -> None\nC++: virtual void IsDoubleConeOn()\n\n"},
  {"IsDoubleConeOff", PyvtkCone_IsDoubleConeOff, METH_VARARGS,
   "IsDoubleConeOff(self) -> None\nC++: virtual void IsDoubleConeOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCone_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCone_GetAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCone_SetAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCone_SetAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAngle/SetAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCone_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCone_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCone_SetOrigin(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrigin/SetOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCone_GetAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCone_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCone_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxis/SetAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("is_double_cone"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCone_GetIsDoubleCone(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCone_SetIsDoubleCone(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCone_SetIsDoubleCone(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIsDoubleCone/SetIsDoubleCone\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCone_Doc =
  "vtkCone - implicit function for a cone\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkCone computes the implicit function and function gradient for a\n"
  "cone. vtkCone is a concrete implementation of vtkImplicitFunction. By\n"
  "default, the cone vertex is located at the origin with axis of\n"
  "rotation coincident with x-axis. You can use the superclass'\n"
  "vtkImplicitFunction transformation matrix to reposition. You can\n"
  "alternatively use the accessors provided by this class, which will\n"
  "cause the transform to be recomputed. to reposition/orient the cone.\n"
  "The angle specifies the angle between the axis of rotation and the\n"
  "side of the cone.\n\n"
  "@warning\n"
  "The cone is infinite in extent (on both sides if IsDoubleCone is set\n"
  "to true). To truncate the cone use the vtkImplicitBoolean in\n"
  "combination with clipping planes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCone_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCone", // tp_name
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
  PyvtkCone_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCone_StaticNew()
{
  return vtkCone::New();
}

PyObject *PyvtkCone_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCone_Type, PyvtkCone_Methods,
    "vtkCone",
 &PyvtkCone_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCone_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCone(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCone_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCone", o) != 0)
  {
    Py_DECREF(o);
  }

}

