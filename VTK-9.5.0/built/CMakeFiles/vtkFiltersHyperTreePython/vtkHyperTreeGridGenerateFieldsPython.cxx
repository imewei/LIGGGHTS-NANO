// python wrapper for vtkHyperTreeGridGenerateFields
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGenerateFields.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHyperTreeGridGenerateFields(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHyperTreeGridGenerateFields_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridGenerateFields_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridGenerateFields::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGenerateFields::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridGenerateFields *tempr = vtkHyperTreeGridGenerateFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridGenerateFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGenerateFields::NewInstance());

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
PyvtkHyperTreeGridGenerateFields_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridGenerateFields::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridGenerateFields::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetComputeCellSizeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellSizeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeCellSizeArray() :
      op->vtkHyperTreeGridGenerateFields::GetComputeCellSizeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetComputeCellSizeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellSizeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCellSizeArray(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetComputeCellSizeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeCellSizeArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellSizeArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellSizeArrayOn();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeCellSizeArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeCellSizeArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellSizeArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellSizeArrayOff();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeCellSizeArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetCellSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCellSizeArrayName() :
      op->vtkHyperTreeGridGenerateFields::GetCellSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetCellSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellSizeArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetCellSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetComputeValidCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeValidCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeValidCellArray() :
      op->vtkHyperTreeGridGenerateFields::GetComputeValidCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetComputeValidCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeValidCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeValidCellArray(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetComputeValidCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeValidCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeValidCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeValidCellArrayOn();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeValidCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeValidCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeValidCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeValidCellArrayOff();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeValidCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetValidCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValidCellArrayName() :
      op->vtkHyperTreeGridGenerateFields::GetValidCellArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetValidCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidCellArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetValidCellArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetComputeCellCenterArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellCenterArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeCellCenterArray() :
      op->vtkHyperTreeGridGenerateFields::GetComputeCellCenterArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetComputeCellCenterArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellCenterArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCellCenterArray(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetComputeCellCenterArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeCellCenterArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellCenterArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellCenterArrayOn();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeCellCenterArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeCellCenterArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellCenterArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellCenterArrayOff();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeCellCenterArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetCellCenterArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCenterArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCellCenterArrayName() :
      op->vtkHyperTreeGridGenerateFields::GetCellCenterArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetCellCenterArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellCenterArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellCenterArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetCellCenterArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetComputeTotalVisibleVolumeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTotalVisibleVolumeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTotalVisibleVolumeArray() :
      op->vtkHyperTreeGridGenerateFields::GetComputeTotalVisibleVolumeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetComputeTotalVisibleVolumeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTotalVisibleVolumeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTotalVisibleVolumeArray(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetComputeTotalVisibleVolumeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeTotalVisibleVolumeArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTotalVisibleVolumeArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeTotalVisibleVolumeArrayOn();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeTotalVisibleVolumeArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_ComputeTotalVisibleVolumeArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTotalVisibleVolumeArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeTotalVisibleVolumeArrayOff();
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::ComputeTotalVisibleVolumeArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_GetTotalVisibleVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalVisibleVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTotalVisibleVolumeArrayName() :
      op->vtkHyperTreeGridGenerateFields::GetTotalVisibleVolumeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGenerateFields_SetTotalVisibleVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalVisibleVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGenerateFields *op = static_cast<vtkHyperTreeGridGenerateFields *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalVisibleVolumeArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGenerateFields::SetTotalVisibleVolumeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridGenerateFields_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridGenerateFields_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridGenerateFields_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridGenerateFields_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridGenerateFields\nC++: static vtkHyperTreeGridGenerateFields *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridGenerateFields_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridGenerateFields\nC++: vtkHyperTreeGridGenerateFields *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridGenerateFields_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridGenerateFields_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetComputeCellSizeArray", PyvtkHyperTreeGridGenerateFields_GetComputeCellSizeArray, METH_VARARGS,
   "GetComputeCellSizeArray(self) -> bool\nC++: virtual bool GetComputeCellSizeArray()\n\nEnable/disable the computation of the CellSize array. Default is\ntrue.\n"},
  {"SetComputeCellSizeArray", PyvtkHyperTreeGridGenerateFields_SetComputeCellSizeArray, METH_VARARGS,
   "SetComputeCellSizeArray(self, enable:bool) -> None\nC++: virtual void SetComputeCellSizeArray(bool enable)\n\n"},
  {"ComputeCellSizeArrayOn", PyvtkHyperTreeGridGenerateFields_ComputeCellSizeArrayOn, METH_VARARGS,
   "ComputeCellSizeArrayOn(self) -> None\nC++: virtual void ComputeCellSizeArrayOn()\n\n"},
  {"ComputeCellSizeArrayOff", PyvtkHyperTreeGridGenerateFields_ComputeCellSizeArrayOff, METH_VARARGS,
   "ComputeCellSizeArrayOff(self) -> None\nC++: virtual void ComputeCellSizeArrayOff()\n\n"},
  {"GetCellSizeArrayName", PyvtkHyperTreeGridGenerateFields_GetCellSizeArrayName, METH_VARARGS,
   "GetCellSizeArrayName(self) -> str\nC++: virtual std::string GetCellSizeArrayName()\n\nGet/Set the name used for the cell size array. Defaults to\n'CellSize'\n"},
  {"SetCellSizeArrayName", PyvtkHyperTreeGridGenerateFields_SetCellSizeArrayName, METH_VARARGS,
   "SetCellSizeArrayName(self, name:str) -> None\nC++: virtual void SetCellSizeArrayName(std::string name)\n\n"},
  {"GetComputeValidCellArray", PyvtkHyperTreeGridGenerateFields_GetComputeValidCellArray, METH_VARARGS,
   "GetComputeValidCellArray(self) -> bool\nC++: virtual bool GetComputeValidCellArray()\n\nEnable/disable the computation of the ValidCell array. Default is\ntrue.\n"},
  {"SetComputeValidCellArray", PyvtkHyperTreeGridGenerateFields_SetComputeValidCellArray, METH_VARARGS,
   "SetComputeValidCellArray(self, enable:bool) -> None\nC++: virtual void SetComputeValidCellArray(bool enable)\n\n"},
  {"ComputeValidCellArrayOn", PyvtkHyperTreeGridGenerateFields_ComputeValidCellArrayOn, METH_VARARGS,
   "ComputeValidCellArrayOn(self) -> None\nC++: virtual void ComputeValidCellArrayOn()\n\n"},
  {"ComputeValidCellArrayOff", PyvtkHyperTreeGridGenerateFields_ComputeValidCellArrayOff, METH_VARARGS,
   "ComputeValidCellArrayOff(self) -> None\nC++: virtual void ComputeValidCellArrayOff()\n\n"},
  {"GetValidCellArrayName", PyvtkHyperTreeGridGenerateFields_GetValidCellArrayName, METH_VARARGS,
   "GetValidCellArrayName(self) -> str\nC++: virtual std::string GetValidCellArrayName()\n\nGet/Set the name used for the cell validity array. Defaults to\n'ValidCell'\n"},
  {"SetValidCellArrayName", PyvtkHyperTreeGridGenerateFields_SetValidCellArrayName, METH_VARARGS,
   "SetValidCellArrayName(self, name:str) -> None\nC++: virtual void SetValidCellArrayName(std::string name)\n\n"},
  {"GetComputeCellCenterArray", PyvtkHyperTreeGridGenerateFields_GetComputeCellCenterArray, METH_VARARGS,
   "GetComputeCellCenterArray(self) -> bool\nC++: virtual bool GetComputeCellCenterArray()\n\nEnable/disable the computation of the CellCenter array. Default\nis true.\n"},
  {"SetComputeCellCenterArray", PyvtkHyperTreeGridGenerateFields_SetComputeCellCenterArray, METH_VARARGS,
   "SetComputeCellCenterArray(self, enable:bool) -> None\nC++: virtual void SetComputeCellCenterArray(bool enable)\n\n"},
  {"ComputeCellCenterArrayOn", PyvtkHyperTreeGridGenerateFields_ComputeCellCenterArrayOn, METH_VARARGS,
   "ComputeCellCenterArrayOn(self) -> None\nC++: virtual void ComputeCellCenterArrayOn()\n\n"},
  {"ComputeCellCenterArrayOff", PyvtkHyperTreeGridGenerateFields_ComputeCellCenterArrayOff, METH_VARARGS,
   "ComputeCellCenterArrayOff(self) -> None\nC++: virtual void ComputeCellCenterArrayOff()\n\n"},
  {"GetCellCenterArrayName", PyvtkHyperTreeGridGenerateFields_GetCellCenterArrayName, METH_VARARGS,
   "GetCellCenterArrayName(self) -> str\nC++: virtual std::string GetCellCenterArrayName()\n\nGet/Set the name used for the cell center array. Defaults to\n'CellCenter'\n"},
  {"SetCellCenterArrayName", PyvtkHyperTreeGridGenerateFields_SetCellCenterArrayName, METH_VARARGS,
   "SetCellCenterArrayName(self, name:str) -> None\nC++: virtual void SetCellCenterArrayName(std::string name)\n\n"},
  {"GetComputeTotalVisibleVolumeArray", PyvtkHyperTreeGridGenerateFields_GetComputeTotalVisibleVolumeArray, METH_VARARGS,
   "GetComputeTotalVisibleVolumeArray(self) -> bool\nC++: virtual bool GetComputeTotalVisibleVolumeArray()\n\nEnable/disable the computation of the TotalVisibleVolume array.\nDefault is true.\n"},
  {"SetComputeTotalVisibleVolumeArray", PyvtkHyperTreeGridGenerateFields_SetComputeTotalVisibleVolumeArray, METH_VARARGS,
   "SetComputeTotalVisibleVolumeArray(self, enable:bool) -> None\nC++: virtual void SetComputeTotalVisibleVolumeArray(bool enable)\n\n"},
  {"ComputeTotalVisibleVolumeArrayOn", PyvtkHyperTreeGridGenerateFields_ComputeTotalVisibleVolumeArrayOn, METH_VARARGS,
   "ComputeTotalVisibleVolumeArrayOn(self) -> None\nC++: virtual void ComputeTotalVisibleVolumeArrayOn()\n\n"},
  {"ComputeTotalVisibleVolumeArrayOff", PyvtkHyperTreeGridGenerateFields_ComputeTotalVisibleVolumeArrayOff, METH_VARARGS,
   "ComputeTotalVisibleVolumeArrayOff(self) -> None\nC++: virtual void ComputeTotalVisibleVolumeArrayOff()\n\n"},
  {"GetTotalVisibleVolumeArrayName", PyvtkHyperTreeGridGenerateFields_GetTotalVisibleVolumeArrayName, METH_VARARGS,
   "GetTotalVisibleVolumeArrayName(self) -> str\nC++: virtual std::string GetTotalVisibleVolumeArrayName()\n\nGet/Set the name used for the total visible volume array.\nDefaults to 'TotalVisibleVolume'\n"},
  {"SetTotalVisibleVolumeArrayName", PyvtkHyperTreeGridGenerateFields_SetTotalVisibleVolumeArrayName, METH_VARARGS,
   "SetTotalVisibleVolumeArrayName(self, name:str) -> None\nC++: virtual void SetTotalVisibleVolumeArrayName(std::string name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHyperTreeGridGenerateFields_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("compute_cell_size_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetComputeCellSizeArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeCellSizeArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeCellSizeArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeCellSizeArray/SetComputeCellSizeArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_size_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetCellSizeArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetCellSizeArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetCellSizeArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellSizeArrayName/SetCellSizeArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("compute_valid_cell_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetComputeValidCellArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeValidCellArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeValidCellArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeValidCellArray/SetComputeValidCellArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("valid_cell_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetValidCellArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetValidCellArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetValidCellArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetValidCellArrayName/SetValidCellArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("compute_cell_center_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetComputeCellCenterArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeCellCenterArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeCellCenterArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeCellCenterArray/SetComputeCellCenterArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_center_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetCellCenterArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetCellCenterArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetCellCenterArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellCenterArrayName/SetCellCenterArrayName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("compute_total_visible_volume_array"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetComputeTotalVisibleVolumeArray(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeTotalVisibleVolumeArray(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetComputeTotalVisibleVolumeArray(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeTotalVisibleVolumeArray/SetComputeTotalVisibleVolumeArray\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("total_visible_volume_array_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHyperTreeGridGenerateFields_GetTotalVisibleVolumeArrayName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHyperTreeGridGenerateFields_SetTotalVisibleVolumeArrayName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHyperTreeGridGenerateFields_SetTotalVisibleVolumeArrayName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTotalVisibleVolumeArrayName/SetTotalVisibleVolumeArrayName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHyperTreeGridGenerateFields_Doc =
  "vtkHyperTreeGridGenerateFields - Generate cell fields for a HTG\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridGenerateFields creates 2 distinct (double) cell\n"
  "fields: ValidCell and CellSize See respective internal classes for\n"
  "the content and computation of each field.\n\n"
  "Note that the filter needs to be run again if cells are refined after\n"
  "its execution.\n\n"
  "@sa\n"
  "vtkHyperTreeGridCellSizeStrategy vtkHyperTreeGridValidCellStrategy\n"
  "vtkHyperTreeGridGenerateFieldStrategy vtkHyperTreeGrid\n"
  "vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was originally written by Jacques-Bernard\n"
  "Lekien, 2023 This work was supported by Commissariat a l'Energie\n"
  "Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGenerateFields_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridGenerateFields", // tp_name
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
  PyvtkHyperTreeGridGenerateFields_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridGenerateFields_StaticNew()
{
  return vtkHyperTreeGridGenerateFields::New();
}

PyObject *PyvtkHyperTreeGridGenerateFields_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridGenerateFields_Type, PyvtkHyperTreeGridGenerateFields_Methods,
    "vtkHyperTreeGridGenerateFields",
 &PyvtkHyperTreeGridGenerateFields_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHyperTreeGridGenerateFields_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridGenerateFields(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridGenerateFields_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridGenerateFields", o) != 0)
  {
    Py_DECREF(o);
  }

}

