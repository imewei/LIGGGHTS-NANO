// python wrapper for vtkExtractSelectionBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectionBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkExtractSelectionBase(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkExtractSelectionBase_ClassNew(); }


static PyObject *
PyvtkExtractSelectionBase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectionBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectionBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectionBase *tempr = vtkExtractSelectionBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectionBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectionBase::NewInstance());

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
PyvtkExtractSelectionBase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectionBase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectionBase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkExtractSelectionBase::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveTopology(temp0);
    }
    else
    {
      op->vtkExtractSelectionBase::SetPreserveTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveTopology() :
      op->vtkExtractSelectionBase::GetPreserveTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOn();
    }
    else
    {
      op->vtkExtractSelectionBase::PreserveTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOff();
    }
    else
    {
      op->vtkExtractSelectionBase::PreserveTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectionBase_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectionBase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectionBase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectionBase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectionBase\nC++: static vtkExtractSelectionBase *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectionBase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectionBase\nC++: vtkExtractSelectionBase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectionBase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectionBase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSelectionConnection", PyvtkExtractSelectionBase_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {"SetPreserveTopology", PyvtkExtractSelectionBase_SetPreserveTopology, METH_VARARGS,
   "SetPreserveTopology(self, _arg:int) -> None\nC++: virtual void SetPreserveTopology(vtkTypeBool _arg)\n\nThis flag tells the extraction filter not to convert the selected\noutput into an unstructured grid, but instead to produce a\nvtkInsidedness array and add it to the input dataset. Default\nvalue is false(0).\n"},
  {"GetPreserveTopology", PyvtkExtractSelectionBase_GetPreserveTopology, METH_VARARGS,
   "GetPreserveTopology(self) -> int\nC++: virtual vtkTypeBool GetPreserveTopology()\n\n"},
  {"PreserveTopologyOn", PyvtkExtractSelectionBase_PreserveTopologyOn, METH_VARARGS,
   "PreserveTopologyOn(self) -> None\nC++: virtual void PreserveTopologyOn()\n\n"},
  {"PreserveTopologyOff", PyvtkExtractSelectionBase_PreserveTopologyOff, METH_VARARGS,
   "PreserveTopologyOff(self) -> None\nC++: virtual void PreserveTopologyOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkExtractSelectionBase_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("selection_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtractSelectionBase_SetSelectionConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtractSelectionBase_SetSelectionConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSelectionConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("preserve_topology"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkExtractSelectionBase_GetPreserveTopology(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtractSelectionBase_SetPreserveTopology(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtractSelectionBase_SetPreserveTopology(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPreserveTopology/SetPreserveTopology\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkExtractSelectionBase_Doc =
  "vtkExtractSelectionBase - abstract base class for all extract\nselection filters.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkExtractSelectionBase is an abstract base class for all extract\n"
  "selection filters. It defines some properties common to all extract\n"
  "selection filters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectionBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkExtractSelectionBase", // tp_name
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
  PyvtkExtractSelectionBase_Doc, // tp_doc
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

PyObject *PyvtkExtractSelectionBase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectionBase_Type, PyvtkExtractSelectionBase_Methods,
    "vtkExtractSelectionBase",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkExtractSelectionBase_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectionBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectionBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectionBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

