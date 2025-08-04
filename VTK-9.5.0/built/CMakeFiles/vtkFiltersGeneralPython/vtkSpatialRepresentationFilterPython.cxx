// python wrapper for vtkSpatialRepresentationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpatialRepresentationFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSpatialRepresentationFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSpatialRepresentationFilter_ClassNew(); }


static PyObject *
PyvtkSpatialRepresentationFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpatialRepresentationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpatialRepresentationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpatialRepresentationFilter *tempr = vtkSpatialRepresentationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpatialRepresentationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpatialRepresentationFilter::NewInstance());

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
PyvtkSpatialRepresentationFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpatialRepresentationFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpatialRepresentationFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLocator"))
  {
    if (ap.IsBound())
    {
      op->SetSpatialRepresentation(temp0);
    }
    else
    {
      op->vtkSpatialRepresentationFilter::SetSpatialRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLocator *tempr = (ap.IsBound() ?
      op->GetSpatialRepresentation() :
      op->vtkSpatialRepresentationFilter::GetSpatialRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkSpatialRepresentationFilter::GetMaximumLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_AddLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddLevel(temp0);
    }
    else
    {
      op->vtkSpatialRepresentationFilter::AddLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_ResetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetLevels();
    }
    else
    {
      op->vtkSpatialRepresentationFilter::ResetLevels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetGenerateLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateLeaves(temp0);
    }
    else
    {
      op->vtkSpatialRepresentationFilter::SetGenerateLeaves(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetGenerateLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateLeaves() :
      op->vtkSpatialRepresentationFilter::GetGenerateLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GenerateLeavesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLeavesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateLeavesOn();
    }
    else
    {
      op->vtkSpatialRepresentationFilter::GenerateLeavesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GenerateLeavesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLeavesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateLeavesOff();
    }
    else
    {
      op->vtkSpatialRepresentationFilter::GenerateLeavesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpatialRepresentationFilter_Methods[] = {
  {"IsTypeOf", PyvtkSpatialRepresentationFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpatialRepresentationFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpatialRepresentationFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpatialRepresentationFilter\nC++: static vtkSpatialRepresentationFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpatialRepresentationFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpatialRepresentationFilter\nC++: vtkSpatialRepresentationFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpatialRepresentationFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpatialRepresentationFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSpatialRepresentation", PyvtkSpatialRepresentationFilter_SetSpatialRepresentation, METH_VARARGS,
   "SetSpatialRepresentation(self, __a:vtkLocator) -> None\nC++: virtual void SetSpatialRepresentation(vtkLocator *)\n\nSet/Get the locator that will be used to generate the\nrepresentation.\n"},
  {"GetSpatialRepresentation", PyvtkSpatialRepresentationFilter_GetSpatialRepresentation, METH_VARARGS,
   "GetSpatialRepresentation(self) -> vtkLocator\nC++: virtual vtkLocator *GetSpatialRepresentation()\n\n"},
  {"GetMaximumLevel", PyvtkSpatialRepresentationFilter_GetMaximumLevel, METH_VARARGS,
   "GetMaximumLevel(self) -> int\nC++: virtual int GetMaximumLevel()\n\nGet the maximum level that is available. Populated during\nRequestData().\n"},
  {"AddLevel", PyvtkSpatialRepresentationFilter_AddLevel, METH_VARARGS,
   "AddLevel(self, level:int) -> None\nC++: void AddLevel(int level)\n\nAdd a level to be computed.\n"},
  {"ResetLevels", PyvtkSpatialRepresentationFilter_ResetLevels, METH_VARARGS,
   "ResetLevels(self) -> None\nC++: void ResetLevels()\n\nRemove all levels.\n"},
  {"SetGenerateLeaves", PyvtkSpatialRepresentationFilter_SetGenerateLeaves, METH_VARARGS,
   "SetGenerateLeaves(self, _arg:bool) -> None\nC++: virtual void SetGenerateLeaves(bool _arg)\n\nTurn on/off the generation of leaf nodes. Off by default.\n"},
  {"GetGenerateLeaves", PyvtkSpatialRepresentationFilter_GetGenerateLeaves, METH_VARARGS,
   "GetGenerateLeaves(self) -> bool\nC++: virtual bool GetGenerateLeaves()\n\n"},
  {"GenerateLeavesOn", PyvtkSpatialRepresentationFilter_GenerateLeavesOn, METH_VARARGS,
   "GenerateLeavesOn(self) -> None\nC++: virtual void GenerateLeavesOn()\n\n"},
  {"GenerateLeavesOff", PyvtkSpatialRepresentationFilter_GenerateLeavesOff, METH_VARARGS,
   "GenerateLeavesOff(self) -> None\nC++: virtual void GenerateLeavesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSpatialRepresentationFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("spatial_representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpatialRepresentationFilter_GetSpatialRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSpatialRepresentationFilter_SetSpatialRepresentation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSpatialRepresentationFilter_SetSpatialRepresentation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSpatialRepresentation/SetSpatialRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("generate_leaves"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpatialRepresentationFilter_GetGenerateLeaves(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSpatialRepresentationFilter_SetGenerateLeaves(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSpatialRepresentationFilter_SetGenerateLeaves(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGenerateLeaves/SetGenerateLeaves\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_level"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpatialRepresentationFilter_GetMaximumLevel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMaximumLevel\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSpatialRepresentationFilter_Doc =
  "vtkSpatialRepresentationFilter - generate polygonal model of spatial\nsearch object (i.e., a vtkLocator)\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkSpatialRepresentationFilter generates an polygonal representation\n"
  "of a spatial search (vtkLocator) object. The representation varies\n"
  "depending upon the nature of the spatial search object. For example,\n"
  "the representation for vtkOBBTree is a collection of oriented\n"
  "bounding boxes. This input to this filter is a dataset of any type,\n"
  "and the output is polygonal data. You must also specify the spatial\n"
  "search object to use.\n\n"
  "Generally spatial search objects are used for collision detection and\n"
  "other geometric operations, but in this filter one or more levels of\n"
  "spatial searchers can be generated to form a geometric approximation\n"
  "to the input data. This is a form of data simplification, generally\n"
  "used to accelerate the rendering process. Or, this filter can be used\n"
  "as a debugging/ visualization aid for spatial search objects.\n\n"
  "This filter can generate one or more  vtkPolyData blocks\n"
  "corresponding to different levels in the spatial search tree. The\n"
  "block ids range from 0 (root level) to MaximumLevel. Note that the\n"
  "block for level \"id\" is not computed unless a AddLevel(id) method is\n"
  "issued. Thus, if you desire three levels of output (say 2,4,7), you\n"
  "would have to invoke AddLevel(2), AddLevel(4), and AddLevel(7). If\n"
  "GenerateLeaves is set to true (off by default), all leaf nodes of the\n"
  "locator (which may be at different levels) are computed and stored in\n"
  "block with id MaximumLevel + 1.\n\n"
  "@sa\n"
  "vtkLocator vtkPointLocator vtkCellLocator vtkOBBTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpatialRepresentationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSpatialRepresentationFilter", // tp_name
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
  PyvtkSpatialRepresentationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpatialRepresentationFilter_StaticNew()
{
  return vtkSpatialRepresentationFilter::New();
}

PyObject *PyvtkSpatialRepresentationFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpatialRepresentationFilter_Type, PyvtkSpatialRepresentationFilter_Methods,
    "vtkSpatialRepresentationFilter",
 &PyvtkSpatialRepresentationFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSpatialRepresentationFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpatialRepresentationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpatialRepresentationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpatialRepresentationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

