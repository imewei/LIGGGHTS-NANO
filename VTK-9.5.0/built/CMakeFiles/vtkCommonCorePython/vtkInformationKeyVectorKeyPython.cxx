// python wrapper for vtkInformationKeyVectorKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformationKeyVectorKey.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkInformationKeyVectorKey(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkInformationKeyVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static PyObject *
PyvtkInformationKeyVectorKey_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationKeyVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationKeyVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationKeyVectorKey *tempr = vtkInformationKeyVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationKeyVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationKeyVectorKey::NewInstance());

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
PyvtkInformationKeyVectorKey_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformationKeyVectorKey::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformationKeyVectorKey::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_MakeKey(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationKeyVectorKey *tempr = vtkInformationKeyVectorKey::MakeKey(temp0, temp1);

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
PyvtkInformationKeyVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_AppendUnique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::RemoveItem(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformationKeyVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationKeyVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationKeyVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKeyVectorKey *op = static_cast<vtkInformationKeyVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0, temp1);
    }
    else
    {
      op->vtkInformationKeyVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationKeyVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationKeyVectorKey_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationKeyVectorKey_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationKeyVectorKey_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationKeyVectorKey_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformationKeyVectorKey\nC++: vtkInformationKeyVectorKey *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformationKeyVectorKey_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformationKeyVectorKey_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MakeKey", PyvtkInformationKeyVectorKey_MakeKey, METH_VARARGS,
   "MakeKey(name:str, location:str) -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *MakeKey(const char *name,\n    const char *location)\n\nThis method simply returns a new vtkInformationKeyVectorKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"Append", PyvtkInformationKeyVectorKey_Append, METH_VARARGS,
   "Append(self, info:vtkInformation, value:vtkInformationKey) -> None\nC++: void Append(vtkInformation *info, vtkInformationKey *value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"AppendUnique", PyvtkInformationKeyVectorKey_AppendUnique, METH_VARARGS,
   "AppendUnique(self, info:vtkInformation, value:vtkInformationKey)\n    -> None\nC++: void AppendUnique(vtkInformation *info,\n    vtkInformationKey *value)\n\n"},
  {"RemoveItem", PyvtkInformationKeyVectorKey_RemoveItem, METH_VARARGS,
   "RemoveItem(self, info:vtkInformation, value:vtkInformationKey)\n    -> None\nC++: void RemoveItem(vtkInformation *info,\n    vtkInformationKey *value)\n\n"},
  {"Get", PyvtkInformationKeyVectorKey_Get, METH_VARARGS,
   "Get(self, info:vtkInformation, idx:int) -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformation *info, int idx)\n\n"},
  {"Length", PyvtkInformationKeyVectorKey_Length, METH_VARARGS,
   "Length(self, info:vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\n"},
  {"ShallowCopy", PyvtkInformationKeyVectorKey_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, from_:vtkInformation, to:vtkInformation) -> None\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkInformationKeyVectorKey_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkInformationKeyVectorKey_Doc =
  "vtkInformationKeyVectorKey - Key for vector-of-keys values.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationKeyVectorKey is used to represent keys for\n"
  "vector-of-keys values in vtkInformation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationKeyVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkInformationKeyVectorKey", // tp_name
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
  PyvtkInformationKeyVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationKeyVectorKey_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformationKeyVectorKey_Type, PyvtkInformationKeyVectorKey_Methods,
    "vtkInformationKeyVectorKey",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInformationKey_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkInformationKeyVectorKey_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationKeyVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationKeyVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationKeyVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

