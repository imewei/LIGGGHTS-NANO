// python wrapper for vtkPiecewiseFunctionItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunctionItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPiecewiseFunctionItem(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPiecewiseFunctionItem_ClassNew(); }

#ifndef DECLARED_PyvtkScalarsToColorsItem_ClassNew
extern "C" { PyObject *PyvtkScalarsToColorsItem_ClassNew(); }
#define DECLARED_PyvtkScalarsToColorsItem_ClassNew
#endif

static PyObject *
PyvtkPiecewiseFunctionItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewiseFunctionItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewiseFunctionItem *tempr = vtkPiecewiseFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunctionItem::NewInstance());

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
PyvtkPiecewiseFunctionItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPiecewiseFunctionItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPiecewiseFunctionItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetPiecewiseFunction(temp0);
    }
    else
    {
      op->vtkPiecewiseFunctionItem::SetPiecewiseFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetPiecewiseFunction() :
      op->vtkPiecewiseFunctionItem::GetPiecewiseFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunctionItem_Methods[] = {
  {"IsTypeOf", PyvtkPiecewiseFunctionItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewiseFunctionItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewiseFunctionItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPiecewiseFunctionItem\nC++: static vtkPiecewiseFunctionItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewiseFunctionItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPiecewiseFunctionItem\nC++: vtkPiecewiseFunctionItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPiecewiseFunctionItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPiecewiseFunctionItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPiecewiseFunction", PyvtkPiecewiseFunctionItem_SetPiecewiseFunction, METH_VARARGS,
   "SetPiecewiseFunction(self, t:vtkPiecewiseFunction) -> None\nC++: void SetPiecewiseFunction(vtkPiecewiseFunction *t)\n\n"},
  {"GetPiecewiseFunction", PyvtkPiecewiseFunctionItem_GetPiecewiseFunction, METH_VARARGS,
   "GetPiecewiseFunction(self) -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetPiecewiseFunction()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPiecewiseFunctionItem_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("piecewise_function"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPiecewiseFunctionItem_GetPiecewiseFunction(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPiecewiseFunctionItem_SetPiecewiseFunction(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPiecewiseFunctionItem_SetPiecewiseFunction(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPiecewiseFunction/SetPiecewiseFunction\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPiecewiseFunctionItem_Doc =
  "vtkPiecewiseFunctionItem - vtkPiecewiseFunctionItem internal uses\nvtkPlot::Color, white by default\n\n"
  "Superclass: vtkScalarsToColorsItem\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPiecewiseFunctionItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPiecewiseFunctionItem", // tp_name
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
  PyvtkPiecewiseFunctionItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewiseFunctionItem_StaticNew()
{
  return vtkPiecewiseFunctionItem::New();
}

PyObject *PyvtkPiecewiseFunctionItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPiecewiseFunctionItem_Type, PyvtkPiecewiseFunctionItem_Methods,
    "vtkPiecewiseFunctionItem",
 &PyvtkPiecewiseFunctionItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkScalarsToColorsItem_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPiecewiseFunctionItem_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewiseFunctionItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewiseFunctionItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewiseFunctionItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

