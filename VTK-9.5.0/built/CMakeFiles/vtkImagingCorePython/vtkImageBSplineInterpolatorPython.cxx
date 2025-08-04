// python wrapper for vtkImageBSplineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageBSplineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageBSplineInterpolator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageBSplineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractImageInterpolator_ClassNew
extern "C" { PyObject *PyvtkAbstractImageInterpolator_ClassNew(); }
#define DECLARED_PyvtkAbstractImageInterpolator_ClassNew
#endif

static PyObject *
PyvtkImageBSplineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageBSplineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBSplineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageBSplineInterpolator *tempr = vtkImageBSplineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBSplineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBSplineInterpolator::NewInstance());

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
PyvtkImageBSplineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageBSplineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageBSplineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_SetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplineDegree(temp0);
    }
    else
    {
      op->vtkImageBSplineInterpolator::SetSplineDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegree() :
      op->vtkImageBSplineInterpolator::GetSplineDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMinValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMaxValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeSupportSize(temp0, temp1);
    }
    else
    {
      op->vtkImageBSplineInterpolator::ComputeSupportSize(temp0, temp1);
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
PyvtkImageBSplineInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageBSplineInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageBSplineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkImageBSplineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageBSplineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageBSplineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageBSplineInterpolator\nC++: static vtkImageBSplineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageBSplineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageBSplineInterpolator\nC++: vtkImageBSplineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageBSplineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageBSplineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSplineDegree", PyvtkImageBSplineInterpolator_SetSplineDegree, METH_VARARGS,
   "SetSplineDegree(self, degree:int) -> None\nC++: void SetSplineDegree(int degree)\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {"GetSplineDegree", PyvtkImageBSplineInterpolator_GetSplineDegree, METH_VARARGS,
   "GetSplineDegree(self) -> int\nC++: int GetSplineDegree()\n\n"},
  {"GetSplineDegreeMinValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue, METH_VARARGS,
   "GetSplineDegreeMinValue(self) -> int\nC++: int GetSplineDegreeMinValue()\n\n"},
  {"GetSplineDegreeMaxValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue, METH_VARARGS,
   "GetSplineDegreeMaxValue(self) -> int\nC++: int GetSplineDegreeMaxValue()\n\n"},
  {"ComputeSupportSize", PyvtkImageBSplineInterpolator_ComputeSupportSize, METH_VARARGS,
   "ComputeSupportSize(self, matrix:(float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float), size:[int, int, int]) -> None\nC++: void ComputeSupportSize(const double matrix[16], int size[3])\n     override;\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass nullptr as the matrix to\nretrieve the full kernel size.\n"},
  {"IsSeparable", PyvtkImageBSplineInterpolator_IsSeparable, METH_VARARGS,
   "IsSeparable(self) -> bool\nC++: bool IsSeparable() override;\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageBSplineInterpolator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("spline_degree"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageBSplineInterpolator_GetSplineDegree(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageBSplineInterpolator_SetSplineDegree(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageBSplineInterpolator_SetSplineDegree(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSplineDegree/SetSplineDegree\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageBSplineInterpolator_Doc =
  "vtkImageBSplineInterpolator - perform b-spline interpolation on images\n\n"
  "Superclass: vtkAbstractImageInterpolator\n\n"
  "vtkImageBSplineInterpolator can be used to perform b-spline\n"
  "interpolation on images that have been filtered with\n"
  "vtkImageBSplineCoefficients.  The b-spline interpolants provide the\n"
  "maximum possible degree of continuity for a given kernel size, but\n"
  "require that the image data be pre-filtered to generate b-spline\n"
  "coefficients before the interpolation is performed. Interpolating\n"
  "data that has not been pre-filtered will give incorrect results.\n"
  "@sa\n"
  "vtkImageReslice vtkImageBSplineCoefficients vtkBSplineTransform@par\n"
  "Thanks: This class was written by David Gobbi at the Seaman Family MR\n"
  "Research Centre, Foothills Medical Centre, Calgary, Alberta. DG Gobbi\n"
  "and YP Starreveld, \"Uniform B-Splines for the VTK Imaging Pipeline,\"\n"
  "VTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageBSplineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageBSplineInterpolator", // tp_name
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
  PyvtkImageBSplineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageBSplineInterpolator_StaticNew()
{
  return vtkImageBSplineInterpolator::New();
}

PyObject *PyvtkImageBSplineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageBSplineInterpolator_Type, PyvtkImageBSplineInterpolator_Methods,
    "vtkImageBSplineInterpolator",
 &PyvtkImageBSplineInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractImageInterpolator_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageBSplineInterpolator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageBSplineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageBSplineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageBSplineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(9);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_IMAGE_BSPLINE_DEGREE_MAX", o);
    Py_DECREF(o);
  }
}

