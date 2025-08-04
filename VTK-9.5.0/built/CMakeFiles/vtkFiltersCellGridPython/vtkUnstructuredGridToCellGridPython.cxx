// python wrapper for vtkUnstructuredGridToCellGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkUnstructuredGridToCellGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkUnstructuredGridToCellGrid(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkUnstructuredGridToCellGrid_ClassNew(); }


static PyObject *
PyvtkUnstructuredGridToCellGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridToCellGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToCellGrid *op = static_cast<vtkUnstructuredGridToCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridToCellGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridToCellGrid *tempr = vtkUnstructuredGridToCellGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToCellGrid *op = static_cast<vtkUnstructuredGridToCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridToCellGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridToCellGrid::NewInstance());

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
PyvtkUnstructuredGridToCellGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridToCellGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToCellGrid *op = static_cast<vtkUnstructuredGridToCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridToCellGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToCellGrid *op = static_cast<vtkUnstructuredGridToCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkUnstructuredGridToCellGrid::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToCellGrid_AddPreferredOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPreferredOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToCellGrid *op = static_cast<vtkUnstructuredGridToCellGrid *>(vp);

  int temp0;
  vtkStringToken *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkStringToken") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddPreferredOutputType(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridToCellGrid::AddPreferredOutputType(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkUnstructuredGridToCellGrid_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridToCellGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridToCellGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridToCellGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUnstructuredGridToCellGrid\nC++: static vtkUnstructuredGridToCellGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridToCellGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridToCellGrid\nC++: vtkUnstructuredGridToCellGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridToCellGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridToCellGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reset", PyvtkUnstructuredGridToCellGrid_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\n"},
  {"AddPreferredOutputType", PyvtkUnstructuredGridToCellGrid_AddPreferredOutputType, METH_VARARGS,
   "AddPreferredOutputType(self, inputCellType:int,\n    preferredOutputType:vtkStringToken, priority:int) -> None\nC++: virtual void AddPreferredOutputType(int inputCellType,\n    vtkStringToken preferredOutputType, int priority)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkUnstructuredGridToCellGrid_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkUnstructuredGridToCellGrid_Doc =
  "vtkUnstructuredGridToCellGrid - Create a cell-grid that approximates\na collection of vtkUnstructuredGrids.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "This filter takes a partitioned dataset collection (or a single\n"
  "unstructured grid) as input, iterates each block's cells to find the\n"
  "shapes and orders of cells present; then it creates empty\n"
  "vtkCellGrids and runs its internal TranscribeQuery to construct cells\n"
  "and cell-attributes to match each input unstructured-grid.\n\n"
  "Note that this filter assumes all the cells of the same shape in the\n"
  "vtkUnstructuredGrid are of the same order. This matches assumptions\n"
  "in the IOSS reader but may not be true of arbitrary unstructured\n"
  "grids.\n\n"
  "## Design notes\n\n"
  "Even though this filter is named as though it processes a single\n"
  "unstructured grid at a time, it is multiblock aware (and indeed,\n"
  "always outputs a partitioned dataset collection). This was done in\n"
  "order to properly handle IOSS data, which includes metadata on the\n"
  "parent composite dataset that is relevant to conversions of\n"
  "individual child objects it contains.\n\n"
  "There is no reason \342\200\223 apart from the development time required \342\200\223\n"
  "that this filter couldn't accept any vtkDataSet as input (rather than\n"
  "just unstructured grids). However, without some analogs to structured\n"
  "dataset types, this would generally perform poorly. A set of spline\n"
  "cells would make representing many structured datasets\n"
  "space-efficient and amenable to smoothing/simplification.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridToCellGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkUnstructuredGridToCellGrid", // tp_name
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
  PyvtkUnstructuredGridToCellGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridToCellGrid_StaticNew()
{
  return vtkUnstructuredGridToCellGrid::New();
}

PyObject *PyvtkUnstructuredGridToCellGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridToCellGrid_Type, PyvtkUnstructuredGridToCellGrid_Methods,
    "vtkUnstructuredGridToCellGrid",
 &PyvtkUnstructuredGridToCellGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkUnstructuredGridToCellGrid_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridToCellGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridToCellGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridToCellGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

