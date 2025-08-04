// python wrapper for vtkCellGridRangeQuery
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellGridRangeQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridRangeQuery(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridRangeQuery_ClassNew(); }

#ifndef DECLARED_PyvtkCellGridQuery_ClassNew
extern "C" { PyObject *PyvtkCellGridQuery_ClassNew(); }
#define DECLARED_PyvtkCellGridQuery_ClassNew
#endif

static PyObject *
PyvtkCellGridRangeQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridRangeQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridRangeQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridRangeQuery *tempr = vtkCellGridRangeQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridRangeQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridRangeQuery::NewInstance());

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
PyvtkCellGridRangeQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridRangeQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridRangeQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkCellGridRangeQuery::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkCellGridRangeQuery::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_SetFiniteRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiniteRange(temp0);
    }
    else
    {
      op->vtkCellGridRangeQuery::SetFiniteRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetFiniteRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiniteRange() :
      op->vtkCellGridRangeQuery::GetFiniteRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_SetCellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    if (ap.IsBound())
    {
      op->SetCellGrid(temp0);
    }
    else
    {
      op->vtkCellGridRangeQuery::SetCellGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetCellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetCellGrid() :
      op->vtkCellGridRangeQuery::GetCellGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_SetCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    if (ap.IsBound())
    {
      op->SetCellAttribute(temp0);
    }
    else
    {
      op->vtkCellGridRangeQuery::SetCellAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttribute() :
      op->vtkCellGridRangeQuery::GetCellAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridRangeQuery::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridRangeQuery::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridRangeQuery_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetRange(temp0, temp1);
    }
    else
    {
      op->vtkCellGridRangeQuery::GetRange(temp0, temp1);
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
PyvtkCellGridRangeQuery_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridRangeQuery *op = static_cast<vtkCellGridRangeQuery *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0);
    }
    else
    {
      op->vtkCellGridRangeQuery::GetRange(temp0);
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
PyvtkCellGridRangeQuery_GetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellGridRangeQuery_GetRange_s1(self, args);
    case 1:
      return PyvtkCellGridRangeQuery_GetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}

static PyMethodDef PyvtkCellGridRangeQuery_Methods[] = {
  {"IsTypeOf", PyvtkCellGridRangeQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridRangeQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridRangeQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridRangeQuery\nC++: static vtkCellGridRangeQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridRangeQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridRangeQuery\nC++: vtkCellGridRangeQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridRangeQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridRangeQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComponent", PyvtkCellGridRangeQuery_SetComponent, METH_VARARGS,
   "SetComponent(self, _arg:int) -> None\nC++: virtual void SetComponent(int _arg)\n\nSet/get the component whose range should be computed.\n\nThis must be modified before the query is evaluated.\n"},
  {"GetComponent", PyvtkCellGridRangeQuery_GetComponent, METH_VARARGS,
   "GetComponent(self) -> int\nC++: virtual int GetComponent()\n\n"},
  {"SetFiniteRange", PyvtkCellGridRangeQuery_SetFiniteRange, METH_VARARGS,
   "SetFiniteRange(self, _arg:int) -> None\nC++: virtual void SetFiniteRange(vtkTypeBool _arg)\n\nSet/get whether component whose range should be computed.\n\nThis must be modified before the query is evaluated.\n"},
  {"GetFiniteRange", PyvtkCellGridRangeQuery_GetFiniteRange, METH_VARARGS,
   "GetFiniteRange(self) -> int\nC++: virtual vtkTypeBool GetFiniteRange()\n\n"},
  {"SetCellGrid", PyvtkCellGridRangeQuery_SetCellGrid, METH_VARARGS,
   "SetCellGrid(self, grid:vtkCellGrid) -> None\nC++: virtual void SetCellGrid(vtkCellGrid *grid)\n\nSet/get the cell-grid that holds the cell-attribute's arrays.\n\nThis must be set before the query is evaluated.\n"},
  {"GetCellGrid", PyvtkCellGridRangeQuery_GetCellGrid, METH_VARARGS,
   "GetCellGrid(self) -> vtkCellGrid\nC++: virtual vtkCellGrid *GetCellGrid()\n\n"},
  {"SetCellAttribute", PyvtkCellGridRangeQuery_SetCellAttribute, METH_VARARGS,
   "SetCellAttribute(self, _arg:vtkCellAttribute) -> None\nC++: virtual void SetCellAttribute(vtkCellAttribute *_arg)\n\nSet/get the cell-attribute whose range should be computed.\n\nThis must be modified before the query is evaluated.\n"},
  {"GetCellAttribute", PyvtkCellGridRangeQuery_GetCellAttribute, METH_VARARGS,
   "GetCellAttribute(self) -> vtkCellAttribute\nC++: virtual vtkCellAttribute *GetCellAttribute()\n\n"},
  {"Initialize", PyvtkCellGridRangeQuery_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: bool Initialize() override;\n\nInvoked during evaluation before any cell-grid responders are\nrun.\n"},
  {"Finalize", PyvtkCellGridRangeQuery_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: bool Finalize() override;\n\nInvoked during evaluation after all cell-grid responders are run.\n"},
  {"GetRange", PyvtkCellGridRangeQuery_GetRange, METH_VARARGS,
   "GetRange(self, component:int, range:[float, ...]) -> None\nC++: void GetRange(int component, double *range)\nGetRange(self, range:[float, ...]) -> None\nC++: void GetRange(double *range)\n\nReturn the computed range (after the query is evaluated).\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridRangeQuery_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("component"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRangeQuery_GetComponent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRangeQuery_SetComponent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRangeQuery_SetComponent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComponent/SetComponent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("finite_range"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRangeQuery_GetFiniteRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRangeQuery_SetFiniteRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRangeQuery_SetFiniteRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFiniteRange/SetFiniteRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_grid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRangeQuery_GetCellGrid(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRangeQuery_SetCellGrid(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRangeQuery_SetCellGrid(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellGrid/SetCellGrid\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_attribute"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridRangeQuery_GetCellAttribute(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridRangeQuery_SetCellAttribute(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridRangeQuery_SetCellAttribute(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellAttribute/SetCellAttribute\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridRangeQuery_Doc =
  "vtkCellGridRangeQuery - Compute the range of a component of some\nvtkCellAttribute.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "If FiniteRange is true, then the range will omit any NaN or \302\261Inf\n"
  "values present in the data. Otherwise (the default), the range may\n"
  "contain these exceptional values.\n\n"
  "If Component is + -2 (the default), the range of L\342\202\202-norms is\n"
  "computed. + -1, the range of L\342\202\201-norms is computed. + out of bounds,\n"
  "then an invalid range will be returned ([1, 0]).\n\n"
  "Note that this query is intended to be run by vtkCellGrid::GetRange()\n"
  "since the cell-grid holds a cache of ranges. You may run it outside\n"
  "of this method, but that may cause unnecessary re-computation of\n"
  "ranges.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridRangeQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridRangeQuery", // tp_name
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
  PyvtkCellGridRangeQuery_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridRangeQuery_StaticNew()
{
  return vtkCellGridRangeQuery::New();
}

PyObject *PyvtkCellGridRangeQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridRangeQuery_Type, PyvtkCellGridRangeQuery_Methods,
    "vtkCellGridRangeQuery",
 &PyvtkCellGridRangeQuery_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCellGridQuery_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridRangeQuery_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridRangeQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridRangeQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridRangeQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

