// python wrapper for vtkCellCenters
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellCenters.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellCenters(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellCenters_ClassNew(); }


static PyObject *
PyvtkCellCenters_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellCenters::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCenters::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellCenters *tempr = vtkCellCenters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellCenters *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCenters::NewInstance());

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
PyvtkCellCenters_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellCenters::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellCenters::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_SetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexCells(temp0);
    }
    else
    {
      op->vtkCellCenters::SetVertexCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_GetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexCells() :
      op->vtkCellCenters::GetVertexCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexCellsOn();
    }
    else
    {
      op->vtkCellCenters::VertexCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexCellsOff();
    }
    else
    {
      op->vtkCellCenters::VertexCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyArrays(temp0);
    }
    else
    {
      op->vtkCellCenters::SetCopyArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyArrays() :
      op->vtkCellCenters::GetCopyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOn();
    }
    else
    {
      op->vtkCellCenters::CopyArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOff();
    }
    else
    {
      op->vtkCellCenters::CopyArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_SetConvertGhostCellsToGhostPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertGhostCellsToGhostPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertGhostCellsToGhostPoints(temp0);
    }
    else
    {
      op->vtkCellCenters::SetConvertGhostCellsToGhostPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_GetConvertGhostCellsToGhostPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertGhostCellsToGhostPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertGhostCellsToGhostPoints() :
      op->vtkCellCenters::GetConvertGhostCellsToGhostPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_ConvertGhostCellsToGhostPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertGhostCellsToGhostPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertGhostCellsToGhostPointsOn();
    }
    else
    {
      op->vtkCellCenters::ConvertGhostCellsToGhostPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_ConvertGhostCellsToGhostPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertGhostCellsToGhostPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertGhostCellsToGhostPointsOff();
    }
    else
    {
      op->vtkCellCenters::ConvertGhostCellsToGhostPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenters_ComputeCellCenters(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellCenters");

  vtkDataSet *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    vtkCellCenters::ComputeCellCenters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellCenters_Methods[] = {
  {"IsTypeOf", PyvtkCellCenters_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellCenters_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellCenters_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellCenters\nC++: static vtkCellCenters *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellCenters_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellCenters\nC++: vtkCellCenters *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellCenters_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellCenters_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVertexCells", PyvtkCellCenters_SetVertexCells, METH_VARARGS,
   "SetVertexCells(self, _arg:bool) -> None\nC++: virtual void SetVertexCells(bool _arg)\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {"GetVertexCells", PyvtkCellCenters_GetVertexCells, METH_VARARGS,
   "GetVertexCells(self) -> bool\nC++: virtual bool GetVertexCells()\n\n"},
  {"VertexCellsOn", PyvtkCellCenters_VertexCellsOn, METH_VARARGS,
   "VertexCellsOn(self) -> None\nC++: virtual void VertexCellsOn()\n\n"},
  {"VertexCellsOff", PyvtkCellCenters_VertexCellsOff, METH_VARARGS,
   "VertexCellsOff(self) -> None\nC++: virtual void VertexCellsOff()\n\n"},
  {"SetCopyArrays", PyvtkCellCenters_SetCopyArrays, METH_VARARGS,
   "SetCopyArrays(self, _arg:bool) -> None\nC++: virtual void SetCopyArrays(bool _arg)\n\nEnable/disable whether input cell data arrays should be passed\nthrough (or copied) as output point data arrays. Default is\n`true` i.e. the arrays will be propagated.\n"},
  {"GetCopyArrays", PyvtkCellCenters_GetCopyArrays, METH_VARARGS,
   "GetCopyArrays(self) -> bool\nC++: virtual bool GetCopyArrays()\n\n"},
  {"CopyArraysOn", PyvtkCellCenters_CopyArraysOn, METH_VARARGS,
   "CopyArraysOn(self) -> None\nC++: virtual void CopyArraysOn()\n\n"},
  {"CopyArraysOff", PyvtkCellCenters_CopyArraysOff, METH_VARARGS,
   "CopyArraysOff(self) -> None\nC++: virtual void CopyArraysOff()\n\n"},
  {"SetConvertGhostCellsToGhostPoints", PyvtkCellCenters_SetConvertGhostCellsToGhostPoints, METH_VARARGS,
   "SetConvertGhostCellsToGhostPoints(self, _arg:bool) -> None\nC++: virtual void SetConvertGhostCellsToGhostPoints(bool _arg)\n\nEnable/disable whether the ghost cells are converted into ghost\npoints. For example, if ON, the input HIDDENCELLS and\nREFINEDCELLS are converted into HIDDENPOINTS. If OFF, the ghost\narray is just passed to the output as well as the `GhostsToSkip`\nfrom the input `vtkCellData`. It is ON by default.\n\n@sa vtkFieldData\n"},
  {"GetConvertGhostCellsToGhostPoints", PyvtkCellCenters_GetConvertGhostCellsToGhostPoints, METH_VARARGS,
   "GetConvertGhostCellsToGhostPoints(self) -> bool\nC++: virtual bool GetConvertGhostCellsToGhostPoints()\n\n"},
  {"ConvertGhostCellsToGhostPointsOn", PyvtkCellCenters_ConvertGhostCellsToGhostPointsOn, METH_VARARGS,
   "ConvertGhostCellsToGhostPointsOn(self) -> None\nC++: virtual void ConvertGhostCellsToGhostPointsOn()\n\n"},
  {"ConvertGhostCellsToGhostPointsOff", PyvtkCellCenters_ConvertGhostCellsToGhostPointsOff, METH_VARARGS,
   "ConvertGhostCellsToGhostPointsOff(self) -> None\nC++: virtual void ConvertGhostCellsToGhostPointsOff()\n\n"},
  {"ComputeCellCenters", PyvtkCellCenters_ComputeCellCenters, METH_VARARGS,
   "ComputeCellCenters(dataset:vtkDataSet, centers:vtkDoubleArray)\n    -> None\nC++: static void ComputeCellCenters(vtkDataSet *dataset,\n    vtkDoubleArray *centers)\n\nCompute centers of cells from a dataset, storing them in the\ncenters array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellCenters_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("vertex_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellCenters_GetVertexCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellCenters_SetVertexCells(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellCenters_SetVertexCells(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVertexCells/SetVertexCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellCenters_GetCopyArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellCenters_SetCopyArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellCenters_SetCopyArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyArrays/SetCopyArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("convert_ghost_cells_to_ghost_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellCenters_GetConvertGhostCellsToGhostPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellCenters_SetConvertGhostCellsToGhostPoints(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellCenters_SetConvertGhostCellsToGhostPoints(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConvertGhostCellsToGhostPoints/SetConvertGhostCellsToGhostPoints\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellCenters_Doc =
  "vtkCellCenters - generate points at center of cells\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCellCenters is a filter that takes as input any dataset and\n"
  "generates on output points at the center of the cells in the dataset.\n"
  "These points can be used for placing glyphs (vtkGlyph3D) or labeling\n"
  "(vtkLabeledDataMapper). (The center is the parametric center of the\n"
  "cell, not necessarily the geometric or bounding box center.) The cell\n"
  "attributes will be associated with the points on output.\n\n"
  "@warning\n"
  "You can choose to generate just points or points and vertex cells.\n"
  "Vertex cells are drawn during rendering; points are not. Use the ivar\n"
  "VertexCells to generate cells.\n\n"
  "ote Empty cells will be ignored but will require a one by one cell to\n"
  "point data copy that will make the processing slower.\n\n"
  "@sa\n"
  "vtkGlyph3D vtkLabeledDataMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellCenters_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkCellCenters", // tp_name
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
  PyvtkCellCenters_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellCenters_StaticNew()
{
  return vtkCellCenters::New();
}

PyObject *PyvtkCellCenters_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellCenters_Type, PyvtkCellCenters_Methods,
    "vtkCellCenters",
 &PyvtkCellCenters_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellCenters_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellCenters(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellCenters_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellCenters", o) != 0)
  {
    Py_DECREF(o);
  }

}

