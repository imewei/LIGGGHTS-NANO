// python wrapper for vtkPStructuredGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPStructuredGridConnectivity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPStructuredGridConnectivity(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPStructuredGridConnectivity_ClassNew(); }


static PyObject *
PyvtkPStructuredGridConnectivity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPStructuredGridConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPStructuredGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPStructuredGridConnectivity *tempr = vtkPStructuredGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPStructuredGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPStructuredGridConnectivity::NewInstance());

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
PyvtkPStructuredGridConnectivity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPStructuredGridConnectivity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPStructuredGridConnectivity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

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
      op->vtkPStructuredGridConnectivity::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPStructuredGridConnectivity::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_SetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGrids(temp0);
    }
    else
    {
      op->vtkPStructuredGridConnectivity::SetNumberOfGrids(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkUnsignedCharArray *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkPoints *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetVTKObject(temp6, "vtkPoints"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkPStructuredGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkPStructuredGridConnectivity_GetNumberOfLocalGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLocalGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLocalGrids() :
      op->vtkPStructuredGridConnectivity::GetNumberOfLocalGrids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_GetGridRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridRank(temp0) :
      op->vtkPStructuredGridConnectivity::GetGridRank(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_IsGridRemote(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsGridRemote");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsGridRemote(temp0) :
      op->vtkPStructuredGridConnectivity::IsGridRemote(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_IsGridLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsGridLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsGridLocal(temp0) :
      op->vtkPStructuredGridConnectivity::IsGridLocal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPStructuredGridConnectivity::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNeighbors();
    }
    else
    {
      op->vtkPStructuredGridConnectivity::ComputeNeighbors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPStructuredGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPStructuredGridConnectivity *op = static_cast<vtkPStructuredGridConnectivity *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CreateGhostLayers(temp0);
    }
    else
    {
      op->vtkPStructuredGridConnectivity::CreateGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPStructuredGridConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkPStructuredGridConnectivity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPStructuredGridConnectivity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPStructuredGridConnectivity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPStructuredGridConnectivity\nC++: static vtkPStructuredGridConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPStructuredGridConnectivity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPStructuredGridConnectivity\nC++: vtkPStructuredGridConnectivity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPStructuredGridConnectivity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPStructuredGridConnectivity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkPStructuredGridConnectivity_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet & Get the process controller\n"},
  {"GetController", PyvtkPStructuredGridConnectivity_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetNumberOfGrids", PyvtkPStructuredGridConnectivity_SetNumberOfGrids, METH_VARARGS,
   "SetNumberOfGrids(self, N:int) -> None\nC++: void SetNumberOfGrids(unsigned int N) override;\n\nSets the total number of domains distributed among processors\n"},
  {"RegisterGrid", PyvtkPStructuredGridConnectivity_RegisterGrid, METH_VARARGS,
   "RegisterGrid(self, gridID:int, extents:[int, int, int, int, int,\n    int], nodesGhostArray:vtkUnsignedCharArray,\n    cellGhostArray:vtkUnsignedCharArray, pointData:vtkPointData,\n    cellData:vtkCellData, gridNodes:vtkPoints) -> None\nC++: void RegisterGrid(int gridID, int extents[6],\n    vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes) override;\n\nSee vtkStructuredGridConnectivity::RegisterGrid\n"},
  {"GetNumberOfLocalGrids", PyvtkPStructuredGridConnectivity_GetNumberOfLocalGrids, METH_VARARGS,
   "GetNumberOfLocalGrids(self) -> int\nC++: int GetNumberOfLocalGrids()\n\nReturns the number of local grids registers by the process that\nowns the current vtkPStructuredGridConnectivity instance\n"},
  {"GetGridRank", PyvtkPStructuredGridConnectivity_GetGridRank, METH_VARARGS,
   "GetGridRank(self, gridID:int) -> int\nC++: int GetGridRank(int gridID)\n\nReturns the rank of the given gridID. A nominal value of -1 for\nthe return value of this method indicates that possibly\nComputeNeighbors has not been called and consequently the\nGridRanks vector has not been populated yet.\n"},
  {"IsGridRemote", PyvtkPStructuredGridConnectivity_IsGridRemote, METH_VARARGS,
   "IsGridRemote(self, gridID:int) -> bool\nC++: bool IsGridRemote(int gridID)\n\nReturns true iff the grid is remote, otherwise false.\n"},
  {"IsGridLocal", PyvtkPStructuredGridConnectivity_IsGridLocal, METH_VARARGS,
   "IsGridLocal(self, gridID:int) -> bool\nC++: bool IsGridLocal(int gridID)\n\nReturns true iff the grid corresponding to the given gridID is\nlocal.\n"},
  {"Initialize", PyvtkPStructuredGridConnectivity_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nInitializes this instance of vtkPStructuredGridConnectivity,\nessentially, the acquires the local process ID from the\nregistered controller. If a controller is not registered, the\nglobal controller is set.\n"},
  {"ComputeNeighbors", PyvtkPStructuredGridConnectivity_ComputeNeighbors, METH_VARARGS,
   "ComputeNeighbors(self) -> None\nC++: void ComputeNeighbors() override;\n\nComputes the neighboring topology of a distributed structured\ngrid data-set. See\nvtkStructuredGridConnectivity::ComputeNeighbors\n"},
  {"CreateGhostLayers", PyvtkPStructuredGridConnectivity_CreateGhostLayers, METH_VARARGS,
   "CreateGhostLayers(self, N:int=1) -> None\nC++: void CreateGhostLayers(int N=1) override;\n\nCreates ghost layers on the grids owned by this process using\ndata from both local and remote block neighbors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPStructuredGridConnectivity_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPStructuredGridConnectivity_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPStructuredGridConnectivity_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPStructuredGridConnectivity_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_grids"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPStructuredGridConnectivity_SetNumberOfGrids(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPStructuredGridConnectivity_SetNumberOfGrids(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfGrids\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_local_grids"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPStructuredGridConnectivity_GetNumberOfLocalGrids(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfLocalGrids\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPStructuredGridConnectivity_Doc =
  "vtkPStructuredGridConnectivity -  vtkPStructuredGridConnectivity\ninherits from vtkStructuredGridConnectivity\n and implements functionality to compute the neighboring topology\nwithin a\n single, partitioned and distributed structured grid dataset.\n\n"
  "Superclass: vtkStructuredGridConnectivity\n\n"
  "@warning\n"
  " Initialize(), ComputeNeighbors() and CreateGhostLayers() are\n"
  "collective\n"
  " operations, every process must call that method.\n\n"
  "@sa\n"
  " vtkStructuredGridConnectivity\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPStructuredGridConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallelGeometry.vtkPStructuredGridConnectivity", // tp_name
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
  PyvtkPStructuredGridConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPStructuredGridConnectivity_StaticNew()
{
  return vtkPStructuredGridConnectivity::New();
}

PyObject *PyvtkPStructuredGridConnectivity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPStructuredGridConnectivity_Type, PyvtkPStructuredGridConnectivity_Methods,
    "vtkPStructuredGridConnectivity",
 &PyvtkPStructuredGridConnectivity_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStructuredGridConnectivity");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPStructuredGridConnectivity_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPStructuredGridConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPStructuredGridConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPStructuredGridConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

