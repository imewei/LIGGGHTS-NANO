// python wrapper for vtkHyperTreeGridDepthLimiter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridDepthLimiter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridDepthLimiter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridDepthLimiter_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridDepthLimiter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridDepthLimiter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridDepthLimiter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridDepthLimiter *tempr = vtkHyperTreeGridDepthLimiter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridDepthLimiter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridDepthLimiter::NewInstance());

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
PyvtkHyperTreeGridDepthLimiter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridDepthLimiter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridDepthLimiter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_SetJustCreateNewMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustCreateNewMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJustCreateNewMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridDepthLimiter::SetJustCreateNewMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_GetJustCreateNewMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustCreateNewMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetJustCreateNewMask() :
      op->vtkHyperTreeGridDepthLimiter::GetJustCreateNewMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepth(temp0);
    }
    else
    {
      op->vtkHyperTreeGridDepthLimiter::SetDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkHyperTreeGridDepthLimiter::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridDepthLimiter_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridDepthLimiter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridDepthLimiter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridDepthLimiter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridDepthLimiter\nC++: static vtkHyperTreeGridDepthLimiter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridDepthLimiter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridDepthLimiter\nC++: vtkHyperTreeGridDepthLimiter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridDepthLimiter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridDepthLimiter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetJustCreateNewMask", PyvtkHyperTreeGridDepthLimiter_SetJustCreateNewMask, METH_VARARGS,
   "SetJustCreateNewMask(self, _arg:bool) -> None\nC++: virtual void SetJustCreateNewMask(bool _arg)\n\nSet/Get True, create a new mask ; False, create a new\nvtkHyperTreeGrid (HTG) Actually, setting to true no longer\ncreates a new mask but sets an attribute of the HTG that is used\nin the HTG and sliders. The name of this option is historical and\nbeing kept for retro-compatibility reasons. Default is true.\n"},
  {"GetJustCreateNewMask", PyvtkHyperTreeGridDepthLimiter_GetJustCreateNewMask, METH_VARARGS,
   "GetJustCreateNewMask(self) -> bool\nC++: virtual bool GetJustCreateNewMask()\n\n"},
  {"SetDepth", PyvtkHyperTreeGridDepthLimiter_SetDepth, METH_VARARGS,
   "SetDepth(self, _arg:int) -> None\nC++: virtual void SetDepth(unsigned int _arg)\n\nSet/Get maximum depth to which output grid should be limited\nDefault is 0.\n"},
  {"GetDepth", PyvtkHyperTreeGridDepthLimiter_GetDepth, METH_VARARGS,
   "GetDepth(self) -> int\nC++: virtual unsigned int GetDepth()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridDepthLimiter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("just_create_new_mask"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridDepthLimiter_GetJustCreateNewMask(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridDepthLimiter_SetJustCreateNewMask(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridDepthLimiter_SetJustCreateNewMask(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetJustCreateNewMask/SetJustCreateNewMask\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("depth"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridDepthLimiter_GetDepth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridDepthLimiter_SetDepth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridDepthLimiter_SetDepth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDepth/SetDepth\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridDepthLimiter_Doc =
  "vtkHyperTreeGridDepthLimiter - Hyper tree grid level extraction\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "Extracts all levels down to a specified depth from a HyperTreeGrid\n"
  "representation. If the required depth is greater or equal to the\n"
  "maximum level of the input grid, then the output is identical.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkUniformHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien 2014 This class was modified by Philippe\n"
  "Pebay, 2016 This class was modified, 2018, and optimized, 2019, by\n"
  "Jacques-Bernard Lekien, by DepthLimiter directly managed by\n"
  "HyperTreeGrid and (super)cursors. This work was supported by\n"
  "Commissariat a l'Energie Atomique CEA, DAM, DIF, F-91297 Arpajon,\n"
  "France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridDepthLimiter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridDepthLimiter", // tp_name
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
  PyvtkHyperTreeGridDepthLimiter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridDepthLimiter_StaticNew()
{
  return vtkHyperTreeGridDepthLimiter::New();
}

PyObject *PyvtkHyperTreeGridDepthLimiter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridDepthLimiter_Type, PyvtkHyperTreeGridDepthLimiter_Methods,
    "vtkHyperTreeGridDepthLimiter",
 &PyvtkHyperTreeGridDepthLimiter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridDepthLimiter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridDepthLimiter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridDepthLimiter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridDepthLimiter", o) != 0)
  {
    Py_DECREF(o);
  }

}

