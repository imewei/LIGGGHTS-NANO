// python wrapper for vtkSerializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLogger.h"
#include "vtkSerializer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSerializer(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSerializer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkSerializer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSerializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSerializer *tempr = vtkSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSerializer::NewInstance());

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
PyvtkSerializer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSerializer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSerializer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  vtkMarshalContext *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMarshalContext"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkSerializer::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMarshalContext *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkSerializer::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_SetSerializerLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSerializerLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  vtkLogger::Verbosity temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity"))
  {
    if (ap.IsBound())
    {
      op->SetSerializerLogVerbosity(temp0);
    }
    else
    {
      op->vtkSerializer::SetSerializerLogVerbosity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSerializer_GetSerializerLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSerializerLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSerializer *op = static_cast<vtkSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLogger::Verbosity tempr = (ap.IsBound() ?
      op->GetSerializerLogVerbosity() :
      op->vtkSerializer::GetSerializerLogVerbosity());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkLogger.Verbosity");
    }
  }

  return result;
}

static PyMethodDef PyvtkSerializer_Methods[] = {
  {"IsTypeOf", PyvtkSerializer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSerializer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSerializer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSerializer\nC++: static vtkSerializer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSerializer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSerializer\nC++: vtkSerializer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSerializer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSerializer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetContext", PyvtkSerializer_SetContext, METH_VARARGS,
   "SetContext(self, _arg:vtkMarshalContext) -> None\nC++: virtual void SetContext(vtkMarshalContext *_arg)\n\nGet/Set the marshalling context. The vtkSerializer does not track\nstate of any object. However, it leverages the context to prevent\nre-serialization when there are circular dependencies among VTK\nobjects. The context does much more than just preventing\nrecursive serialization. The serializer records parent-child\nrelationships in the context using it's ScopedParentTracker API.\n"},
  {"GetContext", PyvtkSerializer_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkMarshalContext\nC++: virtual vtkMarshalContext *GetContext()\n\n"},
  {"SetSerializerLogVerbosity", PyvtkSerializer_SetSerializerLogVerbosity, METH_VARARGS,
   "SetSerializerLogVerbosity(self, verbosity:vtkLogger.Verbosity)\n    -> None\nC++: void SetSerializerLogVerbosity(\n    vtkLogger::Verbosity verbosity)\n\nSet/Get the log verbosity of messages that are emitted when data\nis uploaded to GPU memory. The GetSerializerLogVerbosity looks up\nsystem environment for `VTK_SERIALIZER_LOG_VERBOSITY` that shall\nbe used to set initial logger verbosity. The default value is\nTRACE.\n\nAccepted string values are OFF, ERROR, WARNING, INFO, TRACE, MAX,\nINVALID or ASCII representation for an integer in the range\n[-9,9].\n\note This method internally uses\nvtkLogger::ConvertToVerbosity(const char*) to parse the value\nfrom environment variable.\n"},
  {"GetSerializerLogVerbosity", PyvtkSerializer_GetSerializerLogVerbosity, METH_VARARGS,
   "GetSerializerLogVerbosity(self) -> vtkLogger.Verbosity\nC++: vtkLogger::Verbosity GetSerializerLogVerbosity()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSerializer_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("context"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSerializer_GetContext(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSerializer_SetContext(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSerializer_SetContext(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContext/SetContext\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("serializer_log_verbosity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSerializer_GetSerializerLogVerbosity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSerializer_SetSerializerLogVerbosity(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSerializer_SetSerializerLogVerbosity(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSerializerLogVerbosity/SetSerializerLogVerbosity\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSerializer_Doc =
  "vtkSerializer - Serialize VTK objects to JSON.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSerializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkSerializer", // tp_name
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
  PyvtkSerializer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSerializer_StaticNew()
{
  return vtkSerializer::New();
}

PyObject *PyvtkSerializer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSerializer_Type, PyvtkSerializer_Methods,
    "vtkSerializer",
 &PyvtkSerializer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSerializer_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSerializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSerializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSerializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

