// python wrapper for vtkEnSightSOSGoldReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEnSightSOSGoldReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkEnSightSOSGoldReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkEnSightSOSGoldReader_ClassNew(); }


static PyObject *
PyvtkEnSightSOSGoldReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightSOSGoldReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightSOSGoldReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightSOSGoldReader *tempr = vtkEnSightSOSGoldReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightSOSGoldReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightSOSGoldReader::NewInstance());

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
PyvtkEnSightSOSGoldReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEnSightSOSGoldReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEnSightSOSGoldReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkEnSightSOSGoldReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

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
      op->vtkEnSightSOSGoldReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCaseFileName() :
      op->vtkEnSightSOSGoldReader::GetCaseFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaseFileName(temp0);
    }
    else
    {
      op->vtkEnSightSOSGoldReader::SetCaseFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkEnSightSOSGoldReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetPartSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPartSelection() :
      op->vtkEnSightSOSGoldReader::GetPartSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetPointArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointArraySelection() :
      op->vtkEnSightSOSGoldReader::GetPointArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetCellArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellArraySelection() :
      op->vtkEnSightSOSGoldReader::GetCellArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetFieldArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldArraySelection() :
      op->vtkEnSightSOSGoldReader::GetFieldArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightSOSGoldReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightSOSGoldReader *op = static_cast<vtkEnSightSOSGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkEnSightSOSGoldReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightSOSGoldReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightSOSGoldReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightSOSGoldReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightSOSGoldReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEnSightSOSGoldReader\nC++: static vtkEnSightSOSGoldReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightSOSGoldReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEnSightSOSGoldReader\nC++: vtkEnSightSOSGoldReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEnSightSOSGoldReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEnSightSOSGoldReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetController", PyvtkEnSightSOSGoldReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the controller\n"},
  {"SetController", PyvtkEnSightSOSGoldReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\n"},
  {"GetCaseFileName", PyvtkEnSightSOSGoldReader_GetCaseFileName, METH_VARARGS,
   "GetCaseFileName(self) -> str\nC++: virtual char *GetCaseFileName()\n\nGet/Set the SOS file name that will be read.\n"},
  {"SetCaseFileName", PyvtkEnSightSOSGoldReader_SetCaseFileName, METH_VARARGS,
   "SetCaseFileName(self, _arg:str) -> None\nC++: virtual void SetCaseFileName(const char *_arg)\n\n"},
  {"CanReadFile", PyvtkEnSightSOSGoldReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {"GetPartSelection", PyvtkEnSightSOSGoldReader_GetPartSelection, METH_VARARGS,
   "GetPartSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPartSelection()\n\nPart selection, to determine which blocks/parts are loaded.\n"},
  {"GetPointArraySelection", PyvtkEnSightSOSGoldReader_GetPointArraySelection, METH_VARARGS,
   "GetPointArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointArraySelection()\n\nPoint array selection, to determine which point arrays are\nloaded.\n"},
  {"GetCellArraySelection", PyvtkEnSightSOSGoldReader_GetCellArraySelection, METH_VARARGS,
   "GetCellArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellArraySelection()\n\nCell array selection, to determine which cell arrays are loaded.\n"},
  {"GetFieldArraySelection", PyvtkEnSightSOSGoldReader_GetFieldArraySelection, METH_VARARGS,
   "GetFieldArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldArraySelection()\n\nField data array selection, to determine which arrays are loaded.\n"},
  {"GetMTime", PyvtkEnSightSOSGoldReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to take into account mtimes for vtkDataArraySelection\ninstances.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkEnSightSOSGoldReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightSOSGoldReader_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightSOSGoldReader_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("case_file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetCaseFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightSOSGoldReader_SetCaseFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightSOSGoldReader_SetCaseFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCaseFileName/SetCaseFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("part_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetPartSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPartSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetPointArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetCellArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetFieldArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFieldArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightSOSGoldReader_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkEnSightSOSGoldReader_Doc =
  "vtkEnSightSOSGoldReader - reader for EnSight SOS gold files\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "Reads EnSight SOS files using vtkEnSightGoldCombinedReader. When\n"
  "running in parallel, the decomposition of the data across ranks\n"
  "differs in this reader from the parallel EnSight readers available in\n"
  "ParaView source (see\n"
  "https://kitware.github.io/paraview-docs/latest/cxx/classvtkPVEnSightMa\n"
  "sterServerReader2.html,\n"
  "https://kitware.github.io/paraview-docs/latest/cxx/classvtkPEnSightGol\n"
  "dBinaryReader.html, and\n"
  "https://kitware.github.io/paraview-docs/latest/cxx/classvtkPEnSightGol\n"
  "dReader.html). This reader makes the assumption that most users will\n"
  "already have a good decomposition in the way their files are written\n"
  "out from their solvers, so we will honor that.\n\n"
  "The format allows for partitions of parts to be contained in\n"
  "different casefiles making up the SOS file. The old reader treated\n"
  "these partitions of the same part across casefiles as different parts\n"
  "that were not related to each other, so then a part that is split\n"
  "across casefiles would end up with a very weird decomposition.\n\n"
  "The initial strategy for this reader assigns whole casefiles to the\n"
  "available processes as evenly as possible. This means that using the\n"
  "same number of processes as number of servers listed in the SOS file\n"
  "is the most efficient - each rank will read one casefile. If there\n"
  "are more processes than casefiles, some ranks will do no work, while\n"
  "if there are fewer processes than casefiles, some rank(s) will read\n"
  "more than one casefile. In the future, we will add a strategy that\n"
  "will consider the partition of a part in the casefile as an atomic\n"
  "unit, and those partitions could be more evenly distributed across\n"
  "ranks.\n\n"
  "The output of the reader is a vtkPartitionedDataSetCollection. When a\n"
  "process reads multiple casefiles, it will combine the output\n"
  "vtkPartitionedDataSetCollection from each of the\n"
  "vtkEnSightGoldCombinedReader instances to output a single\n"
  "vtkPartitionedDataSetCollection where the portions of parts read by\n"
  "different ranks are partitions of their respective\n"
  "vtkPartitionedDataSet. For instance if 'Part 1' is empty in\n"
  "casefile1, and has its data split between casefile2 and casefile3,\n"
  "the resulting vtkPartitionedDataSetCollection will contain only one\n"
  "vtkPartitionedDataSet containing 'Part 1' with two partitions.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightSOSGoldReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightSOSGoldReader", // tp_name
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
  PyvtkEnSightSOSGoldReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightSOSGoldReader_StaticNew()
{
  return vtkEnSightSOSGoldReader::New();
}

PyObject *PyvtkEnSightSOSGoldReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEnSightSOSGoldReader_Type, PyvtkEnSightSOSGoldReader_Methods,
    "vtkEnSightSOSGoldReader",
 &PyvtkEnSightSOSGoldReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkEnSightSOSGoldReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightSOSGoldReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightSOSGoldReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightSOSGoldReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

