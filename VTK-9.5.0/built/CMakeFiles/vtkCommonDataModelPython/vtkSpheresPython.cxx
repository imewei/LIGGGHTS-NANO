// python wrapper for vtkSpheres
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpheres.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSpheres(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSpheres_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkSpheres_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpheres::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpheres::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpheres *tempr = vtkSpheres::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpheres *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpheres::NewInstance());

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
PyvtkSpheres_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpheres::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpheres::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

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
      op->vtkSpheres::EvaluateFunction(temp0));

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
PyvtkSpheres_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

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
      op->vtkSpheres::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

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
      op->vtkSpheres::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSpheres_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkSpheres_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkSpheres_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkSpheres_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

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
      op->vtkSpheres::EvaluateGradient(temp0, temp1);
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
PyvtkSpheres_SetCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetCenters(temp0);
    }
    else
    {
      op->vtkSpheres::SetCenters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCenters() :
      op->vtkSpheres::GetCenters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_SetRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetRadii(temp0);
    }
    else
    {
      op->vtkSpheres::SetRadii(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRadii() :
      op->vtkSpheres::GetRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetNumberOfSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSpheres() :
      op->vtkSpheres::GetNumberOfSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpheres_GetSphere_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSphere *tempr = (ap.IsBound() ?
      op->GetSphere(temp0) :
      op->vtkSpheres::GetSphere(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_GetSphere_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpheres *op = static_cast<vtkSpheres *>(vp);

  int temp0;
  vtkSphere *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSphere"))
  {
    if (ap.IsBound())
    {
      op->GetSphere(temp0, temp1);
    }
    else
    {
      op->vtkSpheres::GetSphere(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpheres_GetSphere(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSpheres_GetSphere_s1(self, args);
    case 2:
      return PyvtkSpheres_GetSphere_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSphere");
  return nullptr;
}

static PyMethodDef PyvtkSpheres_Methods[] = {
  {"IsTypeOf", PyvtkSpheres_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpheres_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpheres_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpheres\nC++: static vtkSpheres *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpheres_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpheres\nC++: vtkSpheres *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpheres_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpheres_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkSpheres_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkSpheres_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], n:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate spheres gradient. Gradients point towards the outside of\nthe spheres.\n"},
  {"SetCenters", PyvtkSpheres_SetCenters, METH_VARARGS,
   "SetCenters(self, __a:vtkPoints) -> None\nC++: virtual void SetCenters(vtkPoints *)\n\nSpecify a list of points defining sphere centers.\n"},
  {"GetCenters", PyvtkSpheres_GetCenters, METH_VARARGS,
   "GetCenters(self) -> vtkPoints\nC++: virtual vtkPoints *GetCenters()\n\n"},
  {"SetRadii", PyvtkSpheres_SetRadii, METH_VARARGS,
   "SetRadii(self, radii:vtkDataArray) -> None\nC++: void SetRadii(vtkDataArray *radii)\n\nSpecify a list of radii for the spheres. There is a one-to-one\ncorrespondence between sphere points and sphere radii.\n"},
  {"GetRadii", PyvtkSpheres_GetRadii, METH_VARARGS,
   "GetRadii(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetRadii()\n\n"},
  {"GetNumberOfSpheres", PyvtkSpheres_GetNumberOfSpheres, METH_VARARGS,
   "GetNumberOfSpheres(self) -> int\nC++: int GetNumberOfSpheres()\n\nReturn the number of spheres in the set of spheres.\n"},
  {"GetSphere", PyvtkSpheres_GetSphere, METH_VARARGS,
   "GetSphere(self, i:int) -> vtkSphere\nC++: vtkSphere *GetSphere(int i)\nGetSphere(self, i:int, sphere:vtkSphere) -> None\nC++: void GetSphere(int i, vtkSphere *sphere)\n\nCreate and return a pointer to a vtkSphere object at the ith\nposition. Asking for a sphere outside the allowable range returns\nnullptr.  This method always returns the same object. \nAlternatively use GetSphere(int i, vtkSphere *sphere) to update a\nuser supplied sphere.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSpheres_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("centers"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpheres_GetCenters(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSpheres_SetCenters(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSpheres_SetCenters(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCenters/SetCenters\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("radii"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpheres_GetRadii(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSpheres_SetRadii(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSpheres_SetRadii(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRadii/SetRadii\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSpheres_Doc =
  "vtkSpheres - implicit function for a set of spheres\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkSpheres computes the implicit function and function gradient for a\n"
  "set of spheres. The spheres are combined via a union operation (i.e.,\n"
  "the minimum value from the evaluation of all spheres is taken).\n\n"
  "The function value is the distance of a point to the closest sphere,\n"
  "with negative values interior to the spheres, positive outside the\n"
  "spheres, and distance=0 on the spheres surface.  The function\n"
  "gradient is the sphere normal at the function value.\n\n"
  "@sa\n"
  "vtkPlanes vtkImplicitBoolean\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpheres_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSpheres", // tp_name
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
  PyvtkSpheres_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpheres_StaticNew()
{
  return vtkSpheres::New();
}

PyObject *PyvtkSpheres_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpheres_Type, PyvtkSpheres_Methods,
    "vtkSpheres",
 &PyvtkSpheres_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSpheres_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpheres(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpheres_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpheres", o) != 0)
  {
    Py_DECREF(o);
  }

}

