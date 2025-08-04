// python wrapper for vtkFastLabeledDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFastLabeledDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFastLabeledDataMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFastLabeledDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFastLabeledDataMapper_TextAnchor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkFastLabeledDataMapper.TextAnchor", // tp_name
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
static PyObject *PyvtkFastLabeledDataMapper_TextAnchor_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkFastLabeledDataMapper_TextAnchor_Type, static_cast<int>(val));
}


static PyObject *
PyvtkFastLabeledDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFastLabeledDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFastLabeledDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFastLabeledDataMapper *tempr = vtkFastLabeledDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFastLabeledDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFastLabeledDataMapper::NewInstance());

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
PyvtkFastLabeledDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFastLabeledDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFastLabeledDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkFastLabeledDataMapper::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabeledComponent(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabeledComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabeledComponent() :
      op->vtkFastLabeledDataMapper::GetLabeledComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetComponentSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentSeparator(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetComponentSeparator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetComponentSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetComponentSeparator() :
      op->vtkFastLabeledDataMapper::GetComponentSeparator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataArray(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetFieldDataArrayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMinValue() :
      op->vtkFastLabeledDataMapper::GetFieldDataArrayMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetFieldDataArrayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArrayMaxValue() :
      op->vtkFastLabeledDataMapper::GetFieldDataArrayMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArray() :
      op->vtkFastLabeledDataMapper::GetFieldDataArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkFastLabeledDataMapper::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMode(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkFastLabeledDataMapper::GetLabelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelIds();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelScalars();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelVectors();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelNormals();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelNormals();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelTCoords();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelTCoords();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelTensors();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelTensors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelModeToLabelFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelFieldData();
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelModeToLabelFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastLabeledDataMapper_SetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastLabeledDataMapper_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkFastLabeledDataMapper_SetLabelTextProperty_s1(self, args);
    case 2:
      return PyvtkFastLabeledDataMapper_SetLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkFastLabeledDataMapper::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFastLabeledDataMapper_GetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkFastLabeledDataMapper::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFastLabeledDataMapper_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFastLabeledDataMapper_GetLabelTextProperty_s1(self, args);
    case 1:
      return PyvtkFastLabeledDataMapper_GetLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetFrameColorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameColorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameColorsName(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetFrameColorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetFrameColorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameColorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFrameColorsName() :
      op->vtkFastLabeledDataMapper::GetFrameColorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetTextAnchor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextAnchor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextAnchor(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetTextAnchor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetTextAnchor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAnchor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextAnchor() :
      op->vtkFastLabeledDataMapper::GetTextAnchor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkFastLabeledDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_RenderPieceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceStart(temp0, temp1);
    }
    else
    {
      op->vtkFastLabeledDataMapper::RenderPieceStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_RenderPieceFinish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceFinish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceFinish(temp0, temp1);
    }
    else
    {
      op->vtkFastLabeledDataMapper::RenderPieceFinish(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFastLabeledDataMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastLabeledDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastLabeledDataMapper *op = static_cast<vtkFastLabeledDataMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkFastLabeledDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFastLabeledDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkFastLabeledDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFastLabeledDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFastLabeledDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFastLabeledDataMapper\nC++: static vtkFastLabeledDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFastLabeledDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFastLabeledDataMapper\nC++: vtkFastLabeledDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFastLabeledDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFastLabeledDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLabelFormat", PyvtkFastLabeledDataMapper_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels.  This should\nbe a printf-style format string.\n\n* By default, the mapper will try to print each component of the\n* tuple using a sane format: %d for integers, %f for floats, %g\n  for\n* doubles, %ld for longs, et cetera.  If you need a different\n* format, set it here.  You can do things like limit the number\n  of\n* significant digits, add prefixes/suffixes, basically anything\n* that printf can do.  If you only want to print one component of\na\n* vector, see the ivar LabeledComponent.\n"},
  {"GetLabelFormat", PyvtkFastLabeledDataMapper_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetLabeledComponent", PyvtkFastLabeledDataMapper_SetLabeledComponent, METH_VARARGS,
   "SetLabeledComponent(self, _arg:int) -> None\nC++: virtual void SetLabeledComponent(int _arg)\n\nSet/Get the component number to label if the data to print has\nmore than one component. For example, all the components of\nscalars, vectors, normals, etc. are labeled by default\n(LabeledComponent=(-1)). However, if this ivar is nonnegative,\nthen only the one component specified is labeled.\n"},
  {"GetLabeledComponent", PyvtkFastLabeledDataMapper_GetLabeledComponent, METH_VARARGS,
   "GetLabeledComponent(self) -> int\nC++: virtual int GetLabeledComponent()\n\n"},
  {"SetComponentSeparator", PyvtkFastLabeledDataMapper_SetComponentSeparator, METH_VARARGS,
   "SetComponentSeparator(self, _arg:str) -> None\nC++: virtual void SetComponentSeparator(char _arg)\n\nSet/Get the separator between components.\n"},
  {"GetComponentSeparator", PyvtkFastLabeledDataMapper_GetComponentSeparator, METH_VARARGS,
   "GetComponentSeparator(self) -> str\nC++: virtual char GetComponentSeparator()\n\n"},
  {"SetFieldDataArray", PyvtkFastLabeledDataMapper_SetFieldDataArray, METH_VARARGS,
   "SetFieldDataArray(self, _arg:int) -> None\nC++: virtual void SetFieldDataArray(int _arg)\n\nSet/Get the field data array to label. This instance variable is\nonly applicable if field data is labeled.  This will clear\nFieldDataName when set.\n"},
  {"GetFieldDataArrayMinValue", PyvtkFastLabeledDataMapper_GetFieldDataArrayMinValue, METH_VARARGS,
   "GetFieldDataArrayMinValue(self) -> int\nC++: virtual int GetFieldDataArrayMinValue()\n\n"},
  {"GetFieldDataArrayMaxValue", PyvtkFastLabeledDataMapper_GetFieldDataArrayMaxValue, METH_VARARGS,
   "GetFieldDataArrayMaxValue(self) -> int\nC++: virtual int GetFieldDataArrayMaxValue()\n\n"},
  {"GetFieldDataArray", PyvtkFastLabeledDataMapper_GetFieldDataArray, METH_VARARGS,
   "GetFieldDataArray(self) -> int\nC++: virtual int GetFieldDataArray()\n\n"},
  {"SetFieldDataName", PyvtkFastLabeledDataMapper_SetFieldDataName, METH_VARARGS,
   "SetFieldDataName(self, _arg:str) -> None\nC++: virtual void SetFieldDataName(const char *_arg)\n\nSet/Get the name of the field data array to label.  This instance\nvariable is only applicable if field data is labeled.  This will\noverride FieldDataArray when set.\n"},
  {"GetFieldDataName", PyvtkFastLabeledDataMapper_GetFieldDataName, METH_VARARGS,
   "GetFieldDataName(self) -> str\nC++: virtual char *GetFieldDataName()\n\n"},
  {"SetLabelMode", PyvtkFastLabeledDataMapper_SetLabelMode, METH_VARARGS,
   "SetLabelMode(self, _arg:int) -> None\nC++: virtual void SetLabelMode(int _arg)\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {"GetLabelMode", PyvtkFastLabeledDataMapper_GetLabelMode, METH_VARARGS,
   "GetLabelMode(self) -> int\nC++: virtual int GetLabelMode()\n\n"},
  {"SetLabelModeToLabelIds", PyvtkFastLabeledDataMapper_SetLabelModeToLabelIds, METH_VARARGS,
   "SetLabelModeToLabelIds(self) -> None\nC++: void SetLabelModeToLabelIds()\n\n"},
  {"SetLabelModeToLabelScalars", PyvtkFastLabeledDataMapper_SetLabelModeToLabelScalars, METH_VARARGS,
   "SetLabelModeToLabelScalars(self) -> None\nC++: void SetLabelModeToLabelScalars()\n\n"},
  {"SetLabelModeToLabelVectors", PyvtkFastLabeledDataMapper_SetLabelModeToLabelVectors, METH_VARARGS,
   "SetLabelModeToLabelVectors(self) -> None\nC++: void SetLabelModeToLabelVectors()\n\n"},
  {"SetLabelModeToLabelNormals", PyvtkFastLabeledDataMapper_SetLabelModeToLabelNormals, METH_VARARGS,
   "SetLabelModeToLabelNormals(self) -> None\nC++: void SetLabelModeToLabelNormals()\n\n"},
  {"SetLabelModeToLabelTCoords", PyvtkFastLabeledDataMapper_SetLabelModeToLabelTCoords, METH_VARARGS,
   "SetLabelModeToLabelTCoords(self) -> None\nC++: void SetLabelModeToLabelTCoords()\n\n"},
  {"SetLabelModeToLabelTensors", PyvtkFastLabeledDataMapper_SetLabelModeToLabelTensors, METH_VARARGS,
   "SetLabelModeToLabelTensors(self) -> None\nC++: void SetLabelModeToLabelTensors()\n\n"},
  {"SetLabelModeToLabelFieldData", PyvtkFastLabeledDataMapper_SetLabelModeToLabelFieldData, METH_VARARGS,
   "SetLabelModeToLabelFieldData(self) -> None\nC++: void SetLabelModeToLabelFieldData()\n\n"},
  {"SetLabelTextProperty", PyvtkFastLabeledDataMapper_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\nSetLabelTextProperty(self, p:vtkTextProperty, type:int) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p,\n    int type)\n\nSet/Get the text property. If an integer argument is provided,\nyou may provide different text properties for different label\ntypes. The type is determined by an optional type input array.\n"},
  {"GetLabelTextProperty", PyvtkFastLabeledDataMapper_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\nGetLabelTextProperty(self, type:int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty(int type)\n\n"},
  {"SetFrameColorsName", PyvtkFastLabeledDataMapper_SetFrameColorsName, METH_VARARGS,
   "SetFrameColorsName(self, _arg:str) -> None\nC++: virtual void SetFrameColorsName(const char *_arg)\n\nOverride TextProperty frame colors with a named, point aligned\ncolor array.\n"},
  {"GetFrameColorsName", PyvtkFastLabeledDataMapper_GetFrameColorsName, METH_VARARGS,
   "GetFrameColorsName(self) -> str\nC++: virtual char *GetFrameColorsName()\n\n"},
  {"SetTextAnchor", PyvtkFastLabeledDataMapper_SetTextAnchor, METH_VARARGS,
   "SetTextAnchor(self, _arg:int) -> None\nC++: virtual void SetTextAnchor(int _arg)\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"GetTextAnchor", PyvtkFastLabeledDataMapper_GetTextAnchor, METH_VARARGS,
   "GetTextAnchor(self) -> int\nC++: virtual int GetTextAnchor()\n\n"},
  {"RenderPiece", PyvtkFastLabeledDataMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *ren, vtkActor *act) override;\n\nOverridden to rebuild labels if necessary.\n"},
  {"RenderPieceStart", PyvtkFastLabeledDataMapper_RenderPieceStart, METH_VARARGS,
   "RenderPieceStart(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPieceStart(vtkRenderer *ren, vtkActor *act)\n    override;\n\nOverridden to setup textureobject.\n"},
  {"RenderPieceFinish", PyvtkFastLabeledDataMapper_RenderPieceFinish, METH_VARARGS,
   "RenderPieceFinish(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPieceFinish(vtkRenderer *ren, vtkActor *act)\n    override;\n\nOverridden to teardown textureobject.\n"},
  {"SetInputData", PyvtkFastLabeledDataMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkDataSet) -> None\nC++: virtual void SetInputData(vtkDataSet *)\n\nSet the input dataset to the mapper. This mapper handles any\nvtkDataSet.\n"},
  {"GetMTime", PyvtkFastLabeledDataMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to take into account LabelTextProperty's mtime\n"},
  {"ReleaseGraphicsResources", PyvtkFastLabeledDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nOverridden to release internal textureobject.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFastLabeledDataMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("label_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetLabelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetLabelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetLabelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelFormat/SetLabelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("labeled_component"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetLabeledComponent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetLabeledComponent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetLabeledComponent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabeledComponent/SetLabeledComponent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("component_separator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetComponentSeparator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetComponentSeparator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetComponentSeparator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComponentSeparator/SetComponentSeparator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_data_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetFieldDataArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetFieldDataArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetFieldDataArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFieldDataArray/SetFieldDataArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_data_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetFieldDataName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetFieldDataName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetFieldDataName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFieldDataName/SetFieldDataName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetLabelMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetLabelMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetLabelMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelMode/SetLabelMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_text_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetLabelTextProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetLabelTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetLabelTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelTextProperty/SetLabelTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("frame_colors_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetFrameColorsName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetFrameColorsName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetFrameColorsName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFrameColorsName/SetFrameColorsName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("text_anchor"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetTextAnchor(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetTextAnchor(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetTextAnchor(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTextAnchor/SetTextAnchor\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFastLabeledDataMapper_SetInputData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFastLabeledDataMapper_SetInputData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFastLabeledDataMapper_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFastLabeledDataMapper_Doc =
  "vtkFastLabeledDataMapper - draw text labels at dataset points\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "vtkFastLabeledDataMapper is a mapper that renders text at dataset\n"
  "points quickly. The API is similar to but the implementation is\n"
  "different from vtkLabeledDataMapper which this class is meant to\n"
  "replace. This new class is faster than its predecessor because it\n"
  "renders all of the labels at once via shaders instead of deferring to\n"
  "helper instances for each individual label.\n\n"
  "@sa\n"
  "vtkLabeledDataMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFastLabeledDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkFastLabeledDataMapper", // tp_name
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
  PyvtkFastLabeledDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFastLabeledDataMapper_StaticNew()
{
  return vtkFastLabeledDataMapper::New();
}

PyObject *PyvtkFastLabeledDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFastLabeledDataMapper_Type, PyvtkFastLabeledDataMapper_Methods,
    "vtkFastLabeledDataMapper",
 &PyvtkFastLabeledDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkFastLabeledDataMapper_TextAnchor_Type);
  PyVTKEnum_Add(&PyvtkFastLabeledDataMapper_TextAnchor_Type, "vtkFastLabeledDataMapper.TextAnchor");

  o = (PyObject *)&PyvtkFastLabeledDataMapper_TextAnchor_Type;
  if (PyDict_SetItemString(d, "TextAnchor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "LowerLeft", vtkFastLabeledDataMapper::LowerLeft },
        { "LowerRight", vtkFastLabeledDataMapper::LowerRight },
        { "UpperLeft", vtkFastLabeledDataMapper::UpperLeft },
        { "UpperRight", vtkFastLabeledDataMapper::UpperRight },
        { "LowerEdge", vtkFastLabeledDataMapper::LowerEdge },
        { "RightEdge", vtkFastLabeledDataMapper::RightEdge },
        { "LeftEdge", vtkFastLabeledDataMapper::LeftEdge },
        { "UpperEdge", vtkFastLabeledDataMapper::UpperEdge },
        { "Center", vtkFastLabeledDataMapper::Center },
      };

    o = PyvtkFastLabeledDataMapper_TextAnchor_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFastLabeledDataMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFastLabeledDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFastLabeledDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFastLabeledDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

