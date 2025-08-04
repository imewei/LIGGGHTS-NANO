// python wrapper for vtkCONVERGECFDCGNSReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCONVERGECFDCGNSReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCONVERGECFDCGNSReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCONVERGECFDCGNSReader_ClassNew(); }


static PyObject *
PyvtkCONVERGECFDCGNSReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCONVERGECFDCGNSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCONVERGECFDCGNSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCONVERGECFDCGNSReader *tempr = vtkCONVERGECFDCGNSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCONVERGECFDCGNSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCONVERGECFDCGNSReader::NewInstance());

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
PyvtkCONVERGECFDCGNSReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCONVERGECFDCGNSReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCONVERGECFDCGNSReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkCONVERGECFDCGNSReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkCONVERGECFDCGNSReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_GetParcelDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParcelDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetParcelDataArraySelection() :
      op->vtkCONVERGECFDCGNSReader::GetParcelDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCONVERGECFDCGNSReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

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
      op->vtkCONVERGECFDCGNSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCONVERGECFDCGNSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCONVERGECFDCGNSReader *op = static_cast<vtkCONVERGECFDCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCONVERGECFDCGNSReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCONVERGECFDCGNSReader_Methods[] = {
  {"IsTypeOf", PyvtkCONVERGECFDCGNSReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCONVERGECFDCGNSReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCONVERGECFDCGNSReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCONVERGECFDCGNSReader\nC++: static vtkCONVERGECFDCGNSReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCONVERGECFDCGNSReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCONVERGECFDCGNSReader\nC++: vtkCONVERGECFDCGNSReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCONVERGECFDCGNSReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCONVERGECFDCGNSReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPointDataArraySelection", PyvtkCONVERGECFDCGNSReader_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nAccess the point data array selection to specify which point data\narrays should be read. Only the specified arrays will be read\nfrom the file.\n"},
  {"GetCellDataArraySelection", PyvtkCONVERGECFDCGNSReader_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\nAccess the cell data array selection to specify which cell data\narrays should be read. Only the specified arrays will be read\nfrom the file.\n"},
  {"GetParcelDataArraySelection", PyvtkCONVERGECFDCGNSReader_GetParcelDataArraySelection, METH_VARARGS,
   "GetParcelDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetParcelDataArraySelection()\n\nAccess the parcel data array selection to specify which parcel\ndata arrays should be read. Only the specified arrays will be\nread from the file. Note that parcels are defined as points\nseparate from the main mesh.\n"},
  {"CanReadFile", PyvtkCONVERGECFDCGNSReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, filename:str) -> int\nC++: virtual int CanReadFile(const std::string &filename)\n\nReturn whether the file can be read with this reader. Forwarded\nto the CGNS reader which does the non parcel part of the reading.\n"},
  {"SetFileName", PyvtkCONVERGECFDCGNSReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(std::string _arg)\n\nGet/set the CGNS file name.\n"},
  {"GetFileName", PyvtkCONVERGECFDCGNSReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual std::string GetFileName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCONVERGECFDCGNSReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCONVERGECFDCGNSReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCONVERGECFDCGNSReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCONVERGECFDCGNSReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCONVERGECFDCGNSReader_GetPointDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCONVERGECFDCGNSReader_GetCellDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("parcel_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCONVERGECFDCGNSReader_GetParcelDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetParcelDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCONVERGECFDCGNSReader_Doc =
  "vtkCONVERGECFDCGNSReader - Reader for CONVERGECFD CGNS post files.\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "This class reads CONVERGECFD post files using the CGNS standard.\n"
  "Meshes, surfaces, and parcels are read. Parcels are defined inside\n"
  "\"PARCEL_DATA\" UserDefinedData_t nodes.\n\n"
  "Cell data arrays associated with mesh cells can be individually\n"
  "selected for reading using the CellArrayStatus API.\n\n"
  "Regular point data arrays associated with mesh points can be\n"
  "individually selected for reading using the PointArrayStatus API.\n\n"
  "Point data arrays associated with parcels can be individually\n"
  "selected for reading using the ParcelArrayStatus API.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCONVERGECFDCGNSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCGNSReader.vtkCONVERGECFDCGNSReader", // tp_name
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
  PyvtkCONVERGECFDCGNSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCONVERGECFDCGNSReader_StaticNew()
{
  return vtkCONVERGECFDCGNSReader::New();
}

PyObject *PyvtkCONVERGECFDCGNSReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCONVERGECFDCGNSReader_Type, PyvtkCONVERGECFDCGNSReader_Methods,
    "vtkCONVERGECFDCGNSReader",
 &PyvtkCONVERGECFDCGNSReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCONVERGECFDCGNSReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCONVERGECFDCGNSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCONVERGECFDCGNSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCONVERGECFDCGNSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

