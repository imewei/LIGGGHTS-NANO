// python wrapper for vtkGenerateIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenerateIds.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGenerateIds(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGenerateIds_ClassNew(); }


static PyObject *
PyvtkGenerateIds_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateIds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateIds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateIds *tempr = vtkGenerateIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateIds::NewInstance());

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
PyvtkGenerateIds_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenerateIds::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenerateIds::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkGenerateIds::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkGenerateIds::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_PointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOn();
    }
    else
    {
      op->vtkGenerateIds::PointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_PointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOff();
    }
    else
    {
      op->vtkGenerateIds::PointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIds(temp0);
    }
    else
    {
      op->vtkGenerateIds::SetCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCellIds() :
      op->vtkGenerateIds::GetCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_CellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOn();
    }
    else
    {
      op->vtkGenerateIds::CellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_CellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOff();
    }
    else
    {
      op->vtkGenerateIds::CellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkGenerateIds::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkGenerateIds::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkGenerateIds::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkGenerateIds::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SetPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdsArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIds::SetPointIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPointIdsArrayName() :
      op->vtkGenerateIds::GetPointIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_SetCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdsArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIds::SetCellIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIds_GetCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIds *op = static_cast<vtkGenerateIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCellIdsArrayName() :
      op->vtkGenerateIds::GetCellIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateIds_Methods[] = {
  {"IsTypeOf", PyvtkGenerateIds_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateIds_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateIds_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenerateIds\nC++: static vtkGenerateIds *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateIds_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenerateIds\nC++: vtkGenerateIds *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenerateIds_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenerateIds_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointIds", PyvtkGenerateIds_SetPointIds, METH_VARARGS,
   "SetPointIds(self, _arg:bool) -> None\nC++: virtual void SetPointIds(bool _arg)\n\nEnable/disable the generation of point ids. Default is on.\n\note: Unused if the input is a vtkHyperTreeGrid instance (we do\nnot have point data on HTGs, always off).\n"},
  {"GetPointIds", PyvtkGenerateIds_GetPointIds, METH_VARARGS,
   "GetPointIds(self) -> bool\nC++: virtual bool GetPointIds()\n\n"},
  {"PointIdsOn", PyvtkGenerateIds_PointIdsOn, METH_VARARGS,
   "PointIdsOn(self) -> None\nC++: virtual void PointIdsOn()\n\n"},
  {"PointIdsOff", PyvtkGenerateIds_PointIdsOff, METH_VARARGS,
   "PointIdsOff(self) -> None\nC++: virtual void PointIdsOff()\n\n"},
  {"SetCellIds", PyvtkGenerateIds_SetCellIds, METH_VARARGS,
   "SetCellIds(self, _arg:bool) -> None\nC++: virtual void SetCellIds(bool _arg)\n\nEnable/disable the generation of cell ids. Default is on.\n\note: Unused if the input is a vtkHyperTreeGrid instance (we have\nonly cell data on HTGs, always on).\n"},
  {"GetCellIds", PyvtkGenerateIds_GetCellIds, METH_VARARGS,
   "GetCellIds(self) -> bool\nC++: virtual bool GetCellIds()\n\n"},
  {"CellIdsOn", PyvtkGenerateIds_CellIdsOn, METH_VARARGS,
   "CellIdsOn(self) -> None\nC++: virtual void CellIdsOn()\n\n"},
  {"CellIdsOff", PyvtkGenerateIds_CellIdsOff, METH_VARARGS,
   "CellIdsOff(self) -> None\nC++: virtual void CellIdsOff()\n\n"},
  {"SetFieldData", PyvtkGenerateIds_SetFieldData, METH_VARARGS,
   "SetFieldData(self, _arg:bool) -> None\nC++: virtual void SetFieldData(bool _arg)\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"GetFieldData", PyvtkGenerateIds_GetFieldData, METH_VARARGS,
   "GetFieldData(self) -> bool\nC++: virtual bool GetFieldData()\n\n"},
  {"FieldDataOn", PyvtkGenerateIds_FieldDataOn, METH_VARARGS,
   "FieldDataOn(self) -> None\nC++: virtual void FieldDataOn()\n\n"},
  {"FieldDataOff", PyvtkGenerateIds_FieldDataOff, METH_VARARGS,
   "FieldDataOff(self) -> None\nC++: virtual void FieldDataOff()\n\n"},
  {"SetPointIdsArrayName", PyvtkGenerateIds_SetPointIdsArrayName, METH_VARARGS,
   "SetPointIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetPointIdsArrayName(std::string _arg)\n\nSet/Get the name of the Ids array for points, if generated. By\ndefault, it is set to \"vtkPointIds\".\n\note: Unused if the input is a vtkHyperTreeGrid instance.\n"},
  {"GetPointIdsArrayName", PyvtkGenerateIds_GetPointIdsArrayName, METH_VARARGS,
   "GetPointIdsArrayName(self) -> str\nC++: virtual std::string GetPointIdsArrayName()\n\n"},
  {"SetCellIdsArrayName", PyvtkGenerateIds_SetCellIdsArrayName, METH_VARARGS,
   "SetCellIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetCellIdsArrayName(std::string _arg)\n\nSet/Get the name of the Ids array for points, if generated. By\ndefault, it is set to \"vtkCellIds\".\n"},
  {"GetCellIdsArrayName", PyvtkGenerateIds_GetCellIdsArrayName, METH_VARARGS,
   "GetCellIdsArrayName(self) -> str\nC++: virtual std::string GetCellIdsArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGenerateIds_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("point_ids"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateIds_GetPointIds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateIds_SetPointIds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateIds_SetPointIds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPointIds/SetPointIds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_ids"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateIds_GetCellIds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateIds_SetCellIds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateIds_SetCellIds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellIds/SetCellIds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateIds_GetFieldData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateIds_SetFieldData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateIds_SetFieldData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFieldData/SetFieldData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_ids_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateIds_GetPointIdsArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateIds_SetPointIdsArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateIds_SetPointIdsArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPointIdsArrayName/SetPointIdsArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_ids_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateIds_GetCellIdsArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenerateIds_SetCellIdsArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenerateIds_SetCellIdsArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellIdsArrayName/SetCellIdsArrayName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGenerateIds_Doc =
  "vtkGenerateIds - generate scalars or field data from point and cell\nids\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkGenerateIds is a filter that generates scalars or field data using\n"
  "cell and point ids. That is, the point attribute data scalars or\n"
  "field data are generated from the point ids, and the cell attribute\n"
  "data scalars or field data are generated from the cell ids.\n\n"
  "Typically this filter is used with vtkLabeledDataMapper (and possibly\n"
  "vtkSelectVisiblePoints) to create labels for points and cells, or\n"
  "labels for the point or cell data scalar values.\n\n"
  "This filter supports vtkDataSet and vtkHyperTeeGrid instances as\n"
  "input. In the case of vtkHyperTreeGrid, only cell ids are generated.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenerateIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkGenerateIds", // tp_name
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
  PyvtkGenerateIds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateIds_StaticNew()
{
  return vtkGenerateIds::New();
}

PyObject *PyvtkGenerateIds_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenerateIds_Type, PyvtkGenerateIds_Methods,
    "vtkGenerateIds",
 &PyvtkGenerateIds_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGenerateIds_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateIds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateIds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateIds", o) != 0)
  {
    Py_DECREF(o);
  }

}

