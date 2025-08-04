// python wrapper for vtkPythonAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPythonAlgorithm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPythonAlgorithm(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPythonAlgorithm_ClassNew(); }


static PyObject *
PyvtkPythonAlgorithm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonAlgorithm *tempr = vtkPythonAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAlgorithm::NewInstance());

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
PyvtkPythonAlgorithm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPythonAlgorithm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPythonAlgorithm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetPythonObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetPythonObject(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPythonObject(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetPythonObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputPorts(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetNumberOfInputPorts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfOutputPorts(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetNumberOfOutputPorts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkPythonAlgorithm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonAlgorithm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonAlgorithm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPythonAlgorithm\nC++: static vtkPythonAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonAlgorithm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPythonAlgorithm\nC++: vtkPythonAlgorithm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPythonAlgorithm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPythonAlgorithm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPythonObject", PyvtkPythonAlgorithm_SetPythonObject, METH_VARARGS,
   "SetPythonObject(self, obj:PyObject) -> None\nC++: void SetPythonObject(PyObject *obj)\n\nSpecify the Python object to use to operate on the data. A\nreference will be taken on the object. This will also invoke\nInitialize() on the Python object, which is commonly used to set\nthe number of input and output ports as well as perform tasks\ncommonly performed in the constructor of C++ algorithm subclass.\n"},
  {"SetNumberOfInputPorts", PyvtkPythonAlgorithm_SetNumberOfInputPorts, METH_VARARGS,
   "SetNumberOfInputPorts(self, n:int) -> None\nC++: void SetNumberOfInputPorts(int n) override;\n\nSet the number of input ports used by the algorithm. This is made\npublic so that it can be called from Python.\n"},
  {"SetNumberOfOutputPorts", PyvtkPythonAlgorithm_SetNumberOfOutputPorts, METH_VARARGS,
   "SetNumberOfOutputPorts(self, n:int) -> None\nC++: void SetNumberOfOutputPorts(int n) override;\n\nSet the number of output ports provided by the algorithm. This is\nmade public so that it can be called from Python.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPythonAlgorithm_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("python_object"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPythonAlgorithm_SetPythonObject(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPythonAlgorithm_SetPythonObject(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPythonObject\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_input_ports"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPythonAlgorithm_SetNumberOfInputPorts(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPythonAlgorithm_SetNumberOfInputPorts(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfInputPorts\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_output_ports"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPythonAlgorithm_SetNumberOfOutputPorts(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPythonAlgorithm_SetNumberOfOutputPorts(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfOutputPorts\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPythonAlgorithm_Doc =
  "vtkPythonAlgorithm - algorithm that can be implemented in Python\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkPythonAlgorithm is an algorithm that calls a Python object to do\n"
  "the actual work. It defers the following methods to Python:\n"
  "- ProcessRequest()\n"
  "- FillInputPortInformation()\n"
  "- FillOutputPortInformation()\n\n"
  "Python signature of these methods is as follows:\n"
  "- ProcessRequest(self, vtkself, request, inInfo, outInfo) : vtkself\n"
  "  is the vtk object, inInfo is a tuple of information objects\n"
  "- FillInputPortInformation(self, vtkself, port, info)\n"
  "- FillOutputPortInformation(self, vtkself, port, info)\n"
  "- Initialize(self, vtkself)\n\n"
  "In addition, it calls an Initialize() method when setting the Python\n"
  "object, which allows the initialization of number of input and output\n"
  "ports etc.\n\n"
  "@sa\n"
  "vtkProgrammableFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPythonAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPython.vtkPythonAlgorithm", // tp_name
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
  PyvtkPythonAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonAlgorithm_StaticNew()
{
  return vtkPythonAlgorithm::New();
}

PyObject *PyvtkPythonAlgorithm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPythonAlgorithm_Type, PyvtkPythonAlgorithm_Methods,
    "vtkPythonAlgorithm",
 &PyvtkPythonAlgorithm_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPythonAlgorithm_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

