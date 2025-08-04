// python wrapper for vtkHyperTreeGridFeatureEdges
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridFeatureEdges.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridFeatureEdges(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridFeatureEdges_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridFeatureEdges_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridFeatureEdges::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridFeatureEdges *op = static_cast<vtkHyperTreeGridFeatureEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridFeatureEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridFeatureEdges *tempr = vtkHyperTreeGridFeatureEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridFeatureEdges *op = static_cast<vtkHyperTreeGridFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridFeatureEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridFeatureEdges::NewInstance());

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
PyvtkHyperTreeGridFeatureEdges_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridFeatureEdges::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridFeatureEdges *op = static_cast<vtkHyperTreeGridFeatureEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridFeatureEdges::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridFeatureEdges *op = static_cast<vtkHyperTreeGridFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkHyperTreeGridFeatureEdges::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridFeatureEdges_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridFeatureEdges *op = static_cast<vtkHyperTreeGridFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkHyperTreeGridFeatureEdges::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridFeatureEdges_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridFeatureEdges_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridFeatureEdges_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridFeatureEdges_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridFeatureEdges\nC++: static vtkHyperTreeGridFeatureEdges *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridFeatureEdges_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridFeatureEdges\nC++: vtkHyperTreeGridFeatureEdges *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridFeatureEdges_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridFeatureEdges_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMergePoints", PyvtkHyperTreeGridFeatureEdges_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:bool) -> None\nC++: virtual void SetMergePoints(bool _arg)\n\nTurn on/off merging of coincident points using a locator. Note\nthat when merging is on, points with different point attributes\n(e.g., normals) are merged, which may cause rendering artifacts.\n"},
  {"GetMergePoints", PyvtkHyperTreeGridFeatureEdges_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> bool\nC++: virtual bool GetMergePoints()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridFeatureEdges_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("merge_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridFeatureEdges_GetMergePoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridFeatureEdges_SetMergePoints(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridFeatureEdges_SetMergePoints(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMergePoints/SetMergePoints\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridFeatureEdges_Doc =
  "vtkHyperTreeGridFeatureEdges - Generates feature edges from an Hyper\nTree Grid\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridFeatureEdges generates feature edges from an input\n"
  "vtkHyperTreeGrid. The nature of feature edges in the case of HTGs\n"
  "depends on the dimension of the HTG:\n"
  "- in 1D, it corresponds to the HTG geometry (HTG cells are already\n"
  "  edges),\n"
  "- in 2D, it corresponds to border edges (HTG cells are quads),\n"
  "- in 3D, it corresponds to edges describing an angle in the HTG\n"
  "  geometry (necessarily 90 degrees).\n\n"
  "Due to the nature of HTGs (T-Junctions), we cannot rely directly on\n"
  "the HTG geometry to construct feature edges. This filter iterates on\n"
  "the HTG to generate them on the fly.\n\n"
  "@sa\n"
  "vtkFeatureEdges vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n"
  "vtkHyperTreeGridGeometryFilter\n\n"
  "@par Thanks: This work was supported by Commissariat a l'Energie\n"
  "Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridFeatureEdges_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridFeatureEdges", // tp_name
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
  PyvtkHyperTreeGridFeatureEdges_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridFeatureEdges_StaticNew()
{
  return vtkHyperTreeGridFeatureEdges::New();
}

PyObject *PyvtkHyperTreeGridFeatureEdges_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridFeatureEdges_Type, PyvtkHyperTreeGridFeatureEdges_Methods,
    "vtkHyperTreeGridFeatureEdges",
 &PyvtkHyperTreeGridFeatureEdges_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridFeatureEdges_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridFeatureEdges(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridFeatureEdges_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridFeatureEdges", o) != 0)
  {
    Py_DECREF(o);
  }

}

