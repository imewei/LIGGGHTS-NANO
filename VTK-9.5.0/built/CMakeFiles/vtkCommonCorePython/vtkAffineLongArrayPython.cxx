// python wrapper for vtkAffineLongArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAffineLongArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAffineLongArray(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAffineLongArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static PyObject *
PyvtkAffineLongArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAffineLongArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAffineLongArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAffineLongArray *tempr = vtkAffineLongArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAOSDataArrayTemplate<typename vtkAffineLongArray::ValueType> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAffineLongArray::NewInstance());

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
PyvtkAffineLongArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAffineLongArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAffineLongArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAffineLongArray *tempr = vtkAffineLongArray::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkAffineLongArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkAffineLongArray::GetTypedTuple(temp0, temp1);
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
PyvtkAffineLongArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkAffineLongArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkAffineLongArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAffineLongArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkAffineLongArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAffineLongArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAffineLongArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkAffineLongArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}


static PyObject *
PyvtkAffineLongArray_FastDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkAffineLongArray *tempr = vtkAffineLongArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineLongArray_ConstructBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineLongArray *op = static_cast<vtkAffineLongArray *>(vp);

  long temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ConstructBackend(temp0, temp1);
    }
    else
    {
      op->vtkAffineLongArray::ConstructBackend(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAffineLongArray_Methods[] = {
  {"IsTypeOf", PyvtkAffineLongArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAffineLongArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAffineLongArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAffineLongArray\nC++: static vtkAffineLongArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAffineLongArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAOSDataArrayTemplate_I8typenameE\nC++: vtkAOSDataArrayTemplate<typename vtkAffineLongArray::ValueType> *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAffineLongArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAffineLongArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ExtendedNew", PyvtkAffineLongArray_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkAffineLongArray\nC++: static vtkAffineLongArray *ExtendedNew()\n\n"},
  {"GetDataType", PyvtkAffineLongArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkAffineLongArray_GetTypedTuple, METH_VARARGS,
   "GetTypedTuple(self, i:int, tuple:[int, ...]) -> None\nC++: void GetTypedTuple(vtkIdType i, long *tuple)\n\n"},
  {"GetValue", PyvtkAffineLongArray_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> int\nC++: long GetValue(vtkIdType id)\n\n"},
  {"GetValueRange", PyvtkAffineLongArray_GetValueRange, METH_VARARGS,
   "GetValueRange(self, comp:int) -> (int, int)\nC++: long *GetValueRange(int comp)\nGetValueRange(self) -> (int, int)\nC++: long *GetValueRange()\n\n"},
  {"FastDownCast", PyvtkAffineLongArray_FastDownCast, METH_VARARGS,
   "FastDownCast(source:vtkAbstractArray) -> vtkAffineLongArray\nC++: static vtkAffineLongArray *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"ConstructBackend", PyvtkAffineLongArray_ConstructBackend, METH_VARARGS,
   "ConstructBackend(self, slope:int, intercept:int) -> None\nC++: void ConstructBackend(long slope, long intercept)\n\nSet the parameters for the affine backend. slope is the unit\nvariation and intercept is the value at 0. Value at index is:\n  value = slope * index + intercept\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAffineLongArray_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("data_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAffineLongArray_GetDataType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("value_range"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAffineLongArray_GetValueRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValueRange\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAffineLongArray_Doc =
  "vtkAffineLongArray - affine implicit array of long.\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkAffineLongArray is an affine implicit array of values of type\n"
  "long. see vtkAffineArray, vtkAffineImplicitBackend\n\n"
  "This file is generated by vtkImplicitArrays.cmake\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAffineLongArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkAffineLongArray", // tp_name
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
  PyvtkAffineLongArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAffineLongArray_StaticNew()
{
  return vtkAffineLongArray::New();
}

PyObject *PyvtkAffineLongArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAffineLongArray_Type, PyvtkAffineLongArray_Methods,
    "vtkAffineLongArray",
 &PyvtkAffineLongArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAffineLongArray_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAffineLongArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAffineLongArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAffineLongArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

