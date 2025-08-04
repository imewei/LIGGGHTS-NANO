// python wrapper for vtkAppendPartitionedDataSetCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAppendPartitionedDataSetCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAppendPartitionedDataSetCollection(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAppendPartitionedDataSetCollection_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendPartitionedDataSetCollection_AppendModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAppendPartitionedDataSetCollection.AppendModes", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkAppendPartitionedDataSetCollection_AppendModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAppendPartitionedDataSetCollection_AppendModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendPartitionedDataSetCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendPartitionedDataSetCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendPartitionedDataSetCollection *tempr = vtkAppendPartitionedDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendPartitionedDataSetCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendPartitionedDataSetCollection::NewInstance());

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
PyvtkAppendPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAppendPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAppendPartitionedDataSetCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_SetAppendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendMode(temp0);
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::SetAppendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_GetAppendModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendModeMinValue() :
      op->vtkAppendPartitionedDataSetCollection::GetAppendModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_GetAppendModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendModeMaxValue() :
      op->vtkAppendPartitionedDataSetCollection::GetAppendModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_SetAppendModeToAppendPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendModeToAppendPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAppendModeToAppendPartitions();
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::SetAppendModeToAppendPartitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_SetAppendModeToMergePartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendModeToMergePartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAppendModeToMergePartitions();
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::SetAppendModeToMergePartitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_GetAppendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendMode() :
      op->vtkAppendPartitionedDataSetCollection::GetAppendMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_SetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendFieldData(temp0);
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::SetAppendFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_GetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAppendFieldData() :
      op->vtkAppendPartitionedDataSetCollection::GetAppendFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_AppendFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendFieldDataOn();
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::AppendFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPartitionedDataSetCollection_AppendFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPartitionedDataSetCollection *op = static_cast<vtkAppendPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendFieldDataOff();
    }
    else
    {
      op->vtkAppendPartitionedDataSetCollection::AppendFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendPartitionedDataSetCollection_Methods[] = {
  {"IsTypeOf", PyvtkAppendPartitionedDataSetCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendPartitionedDataSetCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendPartitionedDataSetCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkAppendPartitionedDataSetCollection\nC++: static vtkAppendPartitionedDataSetCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendPartitionedDataSetCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAppendPartitionedDataSetCollection\nC++: vtkAppendPartitionedDataSetCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAppendPartitionedDataSetCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAppendPartitionedDataSetCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAppendMode", PyvtkAppendPartitionedDataSetCollection_SetAppendMode, METH_VARARGS,
   "SetAppendMode(self, _arg:int) -> None\nC++: virtual void SetAppendMode(int _arg)\n\nSet/Get the mode of the append filter.\n\nThe default mode is APPEND_PARTITIONED_DATASETS.\n"},
  {"GetAppendModeMinValue", PyvtkAppendPartitionedDataSetCollection_GetAppendModeMinValue, METH_VARARGS,
   "GetAppendModeMinValue(self) -> int\nC++: virtual int GetAppendModeMinValue()\n\n"},
  {"GetAppendModeMaxValue", PyvtkAppendPartitionedDataSetCollection_GetAppendModeMaxValue, METH_VARARGS,
   "GetAppendModeMaxValue(self) -> int\nC++: virtual int GetAppendModeMaxValue()\n\n"},
  {"SetAppendModeToAppendPartitions", PyvtkAppendPartitionedDataSetCollection_SetAppendModeToAppendPartitions, METH_VARARGS,
   "SetAppendModeToAppendPartitions(self) -> None\nC++: void SetAppendModeToAppendPartitions()\n\n"},
  {"SetAppendModeToMergePartitions", PyvtkAppendPartitionedDataSetCollection_SetAppendModeToMergePartitions, METH_VARARGS,
   "SetAppendModeToMergePartitions(self) -> None\nC++: void SetAppendModeToMergePartitions()\n\n"},
  {"GetAppendMode", PyvtkAppendPartitionedDataSetCollection_GetAppendMode, METH_VARARGS,
   "GetAppendMode(self) -> int\nC++: virtual int GetAppendMode()\n\n"},
  {"SetAppendFieldData", PyvtkAppendPartitionedDataSetCollection_SetAppendFieldData, METH_VARARGS,
   "SetAppendFieldData(self, _arg:bool) -> None\nC++: virtual void SetAppendFieldData(bool _arg)\n\nSet/Get whether to append the field data of the input partitioned\ndataset collections.\n\nThe default is true.\n"},
  {"GetAppendFieldData", PyvtkAppendPartitionedDataSetCollection_GetAppendFieldData, METH_VARARGS,
   "GetAppendFieldData(self) -> bool\nC++: virtual bool GetAppendFieldData()\n\n"},
  {"AppendFieldDataOn", PyvtkAppendPartitionedDataSetCollection_AppendFieldDataOn, METH_VARARGS,
   "AppendFieldDataOn(self) -> None\nC++: virtual void AppendFieldDataOn()\n\n"},
  {"AppendFieldDataOff", PyvtkAppendPartitionedDataSetCollection_AppendFieldDataOff, METH_VARARGS,
   "AppendFieldDataOff(self) -> None\nC++: virtual void AppendFieldDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAppendPartitionedDataSetCollection_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("append_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAppendPartitionedDataSetCollection_GetAppendMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAppendPartitionedDataSetCollection_SetAppendMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAppendPartitionedDataSetCollection_SetAppendMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAppendMode/SetAppendMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("append_field_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAppendPartitionedDataSetCollection_GetAppendFieldData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAppendPartitionedDataSetCollection_SetAppendFieldData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAppendPartitionedDataSetCollection_SetAppendFieldData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAppendFieldData/SetAppendFieldData\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAppendPartitionedDataSetCollection_Doc =
  "vtkAppendPartitionedDataSetCollection - Append partitioned dataset\ncollections.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "vtkAppendPartitionedDataSetCollection is a filter that appends input\n"
  "partitioned dataset collections with the same number of partitions\n"
  "and assembly (if present) into a single output partitioned dataset\n"
  "collection. Each partitioned dataset of the output partitioned\n"
  "dataset collection will either have 1 partition (merging occurs) or\n"
  "the N partitions, where N is the summation of the number of\n"
  "partitions of the corresponding partitioned datasets of the input\n"
  "partitioned dataset collections. To select the mode of the append\n"
  "filter, use the SetAppendMode method.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendPartitionedDataSetCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAppendPartitionedDataSetCollection", // tp_name
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
  PyvtkAppendPartitionedDataSetCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendPartitionedDataSetCollection_StaticNew()
{
  return vtkAppendPartitionedDataSetCollection::New();
}

PyObject *PyvtkAppendPartitionedDataSetCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAppendPartitionedDataSetCollection_Type, PyvtkAppendPartitionedDataSetCollection_Methods,
    "vtkAppendPartitionedDataSetCollection",
 &PyvtkAppendPartitionedDataSetCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAppendPartitionedDataSetCollection_AppendModes_Type);
  PyVTKEnum_Add(&PyvtkAppendPartitionedDataSetCollection_AppendModes_Type, "vtkAppendPartitionedDataSetCollection.AppendModes");

  o = (PyObject *)&PyvtkAppendPartitionedDataSetCollection_AppendModes_Type;
  if (PyDict_SetItemString(d, "AppendModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkAppendPartitionedDataSetCollection::AppendModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "APPEND_PARTITIONS", vtkAppendPartitionedDataSetCollection::APPEND_PARTITIONS },
        { "MERGE_PARTITIONS", vtkAppendPartitionedDataSetCollection::MERGE_PARTITIONS },
      };

    o = PyvtkAppendPartitionedDataSetCollection_AppendModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAppendPartitionedDataSetCollection_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendPartitionedDataSetCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendPartitionedDataSetCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendPartitionedDataSetCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

