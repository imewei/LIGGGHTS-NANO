// python wrapper for vtkPartitionedDataSetCollectionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetCollectionSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPartitionedDataSetCollectionSource(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPartitionedDataSetCollectionSource_ClassNew(); }


static PyObject *
PyvtkPartitionedDataSetCollectionSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionedDataSetCollectionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionedDataSetCollectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionedDataSetCollectionSource *tempr = vtkPartitionedDataSetCollectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionedDataSetCollectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionedDataSetCollectionSource::NewInstance());

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
PyvtkPartitionedDataSetCollectionSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPartitionedDataSetCollectionSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPartitionedDataSetCollectionSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_SetNumberOfShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfShapes(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollectionSource::SetNumberOfShapes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShapesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfShapesMinValue() :
      op->vtkPartitionedDataSetCollectionSource::GetNumberOfShapesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShapesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfShapesMaxValue() :
      op->vtkPartitionedDataSetCollectionSource::GetNumberOfShapesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollectionSource *op = static_cast<vtkPartitionedDataSetCollectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfShapes() :
      op->vtkPartitionedDataSetCollectionSource::GetNumberOfShapes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollectionSource_Methods[] = {
  {"IsTypeOf", PyvtkPartitionedDataSetCollectionSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionedDataSetCollectionSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionedDataSetCollectionSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkPartitionedDataSetCollectionSource\nC++: static vtkPartitionedDataSetCollectionSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionedDataSetCollectionSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPartitionedDataSetCollectionSource\nC++: vtkPartitionedDataSetCollectionSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPartitionedDataSetCollectionSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPartitionedDataSetCollectionSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfShapes", PyvtkPartitionedDataSetCollectionSource_SetNumberOfShapes, METH_VARARGS,
   "SetNumberOfShapes(self, _arg:int) -> None\nC++: virtual void SetNumberOfShapes(int _arg)\n\nGet/Set the number of partitioned datasets in the collection.\n"},
  {"GetNumberOfShapesMinValue", PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMinValue, METH_VARARGS,
   "GetNumberOfShapesMinValue(self) -> int\nC++: virtual int GetNumberOfShapesMinValue()\n\n"},
  {"GetNumberOfShapesMaxValue", PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMaxValue, METH_VARARGS,
   "GetNumberOfShapesMaxValue(self) -> int\nC++: virtual int GetNumberOfShapesMaxValue()\n\n"},
  {"GetNumberOfShapes", PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapes, METH_VARARGS,
   "GetNumberOfShapes(self) -> int\nC++: virtual int GetNumberOfShapes()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPartitionedDataSetCollectionSource_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("number_of_shapes_min_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMinValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfShapesMinValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_shapes_max_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapesMaxValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfShapesMaxValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_shapes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPartitionedDataSetCollectionSource_GetNumberOfShapes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPartitionedDataSetCollectionSource_SetNumberOfShapes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPartitionedDataSetCollectionSource_SetNumberOfShapes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfShapes/SetNumberOfShapes\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPartitionedDataSetCollectionSource_Doc =
  "vtkPartitionedDataSetCollectionSource - a source that produces a\nvtkPartitionedDataSetCollection.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "vtkPartitionedDataSetCollection generates a\n"
  "vtkPartitionedDataSetCollection for testing purposes. It uses\n"
  "vtkParametricFunctionSource internally to generate different types of\n"
  "surfaces for each partitioned dataset in the collection. Each\n"
  "partitioned dataset is split among ranks in an even fashion. Thus the\n"
  "number of partitions per rank for a partitioned dataset are always\n"
  "different.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPartitionedDataSetCollectionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkPartitionedDataSetCollectionSource", // tp_name
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
  PyvtkPartitionedDataSetCollectionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionedDataSetCollectionSource_StaticNew()
{
  return vtkPartitionedDataSetCollectionSource::New();
}

PyObject *PyvtkPartitionedDataSetCollectionSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPartitionedDataSetCollectionSource_Type, PyvtkPartitionedDataSetCollectionSource_Methods,
    "vtkPartitionedDataSetCollectionSource",
 &PyvtkPartitionedDataSetCollectionSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPartitionedDataSetCollectionSource_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPartitionedDataSetCollectionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionedDataSetCollectionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionedDataSetCollectionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

