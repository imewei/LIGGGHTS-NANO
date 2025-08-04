// python wrapper for vtkCellGridCopyQuery
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
#include "vtkCellGridCopyQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridCopyQuery(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridCopyQuery_ClassNew(); }

#ifndef DECLARED_PyvtkCellGridQuery_ClassNew
extern "C" { PyObject *PyvtkCellGridQuery_ClassNew(); }
#define DECLARED_PyvtkCellGridQuery_ClassNew
#endif

static PyObject *
PyvtkCellGridCopyQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridCopyQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridCopyQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridCopyQuery *tempr = vtkCellGridCopyQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridCopyQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridCopyQuery::NewInstance());

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
PyvtkCellGridCopyQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridCopyQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridCopyQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridCopyQuery::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridCopyQuery::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    if (ap.IsBound())
    {
      op->SetSource(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkCellGridCopyQuery::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    if (ap.IsBound())
    {
      op->SetTarget(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetTarget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkCellGridCopyQuery::GetTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopyCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyCellTypes() :
      op->vtkCellGridCopyQuery::GetCopyCellTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopyCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyCellTypes(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopyCellTypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyCellTypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellTypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellTypesOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyCellTypesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyCellTypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellTypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellTypesOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyCellTypesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyCells() :
      op->vtkCellGridCopyQuery::GetCopyCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyCells(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopyCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellsOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellsOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopyOnlyShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyOnlyShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyOnlyShape() :
      op->vtkCellGridCopyQuery::GetCopyOnlyShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopyOnlyShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyOnlyShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyOnlyShape(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopyOnlyShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyOnlyShapeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOnlyShapeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyOnlyShapeOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyOnlyShapeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyOnlyShapeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOnlyShapeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyOnlyShapeOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyOnlyShapeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyArrays() :
      op->vtkCellGridCopyQuery::GetCopyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyArrays(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopyArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopyArrayValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrayValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyArrayValues() :
      op->vtkCellGridCopyQuery::GetCopyArrayValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopyArrayValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrayValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyArrayValues(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopyArrayValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyArrayValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArrayValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArrayValuesOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyArrayValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyArrayValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArrayValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArrayValuesOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyArrayValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetDeepCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeepCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeepCopyArrays() :
      op->vtkCellGridCopyQuery::GetDeepCopyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetDeepCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeepCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeepCopyArrays(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetDeepCopyArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_DeepCopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeepCopyArraysOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::DeepCopyArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_DeepCopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeepCopyArraysOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::DeepCopyArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCopySchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopySchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopySchema() :
      op->vtkCellGridCopyQuery::GetCopySchema());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_SetCopySchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopySchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopySchema(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::SetCopySchema(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopySchemaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySchemaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopySchemaOn();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopySchemaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopySchemaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySchemaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopySchemaOff();
    }
    else
    {
      op->vtkCellGridCopyQuery::CopySchemaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_AddSourceCellAttributeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceCellAttributeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSourceCellAttributeId(temp0) :
      op->vtkCellGridCopyQuery::AddSourceCellAttributeId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_RemoveSourceCellAttributeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSourceCellAttributeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveSourceCellAttributeId(temp0) :
      op->vtkCellGridCopyQuery::RemoveSourceCellAttributeId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_AddAllSourceCellAttributeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllSourceCellAttributeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAllSourceCellAttributeIds() :
      op->vtkCellGridCopyQuery::AddAllSourceCellAttributeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_GetCellAttributeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellAttributeIds(temp0);
    }
    else
    {
      op->vtkCellGridCopyQuery::GetCellAttributeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_ResetCellAttributeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCellAttributeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCellAttributeIds();
    }
    else
    {
      op->vtkCellGridCopyQuery::ResetCellAttributeIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  vtkStringToken *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkStringToken"))
  {
    if (ap.IsBound())
    {
      op->CopyAttributeArrays(temp0, *temp1);
    }
    else
    {
      op->vtkCellGridCopyQuery::CopyAttributeArrays(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkCellGridCopyQuery_CopyOrUpdateAttributeRecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOrUpdateAttributeRecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridCopyQuery *op = static_cast<vtkCellGridCopyQuery *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  vtkStringToken *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkStringToken"))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->CopyOrUpdateAttributeRecord(temp0, *temp1) :
      op->vtkCellGridCopyQuery::CopyOrUpdateAttributeRecord(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkCellGridCopyQuery_Methods[] = {
  {"IsTypeOf", PyvtkCellGridCopyQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridCopyQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridCopyQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridCopyQuery\nC++: static vtkCellGridCopyQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridCopyQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridCopyQuery\nC++: vtkCellGridCopyQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridCopyQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridCopyQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCellGridCopyQuery_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: bool Initialize() override;\n\nThis clears the ArrayMap ivar before the algorithm starts.\n"},
  {"Finalize", PyvtkCellGridCopyQuery_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: bool Finalize() override;\n\nThis clears the ArrayMap ivar after the algorithm completes (to\nsave space).\n"},
  {"SetSource", PyvtkCellGridCopyQuery_SetSource, METH_VARARGS,
   "SetSource(self, source:vtkCellGrid) -> None\nC++: virtual void SetSource(vtkCellGrid *source)\n\nSet/get the source cell-grid to copy into the cell-grid on which\nthis query is run.\n"},
  {"GetSource", PyvtkCellGridCopyQuery_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkCellGrid\nC++: virtual vtkCellGrid *GetSource()\n\n"},
  {"SetTarget", PyvtkCellGridCopyQuery_SetTarget, METH_VARARGS,
   "SetTarget(self, target:vtkCellGrid) -> None\nC++: virtual void SetTarget(vtkCellGrid *target)\n\nSet/get the target cell-grid into which the source should be\ncopied.\n"},
  {"GetTarget", PyvtkCellGridCopyQuery_GetTarget, METH_VARARGS,
   "GetTarget(self) -> vtkCellGrid\nC++: virtual vtkCellGrid *GetTarget()\n\n"},
  {"GetCopyCellTypes", PyvtkCellGridCopyQuery_GetCopyCellTypes, METH_VARARGS,
   "GetCopyCellTypes(self) -> int\nC++: virtual int GetCopyCellTypes()\n\nSet/get whether to copy cell metadata instances or leave target\ngrid void of all cell types.\n\nThe default (true) is to copy cell types.\n"},
  {"SetCopyCellTypes", PyvtkCellGridCopyQuery_SetCopyCellTypes, METH_VARARGS,
   "SetCopyCellTypes(self, _arg:int) -> None\nC++: virtual void SetCopyCellTypes(int _arg)\n\n"},
  {"CopyCellTypesOn", PyvtkCellGridCopyQuery_CopyCellTypesOn, METH_VARARGS,
   "CopyCellTypesOn(self) -> None\nC++: virtual void CopyCellTypesOn()\n\n"},
  {"CopyCellTypesOff", PyvtkCellGridCopyQuery_CopyCellTypesOff, METH_VARARGS,
   "CopyCellTypesOff(self) -> None\nC++: virtual void CopyCellTypesOff()\n\n"},
  {"GetCopyCells", PyvtkCellGridCopyQuery_GetCopyCells, METH_VARARGS,
   "GetCopyCells(self) -> int\nC++: virtual int GetCopyCells()\n\nSet/get whether to copy cell topology or leave each output\ninstance of cell metadata uninitialized.\n\nThe default (true) is to copy cells.\n"},
  {"SetCopyCells", PyvtkCellGridCopyQuery_SetCopyCells, METH_VARARGS,
   "SetCopyCells(self, _arg:int) -> None\nC++: virtual void SetCopyCells(int _arg)\n\n"},
  {"CopyCellsOn", PyvtkCellGridCopyQuery_CopyCellsOn, METH_VARARGS,
   "CopyCellsOn(self) -> None\nC++: virtual void CopyCellsOn()\n\n"},
  {"CopyCellsOff", PyvtkCellGridCopyQuery_CopyCellsOff, METH_VARARGS,
   "CopyCellsOff(self) -> None\nC++: virtual void CopyCellsOff()\n\n"},
  {"GetCopyOnlyShape", PyvtkCellGridCopyQuery_GetCopyOnlyShape, METH_VARARGS,
   "GetCopyOnlyShape(self) -> int\nC++: virtual int GetCopyOnlyShape()\n\nSet/get whether **only** the shape attribute should be copied.\n\nThis option is provided so vtkCellGridCopyQuery can behave\nsimilar to vtkDataSet::CopyStructure().\n\nIf true (the default), no vtkCellAttribute instances other than\nvtkCellGrid::GetShapeAttribute() will be copied from the source\nto the target, regardless of the values returned by\nvtkCellGridCopyQuery::GetCellAttributeIds().\n\nIf false, then you **must** explicitly add the source's shape\nattribute to the schedule of attributes to be copied by calling\nvtkCellGridCopyQuery::AddSourceCellAttributeId() or the target\nwill have no geometric shape (which is disallowed). (The\nintential omission of the shape attribute when CopyOnlyShape is\nfalse allows you to omit the shape during copying if you will be\nsynthesizing a new shape for the same output cell topology.)\n"},
  {"SetCopyOnlyShape", PyvtkCellGridCopyQuery_SetCopyOnlyShape, METH_VARARGS,
   "SetCopyOnlyShape(self, _arg:int) -> None\nC++: virtual void SetCopyOnlyShape(int _arg)\n\n"},
  {"CopyOnlyShapeOn", PyvtkCellGridCopyQuery_CopyOnlyShapeOn, METH_VARARGS,
   "CopyOnlyShapeOn(self) -> None\nC++: virtual void CopyOnlyShapeOn()\n\n"},
  {"CopyOnlyShapeOff", PyvtkCellGridCopyQuery_CopyOnlyShapeOff, METH_VARARGS,
   "CopyOnlyShapeOff(self) -> None\nC++: virtual void CopyOnlyShapeOff()\n\n"},
  {"GetCopyArrays", PyvtkCellGridCopyQuery_GetCopyArrays, METH_VARARGS,
   "GetCopyArrays(self) -> int\nC++: virtual int GetCopyArrays()\n\nSet/get whether data arrays should be copied or omitted.\n\nThe default (true) is for arrays associated with each\ncell-attribute to be copied. If false, then the requested\ncell-attribute(s) will be copied but will have no arrays set for\nany cell type.\n"},
  {"SetCopyArrays", PyvtkCellGridCopyQuery_SetCopyArrays, METH_VARARGS,
   "SetCopyArrays(self, _arg:int) -> None\nC++: virtual void SetCopyArrays(int _arg)\n\n"},
  {"CopyArraysOn", PyvtkCellGridCopyQuery_CopyArraysOn, METH_VARARGS,
   "CopyArraysOn(self) -> None\nC++: virtual void CopyArraysOn()\n\n"},
  {"CopyArraysOff", PyvtkCellGridCopyQuery_CopyArraysOff, METH_VARARGS,
   "CopyArraysOff(self) -> None\nC++: virtual void CopyArraysOff()\n\n"},
  {"GetCopyArrayValues", PyvtkCellGridCopyQuery_GetCopyArrayValues, METH_VARARGS,
   "GetCopyArrayValues(self) -> int\nC++: virtual int GetCopyArrayValues()\n\nSet/get whether values in data arrays should be copied or not.\n\nThe default is true (i.e., the source and target array contents\nshould be equal (when DeepCopyArrays is false) or equivalent\n(when DeepCopyArrays is true)).\n"},
  {"SetCopyArrayValues", PyvtkCellGridCopyQuery_SetCopyArrayValues, METH_VARARGS,
   "SetCopyArrayValues(self, _arg:int) -> None\nC++: virtual void SetCopyArrayValues(int _arg)\n\n"},
  {"CopyArrayValuesOn", PyvtkCellGridCopyQuery_CopyArrayValuesOn, METH_VARARGS,
   "CopyArrayValuesOn(self) -> None\nC++: virtual void CopyArrayValuesOn()\n\n"},
  {"CopyArrayValuesOff", PyvtkCellGridCopyQuery_CopyArrayValuesOff, METH_VARARGS,
   "CopyArrayValuesOff(self) -> None\nC++: virtual void CopyArrayValuesOff()\n\n"},
  {"GetDeepCopyArrays", PyvtkCellGridCopyQuery_GetDeepCopyArrays, METH_VARARGS,
   "GetDeepCopyArrays(self) -> int\nC++: virtual int GetDeepCopyArrays()\n\nSet/get whether data arrays should be copied by value (deep) or\nby reference (shallow). The default is false (i.e., shallow\ncopy).\n\nThis setting is ignored when GetCopyArrays() and/or\nGetCopyArrayValues() are false. If GetCopyArrays() returns false,\nno arrays will be copied from the source. If GetCopyArrays()\nreturns true but GetCopyArrayValues() returns false, then new,\nempty arrays of the same type, name, and number of components as\nthe source arrays will be created but no tuples will be inserted\nin them.\n"},
  {"SetDeepCopyArrays", PyvtkCellGridCopyQuery_SetDeepCopyArrays, METH_VARARGS,
   "SetDeepCopyArrays(self, _arg:int) -> None\nC++: virtual void SetDeepCopyArrays(int _arg)\n\n"},
  {"DeepCopyArraysOn", PyvtkCellGridCopyQuery_DeepCopyArraysOn, METH_VARARGS,
   "DeepCopyArraysOn(self) -> None\nC++: virtual void DeepCopyArraysOn()\n\n"},
  {"DeepCopyArraysOff", PyvtkCellGridCopyQuery_DeepCopyArraysOff, METH_VARARGS,
   "DeepCopyArraysOff(self) -> None\nC++: virtual void DeepCopyArraysOff()\n\n"},
  {"GetCopySchema", PyvtkCellGridCopyQuery_GetCopySchema, METH_VARARGS,
   "GetCopySchema(self) -> int\nC++: virtual int GetCopySchema()\n\nSet/get whether the source cell-grid's schema information should\nbe copied.\n\nIf true (the default), the query's Finalize() method will copy\nthe schema to the target.\n"},
  {"SetCopySchema", PyvtkCellGridCopyQuery_SetCopySchema, METH_VARARGS,
   "SetCopySchema(self, _arg:int) -> None\nC++: virtual void SetCopySchema(int _arg)\n\n"},
  {"CopySchemaOn", PyvtkCellGridCopyQuery_CopySchemaOn, METH_VARARGS,
   "CopySchemaOn(self) -> None\nC++: virtual void CopySchemaOn()\n\n"},
  {"CopySchemaOff", PyvtkCellGridCopyQuery_CopySchemaOff, METH_VARARGS,
   "CopySchemaOff(self) -> None\nC++: virtual void CopySchemaOff()\n\n"},
  {"AddSourceCellAttributeId", PyvtkCellGridCopyQuery_AddSourceCellAttributeId, METH_VARARGS,
   "AddSourceCellAttributeId(self, attributeId:int) -> bool\nC++: virtual bool AddSourceCellAttributeId(int attributeId)\n\nAdd attributeId to the list of cell-attributes to be copied from\nthe source.\n"},
  {"RemoveSourceCellAttributeId", PyvtkCellGridCopyQuery_RemoveSourceCellAttributeId, METH_VARARGS,
   "RemoveSourceCellAttributeId(self, attributeId:int) -> bool\nC++: virtual bool RemoveSourceCellAttributeId(int attributeId)\n\nRemove attributeId from the list of cell-attributes to be copied\nfrom the source.\n"},
  {"AddAllSourceCellAttributeIds", PyvtkCellGridCopyQuery_AddAllSourceCellAttributeIds, METH_VARARGS,
   "AddAllSourceCellAttributeIds(self) -> bool\nC++: virtual bool AddAllSourceCellAttributeIds()\n\nAdd all of the source cell-grid's attributes to the list of IDs\nto be copied.\n\nObviously, you must have called SetSource() prior to calling this\nmethod.\n"},
  {"GetCellAttributeIds", PyvtkCellGridCopyQuery_GetCellAttributeIds, METH_VARARGS,
   "GetCellAttributeIds(self, ids:vtkIdList) -> None\nC++: void GetCellAttributeIds(vtkIdList *ids)\n\nPopulate ids with the attribute IDs scheduled to be copied when\nthe query is run.\n"},
  {"ResetCellAttributeIds", PyvtkCellGridCopyQuery_ResetCellAttributeIds, METH_VARARGS,
   "ResetCellAttributeIds(self) -> None\nC++: virtual void ResetCellAttributeIds()\n\nReset the query so that no cell-attributes will be copied from\nthe source.\n"},
  {"CopyAttributeArrays", PyvtkCellGridCopyQuery_CopyAttributeArrays, METH_VARARGS,
   "CopyAttributeArrays(self, srcAtt:vtkCellAttribute,\n    cellType:vtkStringToken) -> None\nC++: void CopyAttributeArrays(vtkCellAttribute *srcAtt,\n    vtkStringToken cellType)\n\nCopy the arrays for a single attribute from the source to the\ntarget.\n\nThis method **does not** check CopyOnlyShape and CellAttributeIds\nto determine whether the attribute should be copied. Your\nresponder must verify the attribute should be copied.\n\nThis method **does** check the CopyArrays, CopyArrays, and\nCopyArrayValues flags to determine whether to reference source\narrays or create (and potentially copy values) into new arrays.\n"},
  {"CopyOrUpdateAttributeRecord", PyvtkCellGridCopyQuery_CopyOrUpdateAttributeRecord, METH_VARARGS,
   "CopyOrUpdateAttributeRecord(self, srcAtt:vtkCellAttribute,\n    cellType:vtkStringToken) -> vtkCellAttribute\nC++: vtkCellAttribute *CopyOrUpdateAttributeRecord(\n    vtkCellAttribute *srcAtt, vtkStringToken cellType)\n\nCopy a cell-attribute ( srcAtt) from the source into the target.\n\nThis method uses the ArrayMap to set the arrays for each cell\ntype (if arrays are being copied and not being copied by\nreference).\n\nThis calls vtkCellAttribute::DeepCopy() on srcAtt and then copies\nany cached range data from the source to the target cell-grid.\n\nYour responder **must** call CopyAttributeArrays() for all the\noutput cell types **before** calling this method if\nGetCopyArrays() returns true so that the ArrayMap will be\nproperly populated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridCopyQuery_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("source"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetSource(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetSource(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetSource(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSource/SetSource\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("target"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetTarget(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetTarget(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetTarget(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTarget/SetTarget\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_cell_types"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopyCellTypes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopyCellTypes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopyCellTypes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyCellTypes/SetCopyCellTypes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopyCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopyCells(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopyCells(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyCells/SetCopyCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_only_shape"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopyOnlyShape(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopyOnlyShape(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopyOnlyShape(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyOnlyShape/SetCopyOnlyShape\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopyArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopyArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopyArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyArrays/SetCopyArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_array_values"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopyArrayValues(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopyArrayValues(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopyArrayValues(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopyArrayValues/SetCopyArrayValues\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("deep_copy_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetDeepCopyArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetDeepCopyArrays(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetDeepCopyArrays(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDeepCopyArrays/SetDeepCopyArrays\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("copy_schema"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridCopyQuery_GetCopySchema(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridCopyQuery_SetCopySchema(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridCopyQuery_SetCopySchema(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCopySchema/SetCopySchema\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridCopyQuery_Doc =
  "vtkCellGridCopyQuery - Copy the cell metadata and attribute(s) of one\ncell-grid into another.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "Note that this query is run by vtkCellGrid::ShallowCopy(),\n"
  "vtkCellGrid::DeepCOpy(), and vtkCellGrid::CopyStructure().\n\n"
  "In general, there are five types of information in cell grids that\n"
  "may be transferred from the source cell-grid to the target. Here are\n"
  "the types of information and the options which control how that\n"
  "information is copied. Exactly how these flags on the query are used\n"
  "is up to each responder.\n\n"
  "+ **Cell metadata records.** These records are always copied.\n"
  "  In the future, there may be an option to omit cells of specific\n"
  "types.\n\n"
  "+ **Individual cells.** If subclasses of vtkCellMetadata contain\n"
  "  further information, you may use SetCopyCells() to control\n"
  "  whether that is copied or whether the new vtkCellMetadata\n"
  "  instance is left uninitialized.\n"
  "  When GetCopyCells() is enabled, the cell topology should be copied\n"
  "  (though not necessarily the shape attribute's arrays);\n"
  "  CopyCells overrides the copying of topological arrays even if\n"
  "  CopyArrays is turned off.\n"
  "  This way, if CopyCells is on, you should expect the source and\n"
  "  target to report the same number of cells.\n\n"
  "+ **Cell attributes.** You may request that only the shape attribute\n"
  "  is copied from the source to the target with CopyOnlyShapeOn()\n"
  "  or control which attributes are copied by calling\n"
  "  AddSourceCellAttributeId() with the ID of each source attribute\n"
  "  you wish copied.\n\n"
  "+ **Cell-attribute arrays.** For each cell-attribute that is copied,\n"
  "  zero or more arrays may be associated the attribute. You can\n"
  "  control how the arrays are copied like so:\n\n\n"
  "  + SetCopyArrays() controls whether arrays should be created or not.\n"
  "    How the arrays are copied depends on whether CopyArrayValues and\n"
  "    DeepCopyArrays are enabled. Note that this setting should be\n"
  "    ignored when copying cell topology (as opposed to attribute)\n"
  "arrays\n"
  "    as CopyCells should control whether cells are present in the\n"
  "output.\n"
  "    If cell-topology arrays are referenced by a cell attribute, be\n"
  "aware\n"
  "    that disabling CopyArrays may still produce some entries for\n"
  "topology\n"
  "    arrays.\n"
  "  + SetCopyArrayValues() controls whether arrays should be (a)\n"
  "created\n"
  "    but left empty or (b) created and populated with the\n"
  "source-array's\n"
  "    values. This is useful for creating an empty copy that has all\n"
  "    the necessary arrays prepared but no tuples so that further\n"
  "    processing can insert new cells and attribute data.\n"
  "  + SetDeepCopyArrays() controls whether to create deep copies of\n"
  "    arrays or shallow copies, but only when GetCopyArrayValues()\n"
  "    returns true.\n\n"
  "+ **Schema and content version.** A cell-grid may advertise that its\n"
  "  data adheres to a formal specification (which is indicated by a\n"
  "  name and version number). If you wish to copy this information,\n"
  "  ensure CopySchemaOn() has been called.\n"
  "  If GetCopySchema() is true and the source has a content version\n"
  "  number, the target cell-grid will have its content version\n"
  "  incremented past the source's content version.\n"
  "  Incrementing the content version even when the grids are otherwise\n"
  "  identical improves track-ability, since the version number informs\n"
  "  which grid preceded the other.\n\n"
  "## For Callers\n\n"
  "You **must** execute this query on the source cell-grid, not the\n"
  "target. Only the source is guaranteed to have cells of the proper\n"
  "types present; the query iterates over each cell-type, so they must\n"
  "be present.\n\n"
  "Executing this query will overwrite the target cell-grid with the\n"
  "source, erasing all of its cell metadata. In the future, this class\n"
  "may offer more control over which types of cells to copy from the\n"
  "source to the target.\n\n"
  "## For Responders\n\n"
  "Responders to this query may call the helper methods provided to copy\n"
  "a cell-attribute's arrays and create/update a cell-attribute. These\n"
  "calls update maps from source to target arrays and attributes, which\n"
  "you can inspect by calling GetArrayMap() and GetAttributeMap(),\n"
  "respectively. The latter is important since distinct attributes may\n"
  "have identical names (though this is not advised).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridCopyQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridCopyQuery", // tp_name
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
  PyvtkCellGridCopyQuery_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridCopyQuery_StaticNew()
{
  return vtkCellGridCopyQuery::New();
}

PyObject *PyvtkCellGridCopyQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridCopyQuery_Type, PyvtkCellGridCopyQuery_Methods,
    "vtkCellGridCopyQuery",
 &PyvtkCellGridCopyQuery_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCellGridQuery_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridCopyQuery_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridCopyQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridCopyQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridCopyQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

