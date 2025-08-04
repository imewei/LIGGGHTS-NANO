// python wrapper for vtkDataObjectMeshCache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObjectMeshCache.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDataObjectMeshCache(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDataObjectMeshCache_ClassNew(); }


static PyObject *
PyvtkDataObjectMeshCache_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectMeshCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectMeshCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectMeshCache *tempr = vtkDataObjectMeshCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectMeshCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectMeshCache::NewInstance());

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
PyvtkDataObjectMeshCache_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectMeshCache::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectMeshCache::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_SetConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetConsumer(temp0);
    }
    else
    {
      op->vtkDataObjectMeshCache::SetConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_SetOriginalDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetOriginalDataObject(temp0);
    }
    else
    {
      op->vtkDataObjectMeshCache::SetOriginalDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_AddOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddOriginalIds(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectMeshCache::AddOriginalIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_RemoveOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveOriginalIds(temp0);
    }
    else
    {
      op->vtkDataObjectMeshCache::RemoveOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_ClearOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearOriginalIds();
    }
    else
    {
      op->vtkDataObjectMeshCache::ClearOriginalIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_CopyCacheToDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCacheToDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyCacheToDataObject(temp0);
    }
    else
    {
      op->vtkDataObjectMeshCache::CopyCacheToDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->UpdateCache(temp0);
    }
    else
    {
      op->vtkDataObjectMeshCache::UpdateCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_InvalidateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateCache();
    }
    else
    {
      op->vtkDataObjectMeshCache::InvalidateCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectMeshCache_IsSupportedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupportedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectMeshCache *op = static_cast<vtkDataObjectMeshCache *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupportedData(temp0) :
      op->vtkDataObjectMeshCache::IsSupportedData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectMeshCache_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectMeshCache_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectMeshCache_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectMeshCache_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectMeshCache\nC++: static vtkDataObjectMeshCache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectMeshCache_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectMeshCache\nC++: vtkDataObjectMeshCache *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectMeshCache_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectMeshCache_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConsumer", PyvtkDataObjectMeshCache_SetConsumer, METH_VARARGS,
   "SetConsumer(self, _arg:vtkAlgorithm) -> None\nC++: virtual void SetConsumer(vtkAlgorithm *_arg)\n\nSet the consumer of this cache. The status is invalid if the\nConsumer is modified after the last CopyCacheToDataObject call.\nRequired before any call to CopyCacheToDataObject.\n"},
  {"SetOriginalDataObject", PyvtkDataObjectMeshCache_SetOriginalDataObject, METH_VARARGS,
   "SetOriginalDataObject(self, original:vtkDataObject) -> None\nC++: void SetOriginalDataObject(vtkDataObject *original)\n\nSet\342\200\257the original dataobject. The status becomes invalid if the\noriginal dataobject mesh is modified. Original dataobject is also\nused to copy data arrays to output, if OriginalIds are\nconfigured. Required before any call to CopyCacheToDataObject.\n@sa AddOriginalIds, RemoveOriginalIds, ClearOriginalIds\n"},
  {"AddOriginalIds", PyvtkDataObjectMeshCache_AddOriginalIds, METH_VARARGS,
   "AddOriginalIds(self, attribute:int, name:str) -> None\nC++: void AddOriginalIds(int attribute, const std::string &name)\n\nAdd original ids array name for attribute type.\n@sa RemoveOriginalIds, ClearOriginalIds, CopyCacheToOutput\n"},
  {"RemoveOriginalIds", PyvtkDataObjectMeshCache_RemoveOriginalIds, METH_VARARGS,
   "RemoveOriginalIds(self, attribute:int) -> None\nC++: void RemoveOriginalIds(int attribute)\n\nRemove ids array name for attribute type.\n@sa AddOriginalIds, ClearOriginalIds, CopyCacheToOutput\n"},
  {"ClearOriginalIds", PyvtkDataObjectMeshCache_ClearOriginalIds, METH_VARARGS,
   "ClearOriginalIds(self) -> None\nC++: void ClearOriginalIds()\n\nClear all original ids.\n@sa RemoveOriginalIds, AddOriginalIds\n"},
  {"CopyCacheToDataObject", PyvtkDataObjectMeshCache_CopyCacheToDataObject, METH_VARARGS,
   "CopyCacheToDataObject(self, output:vtkDataObject) -> None\nC++: void CopyCacheToDataObject(vtkDataObject *output)\n\nFill given dataset with cached data. If original ids are present,\ncopy corresponding attributes. It is the user responsibility to\ncheck the status before calling this.\n"},
  {"UpdateCache", PyvtkDataObjectMeshCache_UpdateCache, METH_VARARGS,
   "UpdateCache(self, newObject:vtkDataObject) -> None\nC++: void UpdateCache(vtkDataObject *newObject)\n\nSet given dataset as the new Cache. Also update stored MTime from\nOriginalDataSet mesh and Consumer.\n"},
  {"InvalidateCache", PyvtkDataObjectMeshCache_InvalidateCache, METH_VARARGS,
   "InvalidateCache(self) -> None\nC++: void InvalidateCache()\n\nInvalidate cache. Remove cached dataset and reset cached MTimes.\n"},
  {"IsSupportedData", PyvtkDataObjectMeshCache_IsSupportedData, METH_VARARGS,
   "IsSupportedData(self, dataobject:vtkDataObject) -> bool\nC++: bool IsSupportedData(vtkDataObject *dataobject)\n\nReturn true if dataobject is of a supported type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDataObjectMeshCache_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("consumer"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataObjectMeshCache_SetConsumer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataObjectMeshCache_SetConsumer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetConsumer\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("original_data_object"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDataObjectMeshCache_SetOriginalDataObject(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDataObjectMeshCache_SetOriginalDataObject(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetOriginalDataObject\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDataObjectMeshCache_Doc =
  "vtkDataObjectMeshCache - vtkDataObjectMeshCache is a class to store\nand reuse the mesh of a vtkDataSet, while forwarding data arrays from\nanother dataset.\n\n"
  "Superclass: vtkObject\n\n"
  "Composite structure of vtkDataSet are also supported. This is\n"
  "specially useful when working with static meshes and transient data.\n\n"
  "## Example of use case Think about the vtkGeometryFilter. On first\n"
  "   execution, it extracts boundaries of an input mesh alongside with\n"
  "   the associated data. On the second execution, if the input mesh\n"
  "   didn't change and neither did the vtkGeometryFitlers own\n"
  "   properties, then there is no need for boundary extraction:\n"
  "   previous output mesh can be reused. Only the associated data\n"
  "   should be forwarded.\n\n"
  "Instead of implementing such logic itself, filter like the\n"
  "vtkGeometryFilter can instead rely on the vtkDataObjectMeshCache in\n"
  "order to easily reuse the previously computed mesh, and forward the\n"
  "new data arrays.\n\n"
  "## Details This helper relies on different elements:\n"
  "- `Consumer`: a vtkObject using the helper. Any modifications on it\n"
  "  invalidate cache.\n"
  "- `OriginalDataObject`: the input vtkDataObject. Should be either a\n"
  "  vtkDataSet or a composite of vtkDataSet.\342\200\257The helper looks for its\n"
  "MeshMTime.\n"
  "- `Cache`:\342\200\257the output vtkDataObject containing the mesh to reuse\n"
  "  (or a composite)\n"
  "- `OriginalIds`: a list of original ids array name per attribute\n"
  "  types, to forward from OriginalDataObject to Cache when asked to.\n\n"
  "The `Status` structure reflects the state of those different\n"
  "elements. It is the user responsibility to check for the status\n"
  "before calling `CopyCacheToDataObject`.\n\n"
  "Attributes data are forwarded with `CopyAllocate` method. So output\n"
  "should be a subset of the input. Support for `InterpolateAllocate` is\n"
  "doable and may be added in the future.\n\n"
  "##\342\200\257Requirements The data arrays forwarding rely on GlobalIds\n"
  "    arrays.\n\n"
  "When using vtkCompositeDataSet, every leaves should be of a supported\n"
  "data set type.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectMeshCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTemporal.vtkDataObjectMeshCache", // tp_name
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
  PyvtkDataObjectMeshCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectMeshCache_StaticNew()
{
  return vtkDataObjectMeshCache::New();
}

PyObject *PyvtkDataObjectMeshCache_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectMeshCache_Type, PyvtkDataObjectMeshCache_Methods,
    "vtkDataObjectMeshCache",
 &PyvtkDataObjectMeshCache_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDataObjectMeshCache_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectMeshCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectMeshCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectMeshCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

