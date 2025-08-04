// python wrapper for vtkCesium3DTilesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCesium3DTilesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCesium3DTilesReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCesium3DTilesReader_ClassNew(); }


static PyObject *
PyvtkCesium3DTilesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCesium3DTilesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCesium3DTilesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCesium3DTilesReader *tempr = vtkCesium3DTilesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCesium3DTilesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCesium3DTilesReader::NewInstance());

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
PyvtkCesium3DTilesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCesium3DTilesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCesium3DTilesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkCesium3DTilesReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCesium3DTilesReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkCesium3DTilesReader::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkCesium3DTilesReader::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCesium3DTilesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesReader_GetTileReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesReader *op = static_cast<vtkCesium3DTilesReader *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkGLTFReader> tempr = (ap.IsBound() ?
      op->GetTileReader(temp0) :
      op->vtkCesium3DTilesReader::GetTileReader(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCesium3DTilesReader_Methods[] = {
  {"IsTypeOf", PyvtkCesium3DTilesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCesium3DTilesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCesium3DTilesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCesium3DTilesReader\nC++: static vtkCesium3DTilesReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCesium3DTilesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCesium3DTilesReader\nC++: vtkCesium3DTilesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCesium3DTilesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCesium3DTilesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkCesium3DTilesReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the name of the file from which to read points.\n"},
  {"GetFileName", PyvtkCesium3DTilesReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetLevel", PyvtkCesium3DTilesReader_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:int) -> None\nC++: virtual void SetLevel(int _arg)\n\nSet/Get the Level (level of detail) in the tree where you want to\nread tiles from. We start with root tile and then we refine each\ntile recursively until we reach Level. Possible values are from 0\nto NumberOfLevels - 1. Initialized to NumberOfLevels - 1 (reads\nthe most detailed tiles available)\n"},
  {"GetLevel", PyvtkCesium3DTilesReader_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: virtual int GetLevel()\n\n"},
  {"CanReadFile", PyvtkCesium3DTilesReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, name:str) -> int\nC++: virtual int CanReadFile(const char *name)\n\nReturns true if it can read the json file (it is a 3D Tiles\ntileset), false otherwise\n"},
  {"GetTileReader", PyvtkCesium3DTilesReader_GetTileReader, METH_VARARGS,
   "GetTileReader(self, index:int) -> vtkGLTFReader\nC++: vtkSmartPointer<vtkGLTFReader> GetTileReader(size_t index)\n\nReturn the vtkGLTFReader used to read the tile. Both GLTF and\nB3DM tiles have an underlying GLTF reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCesium3DTilesReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCesium3DTilesReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCesium3DTilesReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCesium3DTilesReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("level"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCesium3DTilesReader_GetLevel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCesium3DTilesReader_SetLevel(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCesium3DTilesReader_SetLevel(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLevel/SetLevel\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCesium3DTilesReader_Doc =
  "vtkCesium3DTilesReader - Reads a Cesium 3D Tiles tileset\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "Reads a Cesium 3D Tiles dataset as a vtkPartitionedDataSet. If the\n"
  "reader is used in a parallel environment it will try to balance the\n"
  "number of tiles read on each rank.  Currently, the reader only works\n"
  "with tiles saved using GLTF, GLB or B3DM formats.  Point coordinates\n"
  "in the produced VTK dataset are stored in Cartesian coordinates (cart\n"
  "proj string), as they are in the tileset. Textures can be applied\n"
  "using GetTileReader to get access to the reader for each tile which\n"
  "provides access to the texture present in that tile. For a B3DM tile,\n"
  "we provide access to the GLTF reader for the GLTF binary embedded\n"
  "inside the tile. See the test for this reader for an example on how\n"
  "to do that.\n\n"
  "BREAKING_CHANGE: In VTK 9.3.0, a version of this reader (that did not\n"
  "support textures) produced a vtkPartitionedDataSet output, where each\n"
  "tile was a partition in that dataset. Now, each tile is a\n"
  "vtkPartitionedDataSet in a vtkPartitionedDataSetCollection. Each tile\n"
  "can be split into different partitions each with its own texture.\n"
  "This should not affect usage if you simply use the reader in a\n"
  "pipeline but you'll need to change how you iterate over the output if\n"
  "you needed to do a more advanced processing.\n\n"
  "@see vtkGeoTransform, vtkCesium3DTilesWriter, vtkGLTFReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCesium3DTilesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCesium3DTiles.vtkCesium3DTilesReader", // tp_name
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
  PyvtkCesium3DTilesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCesium3DTilesReader_StaticNew()
{
  return vtkCesium3DTilesReader::New();
}

PyObject *PyvtkCesium3DTilesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCesium3DTilesReader_Type, PyvtkCesium3DTilesReader_Methods,
    "vtkCesium3DTilesReader",
 &PyvtkCesium3DTilesReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCesium3DTilesReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCesium3DTilesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCesium3DTilesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCesium3DTilesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

