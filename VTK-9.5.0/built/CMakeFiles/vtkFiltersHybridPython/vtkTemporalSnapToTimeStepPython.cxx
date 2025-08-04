// python wrapper for vtkTemporalSnapToTimeStep
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalSnapToTimeStep.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkTemporalSnapToTimeStep_ClassNew(); }


static PyObject *
PyvtkTemporalSnapToTimeStep_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalSnapToTimeStep::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalSnapToTimeStep::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalSnapToTimeStep *tempr = vtkTemporalSnapToTimeStep::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalSnapToTimeStep *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalSnapToTimeStep::NewInstance());

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
PyvtkTemporalSnapToTimeStep_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalSnapToTimeStep::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalSnapToTimeStep::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapMode(temp0);
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_GetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapMode() :
      op->vtkTemporalSnapToTimeStep::GetSnapMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNearest();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextBelowOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNextBelowOrEqual();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextBelowOrEqual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextAboveOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNextAboveOrEqual();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextAboveOrEqual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalSnapToTimeStep_Methods[] = {
  {"IsTypeOf", PyvtkTemporalSnapToTimeStep_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalSnapToTimeStep_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalSnapToTimeStep_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalSnapToTimeStep\nC++: static vtkTemporalSnapToTimeStep *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalSnapToTimeStep_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalSnapToTimeStep_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalSnapToTimeStep_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSnapMode", PyvtkTemporalSnapToTimeStep_SetSnapMode, METH_VARARGS,
   "SetSnapMode(self, _arg:int) -> None\nC++: virtual void SetSnapMode(int _arg)\n\n"},
  {"GetSnapMode", PyvtkTemporalSnapToTimeStep_GetSnapMode, METH_VARARGS,
   "GetSnapMode(self) -> int\nC++: virtual int GetSnapMode()\n\n"},
  {"SetSnapModeToNearest", PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest, METH_VARARGS,
   "SetSnapModeToNearest(self) -> None\nC++: void SetSnapModeToNearest()\n\n"},
  {"SetSnapModeToNextBelowOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual, METH_VARARGS,
   "SetSnapModeToNextBelowOrEqual(self) -> None\nC++: void SetSnapModeToNextBelowOrEqual()\n\n"},
  {"SetSnapModeToNextAboveOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual, METH_VARARGS,
   "SetSnapModeToNextAboveOrEqual(self) -> None\nC++: void SetSnapModeToNextAboveOrEqual()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkTemporalSnapToTimeStep_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("snap_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkTemporalSnapToTimeStep_GetSnapMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkTemporalSnapToTimeStep_SetSnapMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkTemporalSnapToTimeStep_SetSnapMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSnapMode/SetSnapMode\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkTemporalSnapToTimeStep_Doc =
  "vtkTemporalSnapToTimeStep - modify the time range/steps of temporal\ndata\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkTemporalSnapToTimeStep  modify the time range or time steps of the\n"
  "data without changing the data itself. The data is not resampled by\n"
  "this filter, only the information accompanying the data is modified.\n\n"
  "@par Thanks: John Bidiscombe of CSCS - Swiss National Supercomputing\n"
  "Centre for creating and contributing this class. For related\n"
  "material, please refer to : John Biddiscombe, Berk Geveci, Ken\n"
  "Martin, Kenneth Moreland, David Thompson, \"Time Dependent Processing in a Parallel Pipeline\n"
  "Architecture\", IEEE Visualization 2007.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalSnapToTimeStep_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTemporalSnapToTimeStep", // tp_name
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
  PyvtkTemporalSnapToTimeStep_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalSnapToTimeStep_StaticNew()
{
  return vtkTemporalSnapToTimeStep::New();
}

PyObject *PyvtkTemporalSnapToTimeStep_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalSnapToTimeStep_Type, PyvtkTemporalSnapToTimeStep_Methods,
    "vtkTemporalSnapToTimeStep",
 &PyvtkTemporalSnapToTimeStep_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SNAP_NEAREST", vtkTemporalSnapToTimeStep::VTK_SNAP_NEAREST },
        { "VTK_SNAP_NEXTBELOW_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTBELOW_OR_EQUAL },
        { "VTK_SNAP_NEXTABOVE_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTABOVE_OR_EQUAL },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkTemporalSnapToTimeStep_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalSnapToTimeStep(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalSnapToTimeStep_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalSnapToTimeStep", o) != 0)
  {
    Py_DECREF(o);
  }

}

