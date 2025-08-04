// python wrapper for vtkFrustum
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFrustum.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFrustum(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFrustum_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkFrustum_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFrustum::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrustum::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFrustum *tempr = vtkFrustum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrustum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrustum::NewInstance());

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
PyvtkFrustum_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFrustum::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFrustum::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

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
      op->vtkFrustum::EvaluateFunction(temp0));

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
PyvtkFrustum_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

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
      op->vtkFrustum::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFrustum_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

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
      op->vtkFrustum::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFrustum_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkFrustum_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkFrustum_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkFrustum_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkFrustum_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

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
      op->vtkFrustum::EvaluateGradient(temp0, temp1);
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
PyvtkFrustum_GetNearPlaneDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearPlaneDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNearPlaneDistance() :
      op->vtkFrustum::GetNearPlaneDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_SetNearPlaneDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNearPlaneDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNearPlaneDistance(temp0);
    }
    else
    {
      op->vtkFrustum::SetNearPlaneDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetHorizontalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHorizontalAngle() :
      op->vtkFrustum::GetHorizontalAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_SetHorizontalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalAngle(temp0);
    }
    else
    {
      op->vtkFrustum::SetHorizontalAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetVerticalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalAngle() :
      op->vtkFrustum::GetVerticalAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_SetVerticalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalAngle(temp0);
    }
    else
    {
      op->vtkFrustum::SetVerticalAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetTopPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetTopPlane() :
      op->vtkFrustum::GetTopPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetBottomPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetBottomPlane() :
      op->vtkFrustum::GetBottomPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetRightPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetRightPlane() :
      op->vtkFrustum::GetRightPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetLeftPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetLeftPlane() :
      op->vtkFrustum::GetLeftPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustum_GetNearPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustum *op = static_cast<vtkFrustum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetNearPlane() :
      op->vtkFrustum::GetNearPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFrustum_Methods[] = {
  {"IsTypeOf", PyvtkFrustum_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFrustum_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFrustum_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFrustum\nC++: static vtkFrustum *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFrustum_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFrustum\nC++: vtkFrustum *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFrustum_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFrustum_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkFrustum_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkFrustum_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], g:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate function gradient at position x-y-z and pass back\nvector. You should generally not call this method directly, you\nshould use FunctionGradient() instead.  This method must be\nimplemented by any derived class.\n"},
  {"GetNearPlaneDistance", PyvtkFrustum_GetNearPlaneDistance, METH_VARARGS,
   "GetNearPlaneDistance(self) -> float\nC++: virtual double GetNearPlaneDistance()\n\nGet/Set the near plane distance of the frustum, i.e. the distance\nbetween its origin and near plane along the forward axis. Values\nbelow 0 will be clamped. Defaults to 0.5.\n"},
  {"SetNearPlaneDistance", PyvtkFrustum_SetNearPlaneDistance, METH_VARARGS,
   "SetNearPlaneDistance(self, distance:float) -> None\nC++: void SetNearPlaneDistance(double distance)\n\n"},
  {"GetHorizontalAngle", PyvtkFrustum_GetHorizontalAngle, METH_VARARGS,
   "GetHorizontalAngle(self) -> float\nC++: virtual double GetHorizontalAngle()\n\nGet/Set the horizontal angle of the frustum in degrees. It\nrepresents the angle between its forward axis and its right and\nleft planes. Clamped between 1 and 89 degrees. Defaults to 30.\n"},
  {"SetHorizontalAngle", PyvtkFrustum_SetHorizontalAngle, METH_VARARGS,
   "SetHorizontalAngle(self, angleInDegrees:float) -> None\nC++: void SetHorizontalAngle(double angleInDegrees)\n\n"},
  {"GetVerticalAngle", PyvtkFrustum_GetVerticalAngle, METH_VARARGS,
   "GetVerticalAngle(self) -> float\nC++: virtual double GetVerticalAngle()\n\nGet/Set the vertical angle of the frustum in degrees. It\nrepresents the angle between its forward axis and its top and\nbottom planes. Clamped between 1 and 89 degrees. Defaults to 30.\n"},
  {"SetVerticalAngle", PyvtkFrustum_SetVerticalAngle, METH_VARARGS,
   "SetVerticalAngle(self, angleInDegrees:float) -> None\nC++: void SetVerticalAngle(double angleInDegrees)\n\n"},
  {"GetTopPlane", PyvtkFrustum_GetTopPlane, METH_VARARGS,
   "GetTopPlane(self) -> vtkPlane\nC++: vtkPlane *GetTopPlane()\n\nGet individual planes that make up the frustum.\n\note: Do not attempt to modify ! Use the vertical/horizontal\nangles and near plane distance to parameterize the frustum\ninstead.\n"},
  {"GetBottomPlane", PyvtkFrustum_GetBottomPlane, METH_VARARGS,
   "GetBottomPlane(self) -> vtkPlane\nC++: vtkPlane *GetBottomPlane()\n\n"},
  {"GetRightPlane", PyvtkFrustum_GetRightPlane, METH_VARARGS,
   "GetRightPlane(self) -> vtkPlane\nC++: vtkPlane *GetRightPlane()\n\n"},
  {"GetLeftPlane", PyvtkFrustum_GetLeftPlane, METH_VARARGS,
   "GetLeftPlane(self) -> vtkPlane\nC++: vtkPlane *GetLeftPlane()\n\n"},
  {"GetNearPlane", PyvtkFrustum_GetNearPlane, METH_VARARGS,
   "GetNearPlane(self) -> vtkPlane\nC++: vtkPlane *GetNearPlane()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFrustum_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("near_plane_distance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetNearPlaneDistance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFrustum_SetNearPlaneDistance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFrustum_SetNearPlaneDistance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNearPlaneDistance/SetNearPlaneDistance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("horizontal_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetHorizontalAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFrustum_SetHorizontalAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFrustum_SetHorizontalAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetHorizontalAngle/SetHorizontalAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("vertical_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetVerticalAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFrustum_SetVerticalAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFrustum_SetVerticalAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVerticalAngle/SetVerticalAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("top_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetTopPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTopPlane\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bottom_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetBottomPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBottomPlane\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("right_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetRightPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRightPlane\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("left_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetLeftPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLeftPlane\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("near_plane"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFrustum_GetNearPlane(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNearPlane\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFrustum_Doc =
  "vtkFrustum - implicit function for a frustum\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkFrustum represents a 4-sided frustum, with a near plane but\n"
  "infinite on the far side. It is defined by the two angles between its\n"
  "forward axis and its horizontal and vertical planes, and the distance\n"
  "between its origin and near plane. vtkFrustum is a concrete\n"
  "implementation of vtkImplicitFunction. The frustum is oriented toward\n"
  "the Y Axis; its top face facing toward the Z Axis and its \"right\"\n"
  "face facing the X Axis.\n\n"
  "@warning\n"
  "The frustum is infinite in extent towards its far plane. To truncate\n"
  "the frustum in modeling operations use the vtkImplicitBoolean in\n"
  "combination with clipping planes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFrustum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkFrustum", // tp_name
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
  PyvtkFrustum_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFrustum_StaticNew()
{
  return vtkFrustum::New();
}

PyObject *PyvtkFrustum_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFrustum_Type, PyvtkFrustum_Methods,
    "vtkFrustum",
 &PyvtkFrustum_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFrustum_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFrustum(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFrustum_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFrustum", o) != 0)
  {
    Py_DECREF(o);
  }

}

