// python wrapper for vtkFDSReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFDSReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFDSReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFDSReader_ClassNew(); }


static PyObject *
PyvtkFDSReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFDSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFDSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFDSReader *tempr = vtkFDSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFDSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFDSReader::NewInstance());

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
PyvtkFDSReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFDSReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFDSReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkFDSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFDSReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_SetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  vtkResourceStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResourceStream"))
  {
    if (ap.IsBound())
    {
      op->SetStream(temp0);
    }
    else
    {
      op->vtkFDSReader::SetStream(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceStream *tempr = (ap.IsBound() ?
      op->GetStream() :
      op->vtkFDSReader::GetStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkFDSReader::GetAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetAssemblyTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAssemblyTag() :
      op->vtkFDSReader::GetAssemblyTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_AddSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSelector(temp0) :
      op->vtkFDSReader::AddSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_ClearSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSelectors();
    }
    else
    {
      op->vtkFDSReader::ClearSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_GetTimeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeTolerance() :
      op->vtkFDSReader::GetTimeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFDSReader_SetTimeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFDSReader *op = static_cast<vtkFDSReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeTolerance(temp0);
    }
    else
    {
      op->vtkFDSReader::SetTimeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFDSReader_Methods[] = {
  {"IsTypeOf", PyvtkFDSReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFDSReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFDSReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFDSReader\nC++: static vtkFDSReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFDSReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFDSReader\nC++: vtkFDSReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFDSReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFDSReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkFDSReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(std::string _arg)\n\nSpecifies the name of the .smv file to be loaded.\n"},
  {"GetFileName", PyvtkFDSReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual std::string GetFileName()\n\n"},
  {"SetStream", PyvtkFDSReader_SetStream, METH_VARARGS,
   "SetStream(self, stream:vtkResourceStream) -> None\nC++: virtual void SetStream(vtkResourceStream *stream)\n\nSet/Get the stream from which to read the .smv file. If Stream is\nnot nullptr, it will be used in priority from FileName\n"},
  {"GetStream", PyvtkFDSReader_GetStream, METH_VARARGS,
   "GetStream(self) -> vtkResourceStream\nC++: virtual vtkResourceStream *GetStream()\n\n"},
  {"GetAssembly", PyvtkFDSReader_GetAssembly, METH_VARARGS,
   "GetAssembly(self) -> vtkDataAssembly\nC++: virtual vtkDataAssembly *GetAssembly()\n\nGet the data full data assembly associated with the input\n"},
  {"GetAssemblyTag", PyvtkFDSReader_GetAssemblyTag, METH_VARARGS,
   "GetAssemblyTag(self) -> int\nC++: virtual int GetAssemblyTag()\n\nWhenever the assembly is changed, this tag gets changed. Note,\nusers should not assume that this is monotonically increasing but\ninstead simply rely on its value to determine if the assembly may\nhave changed since last time.\n\nIt is set to 0 whenever there's no valid assembly available.\n"},
  {"AddSelector", PyvtkFDSReader_AddSelector, METH_VARARGS,
   "AddSelector(self, selector:str) -> bool\nC++: bool AddSelector(const char *selector)\n\nAPI to set selectors. Multiple selectors can be added using\n`AddSelector`. The order in which selectors are specified is not\npreserved and has no impact on the result.\n\n`AddSelector` returns true if the selector was added, false if\nthe selector was already specified and hence not added.\n\n@sa vtkDataAssembly::SelectNodes\n"},
  {"ClearSelectors", PyvtkFDSReader_ClearSelectors, METH_VARARGS,
   "ClearSelectors(self) -> None\nC++: void ClearSelectors()\n\n"},
  {"GetTimeTolerance", PyvtkFDSReader_GetTimeTolerance, METH_VARARGS,
   "GetTimeTolerance(self) -> float\nC++: virtual double GetTimeTolerance()\n\nSet the absolute tolerance under which two time values are\nconsidered identical\n"},
  {"SetTimeTolerance", PyvtkFDSReader_SetTimeTolerance, METH_VARARGS,
   "SetTimeTolerance(self, _arg:float) -> None\nC++: virtual void SetTimeTolerance(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFDSReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFDSReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFDSReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFDSReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stream"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFDSReader_GetStream(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFDSReader_SetStream(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFDSReader_SetStream(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStream/SetStream\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("time_tolerance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFDSReader_GetTimeTolerance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFDSReader_SetTimeTolerance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFDSReader_SetTimeTolerance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimeTolerance/SetTimeTolerance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("assembly"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFDSReader_GetAssembly(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAssembly\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("assembly_tag"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFDSReader_GetAssemblyTag(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAssemblyTag\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFDSReader_Doc =
  "vtkFDSReader - A reader for the Fire Dynamics Simulator (FDS) output\ndata.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "This class reads in the `.smv` file and uses the meta-data to\n"
  "identify the other files to read automatically. It outputs a\n"
  "`vtkPartitionedDataSetCollection` containing 5 groups: Grids,\n"
  "Devices, HRR, Slices and Boundaries. Each group contains data sets\n"
  "with the expected values for users of the FDS code.\n\n"
  "FDS & SMV specifications :\n"
  "https://pages.nist.gov/fds-smv/manuals.html\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFDSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOFDS.vtkFDSReader", // tp_name
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
  PyvtkFDSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFDSReader_StaticNew()
{
  return vtkFDSReader::New();
}

PyObject *PyvtkFDSReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFDSReader_Type, PyvtkFDSReader_Methods,
    "vtkFDSReader",
 &PyvtkFDSReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFDSReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFDSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFDSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFDSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

