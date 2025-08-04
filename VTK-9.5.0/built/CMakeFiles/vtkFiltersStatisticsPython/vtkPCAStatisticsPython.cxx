// python wrapper for vtkPCAStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPCAStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkPCAStatistics(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkPCAStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkMultiCorrelativeStatistics_ClassNew
extern "C" { PyObject *PyvtkMultiCorrelativeStatistics_ClassNew(); }
#define DECLARED_PyvtkMultiCorrelativeStatistics_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCAStatistics_NormalizationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkPCAStatistics.NormalizationType", // tp_name
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
static PyObject *PyvtkPCAStatistics_NormalizationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPCAStatistics_NormalizationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCAStatistics_ProjectionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkPCAStatistics.ProjectionType", // tp_name
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
static PyObject *PyvtkPCAStatistics_ProjectionType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPCAStatistics_ProjectionType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPCAStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCAStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCAStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCAStatistics *tempr = vtkPCAStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCAStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCAStatistics::NewInstance());

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
PyvtkPCAStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPCAStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPCAStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizationScheme(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetNormalizationScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizationScheme() :
      op->vtkPCAStatistics::GetNormalizationScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetNormalizationSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizationSchemeByName(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetNormalizationSchemeByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetNormalizationSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalizationSchemeName(temp0) :
      op->vtkPCAStatistics::GetNormalizationSchemeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetSpecifiedNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecifiedNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetSpecifiedNormalization() :
      op->vtkPCAStatistics::GetSpecifiedNormalization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetSpecifiedNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecifiedNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetSpecifiedNormalization(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetSpecifiedNormalization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetEigenvalues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvalues(temp0, temp1);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvalues(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvalues(temp0);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvalues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPCAStatistics_GetEigenvalues_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvalues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvalues");
  return nullptr;
}


static PyObject *
PyvtkPCAStatistics_GetEigenvalue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetEigenvalue(temp0, temp1) :
      op->vtkPCAStatistics::GetEigenvalue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEigenvalue(temp0) :
      op->vtkPCAStatistics::GetEigenvalue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvalue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPCAStatistics_GetEigenvalue_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvalue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvalue");
  return nullptr;
}


static PyObject *
PyvtkPCAStatistics_GetEigenvectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvectors(temp0, temp1);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvectors(temp0);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPCAStatistics_GetEigenvectors_s1(self, args);
    case 1:
      return PyvtkPCAStatistics_GetEigenvectors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvectors");
  return nullptr;
}


static PyObject *
PyvtkPCAStatistics_GetEigenvector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvector(temp0, temp1);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  int temp1;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetEigenvector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPCAStatistics::GetEigenvector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCAStatistics_GetEigenvector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPCAStatistics_GetEigenvector_s1(self, args);
    case 3:
      return PyvtkPCAStatistics_GetEigenvector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEigenvector");
  return nullptr;
}


static PyObject *
PyvtkPCAStatistics_SetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBasisScheme(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetBasisScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBasisScheme() :
      op->vtkPCAStatistics::GetBasisScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetBasisSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBasisSchemeName(temp0) :
      op->vtkPCAStatistics::GetBasisSchemeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetBasisSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBasisSchemeByName(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetBasisSchemeByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedBasisSize(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetFixedBasisSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedBasisSize() :
      op->vtkPCAStatistics::GetFixedBasisSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedBasisEnergy(temp0);
    }
    else
    {
      op->vtkPCAStatistics::SetFixedBasisEnergy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMinValue() :
      op->vtkPCAStatistics::GetFixedBasisEnergyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMaxValue() :
      op->vtkPCAStatistics::GetFixedBasisEnergyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_GetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergy() :
      op->vtkPCAStatistics::GetFixedBasisEnergy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAStatistics *op = static_cast<vtkPCAStatistics *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, *temp2) :
      op->vtkPCAStatistics::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkPCAStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPCAStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCAStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCAStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPCAStatistics\nC++: static vtkPCAStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCAStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPCAStatistics\nC++: vtkPCAStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPCAStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPCAStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNormalizationScheme", PyvtkPCAStatistics_SetNormalizationScheme, METH_VARARGS,
   "SetNormalizationScheme(self, _arg:int) -> None\nC++: virtual void SetNormalizationScheme(int _arg)\n\nThis determines how (or if) the covariance matrix cov is\nnormalized before PCA.\n\n* When set to NONE, no normalization is performed. This is the\n  default.\n\n* When set to TRIANGLE_SPECIFIED, each entry cov(i,j) is divided\n  by V(i,j).\n* The list V of normalization factors must be set using the\n  SetNormalization method\n* before the filter is executed.\n\n* When set to DIAGONAL_SPECIFIED, each entry cov(i,j) is divided\n  by sqrt(V(i)*V(j)).\n* The list V of normalization factors must be set using the\n  SetNormalization method\n* before the filter is executed.\n\n* When set to DIAGONAL_VARIANCE, each entry cov(i,j) is divided\n  by sqrt(cov(i,i)*cov(j,j)).\n* Warning: Although this is accepted practice in some fields,\n* some people think you should not turn this option on unless\n  there\n* is a good physically-based reason for doing so. Much better\n  instead\n* to determine how component magnitudes should be compared using\n* physical reasoning and use DIAGONAL_SPECIFIED,\n  TRIANGLE_SPECIFIED, or\n* perform some pre-processing to shift and scale input data\n  columns\n* appropriately than to expect magical results from a shady\n  normalization hack.\n"},
  {"GetNormalizationScheme", PyvtkPCAStatistics_GetNormalizationScheme, METH_VARARGS,
   "GetNormalizationScheme(self) -> int\nC++: virtual int GetNormalizationScheme()\n\n"},
  {"SetNormalizationSchemeByName", PyvtkPCAStatistics_SetNormalizationSchemeByName, METH_VARARGS,
   "SetNormalizationSchemeByName(self, schemeName:str) -> None\nC++: virtual void SetNormalizationSchemeByName(\n    const char *schemeName)\n\n"},
  {"GetNormalizationSchemeName", PyvtkPCAStatistics_GetNormalizationSchemeName, METH_VARARGS,
   "GetNormalizationSchemeName(self, scheme:int) -> str\nC++: virtual const char *GetNormalizationSchemeName(int scheme)\n\n"},
  {"GetSpecifiedNormalization", PyvtkPCAStatistics_GetSpecifiedNormalization, METH_VARARGS,
   "GetSpecifiedNormalization(self) -> vtkTable\nC++: virtual vtkTable *GetSpecifiedNormalization()\n\nThese methods allow you to set/get values used to normalize the\ncovariance matrix before PCA. The normalization values apply to\nall requests, so you do not specify a single vector but a\n3-column table.\n\n* The first two columns contain the names of columns from input 0\nand the third column contains\n* the value to normalize the corresponding entry in the\n  covariance matrix.\n* The table must always have 3 columns even when the\n  NormalizationScheme is DIAGONAL_SPECIFIED.\n* When only diagonal entries are to be used, only table rows\n  where the first two columns are\n* identical to one another will be employed.\n* If there are multiple rows specifying different values for the\n  same pair of columns,\n* the entry nearest the bottom of the table takes precedence.\n\n* These functions are actually convenience methods that set/get\n  the third input of the filter.\n* Because the table is the third input, you may use other filters\nto produce a table of\n* normalizations and have the pipeline take care of updates.\n\n* Any missing entries will be set to 1.0 and a warning issued.\n* An error will occur if the third input to the filter is not set\nand the\n* NormalizationScheme is DIAGONAL_SPECIFIED or\n  TRIANGLE_SPECIFIED.\n\n* NOTE: SetSpecifiedNormalization( table ) is equivalent to\n  SetInputData(3, table)\n* and therefore does not make a pipeline connection.\n"},
  {"SetSpecifiedNormalization", PyvtkPCAStatistics_SetSpecifiedNormalization, METH_VARARGS,
   "SetSpecifiedNormalization(self, __a:vtkTable) -> None\nC++: virtual void SetSpecifiedNormalization(vtkTable *)\n\n"},
  {"GetEigenvalues", PyvtkPCAStatistics_GetEigenvalues, METH_VARARGS,
   "GetEigenvalues(self, request:int, __b:vtkDoubleArray) -> None\nC++: void GetEigenvalues(int request, vtkDoubleArray *)\nGetEigenvalues(self, __a:vtkDoubleArray) -> None\nC++: void GetEigenvalues(vtkDoubleArray *)\n\nGet the eigenvalues. The eigenvalues are ordered according from\nlargest to smallest. This function: void GetEigenvalues(int\nrequest, int i, vtkDoubleArray*); does all of the work. The other\nfunctions simply call this function with the appropriate\nparameters. These functions are not valid unless Update() has\nbeen called and the Derive option is turned on.\n"},
  {"GetEigenvalue", PyvtkPCAStatistics_GetEigenvalue, METH_VARARGS,
   "GetEigenvalue(self, request:int, i:int) -> float\nC++: double GetEigenvalue(int request, int i)\nGetEigenvalue(self, i:int) -> float\nC++: double GetEigenvalue(int i)\n\n"},
  {"GetEigenvectors", PyvtkPCAStatistics_GetEigenvectors, METH_VARARGS,
   "GetEigenvectors(self, request:int, eigenvectors:vtkDoubleArray)\n    -> None\nC++: void GetEigenvectors(int request,\n    vtkDoubleArray *eigenvectors)\nGetEigenvectors(self, eigenvectors:vtkDoubleArray) -> None\nC++: void GetEigenvectors(vtkDoubleArray *eigenvectors)\n\nGet the eigenvectors. The eigenvectors are ordered according to\nthe magnitude of their associated eigenvalues, sorted from\nlargest to smallest. That is, eigenvector 0 corresponds to the\nlargest eigenvalue. This function: void GetEigenvectors(int\nrequest, vtkDoubleArray* eigenvectors) does all of the work. The\nother functions are convenience functions that call this function\nwith default arguments. These functions are not valid unless\nUpdate() has been called and the Derive option is turned on.\n"},
  {"GetEigenvector", PyvtkPCAStatistics_GetEigenvector, METH_VARARGS,
   "GetEigenvector(self, i:int, eigenvector:vtkDoubleArray) -> None\nC++: void GetEigenvector(int i, vtkDoubleArray *eigenvector)\nGetEigenvector(self, request:int, i:int,\n    eigenvector:vtkDoubleArray) -> None\nC++: void GetEigenvector(int request, int i,\n    vtkDoubleArray *eigenvector)\n\n"},
  {"SetBasisScheme", PyvtkPCAStatistics_SetBasisScheme, METH_VARARGS,
   "SetBasisScheme(self, _arg:int) -> None\nC++: virtual void SetBasisScheme(int _arg)\n\nThis variable controls the dimensionality of output tuples in\nAssess operation. Consider the case where you have requested a\nPCA on D columns.\n\n* When set to vtkPCAStatistics::FULL_BASIS, the entire set of\n  basis vectors\n* is used to derive new coordinates for each tuple being\n  assessed.\n* In this mode, you are guaranteed to have output tuples of the\n  same dimension\n* as the input tuples. (That dimension is D, so there will be D\n  additional\n* columns added to the table for the request.)\n\n* When set to vtkPCAStatistics::FIXED_BASIS_SIZE, only the first\n  N basis vectors\n* are used to derive new coordinates for each tuple being\n  assessed.\n* In this mode, you are guaranteed to have output tuples of\n  dimension min(N,D).\n* You must set N prior to assessing data using the\n  SetFixedBasisSize() method.\n* When N < D, this turns the PCA into a projection (instead of\n  change of basis).\n\n* When set to vtkPCAStatistics::FIXED_BASIS_ENERGY, the number of\nbasis vectors\n* used to derive new coordinates for each tuple will be the\n  minimum number\n* of columns N that satisfy\n* \\[\n* \\frac{\\sum_{i=1}^{N} \\lambda_i}{\\sum_{i=1}^{D} \\lambda_i} < T\n* \\]\n* You must set T prior to assessing data using the\n  SetFixedBasisEnergy() method.\n* When T < 1, this turns the PCA into a projection (instead of\n  change of basis).\n\n* By default BasisScheme is set to vtkPCAStatistics::FULL_BASIS.\n"},
  {"GetBasisScheme", PyvtkPCAStatistics_GetBasisScheme, METH_VARARGS,
   "GetBasisScheme(self) -> int\nC++: virtual int GetBasisScheme()\n\n"},
  {"GetBasisSchemeName", PyvtkPCAStatistics_GetBasisSchemeName, METH_VARARGS,
   "GetBasisSchemeName(self, schemeIndex:int) -> str\nC++: virtual const char *GetBasisSchemeName(int schemeIndex)\n\n"},
  {"SetBasisSchemeByName", PyvtkPCAStatistics_SetBasisSchemeByName, METH_VARARGS,
   "SetBasisSchemeByName(self, schemeName:str) -> None\nC++: virtual void SetBasisSchemeByName(const char *schemeName)\n\n"},
  {"SetFixedBasisSize", PyvtkPCAStatistics_SetFixedBasisSize, METH_VARARGS,
   "SetFixedBasisSize(self, _arg:int) -> None\nC++: virtual void SetFixedBasisSize(int _arg)\n\nThe number of basis vectors to use. See SetBasisScheme() for more\ninformation. When FixedBasisSize <= 0 (the default), the fixed\nbasis size scheme is equivalent to the full basis scheme.\n"},
  {"GetFixedBasisSize", PyvtkPCAStatistics_GetFixedBasisSize, METH_VARARGS,
   "GetFixedBasisSize(self) -> int\nC++: virtual int GetFixedBasisSize()\n\n"},
  {"SetFixedBasisEnergy", PyvtkPCAStatistics_SetFixedBasisEnergy, METH_VARARGS,
   "SetFixedBasisEnergy(self, _arg:float) -> None\nC++: virtual void SetFixedBasisEnergy(double _arg)\n\nThe minimum energy the new basis should use, as a fraction. See\nSetBasisScheme() for more information. When FixedBasisEnergy >= 1\n(the default), the fixed basis energy scheme is equivalent to the\nfull basis scheme.\n"},
  {"GetFixedBasisEnergyMinValue", PyvtkPCAStatistics_GetFixedBasisEnergyMinValue, METH_VARARGS,
   "GetFixedBasisEnergyMinValue(self) -> float\nC++: virtual double GetFixedBasisEnergyMinValue()\n\n"},
  {"GetFixedBasisEnergyMaxValue", PyvtkPCAStatistics_GetFixedBasisEnergyMaxValue, METH_VARARGS,
   "GetFixedBasisEnergyMaxValue(self) -> float\nC++: virtual double GetFixedBasisEnergyMaxValue()\n\n"},
  {"GetFixedBasisEnergy", PyvtkPCAStatistics_GetFixedBasisEnergy, METH_VARARGS,
   "GetFixedBasisEnergy(self) -> float\nC++: virtual double GetFixedBasisEnergy()\n\n"},
  {"SetParameter", PyvtkPCAStatistics_SetParameter, METH_VARARGS,
   "SetParameter(self, parameter:str, index:int, value:vtkVariant)\n    -> bool\nC++: bool SetParameter(const char *parameter, int index,\n    vtkVariant value) override;\n\nA convenience method (in particular for access from other\napplications) to set parameter values. Return true if setting of\nrequested parameter name was executed, false otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkPCAStatistics_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("normalization_scheme"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPCAStatistics_GetNormalizationScheme(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetNormalizationScheme(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetNormalizationScheme(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNormalizationScheme/SetNormalizationScheme\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("normalization_scheme_by_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetNormalizationSchemeByName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetNormalizationSchemeByName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetNormalizationSchemeByName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("specified_normalization"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPCAStatistics_GetSpecifiedNormalization(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetSpecifiedNormalization(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetSpecifiedNormalization(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSpecifiedNormalization/SetSpecifiedNormalization\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("basis_scheme"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPCAStatistics_GetBasisScheme(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetBasisScheme(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetBasisScheme(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBasisScheme/SetBasisScheme\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("basis_scheme_by_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetBasisSchemeByName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetBasisSchemeByName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetBasisSchemeByName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_basis_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPCAStatistics_GetFixedBasisSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetFixedBasisSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetFixedBasisSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFixedBasisSize/SetFixedBasisSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_basis_energy"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkPCAStatistics_GetFixedBasisEnergy(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkPCAStatistics_SetFixedBasisEnergy(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkPCAStatistics_SetFixedBasisEnergy(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFixedBasisEnergy/SetFixedBasisEnergy\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkPCAStatistics_Doc =
  "vtkPCAStatistics - A class for multivariate principal component\nanalysis\n\n"
  "Superclass: vtkMultiCorrelativeStatistics\n\n"
  "This class derives from the multi-correlative statistics algorithm\n"
  "and uses the covariance matrix and Cholesky decomposition computed by\n"
  "it. However, when it finalizes the statistics in learn operation, the\n"
  "PCA class computes the SVD of the covariance matrix in order to\n"
  "obtain its eigenvectors.\n\n"
  "In the assess operation, the input data are\n"
  "- projected into the basis defined by the eigenvectors,\n"
  "- the energy associated with each datum is computed,\n"
  "- or some combination thereof. Additionally, the user may specify\n"
  "  some threshold energy or eigenvector entry below which the basis is\n"
  "truncated. This allows projection into a lower-dimensional state\n"
  "  while minimizing (in a least squares sense) the projection error.\n\n"
  "In the test operation, a Jarque-Bera-Srivastava test of n-d normality\n"
  "is performed.\n\n"
  "The Robust PCA can be computed by using the median instead of the\n"
  "mean, and the MAD matrix (Median Absolute Deviation) instead of the\n"
  "covariance matrix. This can be done by activating the\n"
  "MedianAbsoluteDeviation boolean (declared in the superclass).\n\n"
  "@par Thanks: Thanks to David Thompson, Philippe Pebay and Jackson\n"
  "Mayo from Sandia National Laboratories for implementing this class.\n"
  "Updated by Philippe Pebay, Kitware SAS 2012 Updated by Tristan\n"
  "Coulange and Joachim Pouderoux, Kitware SAS 2013\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCAStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkPCAStatistics", // tp_name
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
  PyvtkPCAStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCAStatistics_StaticNew()
{
  return vtkPCAStatistics::New();
}

PyObject *PyvtkPCAStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPCAStatistics_Type, PyvtkPCAStatistics_Methods,
    "vtkPCAStatistics",
 &PyvtkPCAStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMultiCorrelativeStatistics_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPCAStatistics_NormalizationType_Type);
  PyVTKEnum_Add(&PyvtkPCAStatistics_NormalizationType_Type, "vtkPCAStatistics.NormalizationType");

  o = (PyObject *)&PyvtkPCAStatistics_NormalizationType_Type;
  if (PyDict_SetItemString(d, "NormalizationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPCAStatistics_ProjectionType_Type);
  PyVTKEnum_Add(&PyvtkPCAStatistics_ProjectionType_Type, "vtkPCAStatistics.ProjectionType");

  o = (PyObject *)&PyvtkPCAStatistics_ProjectionType_Type;
  if (PyDict_SetItemString(d, "ProjectionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkPCAStatistics::NormalizationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "NONE", vtkPCAStatistics::NONE },
        { "TRIANGLE_SPECIFIED", vtkPCAStatistics::TRIANGLE_SPECIFIED },
        { "DIAGONAL_SPECIFIED", vtkPCAStatistics::DIAGONAL_SPECIFIED },
        { "DIAGONAL_VARIANCE", vtkPCAStatistics::DIAGONAL_VARIANCE },
        { "NUM_NORMALIZATION_SCHEMES", vtkPCAStatistics::NUM_NORMALIZATION_SCHEMES },
      };

    o = PyvtkPCAStatistics_NormalizationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPCAStatistics::ProjectionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FULL_BASIS", vtkPCAStatistics::FULL_BASIS },
        { "FIXED_BASIS_SIZE", vtkPCAStatistics::FIXED_BASIS_SIZE },
        { "FIXED_BASIS_ENERGY", vtkPCAStatistics::FIXED_BASIS_ENERGY },
        { "NUM_BASIS_SCHEMES", vtkPCAStatistics::NUM_BASIS_SCHEMES },
      };

    o = PyvtkPCAStatistics_ProjectionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkPCAStatistics_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCAStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCAStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCAStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

