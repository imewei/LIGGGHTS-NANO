// python wrapper for vtkHyperTreeGridTotalVisibleVolumeStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridTotalVisibleVolumeStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridTotalVisibleVolumeStrategy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridTotalVisibleVolumeStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew
#endif

static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridTotalVisibleVolumeStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridTotalVisibleVolumeStrategy *tempr = vtkHyperTreeGridTotalVisibleVolumeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridTotalVisibleVolumeStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::NewInstance());

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
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridTotalVisibleVolumeStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetAndFinalizeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAndFinalizeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAndFinalizeArray() :
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::GetAndFinalizeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

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
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridTotalVisibleVolumeStrategy *op = static_cast<vtkHyperTreeGridTotalVisibleVolumeStrategy *>(vp);

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
      op->vtkHyperTreeGridTotalVisibleVolumeStrategy::Compute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridTotalVisibleVolumeStrategy\nC++: static vtkHyperTreeGridTotalVisibleVolumeStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridTotalVisibleVolumeStrategy\nC++: vtkHyperTreeGridTotalVisibleVolumeStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAndFinalizeArray", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetAndFinalizeArray, METH_VARARGS,
   "GetAndFinalizeArray(self) -> vtkDataArray\nC++: vtkDataArray *GetAndFinalizeArray() override;\n\nSet a unique tuple of `TotalVisibleVolumeArray` to\n`TotalVisibleVolume` and return the array.\n"},
  {"Initialize", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Initialize, METH_VARARGS,
   "Initialize(self, __a:vtkHyperTreeGrid) -> None\nC++: virtual void Initialize(vtkHyperTreeGrid *)\n\nReimplement to initialize internal structures based on the given\ninput HTG. Only one of these methods should be reimplemented:\n- If the strategy creates a cell data array, use `Initialize`\n  with a void return type\n- If the strategy creates a field data array, use `Initialize`\n  with a bool return type\n"},
  {"Compute", PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Compute, METH_VARARGS,
   "Compute(self, __a:vtkHyperTreeGridNonOrientedGeometryCursor)\n    -> None\nC++: virtual void Compute(\n    vtkHyperTreeGridNonOrientedGeometryCursor *)\n\nReimplement to compute the data for the current cell. Only one of\nthese methods should be reimplemented:\n- If the strategy creates a cell data array, use `Compute` with a\nsingle parameter\n- If the strategy creates a field data array, use `Compute` with\n  the extra parameters (they provide the result of the previously\ncomputed cell data).\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("and_finalize_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetAndFinalizeArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAndFinalizeArray\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Doc =
  "vtkHyperTreeGridTotalVisibleVolumeStrategy - Define the\nTotalVisibleVolume field data used in vtkHyperTreeGridGenerateFields\n\n"
  "Superclass: vtkHyperTreeGridGenerateFieldStrategy\n\n"
  "This is a class used by vtkHyperTreeGridGenerateFields to add and\n"
  "compute the TotalVisibleVolume field data, based on the previously\n"
  "computed cell data ValidCell and CellSize.\n\n"
  "This field contains the total value of the visible cells volumes.\n"
  "Whether a cell is visible is retrieved from the ValidCell cell data\n"
  "array, and its volume from CellSize.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridTotalVisibleVolumeStrategy", // tp_name
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
  PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridTotalVisibleVolumeStrategy_StaticNew()
{
  return vtkHyperTreeGridTotalVisibleVolumeStrategy::New();
}

PyObject *PyvtkHyperTreeGridTotalVisibleVolumeStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Type, PyvtkHyperTreeGridTotalVisibleVolumeStrategy_Methods,
    "vtkHyperTreeGridTotalVisibleVolumeStrategy",
 &PyvtkHyperTreeGridTotalVisibleVolumeStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridTotalVisibleVolumeStrategy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridTotalVisibleVolumeStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridTotalVisibleVolumeStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridTotalVisibleVolumeStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

