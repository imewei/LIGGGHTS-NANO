// python wrapper for vtkExtentRCBPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtentRCBPartitioner.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkExtentRCBPartitioner(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkExtentRCBPartitioner_ClassNew(); }


static PyObject *
PyvtkExtentRCBPartitioner_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtentRCBPartitioner::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentRCBPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtentRCBPartitioner *tempr = vtkExtentRCBPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtentRCBPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentRCBPartitioner::NewInstance());

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
PyvtkExtentRCBPartitioner_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtentRCBPartitioner::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtentRCBPartitioner::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

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
      op->SetGlobalExtent(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0);
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
PyvtkExtentRCBPartitioner_SetGlobalExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(self, args);
    case 1:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGlobalExtent");
  return nullptr;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicateNodes(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetDuplicateNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkExtentRCBPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOn();
    }
    else
    {
      op->vtkExtentRCBPartitioner::DuplicateNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOff();
    }
    else
    {
      op->vtkExtentRCBPartitioner::DuplicateNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGhostLayers(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetNumberOfGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkExtentRCBPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumExtents() :
      op->vtkExtentRCBPartitioner::GetNumExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_Partition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Partition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Partition();
    }
    else
    {
      op->vtkExtentRCBPartitioner::Partition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetPartitionExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPartitionExtent(temp0, temp1);
    }
    else
    {
      op->vtkExtentRCBPartitioner::GetPartitionExtent(temp0, temp1);
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

static PyMethodDef PyvtkExtentRCBPartitioner_Methods[] = {
  {"IsTypeOf", PyvtkExtentRCBPartitioner_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtentRCBPartitioner_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtentRCBPartitioner_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtentRCBPartitioner\nC++: static vtkExtentRCBPartitioner *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtentRCBPartitioner_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtentRCBPartitioner\nC++: vtkExtentRCBPartitioner *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtentRCBPartitioner_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtentRCBPartitioner_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfPartitions", PyvtkExtentRCBPartitioner_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, N:int) -> None\nC++: void SetNumberOfPartitions(int N)\n\nSet/Get the number of requested partitions\n"},
  {"SetGlobalExtent", PyvtkExtentRCBPartitioner_SetGlobalExtent, METH_VARARGS,
   "SetGlobalExtent(self, imin:int, imax:int, jmin:int, jmax:int,\n    kmin:int, kmax:int) -> None\nC++: void SetGlobalExtent(int imin, int imax, int jmin, int jmax,\n    int kmin, int kmax)\nSetGlobalExtent(self, ext:[int, int, int, int, int, int]) -> None\nC++: void SetGlobalExtent(int ext[6])\n\nSet/Get the global extent array to be partitioned. The global\nextent is packed as follows: [imin,imax,jmin,jmax,kmin,kmax]\n"},
  {"SetDuplicateNodes", PyvtkExtentRCBPartitioner_SetDuplicateNodes, METH_VARARGS,
   "SetDuplicateNodes(self, _arg:int) -> None\nC++: virtual void SetDuplicateNodes(vtkTypeBool _arg)\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {"GetDuplicateNodes", PyvtkExtentRCBPartitioner_GetDuplicateNodes, METH_VARARGS,
   "GetDuplicateNodes(self) -> int\nC++: virtual vtkTypeBool GetDuplicateNodes()\n\n"},
  {"DuplicateNodesOn", PyvtkExtentRCBPartitioner_DuplicateNodesOn, METH_VARARGS,
   "DuplicateNodesOn(self) -> None\nC++: virtual void DuplicateNodesOn()\n\n"},
  {"DuplicateNodesOff", PyvtkExtentRCBPartitioner_DuplicateNodesOff, METH_VARARGS,
   "DuplicateNodesOff(self) -> None\nC++: virtual void DuplicateNodesOff()\n\n"},
  {"SetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   "SetNumberOfGhostLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfGhostLayers(int _arg)\n\nSet/Get macro for the number of ghost layers.\n"},
  {"GetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   "GetNumberOfGhostLayers(self) -> int\nC++: virtual int GetNumberOfGhostLayers()\n\n"},
  {"GetNumExtents", PyvtkExtentRCBPartitioner_GetNumExtents, METH_VARARGS,
   "GetNumExtents(self) -> int\nC++: virtual int GetNumExtents()\n\nReturns the number of extents.\n"},
  {"Partition", PyvtkExtentRCBPartitioner_Partition, METH_VARARGS,
   "Partition(self) -> None\nC++: void Partition()\n\nPartitions the extent\n"},
  {"GetPartitionExtent", PyvtkExtentRCBPartitioner_GetPartitionExtent, METH_VARARGS,
   "GetPartitionExtent(self, idx:int, ext:[int, int, int, int, int,\n    int]) -> None\nC++: void GetPartitionExtent(int idx, int ext[6])\n\nReturns the extent of the partition corresponding to the given\nID.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkExtentRCBPartitioner_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("global_extent"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtentRCBPartitioner_SetGlobalExtent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtentRCBPartitioner_SetGlobalExtent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetGlobalExtent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("duplicate_nodes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkExtentRCBPartitioner_GetDuplicateNodes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtentRCBPartitioner_SetDuplicateNodes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtentRCBPartitioner_SetDuplicateNodes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDuplicateNodes/SetDuplicateNodes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("num_extents"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkExtentRCBPartitioner_GetNumExtents(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumExtents\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_partitions"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtentRCBPartitioner_SetNumberOfPartitions(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtentRCBPartitioner_SetNumberOfPartitions(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNumberOfPartitions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_ghost_layers"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfGhostLayers/SetNumberOfGhostLayers\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkExtentRCBPartitioner_Doc =
  "vtkExtentRCBPartitioner - This method partitions a global extent to N\npartitions where N is a user\n supplied parameter.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtentRCBPartitioner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkExtentRCBPartitioner", // tp_name
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
  PyvtkExtentRCBPartitioner_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtentRCBPartitioner_StaticNew()
{
  return vtkExtentRCBPartitioner::New();
}

PyObject *PyvtkExtentRCBPartitioner_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtentRCBPartitioner_Type, PyvtkExtentRCBPartitioner_Methods,
    "vtkExtentRCBPartitioner",
 &PyvtkExtentRCBPartitioner_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkExtentRCBPartitioner_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtentRCBPartitioner(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtentRCBPartitioner_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtentRCBPartitioner", o) != 0)
  {
    Py_DECREF(o);
  }

}

