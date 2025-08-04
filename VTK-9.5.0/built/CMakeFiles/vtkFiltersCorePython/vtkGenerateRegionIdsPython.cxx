// python wrapper for vtkGenerateRegionIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenerateRegionIds.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGenerateRegionIds(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGenerateRegionIds_ClassNew(); }


static PyObject *
PyvtkGenerateRegionIds_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateRegionIds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateRegionIds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateRegionIds *tempr = vtkGenerateRegionIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateRegionIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateRegionIds::NewInstance());

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
PyvtkGenerateRegionIds_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenerateRegionIds::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenerateRegionIds::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_SetMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxAngle(temp0);
    }
    else
    {
      op->vtkGenerateRegionIds::SetMaxAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_GetMaxAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxAngleMinValue() :
      op->vtkGenerateRegionIds::GetMaxAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_GetMaxAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxAngleMaxValue() :
      op->vtkGenerateRegionIds::GetMaxAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_GetMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxAngle() :
      op->vtkGenerateRegionIds::GetMaxAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_SetRegionIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegionIdsArrayName(temp0);
    }
    else
    {
      op->vtkGenerateRegionIds::SetRegionIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateRegionIds_GetRegionIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateRegionIds *op = static_cast<vtkGenerateRegionIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRegionIdsArrayName() :
      op->vtkGenerateRegionIds::GetRegionIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateRegionIds_Methods[] = {
  {"IsTypeOf", PyvtkGenerateRegionIds_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateRegionIds_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateRegionIds_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenerateRegionIds\nC++: static vtkGenerateRegionIds *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateRegionIds_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenerateRegionIds\nC++: vtkGenerateRegionIds *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenerateRegionIds_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenerateRegionIds_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaxAngle", PyvtkGenerateRegionIds_SetMaxAngle, METH_VARARGS,
   "SetMaxAngle(self, _arg:float) -> None\nC++: virtual void SetMaxAngle(double _arg)\n\nSet / Get the threshold angle (in degree) for region detection.\nGiven 2 edge-connected cells, they are considered on the same\nregion if the angle between their normals is lower or equal to\nthis value.\n\nDefault is 30 degrees.\n"},
  {"GetMaxAngleMinValue", PyvtkGenerateRegionIds_GetMaxAngleMinValue, METH_VARARGS,
   "GetMaxAngleMinValue(self) -> float\nC++: virtual double GetMaxAngleMinValue()\n\n"},
  {"GetMaxAngleMaxValue", PyvtkGenerateRegionIds_GetMaxAngleMaxValue, METH_VARARGS,
   "GetMaxAngleMaxValue(self) -> float\nC++: virtual double GetMaxAngleMaxValue()\n\n"},
  {"GetMaxAngle", PyvtkGenerateRegionIds_GetMaxAngle, METH_VARARGS,
   "GetMaxAngle(self) -> float\nC++: virtual double GetMaxAngle()\n\n"},
  {"SetRegionIdsArrayName", PyvtkGenerateRegionIds_SetRegionIdsArrayName, METH_VARARGS,
   "SetRegionIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetRegionIdsArrayName(std::string _arg)\n\nSet / Get the region Ids array name. Default is vtkRegionIds.\n"},
  {"GetRegionIdsArrayName", PyvtkGenerateRegionIds_GetRegionIdsArrayName, METH_VARARGS,
   "GetRegionIdsArrayName(self) -> str\nC++: virtual std::string GetRegionIdsArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGenerateRegionIds_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("max_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateRegionIds_GetMaxAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateRegionIds_SetMaxAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateRegionIds_SetMaxAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaxAngle/SetMaxAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("region_ids_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateRegionIds_GetRegionIdsArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateRegionIds_SetRegionIdsArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateRegionIds_SetRegionIdsArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRegionIdsArrayName/SetRegionIdsArrayName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGenerateRegionIds_Doc =
  "vtkGenerateRegionIds - Generate cell array containing the region id.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGenerateRegionIds parse the input 2D mesh to compute regions\n"
  "information. It generates a cell array containing the region id the\n"
  "cell belongs to. In that, it has some similiraty with\n"
  "vtkConnectivityFilter.\n\n"
  "A region is defined as a collection of connected 2D cells with a\n"
  "maximal angle between their normals. Two cells are connected if they\n"
  "share at least one point.\n\n"
  "The algorithm is similar to vtkFeatureEdges: For a pair of\n"
  "neighboring cells, it computes their relative angle and compare it to\n"
  "a threshold (vtkFeatureEdges::FeatureAngle or\n"
  "vtkGenerateRegionIds::MaxAngle). Then vtkGenerateRegionIds uses a\n"
  "\"below\" criteria to assign the same Id in a Cell Array, while\n"
  "vtkFeatureEdges uses an \"above\" criteria to generate edges and a new\n"
  "polydata.\n\n"
  "You can also see a Region as a Surface delimited by Feature Edges.\n\n"
  "ote: vtkGenerateRegionIds requires cell Normals in order to work. If\n"
  "not provided, the Normals array will be computed and added to the\n"
  "dataset.\n\n"
  "@see vtkFeatureEdges, vtkConnectivityFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenerateRegionIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkGenerateRegionIds", // tp_name
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
  PyvtkGenerateRegionIds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateRegionIds_StaticNew()
{
  return vtkGenerateRegionIds::New();
}

PyObject *PyvtkGenerateRegionIds_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenerateRegionIds_Type, PyvtkGenerateRegionIds_Methods,
    "vtkGenerateRegionIds",
 &PyvtkGenerateRegionIds_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGenerateRegionIds_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateRegionIds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateRegionIds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateRegionIds", o) != 0)
  {
    Py_DECREF(o);
  }

}

