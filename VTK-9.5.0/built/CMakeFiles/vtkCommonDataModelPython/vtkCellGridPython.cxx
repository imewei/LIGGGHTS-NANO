// python wrapper for vtkCellGrid
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
#include "vtkCellGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGrid(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGrid_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkCellGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGrid *tempr = vtkCellGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGrid::NewInstance());

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
PyvtkCellGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkCellGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCellGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellGrid *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCellGrid") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->CopyStructure(temp0, temp1) :
      op->vtkCellGrid::CopyStructure(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetAttributes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkCellGrid::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_GetAttributes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(*temp0) :
      op->vtkCellGrid::GetAttributes(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCellGrid_GetAttributes_Methods[] = {
  {"GetAttributes", PyvtkCellGrid_GetAttributes_s1, METH_VARARGS,
   "@i"},
  {"GetAttributes", PyvtkCellGrid_GetAttributes_s2, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_GetAttributes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_GetAttributes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributes");
  return nullptr;
}


static PyObject *
PyvtkCellGrid_FindAttributes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->FindAttributes(temp0) :
      op->vtkCellGrid::FindAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_FindAttributes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->FindAttributes(*temp0) :
      op->vtkCellGrid::FindAttributes(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCellGrid_FindAttributes_Methods[] = {
  {"FindAttributes", PyvtkCellGrid_FindAttributes_s1, METH_VARARGS,
   "@i"},
  {"FindAttributes", PyvtkCellGrid_FindAttributes_s2, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_FindAttributes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_FindAttributes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindAttributes");
  return nullptr;
}


static PyObject *
PyvtkCellGrid_GetGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostArray(temp0) :
      op->vtkCellGrid::GetGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SupportsGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsGhostArray(temp0) :
      op->vtkCellGrid::SupportsGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeTypeForArray(temp0) :
      op->vtkCellGrid::GetAttributeTypeForArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkCellGrid::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

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
      op->vtkCellGrid::GetBounds(temp0);
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
PyvtkCellGrid_AddCellMetadata_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->AddCellMetadata(temp0) :
      op->vtkCellGrid::AddCellMetadata(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_AddCellMetadata_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->AddCellMetadata(*temp0) :
      op->vtkCellGrid::AddCellMetadata(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCellGrid_AddCellMetadata_Methods[] = {
  {"AddCellMetadata", PyvtkCellGrid_AddCellMetadata_s1, METH_VARARGS,
   "@V *vtkCellMetadata"},
  {"AddCellMetadata", PyvtkCellGrid_AddCellMetadata_s2, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_AddCellMetadata(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_AddCellMetadata_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddCellMetadata");
  return nullptr;
}


static PyObject *
PyvtkCellGrid_AddAllCellMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AddAllCellMetadata() :
      op->vtkCellGrid::AddAllCellMetadata());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_RemoveCellMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveCellMetadata(temp0) :
      op->vtkCellGrid::RemoveCellMetadata(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_RemoveUnusedCellMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveUnusedCellMetadata() :
      op->vtkCellGrid::RemoveUnusedCellMetadata());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetCellTypes() :
      op->vtkCellGrid::GetCellTypes());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->GetCellType(*temp0) :
      op->vtkCellGrid::GetCellType(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCellGrid_AddCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCellAttribute(temp0) :
      op->vtkCellGrid::AddCellAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_RemoveCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveCellAttribute(temp0) :
      op->vtkCellGrid::RemoveCellAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  int temp1;
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetCellAttributeRange(temp0, temp1, temp2, temp3) :
      op->vtkCellGrid::GetCellAttributeRange(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_ClearRangeCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearRangeCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  std::string temp0 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ClearRangeCache(temp0);
    }
    else
    {
      op->vtkCellGrid::ClearRangeCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetUnorderedCellAttributeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnorderedCellAttributeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->GetUnorderedCellAttributeIds() :
      op->vtkCellGrid::GetUnorderedCellAttributeIds());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<vtkSmartPointer<vtkCellAttribute>> tempr = (ap.IsBound() ?
      op->GetCellAttributeList() :
      op->vtkCellGrid::GetCellAttributeList());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeById(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeById");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttributeById(temp0) :
      op->vtkCellGrid::GetCellAttributeById(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttributeByName(temp0) :
      op->vtkCellGrid::GetCellAttributeByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetShapeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetShapeAttribute() :
      op->vtkCellGrid::GetShapeAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SetShapeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShapeAttribute(temp0) :
      op->vtkCellGrid::SetShapeAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellGridQuery *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGridQuery"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0) :
      op->vtkCellGrid::Query(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SetSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSchema(*temp0, temp1);
    }
    else
    {
      op->vtkCellGrid::SetSchema(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCellGrid_GetSchemaName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSchemaName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringToken tempr = (ap.IsBound() ?
      op->GetSchemaName() :
      op->vtkCellGrid::GetSchemaName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetSchemaVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSchemaVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSchemaVersion() :
      op->vtkCellGrid::GetSchemaVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SetContentVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentVersion(temp0);
    }
    else
    {
      op->vtkCellGrid::SetContentVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetContentVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetContentVersion() :
      op->vtkCellGrid::GetContentVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkCellGrid *tempr = vtkCellGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkCellGrid *tempr = vtkCellGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGrid_GetData_Methods[] = {
  {"GetData", PyvtkCellGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkCellGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkCellGrid_CorrespondingArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CorrespondingArray");

  vtkCellGrid *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkCellGrid *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCellGrid") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkCellGrid"))
  {
    vtkDataArray *tempr = vtkCellGrid::CorrespondingArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_ARRAY_GROUP_IDS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_GROUP_IDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkCellGrid::ARRAY_GROUP_IDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGrid_Methods[] = {
  {"IsTypeOf", PyvtkCellGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGrid\nC++: static vtkCellGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGrid\nC++: vtkCellGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCellGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"GetDataObjectType", PyvtkCellGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type. THIS METHOD IS THREAD SAFE\n"},
  {"GetActualMemorySize", PyvtkCellGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value).\n"},
  {"ShallowCopy", PyvtkCellGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, baseSrc:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *baseSrc) override;\n\nCopy baseSrc by reference (which must be a vtkCellGrid) into this\nobject.\n\nThis copies cell metadata (i.e., topology) and cell-attributes\n(including the cell-attribute holding the geometric shape).\n"},
  {"DeepCopy", PyvtkCellGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, baseSrc:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *baseSrc) override;\n\nCopy baseSrc by value (which must be a vtkCellGrid) into this\nobject.\n\nThis copies cell metadata (i.e., topology) and cell-attributes\n(including the cell-attribute holding the geometric shape).\n"},
  {"CopyStructure", PyvtkCellGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, other:vtkCellGrid, byReference:bool=True)\n    -> bool\nC++: bool CopyStructure(vtkCellGrid *other, bool byReference=true)\n\nCopy the geometric and topological data from other, but not any\nattributes.\n\nIf byReference is true, references to source arrays are used\ndirectly. Otherwise, deep copies of the other cell-grid's arrays\nare created.\n"},
  {"GetAttributes", PyvtkCellGrid_GetAttributes, METH_VARARGS,
   "GetAttributes(self, type:int) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAttributes(int type) override;\nGetAttributes(self, type:vtkStringToken) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAttributes(vtkStringToken type)\n\nFetch a partition of DOF arrays. The GetAttributes method will\ncreate an empty one if no arrays of that type exist; the\nGetArrayGroups method returns the map from types to existing\npartitions. The FindAttributes method will return a null pointer\nif no arrays of that type exist.\n"},
  {"FindAttributes", PyvtkCellGrid_FindAttributes, METH_VARARGS,
   "FindAttributes(self, type:int) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *FindAttributes(int type)\nFindAttributes(self, type:vtkStringToken) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *FindAttributes(vtkStringToken type)\n\n"},
  {"GetGhostArray", PyvtkCellGrid_GetGhostArray, METH_VARARGS,
   "GetGhostArray(self, type:int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostArray(int type) override;\n\nReturns the ghost arrays of the data object of the specified\nattribute type. This may return a null pointer.\n"},
  {"SupportsGhostArray", PyvtkCellGrid_SupportsGhostArray, METH_VARARGS,
   "SupportsGhostArray(self, type:int) -> bool\nC++: bool SupportsGhostArray(int type) override;\n\nReturns true if type is CELL, false otherwise\n"},
  {"GetAttributeTypeForArray", PyvtkCellGrid_GetAttributeTypeForArray, METH_VARARGS,
   "GetAttributeTypeForArray(self, arr:vtkAbstractArray) -> int\nC++: int GetAttributeTypeForArray(vtkAbstractArray *arr) override;\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {"GetNumberOfElements", PyvtkCellGrid_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetNumberOfCells", PyvtkCellGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\nReturn the number of cells (of all types).\n"},
  {"GetBounds", PyvtkCellGrid_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nFill the provided bounding box with the bounds of all the cells\npresent in the grid.\n\nIf no cells are present, the bounding box will be reset to\nuninitialized bounds. It is up to each cell type to implement a\nspecialization of the BoundsQuery operation.\n\nThe bounds are ordered { -x, +x, -y, +y, -z, +z }.\n"},
  {"AddCellMetadata", PyvtkCellGrid_AddCellMetadata, METH_VARARGS,
   "AddCellMetadata(self, cellType:vtkCellMetadata) -> vtkCellMetadata\nC++: vtkCellMetadata *AddCellMetadata(vtkCellMetadata *cellType)\nAddCellMetadata(self, cellTypeName:vtkStringToken)\n    -> vtkCellMetadata\nC++: vtkCellMetadata *AddCellMetadata(vtkStringToken cellTypeName)\n\n"},
  {"AddAllCellMetadata", PyvtkCellGrid_AddAllCellMetadata, METH_VARARGS,
   "AddAllCellMetadata(self) -> int\nC++: int AddAllCellMetadata()\n\nAdd every registered cell type to this grid.\n\nThis is useful for queries that need to iterate over registered\ncell types in order to determine which type of cell to construct.\nAfterward, your VTK filter/source can call\nRemoveUnusedCellMetadata() to remove metadata for which no cells\nexist.\n\nThe number of metadata entries added is returned.\n"},
  {"RemoveCellMetadata", PyvtkCellGrid_RemoveCellMetadata, METH_VARARGS,
   "RemoveCellMetadata(self, meta:vtkCellMetadata) -> bool\nC++: bool RemoveCellMetadata(vtkCellMetadata *meta)\n\n"},
  {"RemoveUnusedCellMetadata", PyvtkCellGrid_RemoveUnusedCellMetadata, METH_VARARGS,
   "RemoveUnusedCellMetadata(self) -> int\nC++: int RemoveUnusedCellMetadata()\n\nRemove every registered cell type in this grid which has no\n    cells.\n\nThe number of metadata entries removed is returned.\n\n\\sa vtkCellGrid::AddAllCellMetadata\n"},
  {"GetCellTypes", PyvtkCellGrid_GetCellTypes, METH_VARARGS,
   "GetCellTypes(self) -> (str, ...)\nC++: std::vector<std::string> GetCellTypes()\n\n"},
  {"GetCellType", PyvtkCellGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellTypeName:vtkStringToken) -> vtkCellMetadata\nC++: vtkCellMetadata *GetCellType(vtkStringToken cellTypeName)\n\n"},
  {"AddCellAttribute", PyvtkCellGrid_AddCellAttribute, METH_VARARGS,
   "AddCellAttribute(self, attribute:vtkCellAttribute) -> bool\nC++: virtual bool AddCellAttribute(vtkCellAttribute *attribute)\n\nAdd a cell-attribute to the dataset. A cell-attribute is an\nobject representing a consistent collection of arrays that\nspecify a function over the entire vtkCellGrid's domain (i.e.,\nall cells of all types present in the vtkCellGrid), with custom\nstorage available to each cell type to facilitate interpolation,\nrendering, and other basic visualization operations.\n"},
  {"RemoveCellAttribute", PyvtkCellGrid_RemoveCellAttribute, METH_VARARGS,
   "RemoveCellAttribute(self, attribute:vtkCellAttribute) -> bool\nC++: virtual bool RemoveCellAttribute(vtkCellAttribute *attribute)\n\nRemove a cell-attribute from the dataset.\n\nThis returns true if the cell-attribute was removed. Note that\nyou cannot remove the shape attribute.\n"},
  {"GetCellAttributeRange", PyvtkCellGrid_GetCellAttributeRange, METH_VARARGS,
   "GetCellAttributeRange(self, attribute:vtkCellAttribute,\n    componentIndex:int, range:[float, float],\n    finiteRange:bool=False) -> bool\nC++: virtual bool GetCellAttributeRange(\n    vtkCellAttribute *attribute, int componentIndex,\n    double range[2], bool finiteRange=false)\n\nReturn information on the range of values taken on by a component\nof an attribute.\n\nThis method also accommodates computing the range of the L\342\202\201 or\nL\342\202\202 norm of the entire tuple by passing -1 or -2, respectively,\nfor thecomponentIndex.\n\nWhen called with finiteRange equal to false (the default), either\ncomponent of range may be NaN (not-a-number) or +/-Inf (\342\210\236).\nWhen finiteRange is true, the returned range values will always\nbe finite.\n\nNote that if this cell-attribute has no values, the range will be\nmarked invalid (i.e., range[1] < range[0]).\n\nNote that attribute must be an attribute owned by this cell-grid.\n"},
  {"ClearRangeCache", PyvtkCellGrid_ClearRangeCache, METH_VARARGS,
   "ClearRangeCache(self, attributeName:str=...) -> None\nC++: void ClearRangeCache(\n    const std::string &attributeName=std::string())\n\nClear the cache of cell-attribute range data.\n\nIf attributeName is empty, the entire cache is cleared.\nOtherwise, attributes with the given name are cleared from the\ncache. This method exists for python scripts.\n"},
  {"GetUnorderedCellAttributeIds", PyvtkCellGrid_GetUnorderedCellAttributeIds, METH_VARARGS,
   "GetUnorderedCellAttributeIds(self) -> (int, ...)\nC++: std::vector<int> GetUnorderedCellAttributeIds()\n\n"},
  {"GetCellAttributeList", PyvtkCellGrid_GetCellAttributeList, METH_VARARGS,
   "GetCellAttributeList(self) -> (vtkCellAttribute, ...)\nC++: std::vector<vtkSmartPointer<vtkCellAttribute> > GetCellAttributeList(\n    )\n\nReturn a vector of all this grid's cell-attributes.\n\nThis is a convenience for scripting.\n"},
  {"GetCellAttributeById", PyvtkCellGrid_GetCellAttributeById, METH_VARARGS,
   "GetCellAttributeById(self, attributeId:int) -> vtkCellAttribute\nC++: vtkCellAttribute *GetCellAttributeById(int attributeId)\n\nReturn an attribute given its name or identifier.\n\nThis is currently an O(n) process, but additional indices could\nbe added internally if needed.\n\nThese methods may return a null pointer if no such attribute\nexists.\n\nMultiple attributes with the same name are possible. The first\nmatch will be returned.\n"},
  {"GetCellAttributeByName", PyvtkCellGrid_GetCellAttributeByName, METH_VARARGS,
   "GetCellAttributeByName(self, name:str) -> vtkCellAttribute\nC++: vtkCellAttribute *GetCellAttributeByName(\n    const std::string &name)\n\n"},
  {"GetShapeAttribute", PyvtkCellGrid_GetShapeAttribute, METH_VARARGS,
   "GetShapeAttribute(self) -> vtkCellAttribute\nC++: vtkCellAttribute *GetShapeAttribute()\n\nSet/get the \"shape attribute\" (i.e., a vector-valued\ncell-attribute that maps from reference to world coordinates).\n\nIf there is no shape attribute, then a vtkCellGrid cannot be\nrendered.\n\nA shape attribute must have between 1 and 4 components\n(inclusive).\n\nIf you call SetShapeAttribute with an attribute that does not\nsatisfy this constraint, this method will return false and have\nno effect. If you wish to \"remove\" a grid's shape, call\nSetShapeAttribute(nullptr).\n"},
  {"SetShapeAttribute", PyvtkCellGrid_SetShapeAttribute, METH_VARARGS,
   "SetShapeAttribute(self, shape:vtkCellAttribute) -> bool\nC++: bool SetShapeAttribute(vtkCellAttribute *shape)\n\n"},
  {"Query", PyvtkCellGrid_Query, METH_VARARGS,
   "Query(self, query:vtkCellGridQuery) -> bool\nC++: bool Query(vtkCellGridQuery *query)\n\nPerform a query on all the cells in this instance.\n\nThe return value indicates success (true when all cells respond\nto the query) or failure (false when some cell type is unable to\nhandle the query).\n"},
  {"SetSchema", PyvtkCellGrid_SetSchema, METH_VARARGS,
   "SetSchema(self, name:vtkStringToken, version:int) -> None\nC++: virtual void SetSchema(vtkStringToken name,\n    vtkTypeUInt32 version)\n\nSet the schema name and version number that generated this\nobject.\n"},
  {"GetSchemaName", PyvtkCellGrid_GetSchemaName, METH_VARARGS,
   "GetSchemaName(self) -> vtkStringToken\nC++: virtual vtkStringToken GetSchemaName()\n\n"},
  {"GetSchemaVersion", PyvtkCellGrid_GetSchemaVersion, METH_VARARGS,
   "GetSchemaVersion(self) -> int\nC++: virtual vtkTypeUInt32 GetSchemaVersion()\n\n"},
  {"SetContentVersion", PyvtkCellGrid_SetContentVersion, METH_VARARGS,
   "SetContentVersion(self, _arg:int) -> None\nC++: virtual void SetContentVersion(vtkTypeUInt32 _arg)\n\nSet the version number of the object's contents.\n\nThis is not intended to be incremented with each change in memory\n(as a vtkTimeStamp would) but when the object is serialized to\ndisk.\n"},
  {"GetContentVersion", PyvtkCellGrid_GetContentVersion, METH_VARARGS,
   "GetContentVersion(self) -> int\nC++: virtual vtkTypeUInt32 GetContentVersion()\n\n"},
  {"GetData", PyvtkCellGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkCellGrid\nC++: static vtkCellGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkCellGrid\nC++: static vtkCellGrid *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"CorrespondingArray", PyvtkCellGrid_CorrespondingArray, METH_VARARGS,
   "CorrespondingArray(gridA:vtkCellGrid, arrayA:vtkDataArray,\n    gridB:vtkCellGrid) -> vtkDataArray\nC++: static vtkDataArray *CorrespondingArray(vtkCellGrid *gridA,\n    vtkDataArray *arrayA, vtkCellGrid *gridB)\n\nIdentify a correspondence between arrays in two cell grid\nobjects.\n\nGiven two cell-grids and an array held by the former, return the\ncorresponding array of the latter (i..e, one of the same name\nheld in an array-group (vtkDataSetAttributes) instance of the\nsame name.\n\nIf no match is found, this returns a null pointer.\n"},
  {"ARRAY_GROUP_IDS", PyvtkCellGrid_ARRAY_GROUP_IDS, METH_VARARGS,
   "ARRAY_GROUP_IDS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *ARRAY_GROUP_IDS()\n\nThis information key is used to mark arrays with the string\ntoken(s) of their owning vtkDataSetAttributes instance.\n\nIf this key exists on an array, it indicates that calling\nvtkCellGrid::GetAttributes() with its value will return a\nvtkDataSetAttributes instance that holds the array. It is used to\naccelerate the CorrespondingArray() method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGrid_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("content_version"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetContentVersion(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGrid_SetContentVersion(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGrid_SetContentVersion(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetContentVersion/SetContentVersion\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_object_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetDataObjectType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataObjectType\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("actual_memory_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetActualMemorySize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetActualMemorySize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_types"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetCellTypes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellTypes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("unordered_cell_attribute_ids"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetUnorderedCellAttributeIds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetUnorderedCellAttributeIds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_attribute_list"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetCellAttributeList(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellAttributeList\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("shape_attribute"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetShapeAttribute(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetShapeAttribute\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("schema_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetSchemaName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSchemaName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("schema_version"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetSchemaVersion(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSchemaVersion\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGrid_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGrid_Doc =
  "vtkCellGrid - Visualization data composed of cells of arbitrary type.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkCellGrid inherits vtkDataObject in order to introduce the concept\n"
  "of cells that, instead of relying on spatial points to specify their\n"
  "shape, rely on degrees of freedom (which may or may not be embedded\n"
  "in a world coordinate system).\n\n"
  "The degrees of freedom that define cells and the functions using\n"
  "those cells as their domain are provided in data arrays. The arrays\n"
  "are partitioned into groups (vtkDataSetAttributes) by the registered\n"
  "cell types. Each array in a group has the same number of tuples.\n\n"
  "@sa vtkDataObject vtkDataSetAttributes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGrid", // tp_name
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
  PyvtkCellGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGrid_StaticNew()
{
  return vtkCellGrid::New();
}

PyObject *PyvtkCellGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGrid_Type, PyvtkCellGrid_Methods,
    "vtkCellGrid",
 &PyvtkCellGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGrid_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

