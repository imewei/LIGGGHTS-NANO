// python wrapper for vtkBoxMuellerRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoxMuellerRandomSequence.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkBoxMuellerRandomSequence(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkBoxMuellerRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkGaussianRandomSequence_ClassNew
extern "C" { PyObject *PyvtkGaussianRandomSequence_ClassNew(); }
#define DECLARED_PyvtkGaussianRandomSequence_ClassNew
#endif

static PyObject *
PyvtkBoxMuellerRandomSequence_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxMuellerRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxMuellerRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxMuellerRandomSequence *tempr = vtkBoxMuellerRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxMuellerRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxMuellerRandomSequence::NewInstance());

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
PyvtkBoxMuellerRandomSequence_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoxMuellerRandomSequence::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoxMuellerRandomSequence::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkBoxMuellerRandomSequence::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetUniformSequence() :
      op->vtkBoxMuellerRandomSequence::GetUniformSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_SetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetUniformSequence(temp0);
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::SetUniformSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxMuellerRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkBoxMuellerRandomSequence_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxMuellerRandomSequence_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxMuellerRandomSequence_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoxMuellerRandomSequence\nC++: static vtkBoxMuellerRandomSequence *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxMuellerRandomSequence_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoxMuellerRandomSequence\nC++: vtkBoxMuellerRandomSequence *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoxMuellerRandomSequence_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoxMuellerRandomSequence_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkBoxMuellerRandomSequence_Initialize, METH_VARARGS,
   "Initialize(self, seed:int) -> None\nC++: void Initialize(vtkTypeUInt32 seed) override;\n\nSatisfy general API of vtkRandomSequence superclass. Initialize\nthe sequence with a seed.\n"},
  {"GetValue", PyvtkBoxMuellerRandomSequence_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: double GetValue() override;\n\nCurrent value.\n"},
  {"Next", PyvtkBoxMuellerRandomSequence_Next, METH_VARARGS,
   "Next(self) -> None\nC++: void Next() override;\n\nMove to the next number in the random sequence.\n"},
  {"GetUniformSequence", PyvtkBoxMuellerRandomSequence_GetUniformSequence, METH_VARARGS,
   "GetUniformSequence(self) -> vtkRandomSequence\nC++: vtkRandomSequence *GetUniformSequence()\n\nReturn the uniformly distributed sequence of random numbers.\n"},
  {"SetUniformSequence", PyvtkBoxMuellerRandomSequence_SetUniformSequence, METH_VARARGS,
   "SetUniformSequence(self, uniformSequence:vtkRandomSequence)\n    -> None\nC++: void SetUniformSequence(vtkRandomSequence *uniformSequence)\n\nSet the uniformly distributed sequence of random numbers. Default\nis a .\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkBoxMuellerRandomSequence_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("uniform_sequence"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoxMuellerRandomSequence_GetUniformSequence(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBoxMuellerRandomSequence_SetUniformSequence(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBoxMuellerRandomSequence_SetUniformSequence(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUniformSequence/SetUniformSequence\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBoxMuellerRandomSequence_GetValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValue\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkBoxMuellerRandomSequence_Doc =
  "vtkBoxMuellerRandomSequence - Gaussian sequence of pseudo random\nnumbers implemented with the Box-Mueller transform\n\n"
  "Superclass: vtkGaussianRandomSequence\n\n"
  "vtkGaussianRandomSequence is a sequence of pseudo random numbers\n"
  "distributed according to the Gaussian/normal distribution (mean=0 and\n"
  "standard deviation=1).\n\n"
  "It based is calculation from a uniformly distributed pseudo random\n"
  "sequence. The initial sequence is a vtkMinimalStandardRandomSequence.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoxMuellerRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkBoxMuellerRandomSequence", // tp_name
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
  PyvtkBoxMuellerRandomSequence_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxMuellerRandomSequence_StaticNew()
{
  return vtkBoxMuellerRandomSequence::New();
}

PyObject *PyvtkBoxMuellerRandomSequence_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoxMuellerRandomSequence_Type, PyvtkBoxMuellerRandomSequence_Methods,
    "vtkBoxMuellerRandomSequence",
 &PyvtkBoxMuellerRandomSequence_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGaussianRandomSequence_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkBoxMuellerRandomSequence_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoxMuellerRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxMuellerRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxMuellerRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

