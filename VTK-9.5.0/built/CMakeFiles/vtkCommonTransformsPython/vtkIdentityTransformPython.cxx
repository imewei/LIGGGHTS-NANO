// python wrapper for vtkIdentityTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIdentityTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkIdentityTransform(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkIdentityTransform_ClassNew(); }

#ifndef DECLARED_PyvtkLinearTransform_ClassNew
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }
#define DECLARED_PyvtkLinearTransform_ClassNew
#endif

static PyObject *
PyvtkIdentityTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdentityTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdentityTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdentityTransform *tempr = vtkIdentityTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdentityTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdentityTransform::NewInstance());

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
PyvtkIdentityTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIdentityTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIdentityTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformNormals(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformVectors(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::TransformVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkIdentityTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformNormal(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformVector(temp0, temp1);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformVector(temp0, temp1);
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
PyvtkIdentityTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIdentityTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdentityTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkIdentityTransform::MakeTransform());

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

static PyMethodDef PyvtkIdentityTransform_Methods[] = {
  {"IsTypeOf", PyvtkIdentityTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIdentityTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIdentityTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIdentityTransform\nC++: static vtkIdentityTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIdentityTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIdentityTransform\nC++: vtkIdentityTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIdentityTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIdentityTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TransformPoints", PyvtkIdentityTransform_TransformPoints, METH_VARARGS,
   "TransformPoints(self, inPts:vtkPoints, outPts:vtkPoints) -> None\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n    override;\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"TransformNormals", PyvtkIdentityTransform_TransformNormals, METH_VARARGS,
   "TransformNormals(self, inNms:vtkDataArray, outNms:vtkDataArray)\n    -> None\nC++: void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms) override;\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {"TransformVectors", PyvtkIdentityTransform_TransformVectors, METH_VARARGS,
   "TransformVectors(self, inVrs:vtkDataArray, outVrs:vtkDataArray)\n    -> None\nC++: void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs) override;\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {"Inverse", PyvtkIdentityTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.\n"},
  {"InternalTransformPoint", PyvtkIdentityTransform_InternalTransformPoint, METH_VARARGS,
   "InternalTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformNormal", PyvtkIdentityTransform_InternalTransformNormal, METH_VARARGS,
   "InternalTransformNormal(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformNormal(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformVector", PyvtkIdentityTransform_InternalTransformVector, METH_VARARGS,
   "InternalTransformVector(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformVector(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformDerivative", PyvtkIdentityTransform_InternalTransformDerivative, METH_VARARGS,
   "InternalTransformDerivative(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\n"},
  {"MakeTransform", PyvtkIdentityTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake a transform of the same type.  This will actually return the\nsame transform.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkIdentityTransform_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkIdentityTransform_Doc =
  "vtkIdentityTransform - a transform that doesn't do anything\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "vtkIdentityTransform is a transformation which will simply pass\n"
  "coordinate data unchanged.  All other transform types can also do\n"
  "this, however, the vtkIdentityTransform does so with much greater\n"
  "efficiency.\n"
  "@sa\n"
  "vtkLinearTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIdentityTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkIdentityTransform", // tp_name
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
  PyvtkIdentityTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdentityTransform_StaticNew()
{
  return vtkIdentityTransform::New();
}

PyObject *PyvtkIdentityTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIdentityTransform_Type, PyvtkIdentityTransform_Methods,
    "vtkIdentityTransform",
 &PyvtkIdentityTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLinearTransform_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkIdentityTransform_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIdentityTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdentityTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdentityTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

