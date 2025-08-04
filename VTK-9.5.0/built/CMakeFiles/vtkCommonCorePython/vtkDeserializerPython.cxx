// python wrapper for vtkDeserializer
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
#include "vtkDeserializer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDeserializer(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDeserializer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkDeserializer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDeserializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDeserializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDeserializer *tempr = vtkDeserializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDeserializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDeserializer::NewInstance());

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
PyvtkDeserializer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDeserializer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDeserializer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_ConstructObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->ConstructObject(temp0, temp1) :
      op->vtkDeserializer::ConstructObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_DeserializeJSON(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeserializeJSON");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  unsigned int temp0;
  vtkSmartPointer<vtkObjectBase> temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    bool tempr = (ap.IsBound() ?
      op->DeserializeJSON(temp0, temp1) :
      op->vtkDeserializer::DeserializeJSON(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_UnRegisterConstructor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterConstructor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterConstructor(temp0);
    }
    else
    {
      op->vtkDeserializer::UnRegisterConstructor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

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
      op->vtkDeserializer::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMarshalContext *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkDeserializer::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_SetDeserializerLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeserializerLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  vtkLogger::Verbosity temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity"))
  {
    if (ap.IsBound())
    {
      op->SetDeserializerLogVerbosity(temp0);
    }
    else
    {
      op->vtkDeserializer::SetDeserializerLogVerbosity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeserializer_GetDeserializerLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeserializerLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeserializer *op = static_cast<vtkDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLogger::Verbosity tempr = (ap.IsBound() ?
      op->GetDeserializerLogVerbosity() :
      op->vtkDeserializer::GetDeserializerLogVerbosity());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkLogger.Verbosity");
    }
  }

  return result;
}

static PyMethodDef PyvtkDeserializer_Methods[] = {
  {"IsTypeOf", PyvtkDeserializer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDeserializer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDeserializer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDeserializer\nC++: static vtkDeserializer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDeserializer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDeserializer\nC++: vtkDeserializer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDeserializer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDeserializer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ConstructObject", PyvtkDeserializer_ConstructObject, METH_VARARGS,
   "ConstructObject(self, className:str, superClassNames:(str, ...))\n    -> vtkObjectBase\nC++: vtkObjectBase *ConstructObject(const std::string &className,\n    const std::vector<std::string> &superClassNames)\n\nConstructs an object of type `className`.\n\nIf a constructor is not found for `className`, the\n`GetConstructor` walks through each item in `superClassNames` and\nattempts to construct an instance of that type. This is useful\nwhen the VTK build of the serializer side and the deserializer\nside are on entirely different platforms by taking advantage of\nthe object factory mechanism.\n\nExample of usefulness of `superClassNames`:\n\nLet's suppose in a Windows VTK application, the `vtkSerializer`\nserialized an instance of `vtkWin32RenderWindowInteractor` into\njson which was then transferred over the network to a macOS\nmachine. Over there, seeing that the state refers to the\n`vtkWin32RenderWindowInteractor` class the `vtkDeserializer` will\nattempt to find a constructor for win32 class and fail. It then\nchecks if the super class (here `vtkRenderWindowInteractor`) has\na constructor and constructs a new instance of that type. Due to\nthe object factory mechanism, the macOS build of VTK constructs a\n`vtkCocoaRenderWindowInteractor` and it all works as expected!\n"},
  {"DeserializeJSON", PyvtkDeserializer_DeserializeJSON, METH_VARARGS,
   "DeserializeJSON(self, identifier:int, objectBase:vtkObjectBase)\n    -> bool\nC++: bool DeserializeJSON(const vtkTypeUInt32 &identifier,\n    vtkSmartPointer<vtkObjectBase> &objectBase)\n\nDeserialize a state registered with the context at `identifier`\ninto `objectBase`. This function lets you pass a non-null object\ninto `objectBase` typically obtained from\nvtkMarshalContext::GetObjectAtId. In that case, the constructor\nis not invoked. Otherwise, a new object will be constructed and\navailable in `objectBase`.\n\nThis method returns `true` if the state was successfully\ndeserialized and `false` when an error occurs. This method\nreturns `true` if the state was already deserialized into an\nobject.\n"},
  {"UnRegisterConstructor", PyvtkDeserializer_UnRegisterConstructor, METH_VARARGS,
   "UnRegisterConstructor(self, className:str) -> None\nC++: void UnRegisterConstructor(const std::string &className)\n\n"},
  {"SetContext", PyvtkDeserializer_SetContext, METH_VARARGS,
   "SetContext(self, _arg:vtkMarshalContext) -> None\nC++: virtual void SetContext(vtkMarshalContext *_arg)\n\nGet/Set the marshalling context. The vtkDeserializer does not\ntrack state of any object. However, it leverages the context to\nprevent re-deserialization when there are circular dependencies\namong the VTK objects. The context does much more than just\npreventing recursive de-serialization. The deserializer records\nparent-child relationships in the context using it's\nScopedParentTracker API.\n"},
  {"GetContext", PyvtkDeserializer_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkMarshalContext\nC++: virtual vtkMarshalContext *GetContext()\n\n"},
  {"SetDeserializerLogVerbosity", PyvtkDeserializer_SetDeserializerLogVerbosity, METH_VARARGS,
   "SetDeserializerLogVerbosity(self, verbosity:vtkLogger.Verbosity)\n    -> None\nC++: void SetDeserializerLogVerbosity(\n    vtkLogger::Verbosity verbosity)\n\nSet/Get the log verbosity of messages that are emitted when data\nis uploaded to GPU memory. The GetDeserializerLogVerbosity looks\nup system environment for `VTK_DESERIALIZER_LOG_VERBOSITY` that\nshall be used to set initial logger verbosity. The default value\nis TRACE.\n\nAccepted string values are OFF, ERROR, WARNING, INFO, TRACE, MAX,\nINVALID or ASCII representation for an integer in the range\n[-9,9].\n\note This method internally uses\nvtkLogger::ConvertToVerbosity(const char*) to parse the value\nfrom environment variable.\n"},
  {"GetDeserializerLogVerbosity", PyvtkDeserializer_GetDeserializerLogVerbosity, METH_VARARGS,
   "GetDeserializerLogVerbosity(self) -> vtkLogger.Verbosity\nC++: vtkLogger::Verbosity GetDeserializerLogVerbosity()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDeserializer_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("context"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDeserializer_GetContext(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDeserializer_SetContext(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDeserializer_SetContext(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContext/SetContext\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("deserializer_log_verbosity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDeserializer_GetDeserializerLogVerbosity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDeserializer_SetDeserializerLogVerbosity(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDeserializer_SetDeserializerLogVerbosity(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDeserializerLogVerbosity/SetDeserializerLogVerbosity\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDeserializer_Doc =
  "vtkDeserializer - Deserialize VTK objects from JSON.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDeserializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkDeserializer", // tp_name
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
  PyvtkDeserializer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDeserializer_StaticNew()
{
  return vtkDeserializer::New();
}

PyObject *PyvtkDeserializer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDeserializer_Type, PyvtkDeserializer_Methods,
    "vtkDeserializer",
 &PyvtkDeserializer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDeserializer_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDeserializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDeserializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDeserializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

