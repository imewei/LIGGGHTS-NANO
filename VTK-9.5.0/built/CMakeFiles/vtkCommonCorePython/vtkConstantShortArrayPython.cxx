// python wrapper for vtkConstantShortArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConstantShortArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkConstantShortArray(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkConstantShortArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static PyObject *
PyvtkConstantShortArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConstantShortArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConstantShortArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConstantShortArray *tempr = vtkConstantShortArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAOSDataArrayTemplate<typename vtkConstantShortArray::ValueType> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConstantShortArray::NewInstance());

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
PyvtkConstantShortArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConstantShortArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConstantShortArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkConstantShortArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<short> store1(2*size1);
  short *temp1 = store1.Data();
  short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
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
      op->vtkConstantShortArray::GetTypedTuple(temp0, temp1);
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
PyvtkConstantShortArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    short tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkConstantShortArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    short *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkConstantShortArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkConstantShortArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    short *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkConstantShortArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkConstantShortArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkConstantShortArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkConstantShortArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}


static PyObject *
PyvtkConstantShortArray_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkConstantShortArray *tempr = vtkConstantShortArray::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_FastDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkConstantShortArray *tempr = vtkConstantShortArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstantShortArray_ConstructBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstantShortArray *op = static_cast<vtkConstantShortArray *>(vp);

  short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ConstructBackend(temp0);
    }
    else
    {
      op->vtkConstantShortArray::ConstructBackend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConstantShortArray_Methods[] = {
  {"IsTypeOf", PyvtkConstantShortArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConstantShortArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConstantShortArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConstantShortArray\nC++: static vtkConstantShortArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConstantShortArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAOSDataArrayTemplate_I8typenameE\nC++: vtkAOSDataArrayTemplate<typename vtkConstantShortArray::ValueType> *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConstantShortArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConstantShortArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataType", PyvtkConstantShortArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkConstantShortArray_GetTypedTuple, METH_VARARGS,
   "GetTypedTuple(self, i:int, tuple:[int, ...]) -> None\nC++: void GetTypedTuple(vtkIdType i, short *tuple)\n\n"},
  {"GetValue", PyvtkConstantShortArray_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> int\nC++: short GetValue(vtkIdType id)\n\n"},
  {"GetValueRange", PyvtkConstantShortArray_GetValueRange, METH_VARARGS,
   "GetValueRange(self, comp:int) -> (int, int)\nC++: short *GetValueRange(int comp)\nGetValueRange(self) -> (int, int)\nC++: short *GetValueRange()\n\n"},
  {"ExtendedNew", PyvtkConstantShortArray_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkConstantShortArray\nC++: static vtkConstantShortArray *ExtendedNew()\n\n"},
  {"FastDownCast", PyvtkConstantShortArray_FastDownCast, METH_VARARGS,
   "FastDownCast(source:vtkAbstractArray) -> vtkConstantShortArray\nC++: static vtkConstantShortArray *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"ConstructBackend", PyvtkConstantShortArray_ConstructBackend, METH_VARARGS,
   "ConstructBackend(self, value:int) -> None\nC++: void ConstructBackend(short value)\n\nSet the constant value for this array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkConstantShortArray_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("data_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkConstantShortArray_GetDataType(self, args);
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
      auto result = PyvtkConstantShortArray_GetValueRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValueRange\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkConstantShortArray_Doc =
  "vtkConstantShortArray - constant implicit array of short.\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkConstantShortArray is a constant implicit array of values of type\n"
  "short. see vtkConstantArray, vtkConstantImplicitBackend\n\n"
  "This file is generated by vtkImplicitArrays.cmake\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConstantShortArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkConstantShortArray", // tp_name
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
  PyvtkConstantShortArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConstantShortArray_StaticNew()
{
  return vtkConstantShortArray::New();
}

PyObject *PyvtkConstantShortArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConstantShortArray_Type, PyvtkConstantShortArray_Methods,
    "vtkConstantShortArray",
 &PyvtkConstantShortArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkConstantShortArray_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConstantShortArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConstantShortArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConstantShortArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

