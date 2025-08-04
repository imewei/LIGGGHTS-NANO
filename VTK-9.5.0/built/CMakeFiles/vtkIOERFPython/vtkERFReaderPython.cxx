// python wrapper for vtkERFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkERFReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkERFReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkERFReader_ClassNew(); }


static PyObject *
PyvtkERFReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkERFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkERFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkERFReader *tempr = vtkERFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkERFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkERFReader::NewInstance());

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
PyvtkERFReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkERFReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkERFReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

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
      op->vtkERFReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkERFReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetStagesSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStagesSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetStagesSelection() :
      op->vtkERFReader::GetStagesSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetVariablesSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariablesSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetVariablesSelection() :
      op->vtkERFReader::GetVariablesSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetBlocksSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlocksSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetBlocksSelection() :
      op->vtkERFReader::GetBlocksSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_EnableAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllVariables();
    }
    else
    {
      op->vtkERFReader::EnableAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_EnableAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllBlocks();
    }
    else
    {
      op->vtkERFReader::EnableAllBlocks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_SetVariablesStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariablesStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariablesStatus(temp0, temp1);
    }
    else
    {
      op->vtkERFReader::SetVariablesStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_SetStagesStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStagesStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStagesStatus(temp0, temp1);
    }
    else
    {
      op->vtkERFReader::SetStagesStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_SetBlocksStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlocksStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlocksStatus(temp0, temp1);
    }
    else
    {
      op->vtkERFReader::SetBlocksStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkERFReader_GetStage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkERFReader *op = static_cast<vtkERFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetStage() :
      op->vtkERFReader::GetStage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkERFReader_Methods[] = {
  {"IsTypeOf", PyvtkERFReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkERFReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkERFReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkERFReader\nC++: static vtkERFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkERFReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkERFReader\nC++: vtkERFReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkERFReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkERFReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkERFReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(std::string _arg)\n\nGet/Set the name of the input file.\n"},
  {"GetFileName", PyvtkERFReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual std::string GetFileName()\n\n"},
  {"GetStagesSelection", PyvtkERFReader_GetStagesSelection, METH_VARARGS,
   "GetStagesSelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetStagesSelection()\n\nGet the data array selections used to configure which data arrays\nare loaded by the reader.\n"},
  {"GetVariablesSelection", PyvtkERFReader_GetVariablesSelection, METH_VARARGS,
   "GetVariablesSelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetVariablesSelection()\n\n"},
  {"GetBlocksSelection", PyvtkERFReader_GetBlocksSelection, METH_VARARGS,
   "GetBlocksSelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetBlocksSelection()\n\n"},
  {"EnableAllVariables", PyvtkERFReader_EnableAllVariables, METH_VARARGS,
   "EnableAllVariables(self) -> None\nC++: void EnableAllVariables()\n\nEnable all arrays to be read. Call forwarded to\nvtkDataArraySelection.\n"},
  {"EnableAllBlocks", PyvtkERFReader_EnableAllBlocks, METH_VARARGS,
   "EnableAllBlocks(self) -> None\nC++: void EnableAllBlocks()\n\n"},
  {"SetVariablesStatus", PyvtkERFReader_SetVariablesStatus, METH_VARARGS,
   "SetVariablesStatus(self, name:str, status:int) -> None\nC++: void SetVariablesStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is\nenabled. Call forwarded to vtkDataArraySelection.\n"},
  {"SetStagesStatus", PyvtkERFReader_SetStagesStatus, METH_VARARGS,
   "SetStagesStatus(self, name:str, status:int) -> None\nC++: void SetStagesStatus(const char *name, int status)\n\n"},
  {"SetBlocksStatus", PyvtkERFReader_SetBlocksStatus, METH_VARARGS,
   "SetBlocksStatus(self, name:str, status:int) -> None\nC++: void SetBlocksStatus(const char *name, int status)\n\n"},
  {"GetStage", PyvtkERFReader_GetStage, METH_VARARGS,
   "GetStage(self) -> str\nC++: std::string GetStage()\n\nReturn the current stage.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkERFReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkERFReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkERFReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkERFReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stages_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkERFReader_GetStagesSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetStagesSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("variables_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkERFReader_GetVariablesSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetVariablesSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("blocks_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkERFReader_GetBlocksSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBlocksSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("stage"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkERFReader_GetStage(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetStage\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkERFReader_Doc =
  "vtkERFReader - Read ERF-HDF5 files.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "Based on HDF5, ERF format will contain multiple stages and a special\n"
  "group named 'post' which indicates the default stage.\n\n"
  "A stage is a group with multiple subgroups which could be mandatory\n"
  "or not:\n"
  "- erfheader   (mandatory): defines the version of the format /\n"
  "  simulation.\n"
  "- constant    (mandatory): defines all data which is not varying.\n"
  "- singlestate (opt)      : defines multiple states with varying data.\n"
  "- multistate  (opt)      : defines data which can depend on multiple\n"
  "  varying parameters like time series and load cases.\n\n"
  "Here is an example of a valid ERF HDF5 file hierarchy: /\n"
  " CSMEXPL/\n"
  "  constant/\n"
  "   connectivities/\n"
  "    SHELL/\n"
  "     erfblock/\n"
  "      cell indices\n"
  "      connecitvity indices\n"
  "      offsets\n"
  "   entityresults/\n"
  "    NODE/\n"
  "     erfblock/\n"
  "      indices\n"
  "      points\n"
  "      offsets\n"
  "   systems/\n"
  "     erfblock/\n"
  "  erfheader/\n"
  "  multistate/                (currently not supported yet)\n"
  "  singlestate/\n"
  "   state00001/\n"
  "    ...\n"
  "   state00004/\n"
  "    ...\n"
  " post/\n\n"
  "Each subgroup of stage, like 'constant', will also contains multiple\n"
  "groups (e.g. 'connectivities') and so on. The deeper subgroup, for\n"
  "each possible path, named `erfblock` has several handy attributes to\n"
  "generate the data in VTK like: dimension, cell type, associated\n"
  "groups, ... Also 'erfblock' contains several datasets (which is a\n"
  "file in HDF5) which will be the raw data like points, indices, ...\n\n"
  "This reader will output a vtkPartitionedDataSetCollection as it\n"
  "should be read in distributed fashion later and it represents a\n"
  "collection of dataSet which can vary depending on the time\n"
  "(singlestate, multistate) or not (constant).\n\n"
  "@warning Multistate isn't supported for now.\n\n"
  "ote for more details, the spec about ERF HDF5 implemented can be\n"
  "found here:\n"
  "https://myesi.esi-group.com/ERF-HDF5/doc/ERF_HDF5_Specs_1.2.pdf.\n\n"
  "ote there is also a complementary spec about PAM-CSM here:\n"
  "https://myesi.esi-group.com/ERF-HDF5/doc/ERF_CSM_RESULT_Specs_1.2.pdf.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkERFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOERF.vtkERFReader", // tp_name
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
  PyvtkERFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkERFReader_StaticNew()
{
  return vtkERFReader::New();
}

PyObject *PyvtkERFReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkERFReader_Type, PyvtkERFReader_Methods,
    "vtkERFReader",
 &PyvtkERFReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkERFReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkERFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkERFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkERFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

