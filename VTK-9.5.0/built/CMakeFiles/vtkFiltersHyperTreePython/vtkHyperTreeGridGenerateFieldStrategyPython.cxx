// python wrapper for vtkHyperTreeGridGenerateFieldStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkHyperTreeGridGenerateFieldStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridGenerateFieldStrategy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridGenerateFieldStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGenerateFieldStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridGenerateFieldStrategy *tempr = vtkHyperTreeGridGenerateFieldStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridGenerateFieldStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGenerateFieldStrategy::NewInstance());

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
PyvtkHyperTreeGridGenerateFieldStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridGenerateFieldStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridGenerateFieldStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFieldStrategy::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  vtkHyperTreeGridNonOrientedGeometryCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedGeometryCursor"))
  {
    if (ap.IsBound())
    {
      op->Compute(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFieldStrategy::Compute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_GetAndFinalizeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAndFinalizeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = op->GetAndFinalizeArray();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject::AttributeTypes tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkHyperTreeGridGenerateFieldStrategy::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkDataObject.AttributeTypes");
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  vtkDataObject::AttributeTypes temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDataObject.AttributeTypes"))
  {
    if (ap.IsBound())
    {
      op->SetArrayType(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFieldStrategy::SetArrayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkHyperTreeGridGenerateFieldStrategy::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFieldStrategy *op = static_cast<vtkHyperTreeGridGenerateFieldStrategy *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFieldStrategy::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridGenerateFieldStrategy_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridGenerateFieldStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridGenerateFieldStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridGenerateFieldStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridGenerateFieldStrategy\nC++: static vtkHyperTreeGridGenerateFieldStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridGenerateFieldStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridGenerateFieldStrategy\nC++: vtkHyperTreeGridGenerateFieldStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridGenerateFieldStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridGenerateFieldStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkHyperTreeGridGenerateFieldStrategy_Initialize, METH_VARARGS,
   "Initialize(self, __a:vtkHyperTreeGrid) -> None\nC++: virtual void Initialize(vtkHyperTreeGrid *)\n\nReimplement to initialize internal structures based on the given\ninput HTG. Only one of these methods should be reimplemented:\n- If the strategy creates a cell data array, use `Initialize`\n  with a void return type\n- If the strategy creates a field data array, use `Initialize`\n  with a bool return type\n"},
  {"Compute", PyvtkHyperTreeGridGenerateFieldStrategy_Compute, METH_VARARGS,
   "Compute(self, __a:vtkHyperTreeGridNonOrientedGeometryCursor)\n    -> None\nC++: virtual void Compute(\n    vtkHyperTreeGridNonOrientedGeometryCursor *)\n\nReimplement to compute the data for the current cell. Only one of\nthese methods should be reimplemented:\n- If the strategy creates a cell data array, use `Compute` with a\nsingle parameter\n- If the strategy creates a field data array, use `Compute` with\n  the extra parameters (they provide the result of the previously\ncomputed cell data).\n"},
  {"GetAndFinalizeArray", PyvtkHyperTreeGridGenerateFieldStrategy_GetAndFinalizeArray, METH_VARARGS,
   "GetAndFinalizeArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetAndFinalizeArray()\n\nReimplement to build the output array from internally stored\nvalues.\n"},
  {"GetArrayType", PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayType, METH_VARARGS,
   "GetArrayType(self) -> vtkDataObject.AttributeTypes\nC++: vtkDataObject::AttributeTypes GetArrayType()\n\nGet/Set type of the data array. Only CELL and FIELD are supported\nfor now. Default is CELL.\n"},
  {"SetArrayType", PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayType, METH_VARARGS,
   "SetArrayType(self, arrayType:vtkDataObject.AttributeTypes) -> None\nC++: void SetArrayType(vtkDataObject::AttributeTypes arrayType)\n\n"},
  {"GetArrayName", PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: std::string GetArrayName()\n\nGet/Set the name of the array containing the data. Default is\nempty.\n"},
  {"SetArrayName", PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayName, METH_VARARGS,
   "SetArrayName(self, arrayName:str) -> None\nC++: void SetArrayName(std::string arrayName)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridGenerateFieldStrategy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("array_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetArrayType/SetArrayType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFieldStrategy_GetArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFieldStrategy_SetArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetArrayName/SetArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("and_finalize_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFieldStrategy_GetAndFinalizeArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAndFinalizeArray\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridGenerateFieldStrategy_Doc =
  "vtkHyperTreeGridGenerateFieldStrategy - Abstract class for field\ndefinition used by vtkHyperTreeGridGenerateFields\n\n"
  "Superclass: vtkObject\n\n"
  "This is a class used by vtkHyperTreeGridGenerateFields to define the\n"
  "methods that need to be overridden in order to compute new fields for\n"
  "a HTG.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGenerateFieldStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridGenerateFieldStrategy", // tp_name
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
  PyvtkHyperTreeGridGenerateFieldStrategy_Doc, // tp_doc
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

PyObject *PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridGenerateFieldStrategy_Type, PyvtkHyperTreeGridGenerateFieldStrategy_Methods,
    "vtkHyperTreeGridGenerateFieldStrategy",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridGenerateFieldStrategy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridGenerateFieldStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridGenerateFieldStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

