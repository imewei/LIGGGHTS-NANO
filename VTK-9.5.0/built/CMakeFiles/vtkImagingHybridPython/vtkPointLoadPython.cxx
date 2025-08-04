// python wrapper for vtkPointLoad
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointLoad.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPointLoad(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPointLoad_ClassNew(); }


static PyObject *
PyvtkPointLoad_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointLoad::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointLoad::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointLoad *tempr = vtkPointLoad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointLoad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointLoad::NewInstance());

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
PyvtkPointLoad_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointLoad::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointLoad::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadValue(temp0);
    }
    else
    {
      op->vtkPointLoad::SetLoadValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLoadValue() :
      op->vtkPointLoad::GetLoadValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkPointLoad::SetSampleDimensions(temp0);
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
PyvtkPointLoad_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointLoad::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointLoad_SetSampleDimensions_s1(self, args);
    case 3:
      return PyvtkPointLoad_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}


static PyObject *
PyvtkPointLoad_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkPointLoad::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPointLoad::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkPointLoad::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPointLoad_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPointLoad_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}


static PyObject *
PyvtkPointLoad_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPointLoad::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPoissonsRatio(temp0);
    }
    else
    {
      op->vtkPointLoad::SetPoissonsRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPoissonsRatio() :
      op->vtkPointLoad::GetPoissonsRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeEffectiveStress(temp0);
    }
    else
    {
      op->vtkPointLoad::SetComputeEffectiveStress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeEffectiveStress() :
      op->vtkPointLoad::GetComputeEffectiveStress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeEffectiveStressOn();
    }
    else
    {
      op->vtkPointLoad::ComputeEffectiveStressOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeEffectiveStressOff();
    }
    else
    {
      op->vtkPointLoad::ComputeEffectiveStressOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointLoad_Methods[] = {
  {"IsTypeOf", PyvtkPointLoad_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointLoad_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointLoad_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointLoad\nC++: static vtkPointLoad *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointLoad_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointLoad\nC++: vtkPointLoad *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointLoad_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointLoad_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLoadValue", PyvtkPointLoad_SetLoadValue, METH_VARARGS,
   "SetLoadValue(self, _arg:float) -> None\nC++: virtual void SetLoadValue(double _arg)\n\nSet/Get value of applied load.\n"},
  {"GetLoadValue", PyvtkPointLoad_GetLoadValue, METH_VARARGS,
   "GetLoadValue(self) -> float\nC++: virtual double GetLoadValue()\n\n"},
  {"SetSampleDimensions", PyvtkPointLoad_SetSampleDimensions, METH_VARARGS,
   "SetSampleDimensions(self, dim:[int, int, int]) -> None\nC++: void SetSampleDimensions(int dim[3])\nSetSampleDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetSampleDimensions(int i, int j, int k)\n\nSpecify the dimensions of the volume. A stress tensor will be\ncomputed for each point in the volume.\n"},
  {"GetSampleDimensions", PyvtkPointLoad_GetSampleDimensions, METH_VARARGS,
   "GetSampleDimensions(self) -> (int, int, int)\nC++: virtual int *GetSampleDimensions()\n\n"},
  {"SetModelBounds", PyvtkPointLoad_SetModelBounds, METH_VARARGS,
   "SetModelBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetModelBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetModelBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetModelBounds(const double _arg[6])\n\nSpecify the region in space over which the tensors are computed.\nThe point load is assumed to be applied at top center of the\nvolume.\n"},
  {"GetModelBounds", PyvtkPointLoad_GetModelBounds, METH_VARARGS,
   "GetModelBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetModelBounds()\n\n"},
  {"SetPoissonsRatio", PyvtkPointLoad_SetPoissonsRatio, METH_VARARGS,
   "SetPoissonsRatio(self, _arg:float) -> None\nC++: virtual void SetPoissonsRatio(double _arg)\n\nSet/Get Poisson's ratio.\n"},
  {"GetPoissonsRatio", PyvtkPointLoad_GetPoissonsRatio, METH_VARARGS,
   "GetPoissonsRatio(self) -> float\nC++: virtual double GetPoissonsRatio()\n\n"},
  {"SetComputeEffectiveStress", PyvtkPointLoad_SetComputeEffectiveStress, METH_VARARGS,
   "SetComputeEffectiveStress(self, __a:int) -> None\nC++: void SetComputeEffectiveStress(int)\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {"GetComputeEffectiveStress", PyvtkPointLoad_GetComputeEffectiveStress, METH_VARARGS,
   "GetComputeEffectiveStress(self) -> int\nC++: int GetComputeEffectiveStress()\n\n"},
  {"ComputeEffectiveStressOn", PyvtkPointLoad_ComputeEffectiveStressOn, METH_VARARGS,
   "ComputeEffectiveStressOn(self) -> None\nC++: void ComputeEffectiveStressOn()\n\n"},
  {"ComputeEffectiveStressOff", PyvtkPointLoad_ComputeEffectiveStressOff, METH_VARARGS,
   "ComputeEffectiveStressOff(self) -> None\nC++: void ComputeEffectiveStressOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPointLoad_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("load_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPointLoad_GetLoadValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPointLoad_SetLoadValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPointLoad_SetLoadValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLoadValue/SetLoadValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("sample_dimensions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPointLoad_GetSampleDimensions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPointLoad_SetSampleDimensions(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPointLoad_SetSampleDimensions(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSampleDimensions/SetSampleDimensions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("model_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPointLoad_GetModelBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPointLoad_SetModelBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPointLoad_SetModelBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetModelBounds/SetModelBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("poissons_ratio"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPointLoad_GetPoissonsRatio(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPointLoad_SetPoissonsRatio(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPointLoad_SetPoissonsRatio(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPoissonsRatio/SetPoissonsRatio\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("compute_effective_stress"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPointLoad_GetComputeEffectiveStress(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPointLoad_SetComputeEffectiveStress(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPointLoad_SetComputeEffectiveStress(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeEffectiveStress/SetComputeEffectiveStress\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPointLoad_Doc =
  "vtkPointLoad - compute stress tensors given point load on\nsemi-infinite domain\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkPointLoad is a source object that computes stress tensors on a\n"
  "volume. The tensors are computed from the application of a point load\n"
  "on a semi-infinite domain. (The analytical results are adapted from\n"
  "Saada - see text.) It also is possible to compute effective stress\n"
  "scalars if desired. This object serves as a specialized data\n"
  "generator for some of the examples in the text.\n\n"
  "@sa\n"
  "vtkTensorGlyph vtkHyperStreamline vtkGlyphPackingFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointLoad_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkPointLoad", // tp_name
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
  PyvtkPointLoad_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointLoad_StaticNew()
{
  return vtkPointLoad::New();
}

PyObject *PyvtkPointLoad_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointLoad_Type, PyvtkPointLoad_Methods,
    "vtkPointLoad",
 &PyvtkPointLoad_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPointLoad_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointLoad(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointLoad_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointLoad", o) != 0)
  {
    Py_DECREF(o);
  }

}

