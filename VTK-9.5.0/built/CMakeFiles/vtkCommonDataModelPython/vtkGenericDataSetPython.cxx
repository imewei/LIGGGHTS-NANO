// python wrapper for vtkGenericDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGenericDataSet(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGenericDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkGenericDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericDataSet *tempr = vtkGenericDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataSet::NewInstance());

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
PyvtkGenericDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    long long tempr = op->GetNumberOfCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkGenericDataSet::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetCellDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkCellTypes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
  {
    if (ap.IsBound())
    {
      op->GetCellTypes(temp0);
    }
    else
    {
      op->vtkGenericDataSet::GetCellTypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkGenericCellIterator *tempr = op->NewCellIterator(temp0);

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
PyvtkGenericDataSet_NewBoundaryIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewBoundaryIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0 = -1;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkGenericCellIterator *tempr = op->NewBoundaryIterator(temp0, temp1);

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
PyvtkGenericDataSet_NewPointIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewPointIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkGenericPointIterator *tempr = op->NewPointIterator();

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
PyvtkGenericDataSet_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkGenericPointIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkGenericPointIterator"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->FindPoint(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ComputeBounds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGenericDataSet::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGenericDataSet::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericDataSet_GetBounds_s1(self, args);
    case 1:
      return PyvtkGenericDataSet_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkGenericDataSet_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkGenericDataSet::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkGenericDataSet::GetCenter(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericDataSet_GetCenter_s1(self, args);
    case 1:
      return PyvtkGenericDataSet_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkGenericDataSet_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkGenericDataSet::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetAttributes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAttributeCollection *tempr = (ap.IsBound() ?
      op->GetAttributes() :
      op->vtkGenericDataSet::GetAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetAttributes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkGenericDataSet::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetAttributes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericDataSet_GetAttributes_s1(self, args);
    case 1:
      return PyvtkGenericDataSet_GetAttributes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributes");
  return nullptr;
}


static PyObject *
PyvtkGenericDataSet_SetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  vtkGenericCellTessellator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCellTessellator"))
  {
    if (ap.IsBound())
    {
      op->SetTessellator(temp0);
    }
    else
    {
      op->vtkGenericDataSet::SetTessellator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericCellTessellator *tempr = (ap.IsBound() ?
      op->GetTessellator() :
      op->vtkGenericDataSet::GetTessellator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkGenericDataSet::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkGenericDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetEstimatedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSet *op = static_cast<vtkGenericDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetEstimatedSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSet_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkGenericDataSet *tempr = vtkGenericDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericDataSet_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkGenericDataSet *tempr = vtkGenericDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericDataSet_GetData_Methods[] = {
  {"GetData", PyvtkGenericDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkGenericDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGenericDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkGenericDataSet_Methods[] = {
  {"IsTypeOf", PyvtkGenericDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericDataSet\nC++: static vtkGenericDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericDataSet\nC++: vtkGenericDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfPoints", PyvtkGenericDataSet_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturn the number of points composing the dataset. See\nNewPointIterator() for more details.\n\\post positive_result: result>=0\n"},
  {"GetNumberOfCells", PyvtkGenericDataSet_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self, dim:int=-1) -> int\nC++: virtual vtkIdType GetNumberOfCells(int dim=-1)\n\nReturn the number of cells that explicitly define the dataset.\nSee NewCellIterator() for more details.\n\\pre valid_dim_range: (dim>=-1) && (dim<=3)\n\\post positive_result: result>=0\n"},
  {"GetNumberOfElements", PyvtkGenericDataSet_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetCellDimension", PyvtkGenericDataSet_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: virtual int GetCellDimension()\n\nReturn -1 if the dataset is explicitly defined by cells of\nvarying dimensions or if there are no cells. If the dataset is\nexplicitly defined by cells of a unique dimension, return this\ndimension.\n\\post valid_range: (result>=-1) && (result<=3)\n"},
  {"GetCellTypes", PyvtkGenericDataSet_GetCellTypes, METH_VARARGS,
   "GetCellTypes(self, types:vtkCellTypes) -> None\nC++: virtual void GetCellTypes(vtkCellTypes *types)\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset 5 triangles, 3 lines, and\n100 hexahedra would result a list of three entries, corresponding\nto the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n\\pre types_exist: types!=0\n"},
  {"NewCellIterator", PyvtkGenericDataSet_NewCellIterator, METH_VARARGS,
   "NewCellIterator(self, dim:int=-1) -> vtkGenericCellIterator\nC++: virtual vtkGenericCellIterator *NewCellIterator(int dim=-1)\n\nReturn an iterator to traverse cells of dimension `dim' (or all\ndimensions if -1) that explicitly define the dataset. For\ninstance, it will return only tetrahedra if the mesh is defined\nby tetrahedra. If the mesh is composed of two parts, one with\ntetrahedra and another part with triangles, it will return both,\nbut will not return the boundary edges and vertices of these\ncells. The user is responsible for deleting the iterator.\n\\pre valid_dim_range: (dim>=-1) && (dim<=3)\n\\post result_exists: result!=0\n"},
  {"NewBoundaryIterator", PyvtkGenericDataSet_NewBoundaryIterator, METH_VARARGS,
   "NewBoundaryIterator(self, dim:int=-1, exteriorOnly:int=0)\n    -> vtkGenericCellIterator\nC++: virtual vtkGenericCellIterator *NewBoundaryIterator(\n    int dim=-1, int exteriorOnly=0)\n\nReturn an iterator to traverse cell boundaries of dimension `dim'\n(or all dimensions if -1) of the dataset.  If `exteriorOnly' is\ntrue, only the exterior cell boundaries of the dataset will be\nreturned, otherwise it will return exterior and interior cell\nboundaries. The user is responsible for deleting the iterator.\n\\pre valid_dim_range: (dim>=-1) && (dim<=2)\n\\post result_exists: result!=0\n"},
  {"NewPointIterator", PyvtkGenericDataSet_NewPointIterator, METH_VARARGS,
   "NewPointIterator(self) -> vtkGenericPointIterator\nC++: virtual vtkGenericPointIterator *NewPointIterator()\n\nReturn an iterator to traverse the points composing the dataset;\nthey can be points that define a cell (corner points) or isolated\npoints. The user is responsible for deleting the iterator.\n\\post result_exists: result!=0\n"},
  {"FindPoint", PyvtkGenericDataSet_FindPoint, METH_VARARGS,
   "FindPoint(self, x:[float, float, float],\n    p:vtkGenericPointIterator) -> None\nC++: virtual void FindPoint(double x[3],\n    vtkGenericPointIterator *p)\n\nLocate the closest point `p' to position `x' (global\ncoordinates).\n\\pre not_empty: GetNumberOfPoints()>0\n\\pre p_exists: p!=0\n"},
  {"GetMTime", PyvtkGenericDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nDatasets are composite objects and need to check each part for\ntheir modified time.\n"},
  {"ComputeBounds", PyvtkGenericDataSet_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: virtual void ComputeBounds()\n\nCompute the geometry bounding box.\n"},
  {"GetBounds", PyvtkGenericDataSet_GetBounds, METH_VARARGS,
   "GetBounds(self) -> Pointer\nC++: virtual double *GetBounds()\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: virtual void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). The return value is VOLATILE.\n\\post result_exists: result!=0\n"},
  {"GetCenter", PyvtkGenericDataSet_GetCenter, METH_VARARGS,
   "GetCenter(self) -> Pointer\nC++: virtual double *GetCenter()\nGetCenter(self, center:[float, float, float]) -> None\nC++: virtual void GetCenter(double center[3])\n\nGet the center of the bounding box in global coordinates. The\nreturn value is VOLATILE.\n\\post result_exists: result!=0\n"},
  {"GetLength", PyvtkGenericDataSet_GetLength, METH_VARARGS,
   "GetLength(self) -> float\nC++: virtual double GetLength()\n\nReturn the length of the diagonal of the bounding box.\n\\post positive_result: result>=0\n"},
  {"GetAttributes", PyvtkGenericDataSet_GetAttributes, METH_VARARGS,
   "GetAttributes(self) -> vtkGenericAttributeCollection\nC++: virtual vtkGenericAttributeCollection *GetAttributes()\nGetAttributes(self, type:int) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAttributes(int type) override;\n\nGet the collection of attributes associated with this dataset.\n"},
  {"SetTessellator", PyvtkGenericDataSet_SetTessellator, METH_VARARGS,
   "SetTessellator(self, tessellator:vtkGenericCellTessellator)\n    -> None\nC++: virtual void SetTessellator(\n    vtkGenericCellTessellator *tessellator)\n\nSet/Get a cell tessellator if cells must be tessellated during\nprocessing.\n\\pre tessellator_exists: tessellator!=0\n"},
  {"GetTessellator", PyvtkGenericDataSet_GetTessellator, METH_VARARGS,
   "GetTessellator(self) -> vtkGenericCellTessellator\nC++: virtual vtkGenericCellTessellator *GetTessellator()\n\n"},
  {"GetActualMemorySize", PyvtkGenericDataSet_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nActual size of the data in kibibytes (1024 bytes); only valid\nafter the pipeline has updated. It is guaranteed to be greater\nthan or equal to the memory required to represent the data.\n"},
  {"GetDataObjectType", PyvtkGenericDataSet_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn the type of data object.\n"},
  {"GetEstimatedSize", PyvtkGenericDataSet_GetEstimatedSize, METH_VARARGS,
   "GetEstimatedSize(self) -> int\nC++: virtual vtkIdType GetEstimatedSize()\n\nEstimated size needed after tessellation (or special operation)\n"},
  {"GetData", PyvtkGenericDataSet_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkGenericDataSet\nC++: static vtkGenericDataSet *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkGenericDataSet\nC++: static vtkGenericDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGenericDataSet_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("tessellator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetTessellator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenericDataSet_SetTessellator(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenericDataSet_SetTessellator(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTessellator/SetTessellator\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetCellDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("length"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetLength(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLength\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("attributes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetAttributes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAttributes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("actual_memory_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetActualMemorySize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetActualMemorySize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_object_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetDataObjectType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataObjectType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("estimated_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetEstimatedSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetEstimatedSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericDataSet_GetNumberOfPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfPoints\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGenericDataSet_Doc =
  "vtkGenericDataSet - defines dataset interface\n\n"
  "Superclass: vtkDataObject\n\n"
  "In VTK, spatial-temporal data is defined in terms of a dataset. The\n"
  "dataset consists of geometry (e.g., points), topology (e.g., cells),\n"
  "and attributes (e.g., scalars, vectors, etc.) vtkGenericDataSet is an\n"
  "abstract class defining this abstraction.\n\n"
  "Since vtkGenericDataSet provides a general interface to manipulate\n"
  "data, algorithms that process it tend to be slower than those\n"
  "specialized for a particular data type. For this reason, there are\n"
  "concrete, non-abstract subclasses that represent and provide access\n"
  "to data more efficiently. Note that filters to process this dataset\n"
  "type are currently found in the VTK/GenericFiltering/ subdirectory.\n\n"
  "Unlike the vtkDataSet class, vtkGenericDataSet provides a more\n"
  "flexible interface including support for iterators. vtkGenericDataSet\n"
  "is also designed to interface VTK to external simulation packages\n"
  "without the penalty of copying memory (see\n"
  "VTK/GenericFiltering/README.html) for more information. Thus\n"
  "vtkGenericDataSet plays a central role in the adaptor framework.\n\n"
  "Please note that this class introduces the concepts of \"boundary\n"
  "cells\". This refers to the boundaries of a cell (e.g., face of a\n"
  "tetrahedron) which may in turn be represented as a cell. Boundary\n"
  "cells are derivative topological features of cells, and are therefore\n"
  "never explicitly represented in the dataset. Often in visualization\n"
  "algorithms, looping over boundaries (edges or faces) is employed,\n"
  "while the actual dataset cells may not traversed. Thus there are\n"
  "methods to loop over these boundary cells.\n\n"
  "Finally, as a point of clarification, points are not the same as\n"
  "vertices. Vertices refer to points, and points specify a position is\n"
  "space. Vertices are a type of 0-D cell. Also, the concept of a\n"
  "DOFNode, which is where coefficients for higher-order cells are kept,\n"
  "is a new concept introduced by the adaptor framework (see\n"
  "vtkGenericAdaptorCell for more information).\n\n"
  "@sa\n"
  "vtkGenericAdaptorCell vtkDataSet\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkGenericDataSet", // tp_name
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
  PyvtkGenericDataSet_Doc, // tp_doc
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

PyObject *PyvtkGenericDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericDataSet_Type, PyvtkGenericDataSet_Methods,
    "vtkGenericDataSet",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGenericDataSet_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

