// python wrapper for vtkImageAppend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageAppend.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageAppend(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageAppend_ClassNew(); }


static PyObject *
PyvtkImageAppend_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageAppend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageAppend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageAppend *tempr = vtkImageAppend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAppend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageAppend::NewInstance());

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
PyvtkImageAppend_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageAppend::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageAppend::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->ReplaceNthInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkImageAppend::ReplaceNthInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkImageAppend::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAppend_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageAppend::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAppend_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageAppend_SetInputData_s1(self, args);
    case 1:
      return PyvtkImageAppend_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkImageAppend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkImageAppend::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageAppend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageAppend::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageAppend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageAppend_GetInput_s1(self, args);
    case 0:
      return PyvtkImageAppend_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkImageAppend_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputs() :
      op->vtkImageAppend::GetNumberOfInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_SetAppendAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendAxis(temp0);
    }
    else
    {
      op->vtkImageAppend::SetAppendAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_GetAppendAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendAxis() :
      op->vtkImageAppend::GetAppendAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_SetPreserveExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveExtents(temp0);
    }
    else
    {
      op->vtkImageAppend::SetPreserveExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_GetPreserveExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveExtents() :
      op->vtkImageAppend::GetPreserveExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_PreserveExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveExtentsOn();
    }
    else
    {
      op->vtkImageAppend::PreserveExtentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAppend_PreserveExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveExtentsOff();
    }
    else
    {
      op->vtkImageAppend::PreserveExtentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageAppend_Methods[] = {
  {"IsTypeOf", PyvtkImageAppend_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageAppend_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageAppend_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageAppend\nC++: static vtkImageAppend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageAppend_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageAppend\nC++: vtkImageAppend *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageAppend_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageAppend_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReplaceNthInputConnection", PyvtkImageAppend_ReplaceNthInputConnection, METH_VARARGS,
   "ReplaceNthInputConnection(self, idx:int, input:vtkAlgorithmOutput)\n     -> None\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {"SetInputData", PyvtkImageAppend_SetInputData, METH_VARARGS,
   "SetInputData(self, idx:int, input:vtkDataObject) -> None\nC++: void SetInputData(int idx, vtkDataObject *input)\nSetInputData(self, input:vtkDataObject) -> None\nC++: void SetInputData(vtkDataObject *input)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"GetInput", PyvtkImageAppend_GetInput, METH_VARARGS,
   "GetInput(self, idx:int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int idx)\nGetInput(self) -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {"GetNumberOfInputs", PyvtkImageAppend_GetNumberOfInputs, METH_VARARGS,
   "GetNumberOfInputs(self) -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {"SetAppendAxis", PyvtkImageAppend_SetAppendAxis, METH_VARARGS,
   "SetAppendAxis(self, _arg:int) -> None\nC++: virtual void SetAppendAxis(int _arg)\n\nThis axis is expanded to hold the multiple images. The default\nAppendAxis is the X axis. If you want to create a volue from a\nseries of XY images, then you should set the AppendAxis to 2 (Z\naxis).\n"},
  {"GetAppendAxis", PyvtkImageAppend_GetAppendAxis, METH_VARARGS,
   "GetAppendAxis(self) -> int\nC++: virtual int GetAppendAxis()\n\n"},
  {"SetPreserveExtents", PyvtkImageAppend_SetPreserveExtents, METH_VARARGS,
   "SetPreserveExtents(self, _arg:int) -> None\nC++: virtual void SetPreserveExtents(vtkTypeBool _arg)\n\nBy default \"PreserveExtents\" is off and the append axis is used.\nWhen \"PreseveExtents\" is on, the extent of the inputs is used to\nplace the image in the output.  The whole extent of the output is\nthe union of the input whole extents.  Any portion of the output\nnot covered by the inputs is set to zero.  The origin and spacing\nis taken from the first input.\n"},
  {"GetPreserveExtents", PyvtkImageAppend_GetPreserveExtents, METH_VARARGS,
   "GetPreserveExtents(self) -> int\nC++: virtual vtkTypeBool GetPreserveExtents()\n\n"},
  {"PreserveExtentsOn", PyvtkImageAppend_PreserveExtentsOn, METH_VARARGS,
   "PreserveExtentsOn(self) -> None\nC++: virtual void PreserveExtentsOn()\n\n"},
  {"PreserveExtentsOff", PyvtkImageAppend_PreserveExtentsOff, METH_VARARGS,
   "PreserveExtentsOff(self) -> None\nC++: virtual void PreserveExtentsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageAppend_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("input_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageAppend_SetInputData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageAppend_SetInputData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("append_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageAppend_GetAppendAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageAppend_SetAppendAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageAppend_SetAppendAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetAppendAxis/SetAppendAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("preserve_extents"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageAppend_GetPreserveExtents(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageAppend_SetPreserveExtents(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageAppend_SetPreserveExtents(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPreserveExtents/SetPreserveExtents\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageAppend_GetInput(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInput\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageAppend_Doc =
  "vtkImageAppend - Collects data from multiple inputs into one image.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageAppend takes the components from multiple inputs and merges\n"
  "them into one output. The output images are append along the\n"
  "\"AppendAxis\". Except for the append axis, all inputs must have the\n"
  "same extent. All inputs must have the same number of scalar\n"
  "components. A future extension might be to pad or clip inputs to have\n"
  "the same extent. The output has the same origin and spacing as the\n"
  "first input. The origin and spacing of all other inputs are ignored. \n"
  "All inputs must have the same scalar type.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageAppend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkImageAppend", // tp_name
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
  PyvtkImageAppend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageAppend_StaticNew()
{
  return vtkImageAppend::New();
}

PyObject *PyvtkImageAppend_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageAppend_Type, PyvtkImageAppend_Methods,
    "vtkImageAppend",
 &PyvtkImageAppend_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageAppend_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageAppend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageAppend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageAppend", o) != 0)
  {
    Py_DECREF(o);
  }

}

