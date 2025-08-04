// python wrapper for vtkAggregateToPartitionedDataSetCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkAggregateToPartitionedDataSetCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAggregateToPartitionedDataSetCollection(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAggregateToPartitionedDataSetCollection_ClassNew(); }

#ifndef DECLARED_PyvtkExecutionAggregator_ClassNew
extern "C" { PyObject *PyvtkExecutionAggregator_ClassNew(); }
#define DECLARED_PyvtkExecutionAggregator_ClassNew
#endif

static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAggregateToPartitionedDataSetCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAggregateToPartitionedDataSetCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAggregateToPartitionedDataSetCollection *tempr = vtkAggregateToPartitionedDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAggregateToPartitionedDataSetCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAggregateToPartitionedDataSetCollection::NewInstance());

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
PyvtkAggregateToPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAggregateToPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAggregateToPartitionedDataSetCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_RequestDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkSmartPointer<vtkDataObject> tempr = (ap.IsBound() ?
      op->RequestDataObject(temp0) :
      op->vtkAggregateToPartitionedDataSetCollection::RequestDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->Aggregate(temp0) :
      op->vtkAggregateToPartitionedDataSetCollection::Aggregate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_GetOutputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartPointer<vtkDataObject> tempr = (ap.IsBound() ?
      op->GetOutputDataObject() :
      op->vtkAggregateToPartitionedDataSetCollection::GetOutputDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateToPartitionedDataSetCollection_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateToPartitionedDataSetCollection *op = static_cast<vtkAggregateToPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkAggregateToPartitionedDataSetCollection::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAggregateToPartitionedDataSetCollection_Methods[] = {
  {"IsTypeOf", PyvtkAggregateToPartitionedDataSetCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAggregateToPartitionedDataSetCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAggregateToPartitionedDataSetCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkAggregateToPartitionedDataSetCollection\nC++: static vtkAggregateToPartitionedDataSetCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAggregateToPartitionedDataSetCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAggregateToPartitionedDataSetCollection\nC++: vtkAggregateToPartitionedDataSetCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAggregateToPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAggregateToPartitionedDataSetCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RequestDataObject", PyvtkAggregateToPartitionedDataSetCollection_RequestDataObject, METH_VARARGS,
   "RequestDataObject(self, input:vtkDataObject) -> vtkDataObject\nC++: vtkSmartPointer<vtkDataObject> RequestDataObject(\n    vtkDataObject *input) override;\n\nCreate the empty output data set. see vtkAlgorithm.h\n"},
  {"Aggregate", PyvtkAggregateToPartitionedDataSetCollection_Aggregate, METH_VARARGS,
   "Aggregate(self, input:vtkDataObject) -> bool\nC++: bool Aggregate(vtkDataObject *input) override;\n\nPush the input dataset at the end of the output\nvtkPartitionedDataSetCollection.\n"},
  {"GetOutputDataObject", PyvtkAggregateToPartitionedDataSetCollection_GetOutputDataObject, METH_VARARGS,
   "GetOutputDataObject(self) -> vtkDataObject\nC++: vtkSmartPointer<vtkDataObject> GetOutputDataObject()\n    override;\n\nRetrieve the constructed vtkPartitionedDataSetCollection\n"},
  {"Clear", PyvtkAggregateToPartitionedDataSetCollection_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear() override;\n\nReset the internal vtkPartitionedDataSetCollection\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAggregateToPartitionedDataSetCollection_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("output_data_object"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAggregateToPartitionedDataSetCollection_GetOutputDataObject(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetOutputDataObject\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAggregateToPartitionedDataSetCollection_Doc =
  "vtkAggregateToPartitionedDataSetCollection - Aggregate results in the\nvtkEndFor\n\n"
  "Superclass: vtkExecutionAggregator\n\n"
  "vtkAggregateToPartitionedDataSetCollection is an execution aggregator\n"
  "for the `vtkEndFor` filter that insert each iteration result in a\n"
  "partition of a vtkPartitionnedDataSetCollection.\n\n"
  "@sa vtkEndFor, vtkForEach, vtkExecutionAggregator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAggregateToPartitionedDataSetCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkAggregateToPartitionedDataSetCollection", // tp_name
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
  PyvtkAggregateToPartitionedDataSetCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAggregateToPartitionedDataSetCollection_StaticNew()
{
  return vtkAggregateToPartitionedDataSetCollection::New();
}

PyObject *PyvtkAggregateToPartitionedDataSetCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAggregateToPartitionedDataSetCollection_Type, PyvtkAggregateToPartitionedDataSetCollection_Methods,
    "vtkAggregateToPartitionedDataSetCollection",
 &PyvtkAggregateToPartitionedDataSetCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExecutionAggregator_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAggregateToPartitionedDataSetCollection_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAggregateToPartitionedDataSetCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAggregateToPartitionedDataSetCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAggregateToPartitionedDataSetCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

