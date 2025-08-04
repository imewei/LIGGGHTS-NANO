// python wrapper for vtkGoldenBallSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGoldenBallSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGoldenBallSource(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGoldenBallSource_ClassNew(); }


static PyObject *
PyvtkGoldenBallSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGoldenBallSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGoldenBallSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGoldenBallSource *tempr = vtkGoldenBallSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGoldenBallSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGoldenBallSource::NewInstance());

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
PyvtkGoldenBallSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGoldenBallSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGoldenBallSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

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
      op->vtkGoldenBallSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkGoldenBallSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkGoldenBallSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkGoldenBallSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

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
      op->vtkGoldenBallSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGoldenBallSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

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
      op->vtkGoldenBallSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGoldenBallSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGoldenBallSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkGoldenBallSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkGoldenBallSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkGoldenBallSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

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
      op->vtkGoldenBallSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkGoldenBallSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkGoldenBallSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkGoldenBallSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetIncludeCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeCenterPoint(temp0);
    }
    else
    {
      op->vtkGoldenBallSource::SetIncludeCenterPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetIncludeCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeCenterPoint() :
      op->vtkGoldenBallSource::GetIncludeCenterPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_IncludeCenterPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeCenterPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeCenterPointOn();
    }
    else
    {
      op->vtkGoldenBallSource::IncludeCenterPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_IncludeCenterPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeCenterPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeCenterPointOff();
    }
    else
    {
      op->vtkGoldenBallSource::IncludeCenterPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNormals(temp0);
    }
    else
    {
      op->vtkGoldenBallSource::SetGenerateNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormals() :
      op->vtkGoldenBallSource::GetGenerateNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GenerateNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOn();
    }
    else
    {
      op->vtkGoldenBallSource::GenerateNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GenerateNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOff();
    }
    else
    {
      op->vtkGoldenBallSource::GenerateNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkGoldenBallSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGoldenBallSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGoldenBallSource *op = static_cast<vtkGoldenBallSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGoldenBallSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGoldenBallSource_Methods[] = {
  {"IsTypeOf", PyvtkGoldenBallSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGoldenBallSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGoldenBallSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGoldenBallSource\nC++: static vtkGoldenBallSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGoldenBallSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGoldenBallSource\nC++: vtkGoldenBallSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGoldenBallSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGoldenBallSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRadius", PyvtkGoldenBallSource_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet radius of sphere. Default is .5.\n"},
  {"GetRadiusMinValue", PyvtkGoldenBallSource_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\nSet radius of sphere. Default is .5.\n"},
  {"GetRadiusMaxValue", PyvtkGoldenBallSource_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet radius of sphere. Default is .5.\n"},
  {"GetRadius", PyvtkGoldenBallSource_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\nSet radius of sphere. Default is .5.\n"},
  {"SetCenter", PyvtkGoldenBallSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the sphere. Default is 0,0,0.\n"},
  {"GetCenter", PyvtkGoldenBallSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\nSet the center of the sphere. Default is 0,0,0.\n"},
  {"SetResolution", PyvtkGoldenBallSource_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet the number of points used to approximate the sphere. The\nminimum is 4, the default is 20, and there is no maximum.\n"},
  {"GetResolutionMinValue", PyvtkGoldenBallSource_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\nSet the number of points used to approximate the sphere. The\nminimum is 4, the default is 20, and there is no maximum.\n"},
  {"GetResolutionMaxValue", PyvtkGoldenBallSource_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\nSet the number of points used to approximate the sphere. The\nminimum is 4, the default is 20, and there is no maximum.\n"},
  {"GetResolution", PyvtkGoldenBallSource_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\nSet the number of points used to approximate the sphere. The\nminimum is 4, the default is 20, and there is no maximum.\n"},
  {"SetIncludeCenterPoint", PyvtkGoldenBallSource_SetIncludeCenterPoint, METH_VARARGS,
   "SetIncludeCenterPoint(self, _arg:int) -> None\nC++: virtual void SetIncludeCenterPoint(int _arg)\n\nSet/get whether to include a point at the center of the ball. The\ndefault is not to include the center.\n"},
  {"GetIncludeCenterPoint", PyvtkGoldenBallSource_GetIncludeCenterPoint, METH_VARARGS,
   "GetIncludeCenterPoint(self) -> int\nC++: virtual int GetIncludeCenterPoint()\n\nSet/get whether to include a point at the center of the ball. The\ndefault is not to include the center.\n"},
  {"IncludeCenterPointOn", PyvtkGoldenBallSource_IncludeCenterPointOn, METH_VARARGS,
   "IncludeCenterPointOn(self) -> None\nC++: virtual void IncludeCenterPointOn()\n\nSet/get whether to include a point at the center of the ball. The\ndefault is not to include the center.\n"},
  {"IncludeCenterPointOff", PyvtkGoldenBallSource_IncludeCenterPointOff, METH_VARARGS,
   "IncludeCenterPointOff(self) -> None\nC++: virtual void IncludeCenterPointOff()\n\nSet/get whether to include a point at the center of the ball. The\ndefault is not to include the center.\n"},
  {"SetGenerateNormals", PyvtkGoldenBallSource_SetGenerateNormals, METH_VARARGS,
   "SetGenerateNormals(self, _arg:int) -> None\nC++: virtual void SetGenerateNormals(int _arg)\n\nSet/get whether to include \"normal\" vectors at each point. The\ndefault is to include normals. These are vectors of unit length\nwhich point outward from the center of the ball. The center point\n(if included) has a zero-length vector.\n"},
  {"GetGenerateNormals", PyvtkGoldenBallSource_GetGenerateNormals, METH_VARARGS,
   "GetGenerateNormals(self) -> int\nC++: virtual int GetGenerateNormals()\n\nSet/get whether to include \"normal\" vectors at each point. The\ndefault is to include normals. These are vectors of unit length\nwhich point outward from the center of the ball. The center point\n(if included) has a zero-length vector.\n"},
  {"GenerateNormalsOn", PyvtkGoldenBallSource_GenerateNormalsOn, METH_VARARGS,
   "GenerateNormalsOn(self) -> None\nC++: virtual void GenerateNormalsOn()\n\nSet/get whether to include \"normal\" vectors at each point. The\ndefault is to include normals. These are vectors of unit length\nwhich point outward from the center of the ball. The center point\n(if included) has a zero-length vector.\n"},
  {"GenerateNormalsOff", PyvtkGoldenBallSource_GenerateNormalsOff, METH_VARARGS,
   "GenerateNormalsOff(self) -> None\nC++: virtual void GenerateNormalsOff()\n\nSet/get whether to include \"normal\" vectors at each point. The\ndefault is to include normals. These are vectors of unit length\nwhich point outward from the center of the ball. The center point\n(if included) has a zero-length vector.\n"},
  {"SetOutputPointsPrecision", PyvtkGoldenBallSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkGoldenBallSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGoldenBallSource_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGoldenBallSource_GetRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetRadius(self, args);
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
      auto result = PyvtkGoldenBallSource_GetCenter(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetCenter(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetCenter(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenter/SetCenter\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("resolution"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGoldenBallSource_GetResolution(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetResolution(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetResolution(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetResolution/SetResolution\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("include_center_point"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGoldenBallSource_GetIncludeCenterPoint(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetIncludeCenterPoint(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetIncludeCenterPoint(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIncludeCenterPoint/SetIncludeCenterPoint\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_normals"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGoldenBallSource_GetGenerateNormals(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetGenerateNormals(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetGenerateNormals(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateNormals/SetGenerateNormals\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_points_precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGoldenBallSource_GetOutputPointsPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGoldenBallSource_SetOutputPointsPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGoldenBallSource_SetOutputPointsPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputPointsPrecision/SetOutputPointsPrecision\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGoldenBallSource_Doc =
  "vtkGoldenBallSource - Create a faceted approximation to a ball (i.e.,\na solid sphere).\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkGoldenBallSource creates a ball (represented by tetrahedra) of\n"
  "specified radius and center. The resolution (number of points) can be\n"
  "specified and will be equal to the number of tetrahedra in the output\n"
  "approximation.\n\n"
  "The name derives from the golden angle (pi * (sqrt(5) - 1)) used to\n"
  "space points circumferentially so they are approximately equidistant\n"
  "from their neighbors. For this reason, the technique is sometimes\n"
  "called the \"Fibonacci spiral,\" after the planar spiral shape which\n"
  "gets projected to the sphere.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGoldenBallSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkGoldenBallSource", // tp_name
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
  PyvtkGoldenBallSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGoldenBallSource_StaticNew()
{
  return vtkGoldenBallSource::New();
}

PyObject *PyvtkGoldenBallSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGoldenBallSource_Type, PyvtkGoldenBallSource_Methods,
    "vtkGoldenBallSource",
 &PyvtkGoldenBallSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGoldenBallSource_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGoldenBallSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGoldenBallSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGoldenBallSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

