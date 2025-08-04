// python wrapper for vtkStructuredCellArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredCellArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkStructuredCellArray(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkStructuredCellArray_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellArray_ClassNew
extern "C" { PyObject *PyvtkAbstractCellArray_ClassNew(); }
#define DECLARED_PyvtkAbstractCellArray_ClassNew
#endif

static PyObject *
PyvtkStructuredCellArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredCellArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredCellArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredCellArray *tempr = vtkStructuredCellArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredCellArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredCellArray::NewInstance());

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
PyvtkStructuredCellArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredCellArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredCellArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStructuredCellArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkStructuredCellArray::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetNumberOfOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfOffsets() :
      op->vtkStructuredCellArray::GetNumberOfOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOffset(temp0) :
      op->vtkStructuredCellArray::GetOffset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetNumberOfConnectivityIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfConnectivityIds() :
      op->vtkStructuredCellArray::GetNumberOfConnectivityIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkStructuredCellArray::SetData(temp0, temp1);
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
PyvtkStructuredCellArray_IsStorageShareable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStorageShareable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStorageShareable() :
      op->vtkStructuredCellArray::IsStorageShareable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkStructuredCellArray::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetCellAtId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2c, temp3);
    }
    else
    {
      op->vtkStructuredCellArray::GetCellAtId(temp0, temp1, temp2c, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredCellArray_GetCellAtId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1);
    }
    else
    {
      op->vtkStructuredCellArray::GetCellAtId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredCellArray_GetCellAtId_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStructuredCellArray::GetCellAtId(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
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
PyvtkStructuredCellArray_GetCellAtId_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1);
    }
    else
    {
      op->vtkStructuredCellArray::GetCellAtId(temp0, temp1);
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
PyvtkStructuredCellArray_GetCellAtId_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStructuredCellArray::GetCellAtId(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
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

static PyMethodDef PyvtkStructuredCellArray_GetCellAtId_Methods[] = {
  {"GetCellAtId", PyvtkStructuredCellArray_GetCellAtId_s2, METH_VARARGS,
   "@kV *vtkIdList"},
  {"GetCellAtId", PyvtkStructuredCellArray_GetCellAtId_s3, METH_VARARGS,
   "@kkP *k"},
  {"GetCellAtId", PyvtkStructuredCellArray_GetCellAtId_s4, METH_VARARGS,
   "@PV *i *vtkIdList"},
  {"GetCellAtId", PyvtkStructuredCellArray_GetCellAtId_s5, METH_VARARGS,
   "@PkP *i *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredCellArray_GetCellAtId(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredCellArray_GetCellAtId_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkStructuredCellArray_GetCellAtId_s1(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAtId");
  return nullptr;
}


static PyObject *
PyvtkStructuredCellArray_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkStructuredCellArray::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkStructuredCellArray::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  vtkAbstractCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkStructuredCellArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredCellArray_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredCellArray *op = static_cast<vtkStructuredCellArray *>(vp);

  vtkAbstractCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkStructuredCellArray::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredCellArray_Methods[] = {
  {"IsTypeOf", PyvtkStructuredCellArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredCellArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredCellArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredCellArray\nC++: static vtkStructuredCellArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredCellArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredCellArray\nC++: vtkStructuredCellArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredCellArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredCellArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkStructuredCellArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nFree any memory and reset to an empty state.\n"},
  {"GetNumberOfCells", PyvtkStructuredCellArray_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nGet the number of cells in the array.\n"},
  {"GetNumberOfOffsets", PyvtkStructuredCellArray_GetNumberOfOffsets, METH_VARARGS,
   "GetNumberOfOffsets(self) -> int\nC++: vtkIdType GetNumberOfOffsets() override;\n\nGet the number of elements in the offsets array. This will be the\nnumber of cells + 1.\n"},
  {"GetOffset", PyvtkStructuredCellArray_GetOffset, METH_VARARGS,
   "GetOffset(self, cellId:int) -> int\nC++: vtkIdType GetOffset(vtkIdType cellId) override;\n\nGet the offset (into the connectivity) for a specified cell id.\n"},
  {"GetNumberOfConnectivityIds", PyvtkStructuredCellArray_GetNumberOfConnectivityIds, METH_VARARGS,
   "GetNumberOfConnectivityIds(self) -> int\nC++: vtkIdType GetNumberOfConnectivityIds() override;\n\nGet the size of the connectivity array that stores the point ids.\n\note Do not confuse this with the deprecated\nGetNumberOfConnectivityEntries(), which refers to the legacy\nmemory layout.\n"},
  {"SetData", PyvtkStructuredCellArray_SetData, METH_VARARGS,
   "SetData(self, extent:[int, int, int, int, int, int],\n    usePixelVoxelOrientation:bool) -> None\nC++: void SetData(int extent[6], bool usePixelVoxelOrientation)\n\nCreate a new cell array given extent and a flag indicating\nwhether the data should be stored in a voxel or pixel\norientation.\n"},
  {"IsStorageShareable", PyvtkStructuredCellArray_IsStorageShareable, METH_VARARGS,
   "IsStorageShareable(self) -> bool\nC++: bool IsStorageShareable() override;\n\n@return True if the internal storage can be shared as a\npointer to vtkIdType, i.e., the type and organization of internal\nstorage is such that copying of data can be avoided, and instead\na pointer to vtkIdType can be used.\n"},
  {"IsHomogeneous", PyvtkStructuredCellArray_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: vtkIdType IsHomogeneous() override;\n\nCheck if all cells have the same number of vertices.\n\nThe return value is coded as:\n* -1 = heterogeneous\n* 0 = Cell array empty\n* n (positive integer) = homogeneous array of cell size n\n"},
  {"GetCellAtId", PyvtkStructuredCellArray_GetCellAtId, METH_VARARGS,
   "GetCellAtId(self, cellId:int, cellSize:int, cellPoints:(int, ...),\n     ptIds:vtkIdList) -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &cellSize,\n    vtkIdType const *&cellPoints, vtkIdList *ptIds) override;\nGetCellAtId(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellAtId(self, cellId:int, cellSize:int, cellPoints:[int, ...])\n     -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &cellSize,\n    vtkIdType *cellPoints) override;\nGetCellAtId(self, ijk:[int, int, int], ptIds:vtkIdList) -> None\nC++: void GetCellAtId(int ijk[3], vtkIdList *ptIds)\nGetCellAtId(self, ijk:[int, int, int], cellSize:int,\n    cellPoints:[int, ...]) -> None\nC++: void GetCellAtId(int ijk[3], vtkIdType &cellSize,\n    vtkIdType *cellPoints)\n\nReturn the point ids for the cell at cellId.\n\nSubsequent calls to this method may invalidate previous call\nresults if the internal storage type is not the same as vtkIdType\nand cannot be shared through the cellPoints pointer. If that\noccurs, the method will use ptIds, which is an object that is\ncreated by each thread, to guarantee thread safety.\n"},
  {"GetCellSize", PyvtkStructuredCellArray_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nReturn the size of the cell at cellId.\n"},
  {"GetMaxCellSize", PyvtkStructuredCellArray_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nReturns the size of the largest cell. The size is the number of\npoints defining the cell.\n"},
  {"DeepCopy", PyvtkStructuredCellArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, ca:vtkAbstractCellArray) -> None\nC++: void DeepCopy(vtkAbstractCellArray *ca) override;\n\nPerform a deep copy (no reference counting) of the given cell\narray.\n"},
  {"ShallowCopy", PyvtkStructuredCellArray_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, ca:vtkAbstractCellArray) -> None\nC++: void ShallowCopy(vtkAbstractCellArray *ca) override;\n\nShallow copy ca into this cell array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkStructuredCellArray_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("max_cell_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStructuredCellArray_GetMaxCellSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMaxCellSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStructuredCellArray_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_connectivity_ids"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkStructuredCellArray_GetNumberOfConnectivityIds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfConnectivityIds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkStructuredCellArray_Doc =
  "vtkStructuredCellArray - implicit object to represent cell\nconnectivity\n\n"
  "Superclass: vtkAbstractCellArray\n\n"
  "vtkStructuredCellArray stores dataset topologies as an structured\n"
  "connectivity table listing the point ids that make up each cell.\n\n"
  "Internally, the connectivity is stored as a vtkImplicitArray that is\n"
  "constructed using the SetData function by providing the dimensions of\n"
  "the dataset and a flag indicating whether the data should use\n"
  "voxel/pixel orientation.\n\n"
  "This class was designed as a more performant alternative to\n"
  "vtkStructuredData::GetCellPoints.\n\n"
  "@sa\n"
  "vtkCellArray vtkAbstractCellArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredCellArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStructuredCellArray", // tp_name
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
  PyvtkStructuredCellArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredCellArray_StaticNew()
{
  return vtkStructuredCellArray::New();
}

PyObject *PyvtkStructuredCellArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredCellArray_Type, PyvtkStructuredCellArray_Methods,
    "vtkStructuredCellArray",
 &PyvtkStructuredCellArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellArray_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkStructuredCellArray_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredCellArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredCellArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredCellArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

