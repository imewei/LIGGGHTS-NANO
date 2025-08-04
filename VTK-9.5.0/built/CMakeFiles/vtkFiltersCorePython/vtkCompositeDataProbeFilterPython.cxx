// python wrapper for vtkCompositeDataProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositeDataProbeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCompositeDataProbeFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCompositeDataProbeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkProbeFilter_ClassNew
extern "C" { PyObject *PyvtkProbeFilter_ClassNew(); }
#define DECLARED_PyvtkProbeFilter_ClassNew
#endif

static PyObject *
PyvtkCompositeDataProbeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataProbeFilter *tempr = vtkCompositeDataProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataProbeFilter::NewInstance());

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
PyvtkCompositeDataProbeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeDataProbeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeDataProbeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_SetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPartialArrays(temp0);
    }
    else
    {
      op->vtkCompositeDataProbeFilter::SetPassPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_GetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPartialArrays() :
      op->vtkCompositeDataProbeFilter::GetPassPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOn();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOff();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_SetUseImplicitArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseImplicitArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseImplicitArrays(temp0);
    }
    else
    {
      op->vtkCompositeDataProbeFilter::SetUseImplicitArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_GetUseImplicitArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseImplicitArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseImplicitArrays() :
      op->vtkCompositeDataProbeFilter::GetUseImplicitArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_UseImplicitArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImplicitArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseImplicitArraysOn();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::UseImplicitArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_UseImplicitArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImplicitArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseImplicitArraysOff();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::UseImplicitArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataProbeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataProbeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataProbeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositeDataProbeFilter\nC++: static vtkCompositeDataProbeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataProbeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeDataProbeFilter\nC++: vtkCompositeDataProbeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeDataProbeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeDataProbeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassPartialArrays", PyvtkCompositeDataProbeFilter_SetPassPartialArrays, METH_VARARGS,
   "SetPassPartialArrays(self, _arg:bool) -> None\nC++: virtual void SetPassPartialArrays(bool _arg)\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {"GetPassPartialArrays", PyvtkCompositeDataProbeFilter_GetPassPartialArrays, METH_VARARGS,
   "GetPassPartialArrays(self) -> bool\nC++: virtual bool GetPassPartialArrays()\n\n"},
  {"PassPartialArraysOn", PyvtkCompositeDataProbeFilter_PassPartialArraysOn, METH_VARARGS,
   "PassPartialArraysOn(self) -> None\nC++: virtual void PassPartialArraysOn()\n\n"},
  {"PassPartialArraysOff", PyvtkCompositeDataProbeFilter_PassPartialArraysOff, METH_VARARGS,
   "PassPartialArraysOff(self) -> None\nC++: virtual void PassPartialArraysOff()\n\n"},
  {"SetUseImplicitArrays", PyvtkCompositeDataProbeFilter_SetUseImplicitArrays, METH_VARARGS,
   "SetUseImplicitArrays(self, _arg:bool) -> None\nC++: virtual void SetUseImplicitArrays(bool _arg)\n\nGet/Set whether or not the filter should use implicit arrays. If\nset to true, probed values will not be copied to the output but\nretrieved from the source through indexation (thanks to indexed\narrays). This can lower the memory consumption, especially if the\nprobed source contains a lot of data arrays. Note that it will\nalso increase the computation time. Default is false.\n\n@attention This option only concern Hyper Tree Grids for now.\nThis option has no effect for source or blocks (in the case of a\ncomposite input) that are not vtkHyperTreeGrid instances.\n"},
  {"GetUseImplicitArrays", PyvtkCompositeDataProbeFilter_GetUseImplicitArrays, METH_VARARGS,
   "GetUseImplicitArrays(self) -> bool\nC++: virtual bool GetUseImplicitArrays()\n\n"},
  {"UseImplicitArraysOn", PyvtkCompositeDataProbeFilter_UseImplicitArraysOn, METH_VARARGS,
   "UseImplicitArraysOn(self) -> None\nC++: virtual void UseImplicitArraysOn()\n\n"},
  {"UseImplicitArraysOff", PyvtkCompositeDataProbeFilter_UseImplicitArraysOff, METH_VARARGS,
   "UseImplicitArraysOff(self) -> None\nC++: virtual void UseImplicitArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCompositeDataProbeFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("pass_partial_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeDataProbeFilter_GetPassPartialArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeDataProbeFilter_SetPassPartialArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeDataProbeFilter_SetPassPartialArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPassPartialArrays/SetPassPartialArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_implicit_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCompositeDataProbeFilter_GetUseImplicitArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCompositeDataProbeFilter_SetUseImplicitArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCompositeDataProbeFilter_SetUseImplicitArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseImplicitArrays/SetUseImplicitArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCompositeDataProbeFilter_Doc =
  "vtkCompositeDataProbeFilter - subclass of vtkProbeFilter which\nsupports composite datasets in the input.\n\n"
  "Superclass: vtkProbeFilter\n\n"
  "vtkCompositeDataProbeFilter supports probing into multi-group\n"
  "datasets. It sequentially probes through each concrete dataset within\n"
  "the composite probing at only those locations at which there were no\n"
  "hits when probing earlier datasets. For Hierarchical datasets, this\n"
  "traversal through leaf datasets is done in reverse order of levels\n"
  "i.e. highest level first. To keep the ability of using locators with\n"
  "a composite input, we use a map that maps a dataset belonging to the\n"
  "composite input to its FindCell strategy.\n\n"
  "When dealing with composite datasets, partial arrays are common i.e.\n"
  "data-arrays that are not available in all of the blocks. By default,\n"
  "this filter only passes those point and cell data-arrays that are\n"
  "available in all the blocks i.e. partial array are removed. When\n"
  "PassPartialArrays is turned on, this behavior is changed to take a\n"
  "union of all arrays present thus partial arrays are passed as well.\n"
  "However, for composite dataset input, this filter still produces a\n"
  "non-composite output. For all those locations in a block of where a\n"
  "particular data array is missing, this filter uses vtkMath::Nan() for\n"
  "double and float arrays, while 0 for all other types of arrays i.e\n"
  "int, char etc.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeDataProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkCompositeDataProbeFilter", // tp_name
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
  PyvtkCompositeDataProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataProbeFilter_StaticNew()
{
  return vtkCompositeDataProbeFilter::New();
}

PyObject *PyvtkCompositeDataProbeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeDataProbeFilter_Type, PyvtkCompositeDataProbeFilter_Methods,
    "vtkCompositeDataProbeFilter",
 &PyvtkCompositeDataProbeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProbeFilter_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCompositeDataProbeFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

