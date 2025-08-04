// python wrapper for vtkHyperTreeGridCellSizeStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridCellSizeStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridCellSizeStrategy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridCellSizeStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew
#endif

static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridCellSizeStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridCellSizeStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridCellSizeStrategy *tempr = vtkHyperTreeGridCellSizeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridCellSizeStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridCellSizeStrategy::NewInstance());

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
PyvtkHyperTreeGridCellSizeStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridCellSizeStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridCellSizeStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

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
      op->vtkHyperTreeGridCellSizeStrategy::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

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
      op->vtkHyperTreeGridCellSizeStrategy::Compute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellSizeStrategy_GetAndFinalizeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAndFinalizeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellSizeStrategy *op = static_cast<vtkHyperTreeGridCellSizeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAndFinalizeArray() :
      op->vtkHyperTreeGridCellSizeStrategy::GetAndFinalizeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridCellSizeStrategy_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridCellSizeStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridCellSizeStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridCellSizeStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridCellSizeStrategy\nC++: static vtkHyperTreeGridCellSizeStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridCellSizeStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridCellSizeStrategy\nC++: vtkHyperTreeGridCellSizeStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridCellSizeStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridCellSizeStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkHyperTreeGridCellSizeStrategy_Initialize, METH_VARARGS,
   "Initialize(self, inputHTG:vtkHyperTreeGrid) -> None\nC++: void Initialize(vtkHyperTreeGrid *inputHTG) override;\n\nInit internal variables from `inputHTG`.\n"},
  {"Compute", PyvtkHyperTreeGridCellSizeStrategy_Compute, METH_VARARGS,
   "Compute(self, cursor:vtkHyperTreeGridNonOrientedGeometryCursor)\n    -> None\nC++: void Compute(\n    vtkHyperTreeGridNonOrientedGeometryCursor *cursor) override;\n\nRecord the depth of the cell pointed by the cursor in an internal\nstructure. While we have less different size values than an\nunsigned char can hold, use an index implicit array to save\nmemory. In extreme cases where we cannot (eg. too many levels or\ncustom scales), use a traditional VTK double array. This method\ndoes not guarantee thread-safety.\n"},
  {"GetAndFinalizeArray", PyvtkHyperTreeGridCellSizeStrategy_GetAndFinalizeArray, METH_VARARGS,
   "GetAndFinalizeArray(self) -> vtkDataArray\nC++: vtkDataArray *GetAndFinalizeArray() override;\n\nIf `UseIndexedVolume` is true, build and return the output as an\nimplicit indexed array. Otherwise, return the output as a VTK\ndouble array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridCellSizeStrategy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("and_finalize_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridCellSizeStrategy_GetAndFinalizeArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAndFinalizeArray\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridCellSizeStrategy_Doc =
  "vtkHyperTreeGridCellSizeStrategy - Define the CellSize field used in\nvtkHyperTreeGridGenerateFields\n\n"
  "Superclass: vtkHyperTreeGridGenerateFieldStrategy\n\n"
  "This is a class used by vtkHyperTreeGridGenerateFields to add and\n"
  "compute the CellSize field.\n\n"
  "This field is set to the size (volume) of the cell for 3D HTGs,\n"
  "depending on its depth level. This field has a value for every cell\n"
  "traversed through the cursor, valid or not. By extension, CellSize is\n"
  "set to the cell area for 2D HTG and cell length for 1D. In practice,\n"
  "we ignore null size coordinates when computing the value. This field\n"
  "is implemented as an implicit array, in order to lower the memory\n"
  "footprint of the filter.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridCellSizeStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridCellSizeStrategy", // tp_name
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
  PyvtkHyperTreeGridCellSizeStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridCellSizeStrategy_StaticNew()
{
  return vtkHyperTreeGridCellSizeStrategy::New();
}

PyObject *PyvtkHyperTreeGridCellSizeStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridCellSizeStrategy_Type, PyvtkHyperTreeGridCellSizeStrategy_Methods,
    "vtkHyperTreeGridCellSizeStrategy",
 &PyvtkHyperTreeGridCellSizeStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridGenerateFieldStrategy_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridCellSizeStrategy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridCellSizeStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridCellSizeStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridCellSizeStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

