// python wrapper for vtkHDFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHDFReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHDFReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHDFReader_ClassNew(); }


static PyObject *
PyvtkHDFReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHDFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHDFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHDFReader *tempr = vtkHDFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHDFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHDFReader::NewInstance());

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
PyvtkHDFReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHDFReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHDFReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkHDFReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkHDFReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkHDFReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetOutputAsDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutputAsDataSet() :
      op->vtkHDFReader::GetOutputAsDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHDFReader_GetOutputAsDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutputAsDataSet(temp0) :
      op->vtkHDFReader::GetOutputAsDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHDFReader_GetOutputAsDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHDFReader_GetOutputAsDataSet_s1(self, args);
    case 1:
      return PyvtkHDFReader_GetOutputAsDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputAsDataSet");
  return nullptr;
}


static PyObject *
PyvtkHDFReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkHDFReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkHDFReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetFieldDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldDataArraySelection() :
      op->vtkHDFReader::GetFieldDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkHDFReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkHDFReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkHDFReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkHDFReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetHasTransientData(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetHasTransientData."
    " (" "Please use GetTemporalData method instead." ")"
    " -- Deprecated since version " "9.4.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetHasTransientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasTransientData() :
      op->vtkHDFReader::GetHasTransientData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetHasTemporalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasTemporalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasTemporalData() :
      op->vtkHDFReader::GetHasTemporalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfSteps() :
      op->vtkHDFReader::GetNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetStep() :
      op->vtkHDFReader::GetStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStep(temp0);
    }
    else
    {
      op->vtkHDFReader::SetStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkHDFReader::GetTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCache() :
      op->vtkHDFReader::GetUseCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCache(temp0);
    }
    else
    {
      op->vtkHDFReader::SetUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_UseCacheOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCacheOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCacheOn();
    }
    else
    {
      op->vtkHDFReader::UseCacheOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_UseCacheOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCacheOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCacheOff();
    }
    else
    {
      op->vtkHDFReader::UseCacheOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetMergeParts(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetMergeParts."
    " (" "Use vtkMergeBlocks or vtkAppendDataSets instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetMergeParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeParts() :
      op->vtkHDFReader::GetMergeParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetMergeParts(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetMergeParts."
    " (" "Use vtkMergeBlocks vtkAppendDataSets instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetMergeParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeParts(temp0);
    }
    else
    {
      op->vtkHDFReader::SetMergeParts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_MergePartsOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method MergePartsOn."
    " (" "Use vtkMergeBlocks vtkAppendDataSets instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "MergePartsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePartsOn();
    }
    else
    {
      op->vtkHDFReader::MergePartsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_MergePartsOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method MergePartsOff."
    " (" "Use vtkMergeBlocks vtkAppendDataSets instead." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "MergePartsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePartsOff();
    }
    else
    {
      op->vtkHDFReader::MergePartsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetMaximumLevelsToReadByDefaultForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevelsToReadByDefaultForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLevelsToReadByDefaultForAMR(temp0);
    }
    else
    {
      op->vtkHDFReader::SetMaximumLevelsToReadByDefaultForAMR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetMaximumLevelsToReadByDefaultForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevelsToReadByDefaultForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumLevelsToReadByDefaultForAMR() :
      op->vtkHDFReader::GetMaximumLevelsToReadByDefaultForAMR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_GetAttributeOriginalIdName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOriginalIdName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAttributeOriginalIdName(temp0) :
      op->vtkHDFReader::GetAttributeOriginalIdName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFReader_SetAttributeOriginalIdName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeOriginalIdName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFReader *op = static_cast<vtkHDFReader *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAttributeOriginalIdName(temp0, temp1);
    }
    else
    {
      op->vtkHDFReader::SetAttributeOriginalIdName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHDFReader_Methods[] = {
  {"IsTypeOf", PyvtkHDFReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHDFReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHDFReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHDFReader\nC++: static vtkHDFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHDFReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHDFReader\nC++: vtkHDFReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHDFReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHDFReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkHDFReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the input file.\n"},
  {"GetFileName", PyvtkHDFReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"CanReadFile", PyvtkHDFReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, name:str) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file (type) with the given name can be read by\nthis reader. If the file has a newer version than the reader, we\nstill say we can read the file type and we fail later, when we\ntry to read the file. This enables clients (ParaView) to\ndistinguish between failures when we need to look for another\nreader and failures when we don't.\n"},
  {"GetOutputAsDataSet", PyvtkHDFReader_GetOutputAsDataSet, METH_VARARGS,
   "GetOutputAsDataSet(self) -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet()\nGetOutputAsDataSet(self, index:int) -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet(int index)\n\nGet the output as a vtkDataSet pointer.\n"},
  {"GetPointDataArraySelection", PyvtkHDFReader_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetCellDataArraySelection", PyvtkHDFReader_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\n"},
  {"GetFieldDataArraySelection", PyvtkHDFReader_GetFieldDataArraySelection, METH_VARARGS,
   "GetFieldDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetFieldDataArraySelection()\n\n"},
  {"GetNumberOfPointArrays", PyvtkHDFReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetNumberOfCellArrays", PyvtkHDFReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {"GetPointArrayName", PyvtkHDFReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetCellArrayName", PyvtkHDFReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\n"},
  {"GetHasTransientData", PyvtkHDFReader_GetHasTransientData, METH_VARARGS,
   "GetHasTransientData(self) -> bool\nC++: virtual bool GetHasTransientData()\n\nGetters and setters for temporal data\n- HasTemporalData is a boolean that flags whether the file has\n  temporal data\n- NumberOfSteps is the number of time steps contained in the file\n- Step is the time step to be read or last read by the reader\n- TimeValue is the value corresponding to the Step property\n- TimeRange is an array with the {min, max} values of time for\n  the data\n"},
  {"GetHasTemporalData", PyvtkHDFReader_GetHasTemporalData, METH_VARARGS,
   "GetHasTemporalData(self) -> bool\nC++: bool GetHasTemporalData()\n\n"},
  {"GetNumberOfSteps", PyvtkHDFReader_GetNumberOfSteps, METH_VARARGS,
   "GetNumberOfSteps(self) -> int\nC++: virtual vtkIdType GetNumberOfSteps()\n\n"},
  {"GetStep", PyvtkHDFReader_GetStep, METH_VARARGS,
   "GetStep(self) -> int\nC++: virtual vtkIdType GetStep()\n\n"},
  {"SetStep", PyvtkHDFReader_SetStep, METH_VARARGS,
   "SetStep(self, _arg:int) -> None\nC++: virtual void SetStep(vtkIdType _arg)\n\n"},
  {"GetTimeValue", PyvtkHDFReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self) -> float\nC++: virtual double GetTimeValue()\n\n"},
  {"GetUseCache", PyvtkHDFReader_GetUseCache, METH_VARARGS,
   "GetUseCache(self) -> bool\nC++: virtual bool GetUseCache()\n\nBoolean property determining whether to use the internal cache or\nnot (default is false).\n\nInternal cache is useful when reading temporal data to never\nre-read something that has already been cached.\n\note Incompatible with MergeParts as vtkAppendDataSet which is\nused internally doesn't support static mesh.\n"},
  {"SetUseCache", PyvtkHDFReader_SetUseCache, METH_VARARGS,
   "SetUseCache(self, _arg:bool) -> None\nC++: virtual void SetUseCache(bool _arg)\n\n"},
  {"UseCacheOn", PyvtkHDFReader_UseCacheOn, METH_VARARGS,
   "UseCacheOn(self) -> None\nC++: virtual void UseCacheOn()\n\n"},
  {"UseCacheOff", PyvtkHDFReader_UseCacheOff, METH_VARARGS,
   "UseCacheOff(self) -> None\nC++: virtual void UseCacheOff()\n\n"},
  {"GetMergeParts", PyvtkHDFReader_GetMergeParts, METH_VARARGS,
   "GetMergeParts(self) -> bool\nC++: virtual bool GetMergeParts()\n\n/!\\ Now deprecated due to its limitations regarding cache, please\ndo not use! Settings this flag will have no effect. This option\ncan be replaced by the vtkMergeBlocks filter.\n\nBoolean property determining whether to merge partitions when\nreading unstructured data.\n\nMerging partitions (true) allows the reader to return either\n`vtkUnstructuredGrid` or `vtkPolyData` directly while not merging\n(false) them returns a `vtkPartitionedDataSet`. It is advised to\nset this value to false when using the internal cache (UseCache\n== true) since the partitions are what are stored in the cache\nand merging them before outputting would effectively double the\nmemory constraints.\n\nDefault is false\n\note Incompatible with UseCache as vtkAppendDataSet which is used\ninternally doesn't support static mesh.\n"},
  {"SetMergeParts", PyvtkHDFReader_SetMergeParts, METH_VARARGS,
   "SetMergeParts(self, _arg:bool) -> None\nC++: virtual void SetMergeParts(bool _arg)\n\n"},
  {"MergePartsOn", PyvtkHDFReader_MergePartsOn, METH_VARARGS,
   "MergePartsOn(self) -> None\nC++: virtual void MergePartsOn()\n\n"},
  {"MergePartsOff", PyvtkHDFReader_MergePartsOff, METH_VARARGS,
   "MergePartsOff(self) -> None\nC++: virtual void MergePartsOff()\n\n"},
  {"SetMaximumLevelsToReadByDefaultForAMR", PyvtkHDFReader_SetMaximumLevelsToReadByDefaultForAMR, METH_VARARGS,
   "SetMaximumLevelsToReadByDefaultForAMR(self, _arg:int) -> None\nC++: virtual void SetMaximumLevelsToReadByDefaultForAMR(\n    unsigned int _arg)\n\nChoose the maximum level to read for AMR structures. This only\napplies if LimitAMRLevelsToRead is active. The value 0 indicates\nthat the level read is not limited. Default is 0.\n"},
  {"GetMaximumLevelsToReadByDefaultForAMR", PyvtkHDFReader_GetMaximumLevelsToReadByDefaultForAMR, METH_VARARGS,
   "GetMaximumLevelsToReadByDefaultForAMR(self) -> int\nC++: virtual unsigned int GetMaximumLevelsToReadByDefaultForAMR()\n\n"},
  {"GetAttributeOriginalIdName", PyvtkHDFReader_GetAttributeOriginalIdName, METH_VARARGS,
   "GetAttributeOriginalIdName(self, attribute:int) -> str\nC++: std::string GetAttributeOriginalIdName(vtkIdType attribute)\n\nGet or Set the Original id name of an attribute (POINT, CELL,\nFIELD...)\n"},
  {"SetAttributeOriginalIdName", PyvtkHDFReader_SetAttributeOriginalIdName, METH_VARARGS,
   "SetAttributeOriginalIdName(self, attribute:int, name:str) -> None\nC++: void SetAttributeOriginalIdName(vtkIdType attribute,\n    const std::string &name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHDFReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("step"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetStep(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFReader_SetStep(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFReader_SetStep(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetStep/SetStep\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_cache"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetUseCache(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFReader_SetUseCache(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFReader_SetUseCache(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseCache/SetUseCache\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("merge_parts"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetMergeParts(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFReader_SetMergeParts(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFReader_SetMergeParts(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMergeParts/SetMergeParts\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_levels_to_read_by_default_for_amr"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetMaximumLevelsToReadByDefaultForAMR(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFReader_SetMaximumLevelsToReadByDefaultForAMR(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFReader_SetMaximumLevelsToReadByDefaultForAMR(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaximumLevelsToReadByDefaultForAMR/SetMaximumLevelsToReadByDefaultForAMR\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("has_temporal_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetHasTemporalData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHasTemporalData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_as_data_set"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetOutputAsDataSet(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetOutputAsDataSet\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetPointDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetCellDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_data_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetFieldDataArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFieldDataArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("has_transient_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetHasTransientData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHasTransientData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("time_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetTimeValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTimeValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_point_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetNumberOfPointArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfPointArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cell_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFReader_GetNumberOfCellArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCellArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHDFReader_Doc =
  "vtkHDFReader - Read VTK HDF files.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Reader for data saved using the VTKHDF format, supporting image data,\n"
  "poly data, unstructured grid, overlapping AMR, hyper tree grid,\n"
  "partitioned dataset collection and multiblock.\n\n"
  "Serial and parallel reading are supported, with the possibility of\n"
  "piece selection.\n\n"
  "This reader provides an internal cache with the `UseCache` option,\n"
  "improving read performance for temporal datasets when the geometry is\n"
  "constant between time steps.\n\n"
  "For non-composite datasets, constant geometry does not change the\n"
  "MeshMTime between time steps.\n\n"
  "Major version of the specification should be incremented when older\n"
  "readers can no longer read files written for this reader. Minor\n"
  "versions are for added functionality that can be safely ignored by\n"
  "older readers.\n\n"
  "ote vtkHDF file format is defined here :\n"
  "https://docs.vtk.org/en/latest/design_documents/VTKFileFormats.html#hd\n"
  "f-file-formats\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHDFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOHDF.vtkHDFReader", // tp_name
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
  PyvtkHDFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHDFReader_StaticNew()
{
  return vtkHDFReader::New();
}

PyObject *PyvtkHDFReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHDFReader_Type, PyvtkHDFReader_Methods,
    "vtkHDFReader",
 &PyvtkHDFReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHDFReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHDFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHDFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHDFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

