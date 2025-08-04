// python wrapper for vtkForceStaticMesh
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkForceStaticMesh.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkForceStaticMesh(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkForceStaticMesh_ClassNew(); }


static PyObject *
PyvtkForceStaticMesh_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkForceStaticMesh::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkForceStaticMesh::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkForceStaticMesh *tempr = vtkForceStaticMesh::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkForceStaticMesh *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkForceStaticMesh::NewInstance());

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
PyvtkForceStaticMesh_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkForceStaticMesh::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkForceStaticMesh::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_SetForceCacheComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceCacheComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceCacheComputation(temp0);
    }
    else
    {
      op->vtkForceStaticMesh::SetForceCacheComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_GetForceCacheComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCacheComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceCacheComputation() :
      op->vtkForceStaticMesh::GetForceCacheComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_ForceCacheComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCacheComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCacheComputationOn();
    }
    else
    {
      op->vtkForceStaticMesh::ForceCacheComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceStaticMesh_ForceCacheComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCacheComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceStaticMesh *op = static_cast<vtkForceStaticMesh *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCacheComputationOff();
    }
    else
    {
      op->vtkForceStaticMesh::ForceCacheComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkForceStaticMesh_Methods[] = {
  {"IsTypeOf", PyvtkForceStaticMesh_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkForceStaticMesh_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkForceStaticMesh_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkForceStaticMesh\nC++: static vtkForceStaticMesh *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkForceStaticMesh_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkForceStaticMesh\nC++: vtkForceStaticMesh *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkForceStaticMesh_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkForceStaticMesh_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetForceCacheComputation", PyvtkForceStaticMesh_SetForceCacheComputation, METH_VARARGS,
   "SetForceCacheComputation(self, _arg:bool) -> None\nC++: virtual void SetForceCacheComputation(bool _arg)\n\nWhen set to true, this will force this filter to recompute its\ncache. Default is false.\n"},
  {"GetForceCacheComputation", PyvtkForceStaticMesh_GetForceCacheComputation, METH_VARARGS,
   "GetForceCacheComputation(self) -> bool\nC++: virtual bool GetForceCacheComputation()\n\nWhen set to true, this will force this filter to recompute its\ncache. Default is false.\n"},
  {"ForceCacheComputationOn", PyvtkForceStaticMesh_ForceCacheComputationOn, METH_VARARGS,
   "ForceCacheComputationOn(self) -> None\nC++: virtual void ForceCacheComputationOn()\n\nWhen set to true, this will force this filter to recompute its\ncache. Default is false.\n"},
  {"ForceCacheComputationOff", PyvtkForceStaticMesh_ForceCacheComputationOff, METH_VARARGS,
   "ForceCacheComputationOff(self) -> None\nC++: virtual void ForceCacheComputationOff()\n\nWhen set to true, this will force this filter to recompute its\ncache. Default is false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkForceStaticMesh_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("force_cache_computation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkForceStaticMesh_GetForceCacheComputation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkForceStaticMesh_SetForceCacheComputation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkForceStaticMesh_SetForceCacheComputation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetForceCacheComputation/SetForceCacheComputation\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkForceStaticMesh_Doc =
  "vtkForceStaticMesh - Takes in input as a cache the first time it is\nexecuted then use it as a static mesh\n\n"
  "Superclass: vtkPassThrough\n\n"
  "The Force Static Mesh filter create a cache the first time it is used\n"
  "using its input. It will then only update PointData, CellData and\n"
  "FieldData from the input if their dimensions are valid. This filter\n"
  "will keep the initial given geometry as long as its input keeps the\n"
  "same number of points and cells (and ForceCacheComputation is false).\n"
  "This may lead to inconsistent attributes if the geometry has changed\n"
  "its connectivity.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkForceStaticMesh_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTemporal.vtkForceStaticMesh", // tp_name
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
  PyvtkForceStaticMesh_Doc, // tp_doc
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

static vtkObjectBase *PyvtkForceStaticMesh_StaticNew()
{
  return vtkForceStaticMesh::New();
}

PyObject *PyvtkForceStaticMesh_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkForceStaticMesh_Type, PyvtkForceStaticMesh_Methods,
    "vtkForceStaticMesh",
 &PyvtkForceStaticMesh_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassThrough");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkForceStaticMesh_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkForceStaticMesh(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkForceStaticMesh_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkForceStaticMesh", o) != 0)
  {
    Py_DECREF(o);
  }

}

