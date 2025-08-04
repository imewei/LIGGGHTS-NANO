// python wrapper for vtkOrientPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkOrientPolyData(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkOrientPolyData_ClassNew(); }


static PyObject *
PyvtkOrientPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientPolyData *tempr = vtkOrientPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientPolyData::NewInstance());

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
PyvtkOrientPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_SetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConsistency(temp0);
    }
    else
    {
      op->vtkOrientPolyData::SetConsistency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_GetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConsistency() :
      op->vtkOrientPolyData::GetConsistency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_ConsistencyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsistencyOn();
    }
    else
    {
      op->vtkOrientPolyData::ConsistencyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_ConsistencyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsistencyOff();
    }
    else
    {
      op->vtkOrientPolyData::ConsistencyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_SetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoOrientNormals(temp0);
    }
    else
    {
      op->vtkOrientPolyData::SetAutoOrientNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_GetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoOrientNormals() :
      op->vtkOrientPolyData::GetAutoOrientNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_AutoOrientNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoOrientNormalsOn();
    }
    else
    {
      op->vtkOrientPolyData::AutoOrientNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_AutoOrientNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoOrientNormalsOff();
    }
    else
    {
      op->vtkOrientPolyData::AutoOrientNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_SetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldTraversal(temp0);
    }
    else
    {
      op->vtkOrientPolyData::SetNonManifoldTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_GetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNonManifoldTraversal() :
      op->vtkOrientPolyData::GetNonManifoldTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_NonManifoldTraversalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldTraversalOn();
    }
    else
    {
      op->vtkOrientPolyData::NonManifoldTraversalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_NonManifoldTraversalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldTraversalOff();
    }
    else
    {
      op->vtkOrientPolyData::NonManifoldTraversalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipNormals(temp0);
    }
    else
    {
      op->vtkOrientPolyData::SetFlipNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkOrientPolyData::GetFlipNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOn();
    }
    else
    {
      op->vtkOrientPolyData::FlipNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientPolyData_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientPolyData *op = static_cast<vtkOrientPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOff();
    }
    else
    {
      op->vtkOrientPolyData::FlipNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientPolyData_Methods[] = {
  {"IsTypeOf", PyvtkOrientPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOrientPolyData\nC++: static vtkOrientPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientPolyData\nC++: vtkOrientPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConsistency", PyvtkOrientPolyData_SetConsistency, METH_VARARGS,
   "SetConsistency(self, _arg:bool) -> None\nC++: virtual void SetConsistency(bool _arg)\n\nTurn on/off the enforcement of consistent polygon ordering.\n\nThe default is on.\n"},
  {"GetConsistency", PyvtkOrientPolyData_GetConsistency, METH_VARARGS,
   "GetConsistency(self) -> bool\nC++: virtual bool GetConsistency()\n\n"},
  {"ConsistencyOn", PyvtkOrientPolyData_ConsistencyOn, METH_VARARGS,
   "ConsistencyOn(self) -> None\nC++: virtual void ConsistencyOn()\n\n"},
  {"ConsistencyOff", PyvtkOrientPolyData_ConsistencyOff, METH_VARARGS,
   "ConsistencyOff(self) -> None\nC++: virtual void ConsistencyOff()\n\n"},
  {"SetAutoOrientNormals", PyvtkOrientPolyData_SetAutoOrientNormals, METH_VARARGS,
   "SetAutoOrientNormals(self, _arg:bool) -> None\nC++: virtual void SetAutoOrientNormals(bool _arg)\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n\nThe default is off.\n"},
  {"GetAutoOrientNormals", PyvtkOrientPolyData_GetAutoOrientNormals, METH_VARARGS,
   "GetAutoOrientNormals(self) -> bool\nC++: virtual bool GetAutoOrientNormals()\n\n"},
  {"AutoOrientNormalsOn", PyvtkOrientPolyData_AutoOrientNormalsOn, METH_VARARGS,
   "AutoOrientNormalsOn(self) -> None\nC++: virtual void AutoOrientNormalsOn()\n\n"},
  {"AutoOrientNormalsOff", PyvtkOrientPolyData_AutoOrientNormalsOff, METH_VARARGS,
   "AutoOrientNormalsOff(self) -> None\nC++: virtual void AutoOrientNormalsOff()\n\n"},
  {"SetNonManifoldTraversal", PyvtkOrientPolyData_SetNonManifoldTraversal, METH_VARARGS,
   "SetNonManifoldTraversal(self, _arg:bool) -> None\nC++: virtual void SetNonManifoldTraversal(bool _arg)\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n\nThe default is off.\n"},
  {"GetNonManifoldTraversal", PyvtkOrientPolyData_GetNonManifoldTraversal, METH_VARARGS,
   "GetNonManifoldTraversal(self) -> bool\nC++: virtual bool GetNonManifoldTraversal()\n\n"},
  {"NonManifoldTraversalOn", PyvtkOrientPolyData_NonManifoldTraversalOn, METH_VARARGS,
   "NonManifoldTraversalOn(self) -> None\nC++: virtual void NonManifoldTraversalOn()\n\n"},
  {"NonManifoldTraversalOff", PyvtkOrientPolyData_NonManifoldTraversalOff, METH_VARARGS,
   "NonManifoldTraversalOff(self) -> None\nC++: virtual void NonManifoldTraversalOff()\n\n"},
  {"SetFlipNormals", PyvtkOrientPolyData_SetFlipNormals, METH_VARARGS,
   "SetFlipNormals(self, _arg:bool) -> None\nC++: virtual void SetFlipNormals(bool _arg)\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n\nThe default is off.\n"},
  {"GetFlipNormals", PyvtkOrientPolyData_GetFlipNormals, METH_VARARGS,
   "GetFlipNormals(self) -> bool\nC++: virtual bool GetFlipNormals()\n\n"},
  {"FlipNormalsOn", PyvtkOrientPolyData_FlipNormalsOn, METH_VARARGS,
   "FlipNormalsOn(self) -> None\nC++: virtual void FlipNormalsOn()\n\n"},
  {"FlipNormalsOff", PyvtkOrientPolyData_FlipNormalsOff, METH_VARARGS,
   "FlipNormalsOff(self) -> None\nC++: virtual void FlipNormalsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkOrientPolyData_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("consistency"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOrientPolyData_GetConsistency(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOrientPolyData_SetConsistency(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOrientPolyData_SetConsistency(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetConsistency/SetConsistency\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("auto_orient_normals"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOrientPolyData_GetAutoOrientNormals(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOrientPolyData_SetAutoOrientNormals(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOrientPolyData_SetAutoOrientNormals(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAutoOrientNormals/SetAutoOrientNormals\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("non_manifold_traversal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOrientPolyData_GetNonManifoldTraversal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOrientPolyData_SetNonManifoldTraversal(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOrientPolyData_SetNonManifoldTraversal(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNonManifoldTraversal/SetNonManifoldTraversal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("flip_normals"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkOrientPolyData_GetFlipNormals(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkOrientPolyData_SetFlipNormals(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkOrientPolyData_SetFlipNormals(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFlipNormals/SetFlipNormals\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkOrientPolyData_Doc =
  "vtkOrientPolyData - Auto detect correct normal orientation and/or\nenforce consistent polygon ordering.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkOrientPolyData is a filter that orients the normals of a polygonal\n"
  "mesh, and/or enforces consistent polygon ordering. It is also\n"
  "possible to globally flip the normal orientation.\n\n"
  "@sa\n"
  "vtkPolyDataNormals vtkSplitPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkOrientPolyData", // tp_name
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
  PyvtkOrientPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientPolyData_StaticNew()
{
  return vtkOrientPolyData::New();
}

PyObject *PyvtkOrientPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientPolyData_Type, PyvtkOrientPolyData_Methods,
    "vtkOrientPolyData",
 &PyvtkOrientPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkOrientPolyData_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

