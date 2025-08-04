// python wrapper for vtkForEach
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkForEach.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkForEach(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkForEach_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static PyObject *
PyvtkForEach_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkForEach::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkForEach::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkForEach *tempr = vtkForEach::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkForEach *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkForEach::NewInstance());

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
PyvtkForEach_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkForEach::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkForEach::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_FOR_EACH_FILTER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FOR_EACH_FILTER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkForEach::FOR_EACH_FILTER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_SetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  vtkExecutionRange *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutionRange"))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkForEach::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_IsIterating(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsIterating");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsIterating() :
      op->vtkForEach::IsIterating());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_Iter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Iter();
    }
    else
    {
      op->vtkForEach::Iter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForEach_RegisterEndFor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterEndFor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForEach *op = static_cast<vtkForEach *>(vp);

  vtkEndFor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEndFor"))
  {
    if (ap.IsBound())
    {
      op->RegisterEndFor(temp0);
    }
    else
    {
      op->vtkForEach::RegisterEndFor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkForEach_Methods[] = {
  {"IsTypeOf", PyvtkForEach_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkForEach_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkForEach_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkForEach\nC++: static vtkForEach *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkForEach_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkForEach\nC++: vtkForEach *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkForEach_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkForEach_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FOR_EACH_FILTER", PyvtkForEach_FOR_EACH_FILTER, METH_VARARGS,
   "FOR_EACH_FILTER() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *FOR_EACH_FILTER()\n\nInformation key used to pass this filter into the pipeline\n"},
  {"SetRange", PyvtkForEach_SetRange, METH_VARARGS,
   "SetRange(self, __a:vtkExecutionRange) -> None\nC++: virtual void SetRange(vtkExecutionRange *)\n\nRange object to use to control execution loop\n"},
  {"IsIterating", PyvtkForEach_IsIterating, METH_VARARGS,
   "IsIterating(self) -> bool\nC++: virtual bool IsIterating()\n\nMethod indicating whether the filter is currently iterating\n"},
  {"Iter", PyvtkForEach_Iter, METH_VARARGS,
   "Iter(self) -> None\nC++: void Iter()\n\nGo to next iteration\n"},
  {"RegisterEndFor", PyvtkForEach_RegisterEndFor, METH_VARARGS,
   "RegisterEndFor(self, __a:vtkEndFor) -> None\nC++: virtual void RegisterEndFor(vtkEndFor *)\n\nMethod for registering the end of the loop vtkEndFor filter\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkForEach_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("range"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkForEach_SetRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkForEach_SetRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRange\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkForEach_Doc =
  "vtkForEach - Algorithm allowing to implement a for loop using the VTK\npipeline and a sister filter vtkEndFor\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "This filter begins a for loop that can execute a portion of a\n"
  "pipeline (sub-pipeline) a certain number of times. To be used in\n"
  "conjunction with the `vtkEndFor` filter that should end the loop.\n\n"
  "> Largely inspired by the ttkForEach/ttkEndFor in the TTK project >\n"
  "(https://github.com/topology-tool-kit/ttk/tree/dev)\n\n"
  "@sa vtkEndFor, vtkExecutionRange\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkForEach_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkForEach", // tp_name
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
  PyvtkForEach_Doc, // tp_doc
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

static vtkObjectBase *PyvtkForEach_StaticNew()
{
  return vtkForEach::New();
}

PyObject *PyvtkForEach_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkForEach_Type, PyvtkForEach_Methods,
    "vtkForEach",
 &PyvtkForEach_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkForEach_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkForEach(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkForEach_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkForEach", o) != 0)
  {
    Py_DECREF(o);
  }

}

