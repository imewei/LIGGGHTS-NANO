// python wrapper for vtkPExtractExodusGlobalTemporalVariables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPExtractExodusGlobalTemporalVariables.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPExtractExodusGlobalTemporalVariables(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPExtractExodusGlobalTemporalVariables_ClassNew(); }


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExtractExodusGlobalTemporalVariables::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractExodusGlobalTemporalVariables *op = static_cast<vtkPExtractExodusGlobalTemporalVariables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractExodusGlobalTemporalVariables::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExtractExodusGlobalTemporalVariables *tempr = vtkPExtractExodusGlobalTemporalVariables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractExodusGlobalTemporalVariables *op = static_cast<vtkPExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExtractExodusGlobalTemporalVariables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractExodusGlobalTemporalVariables::NewInstance());

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
PyvtkPExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractExodusGlobalTemporalVariables *op = static_cast<vtkPExtractExodusGlobalTemporalVariables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractExodusGlobalTemporalVariables *op = static_cast<vtkPExtractExodusGlobalTemporalVariables *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPExtractExodusGlobalTemporalVariables::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractExodusGlobalTemporalVariables_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractExodusGlobalTemporalVariables *op = static_cast<vtkPExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractExodusGlobalTemporalVariables::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPExtractExodusGlobalTemporalVariables_Methods[] = {
  {"IsTypeOf", PyvtkPExtractExodusGlobalTemporalVariables_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExtractExodusGlobalTemporalVariables_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExtractExodusGlobalTemporalVariables_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkPExtractExodusGlobalTemporalVariables\nC++: static vtkPExtractExodusGlobalTemporalVariables *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExtractExodusGlobalTemporalVariables_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPExtractExodusGlobalTemporalVariables\nC++: vtkPExtractExodusGlobalTemporalVariables *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkPExtractExodusGlobalTemporalVariables_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller to use. By default\n`vtkMultiProcessController::GlobalController` will be used.\n"},
  {"GetController", PyvtkPExtractExodusGlobalTemporalVariables_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPExtractExodusGlobalTemporalVariables_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPExtractExodusGlobalTemporalVariables_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPExtractExodusGlobalTemporalVariables_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPExtractExodusGlobalTemporalVariables_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPExtractExodusGlobalTemporalVariables_Doc =
  "vtkPExtractExodusGlobalTemporalVariables - parallel version of\nvtkExtractExodusGlobalTemporalVariables.\n\n"
  "Superclass: vtkExtractExodusGlobalTemporalVariables\n\n"
  "vtkPExtractExodusGlobalTemporalVariables is a parallel version of\n"
  "vtkExtractExodusGlobalTemporalVariables that handles synchronization\n"
  "between multiple ranks. Since vtkPExodusIIReader has explicit\n"
  "sycnchronization between ranks its essential that downstream filters\n"
  "make consistent requests on all ranks to avoid deadlocks. Since\n"
  "global variables need not be provided on all ranks, without explicit\n"
  "coordination vtkExtractExodusGlobalTemporalVariables may end up not\n"
  "making requests on certain ranks causing deadlocks.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPExtractExodusGlobalTemporalVariables_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPExtractExodusGlobalTemporalVariables", // tp_name
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
  PyvtkPExtractExodusGlobalTemporalVariables_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExtractExodusGlobalTemporalVariables_StaticNew()
{
  return vtkPExtractExodusGlobalTemporalVariables::New();
}

PyObject *PyvtkPExtractExodusGlobalTemporalVariables_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPExtractExodusGlobalTemporalVariables_Type, PyvtkPExtractExodusGlobalTemporalVariables_Methods,
    "vtkPExtractExodusGlobalTemporalVariables",
 &PyvtkPExtractExodusGlobalTemporalVariables_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkExtractExodusGlobalTemporalVariables");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPExtractExodusGlobalTemporalVariables_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExtractExodusGlobalTemporalVariables(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExtractExodusGlobalTemporalVariables_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExtractExodusGlobalTemporalVariables", o) != 0)
  {
    Py_DECREF(o);
  }

}

