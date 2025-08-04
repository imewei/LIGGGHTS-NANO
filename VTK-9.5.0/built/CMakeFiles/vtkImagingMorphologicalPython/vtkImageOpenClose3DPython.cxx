// python wrapper for vtkImageOpenClose3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageOpenClose3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageOpenClose3D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageOpenClose3D_ClassNew(); }


static PyObject *
PyvtkImageOpenClose3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageOpenClose3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageOpenClose3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageOpenClose3D *tempr = vtkImageOpenClose3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageOpenClose3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageOpenClose3D::NewInstance());

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
PyvtkImageOpenClose3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageOpenClose3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageOpenClose3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageOpenClose3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOn();
    }
    else
    {
      op->vtkImageOpenClose3D::DebugOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOff();
    }
    else
    {
      op->vtkImageOpenClose3D::DebugOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkImageOpenClose3D::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetKernelSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageOpenClose3D::SetKernelSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpenValue(temp0);
    }
    else
    {
      op->vtkImageOpenClose3D::SetOpenValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpenValue() :
      op->vtkImageOpenClose3D::GetOpenValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCloseValue(temp0);
    }
    else
    {
      op->vtkImageOpenClose3D::SetCloseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCloseValue() :
      op->vtkImageOpenClose3D::GetCloseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter0() :
      op->vtkImageOpenClose3D::GetFilter0());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter1() :
      op->vtkImageOpenClose3D::GetFilter1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageOpenClose3D_Methods[] = {
  {"IsTypeOf", PyvtkImageOpenClose3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageOpenClose3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageOpenClose3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageOpenClose3D\nC++: static vtkImageOpenClose3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageOpenClose3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageOpenClose3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageOpenClose3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkImageOpenClose3D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThis method considers the sub filters MTimes when computing this\nobjects modified time.\n"},
  {"DebugOn", PyvtkImageOpenClose3D_DebugOn, METH_VARARGS,
   "DebugOn(self) -> None\nC++: void DebugOn() override;\n\nTurn debugging output on. (in sub filters also)\n"},
  {"DebugOff", PyvtkImageOpenClose3D_DebugOff, METH_VARARGS,
   "DebugOff(self) -> None\nC++: void DebugOff() override;\n\nTurn debugging output off.\n"},
  {"Modified", PyvtkImageOpenClose3D_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nPass modified message to sub filters.\n"},
  {"SetKernelSize", PyvtkImageOpenClose3D_SetKernelSize, METH_VARARGS,
   "SetKernelSize(self, size0:int, size1:int, size2:int) -> None\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nSelects the size of gaps or objects removed.\n"},
  {"SetOpenValue", PyvtkImageOpenClose3D_SetOpenValue, METH_VARARGS,
   "SetOpenValue(self, value:float) -> None\nC++: void SetOpenValue(double value)\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {"GetOpenValue", PyvtkImageOpenClose3D_GetOpenValue, METH_VARARGS,
   "GetOpenValue(self) -> float\nC++: double GetOpenValue()\n\n"},
  {"SetCloseValue", PyvtkImageOpenClose3D_SetCloseValue, METH_VARARGS,
   "SetCloseValue(self, value:float) -> None\nC++: void SetCloseValue(double value)\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {"GetCloseValue", PyvtkImageOpenClose3D_GetCloseValue, METH_VARARGS,
   "GetCloseValue(self) -> float\nC++: double GetCloseValue()\n\n"},
  {"GetFilter0", PyvtkImageOpenClose3D_GetFilter0, METH_VARARGS,
   "GetFilter0(self) -> vtkImageDilateErode3D\nC++: virtual vtkImageDilateErode3D *GetFilter0()\n\nNeeded for Progress functions\n"},
  {"GetFilter1", PyvtkImageOpenClose3D_GetFilter1, METH_VARARGS,
   "GetFilter1(self) -> vtkImageDilateErode3D\nC++: virtual vtkImageDilateErode3D *GetFilter1()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageOpenClose3D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("kernel_size"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageOpenClose3D_SetKernelSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageOpenClose3D_SetKernelSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetKernelSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("open_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOpenClose3D_GetOpenValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageOpenClose3D_SetOpenValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageOpenClose3D_SetOpenValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOpenValue/SetOpenValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("close_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOpenClose3D_GetCloseValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageOpenClose3D_SetCloseValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageOpenClose3D_SetCloseValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCloseValue/SetCloseValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOpenClose3D_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("filter0"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOpenClose3D_GetFilter0(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFilter0\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("filter1"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageOpenClose3D_GetFilter1(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFilter1\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageOpenClose3D_Doc =
  "vtkImageOpenClose3D - Will perform opening or closing.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageOpenClose3D performs opening or closing by having two\n"
  "vtkImageErodeDilates in series.  The size of operation is determined\n"
  "by the method SetKernelSize, and the operator is an ellipse.\n"
  "OpenValue and CloseValue determine how the filter behaves.  For\n"
  "binary images Opening and closing behaves as expected. Close value is\n"
  "first dilated, and then eroded. Open value is first eroded, and then\n"
  "dilated. Degenerate two dimensional opening/closing can be achieved\n"
  "by setting the one axis the 3D KernelSize to 1. Values other than\n"
  "open value and close value are not touched. This enables the filter\n"
  "to processes segmented images containing more than two tags.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageOpenClose3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageOpenClose3D", // tp_name
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
  PyvtkImageOpenClose3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageOpenClose3D_StaticNew()
{
  return vtkImageOpenClose3D::New();
}

PyObject *PyvtkImageOpenClose3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageOpenClose3D_Type, PyvtkImageOpenClose3D_Methods,
    "vtkImageOpenClose3D",
 &PyvtkImageOpenClose3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageOpenClose3D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageOpenClose3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageOpenClose3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageOpenClose3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

