// python wrapper for vtkStructuredImplicitConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredImplicitConnectivity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkStructuredImplicitConnectivity(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkStructuredImplicitConnectivity_ClassNew(); }


static PyObject *
PyvtkStructuredImplicitConnectivity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredImplicitConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredImplicitConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredImplicitConnectivity *tempr = vtkStructuredImplicitConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredImplicitConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredImplicitConnectivity::NewInstance());

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
PyvtkStructuredImplicitConnectivity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredImplicitConnectivity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredImplicitConnectivity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::SetWholeExtent(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkPoints *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkPointData"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->RegisterGrid(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::RegisterGrid(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_RegisterRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkDataArray *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  vtkDataArray *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->RegisterRectilinearGrid(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::RegisterRectilinearGrid(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_EstablishConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstablishConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EstablishConnectivity();
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::EstablishConnectivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_HasImplicitConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasImplicitConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasImplicitConnectivity() :
      op->vtkStructuredImplicitConnectivity::HasImplicitConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_ExchangeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExchangeData();
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::ExchangeData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkStructuredGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->GetOutputStructuredGrid(temp0, temp1);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::GetOutputStructuredGrid(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetOutputImageData(temp0, temp1);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::GetOutputImageData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredImplicitConnectivity_GetOutputRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredImplicitConnectivity *op = static_cast<vtkStructuredImplicitConnectivity *>(vp);

  int temp0;
  vtkRectilinearGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRectilinearGrid"))
  {
    if (ap.IsBound())
    {
      op->GetOutputRectilinearGrid(temp0, temp1);
    }
    else
    {
      op->vtkStructuredImplicitConnectivity::GetOutputRectilinearGrid(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredImplicitConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkStructuredImplicitConnectivity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredImplicitConnectivity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredImplicitConnectivity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredImplicitConnectivity\nC++: static vtkStructuredImplicitConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredImplicitConnectivity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredImplicitConnectivity\nC++: vtkStructuredImplicitConnectivity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredImplicitConnectivity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredImplicitConnectivity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkStructuredImplicitConnectivity_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, wholeExt:[int, int, int, int, int, int])\n    -> None\nC++: void SetWholeExtent(int wholeExt[6])\n\nSets the whole extent for the distributed structured domain.\n\\param wholeExt the extent of the entire domain (in).\n\note All ranks must call this method with the same whole extent.\n\\post this->DomainInfo != nullptr\n"},
  {"RegisterGrid", PyvtkStructuredImplicitConnectivity_RegisterGrid, METH_VARARGS,
   "RegisterGrid(self, gridID:int, extent:[int, int, int, int, int,\n    int], gridPnts:vtkPoints, pointData:vtkPointData) -> None\nC++: void RegisterGrid(int gridID, int extent[6],\n    vtkPoints *gridPnts, vtkPointData *pointData)\n\n"},
  {"RegisterRectilinearGrid", PyvtkStructuredImplicitConnectivity_RegisterRectilinearGrid, METH_VARARGS,
   "RegisterRectilinearGrid(self, gridID:int, extent:[int, int, int,\n    int, int, int], xcoords:vtkDataArray, ycoords:vtkDataArray,\n    zcoords:vtkDataArray, pointData:vtkPointData) -> None\nC++: void RegisterRectilinearGrid(int gridID, int extent[6],\n    vtkDataArray *xcoords, vtkDataArray *ycoords,\n    vtkDataArray *zcoords, vtkPointData *pointData)\n\n"},
  {"EstablishConnectivity", PyvtkStructuredImplicitConnectivity_EstablishConnectivity, METH_VARARGS,
   "EstablishConnectivity(self) -> None\nC++: void EstablishConnectivity()\n\nFinds implicit connectivity for a distributed structured dataset.\n\note This is a collective operation, all ranks must call this\nmethod.\n\\pre this->Controller != nullptr\n\\pre this->DomainInfo != nullptr\n"},
  {"HasImplicitConnectivity", PyvtkStructuredImplicitConnectivity_HasImplicitConnectivity, METH_VARARGS,
   "HasImplicitConnectivity(self) -> bool\nC++: bool HasImplicitConnectivity()\n\nChecks if there is implicit connectivity.\n\\return status true if implicit connectivity in one or more\n    dimensions.\n"},
  {"ExchangeData", PyvtkStructuredImplicitConnectivity_ExchangeData, METH_VARARGS,
   "ExchangeData(self) -> None\nC++: void ExchangeData()\n\nExchanges one layer (row or column) of data between neighboring\ngrids to fix the implicit connectivity.\n\note This is a collective operation, all ranks must call this\nmethod.\n\\pre this->Controller != nullptr\n\\pre this->DomainInfo != nullptr\n"},
  {"GetOutputStructuredGrid", PyvtkStructuredImplicitConnectivity_GetOutputStructuredGrid, METH_VARARGS,
   "GetOutputStructuredGrid(self, gridID:int, grid:vtkStructuredGrid)\n    -> None\nC++: void GetOutputStructuredGrid(int gridID,\n    vtkStructuredGrid *grid)\n\nGets the output structured grid instance on this process.\n\\param gridID the ID of the grid\n\\param grid pointer to data-structure where to store the output.\n"},
  {"GetOutputImageData", PyvtkStructuredImplicitConnectivity_GetOutputImageData, METH_VARARGS,
   "GetOutputImageData(self, gridID:int, grid:vtkImageData) -> None\nC++: void GetOutputImageData(int gridID, vtkImageData *grid)\n\nGets the output uniform grid instance on this process.\n\\param gridID the ID of the grid.\n\\param grid pointer to data-structure where to store the output.\n"},
  {"GetOutputRectilinearGrid", PyvtkStructuredImplicitConnectivity_GetOutputRectilinearGrid, METH_VARARGS,
   "GetOutputRectilinearGrid(self, gridID:int,\n    grid:vtkRectilinearGrid) -> None\nC++: void GetOutputRectilinearGrid(int gridID,\n    vtkRectilinearGrid *grid)\n\nGets the output rectilinear grid instance on this process.\n\\param gridID the ID of the grid.\n\\param grid pointer to data-structure where to store the output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkStructuredImplicitConnectivity_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("whole_extent"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkStructuredImplicitConnectivity_SetWholeExtent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkStructuredImplicitConnectivity_SetWholeExtent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetWholeExtent\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkStructuredImplicitConnectivity_Doc =
  "vtkStructuredImplicitConnectivity - a distributed structured dataset\nthat is implicitly connected among partitions without abutting.\n\n"
  "Superclass: vtkObject\n\n"
  "This creates a gap between partitions and introduces a cell that\n"
  "spans multiple zones. This typically arises with finite difference\n"
  "grids, which are partitioned with respect to the nodes of the grid,\n"
  "or, when a filter samples the grid, e.g., to get a lower resolution\n"
  "representation.\n\n"
  "This class is intended as a lower-level helper for higher level VTK\n"
  "filters that provides functionality for resolving the implicit\n"
  "connectivity (gap) between two or more partitions of a distributed\n"
  "structured dataset.\n\n"
  "@warning\n"
  "The present implementation requires: \n"
  " one block/grid per rank. \n"
  " 2-D (XY,YZ or XZ planes) or 3-D datasets. \n"
  " node-center fields must match across processes.  \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredImplicitConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallelMPI.vtkStructuredImplicitConnectivity", // tp_name
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
  PyvtkStructuredImplicitConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredImplicitConnectivity_StaticNew()
{
  return vtkStructuredImplicitConnectivity::New();
}

PyObject *PyvtkStructuredImplicitConnectivity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredImplicitConnectivity_Type, PyvtkStructuredImplicitConnectivity_Methods,
    "vtkStructuredImplicitConnectivity",
 &PyvtkStructuredImplicitConnectivity_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkStructuredImplicitConnectivity_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredImplicitConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredImplicitConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredImplicitConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

