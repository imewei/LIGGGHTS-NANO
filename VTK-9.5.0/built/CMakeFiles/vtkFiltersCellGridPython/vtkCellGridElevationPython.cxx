// python wrapper for vtkCellGridElevation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGridElevation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridElevation(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridElevation_ClassNew(); }


static PyObject *
PyvtkCellGridElevation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridElevation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridElevation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridElevation *tempr = vtkCellGridElevation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridElevation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridElevation::NewInstance());

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
PyvtkCellGridElevation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridElevation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridElevation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeName(temp0);
    }
    else
    {
      op->vtkCellGridElevation::SetAttributeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAttributeName() :
      op->vtkCellGridElevation::GetAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

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
      op->vtkCellGridElevation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridElevation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

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
      op->vtkCellGridElevation::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridElevation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellGridElevation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkCellGridElevation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkCellGridElevation_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkCellGridElevation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAxes(temp0);
    }
    else
    {
      op->vtkCellGridElevation::SetNumberOfAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetNumberOfAxesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxesMinValue() :
      op->vtkCellGridElevation::GetNumberOfAxesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetNumberOfAxesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxesMaxValue() :
      op->vtkCellGridElevation::GetNumberOfAxesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkCellGridElevation::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

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
      op->vtkCellGridElevation::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridElevation_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkCellGridElevation::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridElevation_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellGridElevation_SetAxis_s1(self, args);
    case 1:
      return PyvtkCellGridElevation_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkCellGridElevation_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkCellGridElevation::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_SetShock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShock(temp0);
    }
    else
    {
      op->vtkCellGridElevation::SetShock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridElevation_GetShock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridElevation *op = static_cast<vtkCellGridElevation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShock() :
      op->vtkCellGridElevation::GetShock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridElevation_Methods[] = {
  {"IsTypeOf", PyvtkCellGridElevation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridElevation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridElevation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridElevation\nC++: static vtkCellGridElevation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridElevation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridElevation\nC++: vtkCellGridElevation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridElevation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridElevation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAttributeName", PyvtkCellGridElevation_SetAttributeName, METH_VARARGS,
   "SetAttributeName(self, _arg:str) -> None\nC++: virtual void SetAttributeName(const char *_arg)\n\nSet/get the name of the generated vtkCellAttribute.\n\nThe default is `elevation` if no value is provided.\n"},
  {"GetAttributeName", PyvtkCellGridElevation_GetAttributeName, METH_VARARGS,
   "GetAttributeName(self) -> str\nC++: virtual char *GetAttributeName()\n\n"},
  {"SetOrigin", PyvtkCellGridElevation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/get the location where the output scalar is zero.\n"},
  {"GetOrigin", PyvtkCellGridElevation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetNumberOfAxes", PyvtkCellGridElevation_SetNumberOfAxes, METH_VARARGS,
   "SetNumberOfAxes(self, _arg:int) -> None\nC++: virtual void SetNumberOfAxes(int _arg)\n\nSet/get the number of axes along which elevation is measured.\nThis is a number between 1 and 3, inclusive. These correspond to:\n+ 1 \342\200\223 **linear**: elevation is measured by projecting any test\npoint\n      to Axis, then computing the distance to the Origin. + 2 \342\200\223\n**cylindrical**: elevation is measured from the nearest point\n      along the line passing through the Origin along the Axis.\n      All points along line have an elevation of 0. + 3 \342\200\223\n**spherical**: elevation is measured using the L\302\262 norm of the\n      vector from the Origin to each test point. The Axis is\n      ignored.\n\nThe default is 1 (linear).\n"},
  {"GetNumberOfAxesMinValue", PyvtkCellGridElevation_GetNumberOfAxesMinValue, METH_VARARGS,
   "GetNumberOfAxesMinValue(self) -> int\nC++: virtual int GetNumberOfAxesMinValue()\n\n"},
  {"GetNumberOfAxesMaxValue", PyvtkCellGridElevation_GetNumberOfAxesMaxValue, METH_VARARGS,
   "GetNumberOfAxesMaxValue(self) -> int\nC++: virtual int GetNumberOfAxesMaxValue()\n\n"},
  {"GetNumberOfAxes", PyvtkCellGridElevation_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: virtual int GetNumberOfAxes()\n\n"},
  {"SetAxis", PyvtkCellGridElevation_SetAxis, METH_VARARGS,
   "SetAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetAxis(double _arg1, double _arg2,\n    double _arg3)\nSetAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxis(const double _arg[3])\n\nSet/get the principal direction along which elevation is\nmeasured. The exact way the axis is used varies with the\nNumberOfAxes setting.\n"},
  {"GetAxis", PyvtkCellGridElevation_GetAxis, METH_VARARGS,
   "GetAxis(self) -> (float, float, float)\nC++: virtual double *GetAxis()\n\n"},
  {"SetShock", PyvtkCellGridElevation_SetShock, METH_VARARGS,
   "SetShock(self, _arg:float) -> None\nC++: virtual void SetShock(double _arg)\n\nSet/get the \"shock\" value, which is a distance added to each\nelevation value proportional to the distance from the cell center\nto the test point within that cell. The intent is to provide a\nway to introduce discontinuities into the field to demonstrate\nthe capabilities of DG cells.\n"},
  {"GetShock", PyvtkCellGridElevation_GetShock, METH_VARARGS,
   "GetShock(self) -> float\nC++: virtual double GetShock()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridElevation_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("attribute_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetAttributeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridElevation_SetAttributeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridElevation_SetAttributeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAttributeName/SetAttributeName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridElevation_SetOrigin(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridElevation_SetOrigin(self, args);
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
      auto result = PyvtkCellGridElevation_GetAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridElevation_SetAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridElevation_SetAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAxis/SetAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shock"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetShock(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridElevation_SetShock(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridElevation_SetShock(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetShock/SetShock\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes_min_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetNumberOfAxesMinValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfAxesMinValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes_max_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetNumberOfAxesMaxValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfAxesMaxValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_axes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridElevation_GetNumberOfAxes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridElevation_SetNumberOfAxes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridElevation_SetNumberOfAxes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfAxes/SetNumberOfAxes\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridElevation_Doc =
  "vtkCellGridElevation - Adds a cell attribute representing elevation.\n\n"
  "Superclass: vtkCellGridAlgorithm\n\n"
  "This filter adds a new cell attribute \342\200\223 named \"Elevation\" by\n"
  "default \342\200\223 to an input vtkCellGrid. The cell attribute is\n"
  "scalar-valued and generally represents distance from some point along\n"
  "one or more axes.\n\n"
  "In order to make the attribute more interesting for demonstration\n"
  "purposes, an additional \"shock\" parameter can be used by responders\n"
  "to introduce discontinuities in the attribute at cell boundaries (for\n"
  "cells which allow discontinuities such as vtkDGCell).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridElevation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkCellGridElevation", // tp_name
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
  PyvtkCellGridElevation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridElevation_StaticNew()
{
  return vtkCellGridElevation::New();
}

PyObject *PyvtkCellGridElevation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridElevation_Type, PyvtkCellGridElevation_Methods,
    "vtkCellGridElevation",
 &PyvtkCellGridElevation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridElevation_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridElevation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridElevation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridElevation", o) != 0)
  {
    Py_DECREF(o);
  }

}

