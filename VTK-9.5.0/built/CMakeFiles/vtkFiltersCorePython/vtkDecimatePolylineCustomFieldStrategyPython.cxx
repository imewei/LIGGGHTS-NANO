// python wrapper for vtkDecimatePolylineCustomFieldStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDecimatePolylineCustomFieldStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDecimatePolylineCustomFieldStrategy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDecimatePolylineCustomFieldStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkDecimatePolylineStrategy_ClassNew
extern "C" { PyObject *PyvtkDecimatePolylineStrategy_ClassNew(); }
#define DECLARED_PyvtkDecimatePolylineStrategy_ClassNew
#endif

static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDecimatePolylineCustomFieldStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePolylineCustomFieldStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDecimatePolylineCustomFieldStrategy *tempr = vtkDecimatePolylineCustomFieldStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePolylineCustomFieldStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePolylineCustomFieldStrategy::NewInstance());

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
PyvtkDecimatePolylineCustomFieldStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDecimatePolylineCustomFieldStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDecimatePolylineCustomFieldStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_ComputeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

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
      op->vtkDecimatePolylineCustomFieldStrategy::ComputeError(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_IsStateValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStateValid(temp0) :
      op->vtkDecimatePolylineCustomFieldStrategy::IsStateValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_SetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldName(temp0);
    }
    else
    {
      op->vtkDecimatePolylineCustomFieldStrategy::SetFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineCustomFieldStrategy_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineCustomFieldStrategy *op = static_cast<vtkDecimatePolylineCustomFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFieldName() :
      op->vtkDecimatePolylineCustomFieldStrategy::GetFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineCustomFieldStrategy_Methods[] = {
  {"IsTypeOf", PyvtkDecimatePolylineCustomFieldStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDecimatePolylineCustomFieldStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDecimatePolylineCustomFieldStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDecimatePolylineCustomFieldStrategy\nC++: static vtkDecimatePolylineCustomFieldStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDecimatePolylineCustomFieldStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDecimatePolylineCustomFieldStrategy\nC++: vtkDecimatePolylineCustomFieldStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDecimatePolylineCustomFieldStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDecimatePolylineCustomFieldStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeError", PyvtkDecimatePolylineCustomFieldStrategy_ComputeError, METH_VARARGS,
   "ComputeError(self, dataset:vtkPointSet, originId:int, p1Id:int,\n    p2Id:int) -> float\nC++: double ComputeError(vtkPointSet *dataset, vtkIdType originId,\n     vtkIdType p1Id, vtkIdType p2Id) override;\n\nMethod for computing the decimation error. This implementation\nuses the values stored in the custom field which are associated\nto the three vertices passed in parameter. The caller should\nensure that the Ids provided correspond to existing and allocated\npoints in the dataset.\n@param dataset the dataset containing the points to evaluate.\n@param originId the Id of the origin point.\n@param p1Id the Id of the previous point to the origin.\n@param p2Id the Id of the next point to the origin.\n@return the max of the absolute distance between the values\n    stored in the PointData array for\neach points given in parameter.\n"},
  {"IsStateValid", PyvtkDecimatePolylineCustomFieldStrategy_IsStateValid, METH_VARARGS,
   "IsStateValid(self, dataset:vtkPointSet) -> bool\nC++: bool IsStateValid(vtkPointSet *dataset) override;\n\nReturns whether this decimation strategy is in\na valid state and ready to compute errors. Subclasses are\nexpected to implement this method if they need to have to ensure\nthat some of their state is set correctly. Strategies in invalid\nstate will cause the filter to early return. Returns `true` by\ndefault.\n"},
  {"SetFieldName", PyvtkDecimatePolylineCustomFieldStrategy_SetFieldName, METH_VARARGS,
   "SetFieldName(self, _arg:str) -> None\nC++: virtual void SetFieldName(std::string _arg)\n\nThe name of the field containing the decimation information to\nevaluate. Defaults to an empty string.\n"},
  {"GetFieldName", PyvtkDecimatePolylineCustomFieldStrategy_GetFieldName, METH_VARARGS,
   "GetFieldName(self) -> str\nC++: virtual std::string GetFieldName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDecimatePolylineCustomFieldStrategy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("field_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDecimatePolylineCustomFieldStrategy_GetFieldName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDecimatePolylineCustomFieldStrategy_SetFieldName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDecimatePolylineCustomFieldStrategy_SetFieldName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFieldName/SetFieldName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDecimatePolylineCustomFieldStrategy_Doc =
  "vtkDecimatePolylineCustomFieldStrategy - Decimation strategy using a\ncustom point data array to retrieve the data to be used a a metric.\n\n"
  "Superclass: vtkDecimatePolylineStrategy\n\n"
  "This class inherits from `vtkDecimatePolylineStrategy` and its\n"
  "decimation strategy uses the values stored in a defined point data\n"
  "array as a metric of error. This array is retrieved using the the\n"
  "class property FieldName.\n\n"
  "@warning\n"
  "The ComputeError method doesn't check the validity of its parameters\n"
  "for performance purposes. This is up to the caller to ensure the\n"
  "provided data are valid.\n\n"
  "@sa\n"
  "vtkDecimatePolylineFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDecimatePolylineCustomFieldStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDecimatePolylineCustomFieldStrategy", // tp_name
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
  PyvtkDecimatePolylineCustomFieldStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDecimatePolylineCustomFieldStrategy_StaticNew()
{
  return vtkDecimatePolylineCustomFieldStrategy::New();
}

PyObject *PyvtkDecimatePolylineCustomFieldStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDecimatePolylineCustomFieldStrategy_Type, PyvtkDecimatePolylineCustomFieldStrategy_Methods,
    "vtkDecimatePolylineCustomFieldStrategy",
 &PyvtkDecimatePolylineCustomFieldStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDecimatePolylineStrategy_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDecimatePolylineCustomFieldStrategy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDecimatePolylineCustomFieldStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDecimatePolylineCustomFieldStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDecimatePolylineCustomFieldStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

