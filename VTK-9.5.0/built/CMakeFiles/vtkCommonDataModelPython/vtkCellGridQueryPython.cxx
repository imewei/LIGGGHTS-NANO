// python wrapper for vtkCellGridQuery
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGridQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridQuery(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridQuery_ClassNew(); }


static PyObject *
PyvtkCellGridQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridQuery *tempr = vtkCellGridQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridQuery::NewInstance());

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
PyvtkCellGridQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridQuery::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_StartPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPass();
    }
    else
    {
      op->vtkCellGridQuery::StartPass();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_GetPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPass() :
      op->vtkCellGridQuery::GetPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_IsAnotherPassRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnotherPassRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnotherPassRequired() :
      op->vtkCellGridQuery::IsAnotherPassRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridQuery_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridQuery *op = static_cast<vtkCellGridQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridQuery::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridQuery_Methods[] = {
  {"IsTypeOf", PyvtkCellGridQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridQuery\nC++: static vtkCellGridQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridQuery\nC++: vtkCellGridQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCellGridQuery_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: virtual bool Initialize()\n\nOverride this if your query-result state requires initialization.\n\nYou may override this method to do additional work, but you must\nbe careful to call the base method from your override.\n\nReturning false will abort processing of the query. No error\nmessage will be printed.\n"},
  {"StartPass", PyvtkCellGridQuery_StartPass, METH_VARARGS,
   "StartPass(self) -> None\nC++: virtual void StartPass()\n\nMark the start of a pass through each cell type. This increments\nthe Pass ivar which responders can access.\n\nYou may override this method to do additional work, but you must\nbe careful to call the base method from your override.\n"},
  {"GetPass", PyvtkCellGridQuery_GetPass, METH_VARARGS,
   "GetPass(self) -> int\nC++: virtual int GetPass()\n\nReturn the current pass (the number of times each responder has\nbeen evaluated so far).\n"},
  {"IsAnotherPassRequired", PyvtkCellGridQuery_IsAnotherPassRequired, METH_VARARGS,
   "IsAnotherPassRequired(self) -> bool\nC++: virtual bool IsAnotherPassRequired()\n\nOverride this if your query allows responders to execute in\nmultiple phases. This method may do work in addition to returning\nwhether another pass is needed.\n"},
  {"Finalize", PyvtkCellGridQuery_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: virtual bool Finalize()\n\nOverride this if your query-result state requires finalization.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridQuery_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("pass"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridQuery_GetPass(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPass\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridQuery_Doc =
  "vtkCellGridQuery - Perform an operation on cells in a vtkCellMetadata\ninstance.\n\n"
  "Superclass: vtkObject\n\n"
  "This is an empty base class that all query types must inherit.\n\n"
  "The `vtkCellGrid::Query()` method calls the query's `Initialize()`\n"
  "implementation; then loops over all its cell-types (calling the\n"
  "best-matching responder's `Query()` method for that cell-type); then\n"
  "calls `Finalize()`.\n\n"
  "The responders have an opportunity to modify the state of the query\n"
  "object, so these methods are a chance to prepare your query's state\n"
  "and then perform reduce-like computations after all the cells have\n"
  "been handled.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridQuery", // tp_name
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
  PyvtkCellGridQuery_Doc, // tp_doc
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

PyObject *PyvtkCellGridQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridQuery_Type, PyvtkCellGridQuery_Methods,
    "vtkCellGridQuery",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridQuery_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

