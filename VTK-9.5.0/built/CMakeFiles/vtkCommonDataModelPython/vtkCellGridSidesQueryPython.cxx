// python wrapper for vtkCellGridSidesQuery
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkCellGridSidesQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridSidesQuery(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridSidesQuery_ClassNew(); }

#ifndef DECLARED_PyvtkCellGridQuery_ClassNew
extern "C" { PyObject *PyvtkCellGridQuery_ClassNew(); }
#define DECLARED_PyvtkCellGridQuery_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridSidesQuery_SideFlags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridSidesQuery.SideFlags", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkCellGridSidesQuery_SideFlags_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridSidesQuery_SideFlags_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridSidesQuery_PassWork_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridSidesQuery.PassWork", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkCellGridSidesQuery_PassWork_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridSidesQuery_PassWork_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridSidesQuery_SummaryStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridSidesQuery.SummaryStrategy", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkCellGridSidesQuery_SummaryStrategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridSidesQuery_SummaryStrategy_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridSidesQuery_SelectionMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridSidesQuery.SelectionMode", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkCellGridSidesQuery_SelectionMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridSidesQuery_SelectionMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellGridSidesQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridSidesQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridSidesQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridSidesQuery *tempr = vtkCellGridSidesQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridSidesQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridSidesQuery::NewInstance());

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
PyvtkCellGridSidesQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridSidesQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridSidesQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetPreserveRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveRenderableInputs(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetPreserveRenderableInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_GetPreserveRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveRenderableInputs() :
      op->vtkCellGridSidesQuery::GetPreserveRenderableInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_PreserveRenderableInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveRenderableInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveRenderableInputsOn();
    }
    else
    {
      op->vtkCellGridSidesQuery::PreserveRenderableInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_PreserveRenderableInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveRenderableInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveRenderableInputsOff();
    }
    else
    {
      op->vtkCellGridSidesQuery::PreserveRenderableInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetOmitSidesForRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOmitSidesForRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOmitSidesForRenderableInputs(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetOmitSidesForRenderableInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_GetOmitSidesForRenderableInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOmitSidesForRenderableInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOmitSidesForRenderableInputs() :
      op->vtkCellGridSidesQuery::GetOmitSidesForRenderableInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_OmitSidesForRenderableInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitSidesForRenderableInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitSidesForRenderableInputsOn();
    }
    else
    {
      op->vtkCellGridSidesQuery::OmitSidesForRenderableInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_OmitSidesForRenderableInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitSidesForRenderableInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitSidesForRenderableInputsOff();
    }
    else
    {
      op->vtkCellGridSidesQuery::OmitSidesForRenderableInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetOutputDimensionControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensionControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensionControl(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetOutputDimensionControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_GetOutputDimensionControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionControl() :
      op->vtkCellGridSidesQuery::GetOutputDimensionControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_OutputDimensionControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputDimensionControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputDimensionControlOn();
    }
    else
    {
      op->vtkCellGridSidesQuery::OutputDimensionControlOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_OutputDimensionControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputDimensionControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputDimensionControlOff();
    }
    else
    {
      op->vtkCellGridSidesQuery::OutputDimensionControlOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  typedef vtkCellGridSidesQuery::SummaryStrategy temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SummaryStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridSidesQuery_SetStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridSidesQuery_SetStrategy_Methods[] = {
  {"SetStrategy", PyvtkCellGridSidesQuery_SetStrategy_s1, METH_VARARGS,
   "@E vtkCellGridSidesQuery.SummaryStrategy"},
  {"SetStrategy", PyvtkCellGridSidesQuery_SetStrategy_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGridSidesQuery_SetStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGridSidesQuery_SetStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStrategy");
  return nullptr;
}


static PyObject *
PyvtkCellGridSidesQuery_GetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkCellGridSidesQuery::SummaryStrategy tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetStrategy() :
      op->vtkCellGridSidesQuery::GetStrategy());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellGridSidesQuery_SummaryStrategy_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetStrategyToWinding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategyToWinding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStrategyToWinding();
    }
    else
    {
      op->vtkCellGridSidesQuery::SetStrategyToWinding();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetStrategyToAnyOccurrence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategyToAnyOccurrence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStrategyToAnyOccurrence();
    }
    else
    {
      op->vtkCellGridSidesQuery::SetStrategyToAnyOccurrence();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetStrategyToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategyToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStrategyToBoundary();
    }
    else
    {
      op->vtkCellGridSidesQuery::SetStrategyToBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetSelectionType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  typedef vtkCellGridSidesQuery::SelectionMode temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SelectionMode"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellGridSidesQuery_SetSelectionType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridSidesQuery_SetSelectionType_Methods[] = {
  {"SetSelectionType", PyvtkCellGridSidesQuery_SetSelectionType_s1, METH_VARARGS,
   "@E vtkCellGridSidesQuery.SelectionMode"},
  {"SetSelectionType", PyvtkCellGridSidesQuery_SetSelectionType_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGridSidesQuery_SetSelectionType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGridSidesQuery_SetSelectionType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionType");
  return nullptr;
}


static PyObject *
PyvtkCellGridSidesQuery_GetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkCellGridSidesQuery::SelectionMode tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetSelectionType() :
      op->vtkCellGridSidesQuery::GetSelectionType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellGridSidesQuery_SelectionMode_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridSidesQuery::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_StartPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPass();
    }
    else
    {
      op->vtkCellGridSidesQuery::StartPass();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_IsAnotherPassRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnotherPassRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnotherPassRequired() :
      op->vtkCellGridSidesQuery::IsAnotherPassRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridSidesQuery::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SelectionModeToLabel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectionModeToLabel");

  typedef vtkCellGridSidesQuery::SelectionMode temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SelectionMode"))
  {
    vtkStringToken tempr = vtkCellGridSidesQuery::SelectionModeToLabel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SelectionModeFromLabel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectionModeFromLabel");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    typedef vtkCellGridSidesQuery::SelectionMode tempr_type;
  tempr_type tempr = vtkCellGridSidesQuery::SelectionModeFromLabel(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellGridSidesQuery_SelectionMode_FromEnum(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SummaryStrategyToLabel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SummaryStrategyToLabel");

  typedef vtkCellGridSidesQuery::SummaryStrategy temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCellGridSidesQuery.SummaryStrategy"))
  {
    vtkStringToken tempr = vtkCellGridSidesQuery::SummaryStrategyToLabel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SummaryStrategyFromLabel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SummaryStrategyFromLabel");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    typedef vtkCellGridSidesQuery::SummaryStrategy tempr_type;
  tempr_type tempr = vtkCellGridSidesQuery::SummaryStrategyFromLabel(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellGridSidesQuery_SummaryStrategy_FromEnum(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_GetSideCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridSidesCache *tempr = (ap.IsBound() ?
      op->GetSideCache() :
      op->vtkCellGridSidesQuery::GetSideCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridSidesQuery_SetSideCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridSidesQuery *op = static_cast<vtkCellGridSidesQuery *>(vp);

  vtkCellGridSidesCache *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGridSidesCache"))
  {
    if (ap.IsBound())
    {
      op->SetSideCache(temp0);
    }
    else
    {
      op->vtkCellGridSidesQuery::SetSideCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridSidesQuery_Methods[] = {
  {"IsTypeOf", PyvtkCellGridSidesQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridSidesQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridSidesQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridSidesQuery\nC++: static vtkCellGridSidesQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridSidesQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridSidesQuery\nC++: vtkCellGridSidesQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridSidesQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridSidesQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPreserveRenderableInputs", PyvtkCellGridSidesQuery_SetPreserveRenderableInputs, METH_VARARGS,
   "SetPreserveRenderableInputs(self, _arg:int) -> None\nC++: virtual void SetPreserveRenderableInputs(vtkTypeBool _arg)\n\nSet/get whether renderable cells should be included in the output\nor the output should strictly contain sides of cells.\n\nA cell is renderable if it is of dimension 2 or less (i.e.,\nsurfaces, edges, and vertices are all renderable; volumetric\ncells are not).\n\nThe default is false.\n"},
  {"GetPreserveRenderableInputs", PyvtkCellGridSidesQuery_GetPreserveRenderableInputs, METH_VARARGS,
   "GetPreserveRenderableInputs(self) -> int\nC++: virtual vtkTypeBool GetPreserveRenderableInputs()\n\n"},
  {"PreserveRenderableInputsOn", PyvtkCellGridSidesQuery_PreserveRenderableInputsOn, METH_VARARGS,
   "PreserveRenderableInputsOn(self) -> None\nC++: virtual void PreserveRenderableInputsOn()\n\n"},
  {"PreserveRenderableInputsOff", PyvtkCellGridSidesQuery_PreserveRenderableInputsOff, METH_VARARGS,
   "PreserveRenderableInputsOff(self) -> None\nC++: virtual void PreserveRenderableInputsOff()\n\n"},
  {"SetOmitSidesForRenderableInputs", PyvtkCellGridSidesQuery_SetOmitSidesForRenderableInputs, METH_VARARGS,
   "SetOmitSidesForRenderableInputs(self, _arg:int) -> None\nC++: virtual void SetOmitSidesForRenderableInputs(\n    vtkTypeBool _arg)\n\nSet/get whether to omit computation of sides for renderable\ncells.\n\nA cell is renderable if it is of dimension 2 or less (i.e.,\nsurfaces, edges, and vertices are all renderable; volumetric\ncells are not). This setting, when used in combination with\nPreserveRenderableInputs, allows the filter to behave similar to\nvtkPolyData surface extraction filters; volumetric cells will\nhave sides computed but others will be passed through from the\ninput unaltered.\n\nThe default is false.\n"},
  {"GetOmitSidesForRenderableInputs", PyvtkCellGridSidesQuery_GetOmitSidesForRenderableInputs, METH_VARARGS,
   "GetOmitSidesForRenderableInputs(self) -> int\nC++: virtual vtkTypeBool GetOmitSidesForRenderableInputs()\n\n"},
  {"OmitSidesForRenderableInputsOn", PyvtkCellGridSidesQuery_OmitSidesForRenderableInputsOn, METH_VARARGS,
   "OmitSidesForRenderableInputsOn(self) -> None\nC++: virtual void OmitSidesForRenderableInputsOn()\n\n"},
  {"OmitSidesForRenderableInputsOff", PyvtkCellGridSidesQuery_OmitSidesForRenderableInputsOff, METH_VARARGS,
   "OmitSidesForRenderableInputsOff(self) -> None\nC++: virtual void OmitSidesForRenderableInputsOff()\n\n"},
  {"SetOutputDimensionControl", PyvtkCellGridSidesQuery_SetOutputDimensionControl, METH_VARARGS,
   "SetOutputDimensionControl(self, _arg:int) -> None\nC++: virtual void SetOutputDimensionControl(int _arg)\n\nSet/get which sides to generate given input cells/sides.\n\nOutputDimensionControl is a bit-vector taking values from the\nSideFlags enumeration. It determines which sides of the input\nshould be generated. The default is SideFlags::SurfacesOfInputs,\nwhich will only emit surfaces of volumetric cells.\n"},
  {"GetOutputDimensionControl", PyvtkCellGridSidesQuery_GetOutputDimensionControl, METH_VARARGS,
   "GetOutputDimensionControl(self) -> int\nC++: virtual int GetOutputDimensionControl()\n\n"},
  {"OutputDimensionControlOn", PyvtkCellGridSidesQuery_OutputDimensionControlOn, METH_VARARGS,
   "OutputDimensionControlOn(self) -> None\nC++: virtual void OutputDimensionControlOn()\n\n"},
  {"OutputDimensionControlOff", PyvtkCellGridSidesQuery_OutputDimensionControlOff, METH_VARARGS,
   "OutputDimensionControlOff(self) -> None\nC++: virtual void OutputDimensionControlOff()\n\n"},
  {"SetStrategy", PyvtkCellGridSidesQuery_SetStrategy, METH_VARARGS,
   "SetStrategy(self, _arg:SummaryStrategy) -> None\nC++: virtual void SetStrategy(SummaryStrategy _arg)\nSetStrategy(self, strategy:int) -> None\nC++: virtual void SetStrategy(int strategy)\n\nSet/get the strategy responders should use to generate entries in\nSides from entries in SideCache.\n\nThe default is BoundaryStrategy.\n"},
  {"GetStrategy", PyvtkCellGridSidesQuery_GetStrategy, METH_VARARGS,
   "GetStrategy(self) -> SummaryStrategy\nC++: virtual SummaryStrategy GetStrategy()\n\n"},
  {"SetStrategyToWinding", PyvtkCellGridSidesQuery_SetStrategyToWinding, METH_VARARGS,
   "SetStrategyToWinding(self) -> None\nC++: void SetStrategyToWinding()\n\n"},
  {"SetStrategyToAnyOccurrence", PyvtkCellGridSidesQuery_SetStrategyToAnyOccurrence, METH_VARARGS,
   "SetStrategyToAnyOccurrence(self) -> None\nC++: void SetStrategyToAnyOccurrence()\n\n"},
  {"SetStrategyToBoundary", PyvtkCellGridSidesQuery_SetStrategyToBoundary, METH_VARARGS,
   "SetStrategyToBoundary(self) -> None\nC++: void SetStrategyToBoundary()\n\n"},
  {"SetSelectionType", PyvtkCellGridSidesQuery_SetSelectionType, METH_VARARGS,
   "SetSelectionType(self, _arg:SelectionMode) -> None\nC++: virtual void SetSelectionType(SelectionMode _arg)\nSetSelectionType(self, selnType:int) -> None\nC++: virtual void SetSelectionType(int selnType)\n\nSet/get whether the extracted sides should be marked as\nselectable or whether their originating data should be\nselectable.\n\nResponders should use this to *either*: (a) mark the output to\nindicate what shapes should be selected upon being picked; or (b)\noutput different shapes so that picking implicitly results in the\nproper shape\n    being picked.\n\nThe default SelectionMode::Input indicates the input data should\nbe selected. Other values indicate the generated output sides\nshould be selected.\n"},
  {"GetSelectionType", PyvtkCellGridSidesQuery_GetSelectionType, METH_VARARGS,
   "GetSelectionType(self) -> SelectionMode\nC++: virtual SelectionMode GetSelectionType()\n\n"},
  {"Initialize", PyvtkCellGridSidesQuery_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: bool Initialize() override;\n\nOverride this if your query-result state requires initialization.\n\nYou may override this method to do additional work, but you must\nbe careful to call the base method from your override.\n\nReturning false will abort processing of the query. No error\nmessage will be printed.\n"},
  {"StartPass", PyvtkCellGridSidesQuery_StartPass, METH_VARARGS,
   "StartPass(self) -> None\nC++: void StartPass() override;\n\nMark the start of a pass through each cell type. This increments\nthe Pass ivar which responders can access.\n\nYou may override this method to do additional work, but you must\nbe careful to call the base method from your override.\n"},
  {"IsAnotherPassRequired", PyvtkCellGridSidesQuery_IsAnotherPassRequired, METH_VARARGS,
   "IsAnotherPassRequired(self) -> bool\nC++: bool IsAnotherPassRequired() override;\n\nOverride this if your query allows responders to execute in\nmultiple phases. This method may do work in addition to returning\nwhether another pass is needed.\n"},
  {"Finalize", PyvtkCellGridSidesQuery_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: bool Finalize() override;\n\nOverride this if your query-result state requires finalization.\n"},
  {"SelectionModeToLabel", PyvtkCellGridSidesQuery_SelectionModeToLabel, METH_VARARGS,
   "SelectionModeToLabel(mode:SelectionMode) -> vtkStringToken\nC++: static vtkStringToken SelectionModeToLabel(\n    SelectionMode mode)\n\nReturn a string-token with the given selection mode or\nvice-versa.\n"},
  {"SelectionModeFromLabel", PyvtkCellGridSidesQuery_SelectionModeFromLabel, METH_VARARGS,
   "SelectionModeFromLabel(token:vtkStringToken) -> SelectionMode\nC++: static SelectionMode SelectionModeFromLabel(\n    vtkStringToken token)\n\n"},
  {"SummaryStrategyToLabel", PyvtkCellGridSidesQuery_SummaryStrategyToLabel, METH_VARARGS,
   "SummaryStrategyToLabel(strategy:SummaryStrategy) -> vtkStringToken\nC++: static vtkStringToken SummaryStrategyToLabel(\n    SummaryStrategy strategy)\n\nReturn a string-token with the given summarization strategy or\nvice-versa.\n"},
  {"SummaryStrategyFromLabel", PyvtkCellGridSidesQuery_SummaryStrategyFromLabel, METH_VARARGS,
   "SummaryStrategyFromLabel(token:vtkStringToken) -> SummaryStrategy\nC++: static SummaryStrategy SummaryStrategyFromLabel(\n    vtkStringToken token)\n\n"},
  {"GetSideCache", PyvtkCellGridSidesQuery_GetSideCache, METH_VARARGS,
   "GetSideCache(self) -> vtkCellGridSidesCache\nC++: virtual vtkCellGridSidesCache *GetSideCache()\n\nSet/get cached hashtable of sides.\n\nThe idea is that vtkCellGridSidesCache is generic enough to\naccommodate a wide variety of cell types and that many of them\nwill be capable of having sides that are conformal to cells of\ndifferent types that may reside in the same cell-grid. Filters\nmay own this cache or they may attach it to a collection of\ncell-grid objects that participate by inserting their cells'\nsides into the cache. (For example, all the cell-grids within a\npartitioned dataset collection may wish to insert sides in the\nsame cache.)\n"},
  {"SetSideCache", PyvtkCellGridSidesQuery_SetSideCache, METH_VARARGS,
   "SetSideCache(self, cache:vtkCellGridSidesCache) -> None\nC++: virtual void SetSideCache(vtkCellGridSidesCache *cache)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridSidesQuery_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("preserve_renderable_inputs"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetPreserveRenderableInputs(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetPreserveRenderableInputs(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetPreserveRenderableInputs(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPreserveRenderableInputs/SetPreserveRenderableInputs\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("omit_sides_for_renderable_inputs"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetOmitSidesForRenderableInputs(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetOmitSidesForRenderableInputs(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetOmitSidesForRenderableInputs(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOmitSidesForRenderableInputs/SetOmitSidesForRenderableInputs\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_dimension_control"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetOutputDimensionControl(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetOutputDimensionControl(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetOutputDimensionControl(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputDimensionControl/SetOutputDimensionControl\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("strategy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetStrategy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStrategy/SetStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("strategy"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetStrategy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetStrategy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetStrategy\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetSelectionType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetSelectionType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetSelectionType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSelectionType/SetSelectionType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("selection_type"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetSelectionType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetSelectionType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetSelectionType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_cache"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridSidesQuery_GetSideCache(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridSidesQuery_SetSideCache(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridSidesQuery_SetSideCache(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSideCache/SetSideCache\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridSidesQuery_Doc =
  "vtkCellGridSidesQuery - A cell-grid query for enumerating sides of\ncells.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "This query runs in 3 passes (see vtkCellGridSidesQuery::PassWork):\n\n"
  "+ In the first pass, responders invoke the AddSides() method on\n"
  "  this query, entries are added to this->Hashes storage indicating\n"
  "  the cells which are bounded by a given shape + connectivity. + In\n"
  "the second pass, responders mark the entries created above and\n"
  "  add entries in this->Sides. This reorganizes the hashes into groups\n"
  "  more amenable to output as side arrays. This pass is called\n"
  "  \"Summarization,\" since not every input side identified will be\n"
  "  output. + In the third and final pass, responders create new cells\n"
  "in\n"
  "  the output cell-grid that correspond to the selected sides of\n"
  "  the input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridSidesQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridSidesQuery", // tp_name
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
  PyvtkCellGridSidesQuery_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridSidesQuery_StaticNew()
{
  return vtkCellGridSidesQuery::New();
}

PyObject *PyvtkCellGridSidesQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridSidesQuery_Type, PyvtkCellGridSidesQuery_Methods,
    "vtkCellGridSidesQuery",
 &PyvtkCellGridSidesQuery_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCellGridQuery_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellGridSidesQuery_SideFlags_Type);
  PyVTKEnum_Add(&PyvtkCellGridSidesQuery_SideFlags_Type, "vtkCellGridSidesQuery.SideFlags");

  o = (PyObject *)&PyvtkCellGridSidesQuery_SideFlags_Type;
  if (PyDict_SetItemString(d, "SideFlags", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCellGridSidesQuery_PassWork_Type);
  PyVTKEnum_Add(&PyvtkCellGridSidesQuery_PassWork_Type, "vtkCellGridSidesQuery.PassWork");

  o = (PyObject *)&PyvtkCellGridSidesQuery_PassWork_Type;
  if (PyDict_SetItemString(d, "PassWork", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCellGridSidesQuery_SummaryStrategy_Type);
  PyVTKEnum_Add(&PyvtkCellGridSidesQuery_SummaryStrategy_Type, "vtkCellGridSidesQuery.SummaryStrategy");

  o = (PyObject *)&PyvtkCellGridSidesQuery_SummaryStrategy_Type;
  if (PyDict_SetItemString(d, "SummaryStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCellGridSidesQuery_SelectionMode_Type);
  PyVTKEnum_Add(&PyvtkCellGridSidesQuery_SelectionMode_Type, "vtkCellGridSidesQuery.SelectionMode");

  o = (PyObject *)&PyvtkCellGridSidesQuery_SelectionMode_Type;
  if (PyDict_SetItemString(d, "SelectionMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    typedef vtkCellGridSidesQuery::SideFlags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[11] = {
        { "VerticesOfEdges", vtkCellGridSidesQuery::VerticesOfEdges },
        { "VerticesOfSurfaces", vtkCellGridSidesQuery::VerticesOfSurfaces },
        { "EdgesOfSurfaces", vtkCellGridSidesQuery::EdgesOfSurfaces },
        { "VerticesOfVolumes", vtkCellGridSidesQuery::VerticesOfVolumes },
        { "EdgesOfVolumes", vtkCellGridSidesQuery::EdgesOfVolumes },
        { "SurfacesOfVolumes", vtkCellGridSidesQuery::SurfacesOfVolumes },
        { "SurfacesOfInputs", vtkCellGridSidesQuery::SurfacesOfInputs },
        { "EdgesOfInputs", vtkCellGridSidesQuery::EdgesOfInputs },
        { "VerticesOfInputs", vtkCellGridSidesQuery::VerticesOfInputs },
        { "AllSides", vtkCellGridSidesQuery::AllSides },
        { "NextLowestDimension", vtkCellGridSidesQuery::NextLowestDimension },
      };

    o = PyvtkCellGridSidesQuery_SideFlags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCellGridSidesQuery::PassWork cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "HashSides", vtkCellGridSidesQuery::HashSides },
        { "Summarize", vtkCellGridSidesQuery::Summarize },
        { "GenerateSideSets", vtkCellGridSidesQuery::GenerateSideSets },
      };

    o = PyvtkCellGridSidesQuery_PassWork_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCellGridSidesQuery::SummaryStrategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Winding", vtkCellGridSidesQuery::Winding },
        { "AnyOccurrence", vtkCellGridSidesQuery::AnyOccurrence },
        { "Boundary", vtkCellGridSidesQuery::Boundary },
      };

    o = PyvtkCellGridSidesQuery_SummaryStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCellGridSidesQuery::SelectionMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "Input", vtkCellGridSidesQuery::Input },
        { "Output", vtkCellGridSidesQuery::Output },
      };

    o = PyvtkCellGridSidesQuery_SelectionMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridSidesQuery_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridSidesQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridSidesQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridSidesQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

