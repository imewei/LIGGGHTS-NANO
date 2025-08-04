// python wrapper for vtkPDistributedDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPDistributedDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPDistributedDataFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPDistributedDataFilter_ClassNew(); }


static PyObject *
PyvtkPDistributedDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPDistributedDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDistributedDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDistributedDataFilter *op = static_cast<vtkPDistributedDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDistributedDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDistributedDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPDistributedDataFilter *tempr = vtkPDistributedDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDistributedDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDistributedDataFilter *op = static_cast<vtkPDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPDistributedDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDistributedDataFilter::NewInstance());

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
PyvtkPDistributedDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPDistributedDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDistributedDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDistributedDataFilter *op = static_cast<vtkPDistributedDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPDistributedDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPDistributedDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkPDistributedDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPDistributedDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPDistributedDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPDistributedDataFilter\nC++: static vtkPDistributedDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPDistributedDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPDistributedDataFilter\nC++: vtkPDistributedDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPDistributedDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPDistributedDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPDistributedDataFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPDistributedDataFilter_Doc =
  "vtkPDistributedDataFilter - Distribute data among processors\n\n"
  "Superclass: vtkDistributedDataFilter\n\n"
  "This filter redistributes data among processors in a parallel\n"
  "application into spatially contiguous vtkUnstructuredGrids. The\n"
  "execution model anticipated is that all processes read in part of a\n"
  "large vtkDataSet. Each process sets the input of filter to be that\n"
  "DataSet. When executed, this filter builds in parallel a k-d tree,\n"
  "decomposing the space occupied by the distributed DataSet into\n"
  "spatial regions.  It assigns each spatial region to a processor.  The\n"
  "data is then redistributed and the output is a single\n"
  "vtkUnstructuredGrid containing the cells in the process' assigned\n"
  "regions.\n\n"
  "This filter is sometimes called \"D3\" for \"distributed data\n"
  "decomposition\".\n\n"
  "Enhancement: You can set the k-d tree decomposition, rather than have\n"
  "D3 compute it.  This allows you to divide a dataset using the\n"
  "decomposition computed for another dataset.  Obtain a description of\n"
  "the k-d tree cuts this way:\n\n"
  "{cpp}\n"
  "   vtkBSPCuts *cuts = D3Object1->GetCuts()\n\n"
  "And set it this way:\n\n"
  "{cpp}\n"
  "    D3Object2->SetCuts(cuts)\n\n"
  "It is desirable to have a field array of global node IDs for two\n"
  "reasons:\n\n"
  "1. When merging together sub grids that were distributed across\n"
  "   processors, global node IDs can be used to remove duplicate points\n"
  "and significantly reduce the size of the resulting output grid.  If\n"
  "   no such array is available, D3 will use a tolerance to merge\n"
  "   points, which is much slower.\n\n"
  "2. If ghost cells have been requested, D3 requires a global node ID\n"
  "   array in order to request and transfer ghost cells in parallel\n"
  "   among the processors.  If there is no global node ID array, D3\n"
  "   will in parallel create a global node ID array, and the time to do\n"
  "this can be significant.\n\n"
  "D3 uses `vtkPointData::GetGlobalIds` to access global node ids from\n"
  "the input. If none is found, and ghost cells have been requested, D3\n"
  "will create a temporary global node ID array before acquiring ghost\n"
  "cells.\n\n"
  "It is also desirable to have global element IDs\n"
  "(vtkCellData::GetGlobalIds). However, if they don't exist D3 can\n"
  "create them relatively quickly.\n\n"
  "@warning\n"
  "The Execute() method must be called by all processes in the parallel\n"
  "application, or it will hang.  If you are not certain that your\n"
  "pipeline will execute identically on all processors, you may want to\n"
  "use this filter in an explicit execution mode.\n\n"
  "@sa\n"
  "vtkKdTree vtkPKdTree vtkBSPCuts\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPDistributedDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallelGeometry.vtkPDistributedDataFilter", // tp_name
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
  PyvtkPDistributedDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPDistributedDataFilter_StaticNew()
{
  return vtkPDistributedDataFilter::New();
}

PyObject *PyvtkPDistributedDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPDistributedDataFilter_Type, PyvtkPDistributedDataFilter_Methods,
    "vtkPDistributedDataFilter",
 &PyvtkPDistributedDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDistributedDataFilter");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPDistributedDataFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPDistributedDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPDistributedDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPDistributedDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

