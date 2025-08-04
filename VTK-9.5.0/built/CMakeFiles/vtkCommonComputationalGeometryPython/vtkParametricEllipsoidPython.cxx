// python wrapper for vtkParametricEllipsoid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricEllipsoid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkParametricEllipsoid(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkParametricEllipsoid_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static PyObject *
PyvtkParametricEllipsoid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricEllipsoid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricEllipsoid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricEllipsoid *tempr = vtkParametricEllipsoid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricEllipsoid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricEllipsoid::NewInstance());

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
PyvtkParametricEllipsoid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricEllipsoid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricEllipsoid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricEllipsoid::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXRadius(temp0);
    }
    else
    {
      op->vtkParametricEllipsoid::SetXRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXRadius() :
      op->vtkParametricEllipsoid::GetXRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYRadius(temp0);
    }
    else
    {
      op->vtkParametricEllipsoid::SetYRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYRadius() :
      op->vtkParametricEllipsoid::GetYRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZRadius(temp0);
    }
    else
    {
      op->vtkParametricEllipsoid::SetZRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZRadius() :
      op->vtkParametricEllipsoid::GetZRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricEllipsoid::Evaluate(temp0, temp1, temp2);
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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricEllipsoid::EvaluateScalar(temp0, temp1, temp2));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricEllipsoid_Methods[] = {
  {"IsTypeOf", PyvtkParametricEllipsoid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricEllipsoid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricEllipsoid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricEllipsoid\nC++: static vtkParametricEllipsoid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricEllipsoid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricEllipsoid\nC++: vtkParametricEllipsoid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricEllipsoid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricEllipsoid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricEllipsoid_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetXRadius", PyvtkParametricEllipsoid_SetXRadius, METH_VARARGS,
   "SetXRadius(self, _arg:float) -> None\nC++: virtual void SetXRadius(double _arg)\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {"GetXRadius", PyvtkParametricEllipsoid_GetXRadius, METH_VARARGS,
   "GetXRadius(self) -> float\nC++: virtual double GetXRadius()\n\n"},
  {"SetYRadius", PyvtkParametricEllipsoid_SetYRadius, METH_VARARGS,
   "SetYRadius(self, _arg:float) -> None\nC++: virtual void SetYRadius(double _arg)\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {"GetYRadius", PyvtkParametricEllipsoid_GetYRadius, METH_VARARGS,
   "GetYRadius(self) -> float\nC++: virtual double GetYRadius()\n\n"},
  {"SetZRadius", PyvtkParametricEllipsoid_SetZRadius, METH_VARARGS,
   "SetZRadius(self, _arg:float) -> None\nC++: virtual void SetZRadius(double _arg)\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {"GetZRadius", PyvtkParametricEllipsoid_GetZRadius, METH_VARARGS,
   "GetZRadius(self) -> float\nC++: virtual double GetZRadius()\n\n"},
  {"Evaluate", PyvtkParametricEllipsoid_Evaluate, METH_VARARGS,
   "Evaluate(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nAn ellipsoid.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricEllipsoid_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkParametricEllipsoid_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("x_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkParametricEllipsoid_GetXRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkParametricEllipsoid_SetXRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkParametricEllipsoid_SetXRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetXRadius/SetXRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkParametricEllipsoid_GetYRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkParametricEllipsoid_SetYRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkParametricEllipsoid_SetYRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetYRadius/SetYRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkParametricEllipsoid_GetZRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkParametricEllipsoid_SetZRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkParametricEllipsoid_SetZRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetZRadius/SetZRadius\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkParametricEllipsoid_GetDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDimension\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkParametricEllipsoid_Doc =
  "vtkParametricEllipsoid - Generate an ellipsoid.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricEllipsoid generates an ellipsoid. If all the radii are\n"
  "the same, we have a sphere. An oblate spheroid occurs if RadiusX =\n"
  "RadiusY > RadiusZ. Here the Z-axis forms the symmetry axis. To a\n"
  "first approximation, this is the shape of the earth. A prolate\n"
  "spheroid occurs if RadiusX = RadiusY < RadiusZ.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricEllipsoid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricEllipsoid", // tp_name
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
  PyvtkParametricEllipsoid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricEllipsoid_StaticNew()
{
  return vtkParametricEllipsoid::New();
}

PyObject *PyvtkParametricEllipsoid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricEllipsoid_Type, PyvtkParametricEllipsoid_Methods,
    "vtkParametricEllipsoid",
 &PyvtkParametricEllipsoid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkParametricEllipsoid_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricEllipsoid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricEllipsoid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricEllipsoid", o) != 0)
  {
    Py_DECREF(o);
  }

}

