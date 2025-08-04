// python wrapper for vtkPConnectivityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPConnectivityFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPConnectivityFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPConnectivityFilter_ClassNew(); }


static PyObject *
PyvtkPConnectivityFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConnectivityFilter *op = static_cast<vtkPConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPConnectivityFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPConnectivityFilter *tempr = vtkPConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConnectivityFilter *op = static_cast<vtkPConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPConnectivityFilter::NewInstance());

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
PyvtkPConnectivityFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPConnectivityFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPConnectivityFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPConnectivityFilter *op = static_cast<vtkPConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPConnectivityFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkPConnectivityFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPConnectivityFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPConnectivityFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPConnectivityFilter\nC++: static vtkPConnectivityFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPConnectivityFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPConnectivityFilter\nC++: vtkPConnectivityFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPConnectivityFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPConnectivityFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPConnectivityFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPConnectivityFilter_Doc =
  "vtkPConnectivityFilter - Parallel version of vtkConnectivityFilter\n\n"
  "Superclass: vtkConnectivityFilter\n\n"
  "This class computes connectivity of a distributed data set in\n"
  "parallel.\n\n"
  "Problem =======\n\n"
  "Datasets are distributed among ranks in a distributed process (Figure\n"
  "1). vtkConnectivityFilter already runs in parallel on each piece in a\n"
  "typical VTK application run with MPI, but it does not produce correct\n"
  "results. As Figure 2 shows, distributed pieces of each connected\n"
  "component may end up with different labels.\n\n"
  "![Figure 1: Pieces in a distributed data set colored by processor\n"
  "rank.](vtkPConnectivityFilterFigure1.png)\n\n"
  "![Figure 2: Left). Incorrect parallel labeling. Right). Correct\n"
  "labeling.](vtkPConnectivityFilterFigure2.png)\n\n"
  "The part missing from a fully parallel connectivity filter\n"
  "implementation is the identification of which pieces on different\n"
  "ranks are actually connected. This parallel filter provides that\n"
  "missing piece.\n\n"
  "Approach ========\n\n"
  "Run vtkConnectivityFilter on each rank\342\200\231s piece and resolve the\n"
  "connected pieces afterwards. The implementation uses\n"
  "vtkMPIProcessController to communicate among processes.\n\n"
  "Steps in the vtkPConnectivityFilter\n"
  "-----------------------------------\n\n"
  "### High-level steps\n\n"
  "+ Run local connectivity algorithm.\n\n"
  "+ Identify region connections across ranks and create a graph of\n"
  "these links.\n\n"
  "+ Run a connected components algorithm on the graph created in the\n"
  "previous\n"
  "  step to unify the regions across ranks.\n\n"
  "+ Relabel cells and points with their \342\200\234global\342\200\235 RegionIds.\n\n"
  "### Low-level steps\n\n"
  "+ In GenerateData(), invoke the superclass\342\200\231s GenerateData() method.\n"
  "Make temporary changes to extract all connected regions - we\342\200\231ll\n"
  "handle the different extraction modes at the end. Example results on\n"
  "3 ranks are shown in Figure 3 where color indicates RegionId computed\n"
  "by vtkConnectivityFilter.\n\n"
  "+ Check for errors in superclass GenerateData() on any rank and exit\n"
  "the algorithm if any encountered an error-indicating return code.\n\n"
  "![Figure 3: Results after vtkConnectivityFilter superclass is called\n"
  "on each piece.](vtkPConnectivityFilterFigure3.png)\n\n"
  "+ AllGatherv the number of connected RegionIds from each rank and\n"
  "AllGatherv the RegionIds themselves.\n\n"
  "+ Gather all axis-aligned bounding boxes from all other ranks. This\n"
  "is used to compute potential neighbors with which each rank should\n"
  "exchange points and RegionIds.\n\n"
  "![Figure 4: Point and associated RegionId\n"
  "exchange.](vtkPConnectivityFilterFigure4.png)\n\n"
  "+ Each rank gathers up points potentially coincident with points on\n"
  "neighboring ranks and sends them to their neighbors as well as the\n"
  "RegionId assigned to each point.\n\n"
  "+ Each rank runs through the received points and determines which\n"
  "points it owns using a locator object. If a point is found on the\n"
  "local rank, add the RegionId from the remote point to a set\n"
  "associated with the local RegionId. This signifies that the local\n"
  "RegionId is connected to the remote RegionId associated with the\n"
  "point.\n\n"
  "+ Each rank gathers the local-RegionId-to-remote-RegionId links from\n"
  "all other ranks.\n\n"
  "+ From these links, each rank generates a graph structure of the\n"
  "global links. The graph structure is identical on all ranks.\n"
  "(Optimization opportunity: To reduce communication, this link\n"
  "exchange could be avoided and the graph could be made distributed.\n"
  "This is just more complicated to program, however).\n\n"
  "![Figure 5: Connected region graph depicted by black line\n"
  "segments.](vtkPConnectivityFilterFigure5.png)\n\n"
  "+ Run a connected components algorithm that relabels the RegionIds,\n"
  "yielding the full connectivity graph across ranks. Figure 6 shows an\n"
  "example result.\n\n"
  "+ Relabel the remaining RegionIds by a contiguous set of RegionIds\n"
  "(e.g., go from [0, 5, 8, 9] to [0, 1, 2, 3]).\n\n"
  "![Figure 6: Connected components of graph linking RegionIds across\n"
  "ranks.](vtkPConnectivityFilterFigure6.png)\n\n"
  "+ From the RegionId graph, relabel points and cells in the output.\n"
  "The result is shown in Figure 7.\n\n"
  "![Figure 7: Dataset relabeled with global connected\n"
  "RegionIds.](vtkPConnectivityFilterFigure7.png)\n\n"
  "+ Handle ScalarConnectivy option and ExtractionMode after full region\n"
  "connectivity is determined by identifying the correct RegionId and\n"
  "extracting it by thresholding.\n\n"
  "Caveats =======\n\n"
  "This parallel implementation does not support a number of features\n"
  "that the vtkConnectivityFilter class supports, including:\n\n"
  "- ScalarConnectivity\n"
  "- VTK_EXTRACT_POINT_SEEDED_REGIONS extraction mode\n"
  "- VTK_EXTRACT_CELL_SEEDED_REGIONS extraction mode\n"
  "- VTK_EXTRACT_SPECIFIED_REGIONS extraction mode\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallelGeometry.vtkPConnectivityFilter", // tp_name
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
  PyvtkPConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPConnectivityFilter_StaticNew()
{
  return vtkPConnectivityFilter::New();
}

PyObject *PyvtkPConnectivityFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPConnectivityFilter_Type, PyvtkPConnectivityFilter_Methods,
    "vtkPConnectivityFilter",
 &PyvtkPConnectivityFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkConnectivityFilter");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPConnectivityFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPConnectivityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

