// python wrapper for vtkGenericEdgeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericEdgeTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGenericEdgeTable(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGenericEdgeTable_ClassNew(); }


static PyObject *
PyvtkGenericEdgeTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericEdgeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericEdgeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericEdgeTable *tempr = vtkGenericEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericEdgeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericEdgeTable::NewInstance());

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
PyvtkGenericEdgeTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericEdgeTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericEdgeTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_InsertEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  int temp3;
  long long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->InsertEdge(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkGenericEdgeTable::InsertEdge(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEdgeTable_InsertEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->InsertEdge(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericEdgeTable::InsertEdge(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEdgeTable_InsertEdge(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkGenericEdgeTable_InsertEdge_s1(self, args);
    case 3:
    case 4:
      return PyvtkGenericEdgeTable_InsertEdge_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertEdge");
  return nullptr;
}


static PyObject *
PyvtkGenericEdgeTable_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveEdge(temp0, temp1) :
      op->vtkGenericEdgeTable::RemoveEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->CheckEdge(temp0, temp1, temp2) :
      op->vtkGenericEdgeTable::CheckEdge(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IncrementEdgeReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementEdgeReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IncrementEdgeReferenceCount(temp0, temp1, temp2) :
      op->vtkGenericEdgeTable::IncrementEdgeReferenceCount(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckEdgeReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckEdgeReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CheckEdgeReferenceCount(temp0, temp1) :
      op->vtkGenericEdgeTable::CheckEdgeReferenceCount(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkGenericEdgeTable::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkGenericEdgeTable::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkGenericEdgeTable::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckPoint(temp0) :
      op->vtkGenericEdgeTable::CheckPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEdgeTable_CheckPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->CheckPoint(temp0, temp1, temp2) :
      op->vtkGenericEdgeTable::CheckPoint(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
PyvtkGenericEdgeTable_CheckPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGenericEdgeTable_CheckPoint_s1(self, args);
    case 3:
      return PyvtkGenericEdgeTable_CheckPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CheckPoint");
  return nullptr;
}


static PyObject *
PyvtkGenericEdgeTable_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1);
    }
    else
    {
      op->vtkGenericEdgeTable::InsertPoint(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_InsertPointAndScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPointAndScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->InsertPointAndScalar(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGenericEdgeTable::InsertPointAndScalar(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePoint(temp0);
    }
    else
    {
      op->vtkGenericEdgeTable::RemovePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IncrementPointReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementPointReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->IncrementPointReferenceCount(temp0);
    }
    else
    {
      op->vtkGenericEdgeTable::IncrementPointReferenceCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_DumpTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DumpTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DumpTable();
    }
    else
    {
      op->vtkGenericEdgeTable::DumpTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_LoadFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadFactor();
    }
    else
    {
      op->vtkGenericEdgeTable::LoadFactor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericEdgeTable_Methods[] = {
  {"IsTypeOf", PyvtkGenericEdgeTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericEdgeTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericEdgeTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericEdgeTable\nC++: static vtkGenericEdgeTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericEdgeTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericEdgeTable\nC++: vtkGenericEdgeTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericEdgeTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericEdgeTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InsertEdge", PyvtkGenericEdgeTable_InsertEdge, METH_VARARGS,
   "InsertEdge(self, e1:int, e2:int, cellId:int, ref:int, ptId:int)\n    -> None\nC++: void InsertEdge(vtkIdType e1, vtkIdType e2, vtkIdType cellId,\n     int ref, vtkIdType &ptId)\nInsertEdge(self, e1:int, e2:int, cellId:int, ref:int=1) -> None\nC++: void InsertEdge(vtkIdType e1, vtkIdType e2, vtkIdType cellId,\n     int ref=1)\n\nSplit the edge with the indicated point id.\n"},
  {"RemoveEdge", PyvtkGenericEdgeTable_RemoveEdge, METH_VARARGS,
   "RemoveEdge(self, e1:int, e2:int) -> int\nC++: int RemoveEdge(vtkIdType e1, vtkIdType e2)\n\nMethod to remove an edge from the table. The method returns the\ncurrent reference count.\n"},
  {"CheckEdge", PyvtkGenericEdgeTable_CheckEdge, METH_VARARGS,
   "CheckEdge(self, e1:int, e2:int, ptId:int) -> int\nC++: int CheckEdge(vtkIdType e1, vtkIdType e2, vtkIdType &ptId)\n\nMethod to determine whether an edge is in the table (0 or 1), or\nnot (-1). It returns whether the edge was split (1) or not (0),\nand the point id exists.\n"},
  {"IncrementEdgeReferenceCount", PyvtkGenericEdgeTable_IncrementEdgeReferenceCount, METH_VARARGS,
   "IncrementEdgeReferenceCount(self, e1:int, e2:int, cellId:int)\n    -> int\nC++: int IncrementEdgeReferenceCount(vtkIdType e1, vtkIdType e2,\n    vtkIdType cellId)\n\nMethod that increments the referencecount and returns it.\n"},
  {"CheckEdgeReferenceCount", PyvtkGenericEdgeTable_CheckEdgeReferenceCount, METH_VARARGS,
   "CheckEdgeReferenceCount(self, e1:int, e2:int) -> int\nC++: int CheckEdgeReferenceCount(vtkIdType e1, vtkIdType e2)\n\nReturn the edge reference count.\n"},
  {"Initialize", PyvtkGenericEdgeTable_Initialize, METH_VARARGS,
   "Initialize(self, start:int) -> None\nC++: void Initialize(vtkIdType start)\n\nTo specify the starting point id. It will initialize LastPointId\nThis is very sensitive the start point should be cautiously\nchosen\n"},
  {"GetNumberOfComponents", PyvtkGenericEdgeTable_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: int GetNumberOfComponents()\n\nReturn the total number of components for the point-centered\nattributes.\n\\post positive_result: result>0\n"},
  {"SetNumberOfComponents", PyvtkGenericEdgeTable_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, count:int) -> None\nC++: void SetNumberOfComponents(int count)\n\nSet the total number of components for the point-centered\nattributes.\n\\pre positive_count: count>0\n"},
  {"CheckPoint", PyvtkGenericEdgeTable_CheckPoint, METH_VARARGS,
   "CheckPoint(self, ptId:int) -> int\nC++: int CheckPoint(vtkIdType ptId)\nCheckPoint(self, ptId:int, point:[float, float, float],\n    scalar:[float, ...]) -> int\nC++: int CheckPoint(vtkIdType ptId, double point[3],\n    double *scalar)\n\nCheck if a point is already in the point table.\n"},
  {"InsertPoint", PyvtkGenericEdgeTable_InsertPoint, METH_VARARGS,
   "InsertPoint(self, ptId:int, point:[float, float, float]) -> None\nC++: void InsertPoint(vtkIdType ptId, double point[3])\n\nInsert point associated with an edge.\n"},
  {"InsertPointAndScalar", PyvtkGenericEdgeTable_InsertPointAndScalar, METH_VARARGS,
   "InsertPointAndScalar(self, ptId:int, pt:[float, float, float],\n    s:[float, ...]) -> None\nC++: void InsertPointAndScalar(vtkIdType ptId, double pt[3],\n    double *s)\n\n"},
  {"RemovePoint", PyvtkGenericEdgeTable_RemovePoint, METH_VARARGS,
   "RemovePoint(self, ptId:int) -> None\nC++: void RemovePoint(vtkIdType ptId)\n\nRemove a point from the point table.\n"},
  {"IncrementPointReferenceCount", PyvtkGenericEdgeTable_IncrementPointReferenceCount, METH_VARARGS,
   "IncrementPointReferenceCount(self, ptId:int) -> None\nC++: void IncrementPointReferenceCount(vtkIdType ptId)\n\nIncrement the reference count for the indicated point.\n"},
  {"DumpTable", PyvtkGenericEdgeTable_DumpTable, METH_VARARGS,
   "DumpTable(self) -> None\nC++: void DumpTable()\n\nFor debugging purposes. It is particularly useful to dump the\ntable and check that nothing is left after a complete iteration.\nLoadFactor should ideally be very low to be able to have a\nconstant time access\n"},
  {"LoadFactor", PyvtkGenericEdgeTable_LoadFactor, METH_VARARGS,
   "LoadFactor(self) -> None\nC++: void LoadFactor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGenericEdgeTable_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("number_of_components"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenericEdgeTable_GetNumberOfComponents(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGenericEdgeTable_SetNumberOfComponents(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGenericEdgeTable_SetNumberOfComponents(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfComponents/SetNumberOfComponents\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGenericEdgeTable_Doc =
  "vtkGenericEdgeTable - keep track of edges (defined by pair of integer\nid's)\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericEdgeTable is used to indicate the existence of and hold\n"
  "information about edges. Similar to vtkEdgeTable, this class is more\n"
  "sophisticated in that it uses reference counting to keep track of\n"
  "when information about an edge should be deleted.\n\n"
  "vtkGenericEdgeTable is a helper class used in the adaptor framework. \n"
  "It is used during the tessellation process to hold information about\n"
  "the error metric on each edge. This avoids recomputing the error\n"
  "metric each time the same edge is visited.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericEdgeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkGenericEdgeTable", // tp_name
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
  PyvtkGenericEdgeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericEdgeTable_StaticNew()
{
  return vtkGenericEdgeTable::New();
}

PyObject *PyvtkGenericEdgeTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericEdgeTable_Type, PyvtkGenericEdgeTable_Methods,
    "vtkGenericEdgeTable",
 &PyvtkGenericEdgeTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGenericEdgeTable_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericEdgeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericEdgeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericEdgeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

