// python wrapper for vtkDecimatePolylineDistanceStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDecimatePolylineDistanceStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDecimatePolylineDistanceStrategy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDecimatePolylineDistanceStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkDecimatePolylineStrategy_ClassNew
extern "C" { PyObject *PyvtkDecimatePolylineStrategy_ClassNew(); }
#define DECLARED_PyvtkDecimatePolylineStrategy_ClassNew
#endif

static PyObject *
PyvtkDecimatePolylineDistanceStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDecimatePolylineDistanceStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineDistanceStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineDistanceStrategy *op = static_cast<vtkDecimatePolylineDistanceStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePolylineDistanceStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineDistanceStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDecimatePolylineDistanceStrategy *tempr = vtkDecimatePolylineDistanceStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineDistanceStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineDistanceStrategy *op = static_cast<vtkDecimatePolylineDistanceStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePolylineDistanceStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePolylineDistanceStrategy::NewInstance());

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
PyvtkDecimatePolylineDistanceStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDecimatePolylineDistanceStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineDistanceStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineDistanceStrategy *op = static_cast<vtkDecimatePolylineDistanceStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDecimatePolylineDistanceStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineDistanceStrategy_ComputeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineDistanceStrategy *op = static_cast<vtkDecimatePolylineDistanceStrategy *>(vp);

  vtkPointSet *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeError(temp0, temp1, temp2, temp3) :
      op->vtkDecimatePolylineDistanceStrategy::ComputeError(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineDistanceStrategy_Methods[] = {
  {"IsTypeOf", PyvtkDecimatePolylineDistanceStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDecimatePolylineDistanceStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDecimatePolylineDistanceStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDecimatePolylineDistanceStrategy\nC++: static vtkDecimatePolylineDistanceStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDecimatePolylineDistanceStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDecimatePolylineDistanceStrategy\nC++: vtkDecimatePolylineDistanceStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDecimatePolylineDistanceStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDecimatePolylineDistanceStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeError", PyvtkDecimatePolylineDistanceStrategy_ComputeError, METH_VARARGS,
   "ComputeError(self, dataset:vtkPointSet, originId:int, p1Id:int,\n    p2Id:int) -> float\nC++: double ComputeError(vtkPointSet *dataset, vtkIdType originId,\n     vtkIdType p1Id, vtkIdType p2Id) override;\n\nMethod for computing the decimation error. This implementation\nuses the distance between the origin and the line formed by the\nother 2 points points as metric of error. The caller should\nensure that the Ids provided correspond to existing and allocated\npoints in the dataset.\n@param dataset the dataset containing the points to evaluate.\n@param originId the Id of the origin point.\n@param p1Id the Id of the previous point to the origin.\n@param p2Id the Id of the next point to the origin.\n@return the eulerian distance from the origin to the line formed\n    by p1 and p2.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDecimatePolylineDistanceStrategy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDecimatePolylineDistanceStrategy_Doc =
  "vtkDecimatePolylineDistanceStrategy - decimation strategy using\ndistance between points as a metric.\n\n"
  "Superclass: vtkDecimatePolylineStrategy\n\n"
  "This class inherits from `vtkDecimatePolylineStrategy` and its\n"
  "decimation strategy uses the distance between 3 consecutive points as\n"
  "a metric of error.\n\n"
  "@warning\n"
  "The ComputeError method doesn't check the validity of its parameters\n"
  "for performance purposes. This is up to the caller to ensure the\n"
  "provided data are valid.\n\n"
  "@sa\n"
  "vtkDecimatePolylineFilter, vtkDecimatePolylineStrategy\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDecimatePolylineDistanceStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDecimatePolylineDistanceStrategy", // tp_name
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
  PyvtkDecimatePolylineDistanceStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDecimatePolylineDistanceStrategy_StaticNew()
{
  return vtkDecimatePolylineDistanceStrategy::New();
}

PyObject *PyvtkDecimatePolylineDistanceStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDecimatePolylineDistanceStrategy_Type, PyvtkDecimatePolylineDistanceStrategy_Methods,
    "vtkDecimatePolylineDistanceStrategy",
 &PyvtkDecimatePolylineDistanceStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDecimatePolylineStrategy_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDecimatePolylineDistanceStrategy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDecimatePolylineDistanceStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDecimatePolylineDistanceStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDecimatePolylineDistanceStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

