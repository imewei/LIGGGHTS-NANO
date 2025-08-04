// python wrapper for vtkAbstractCellArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractCellArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAbstractCellArray(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAbstractCellArray_ClassNew(); }


static PyObject *
PyvtkAbstractCellArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractCellArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractCellArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractCellArray *tempr = vtkAbstractCellArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractCellArray::NewInstance());

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
PyvtkAbstractCellArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractCellArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractCellArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfCells();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetNumberOfOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfOffsets();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetOffset(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetNumberOfConnectivityIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfConnectivityIds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_IsStorageShareable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStorageShareable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsStorageShareable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->IsHomogeneous();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetCellAtId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkAbstractCellArray::GetCellAtId(temp0, temp1, temp2c);
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
PyvtkAbstractCellArray_GetCellAtId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    op->GetCellAtId(temp0, temp1, temp2c, temp3);

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
PyvtkAbstractCellArray_GetCellAtId_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    op->GetCellAtId(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellArray_GetCellAtId_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->GetCellAtId(temp0, temp1, temp2);

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

static PyMethodDef PyvtkAbstractCellArray_GetCellAtId_Methods[] = {
  {"GetCellAtId", PyvtkAbstractCellArray_GetCellAtId_s1, METH_VARARGS,
   "@kkP *k"},
  {"GetCellAtId", PyvtkAbstractCellArray_GetCellAtId_s4, METH_VARARGS,
   "@kkP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractCellArray_GetCellAtId(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractCellArray_GetCellAtId_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkAbstractCellArray_GetCellAtId_s2(self, args);
    case 2:
      return PyvtkAbstractCellArray_GetCellAtId_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAtId");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellArray_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetCellSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetMaxCellSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  vtkAbstractCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellArray"))
  {
    op->DeepCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellArray_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellArray *op = static_cast<vtkAbstractCellArray *>(vp);

  vtkAbstractCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellArray"))
  {
    op->ShallowCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractCellArray_Methods[] = {
  {"IsTypeOf", PyvtkAbstractCellArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractCellArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractCellArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractCellArray\nC++: static vtkAbstractCellArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractCellArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractCellArray\nC++: vtkAbstractCellArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractCellArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractCellArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkAbstractCellArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nFree any memory and reset to an empty state.\n"},
  {"GetNumberOfCells", PyvtkAbstractCellArray_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the array.\n"},
  {"GetNumberOfOffsets", PyvtkAbstractCellArray_GetNumberOfOffsets, METH_VARARGS,
   "GetNumberOfOffsets(self) -> int\nC++: virtual vtkIdType GetNumberOfOffsets()\n\nGet the number of elements in the offsets array. This will be the\nnumber of cells + 1.\n"},
  {"GetOffset", PyvtkAbstractCellArray_GetOffset, METH_VARARGS,
   "GetOffset(self, cellId:int) -> int\nC++: virtual vtkIdType GetOffset(vtkIdType cellId)\n\nGet the offset (into the connectivity) for a specified cell id.\n"},
  {"GetNumberOfConnectivityIds", PyvtkAbstractCellArray_GetNumberOfConnectivityIds, METH_VARARGS,
   "GetNumberOfConnectivityIds(self) -> int\nC++: virtual vtkIdType GetNumberOfConnectivityIds()\n\nGet the size of the connectivity array that stores the point ids.\n\note Do not confuse this with the deprecated\nGetNumberOfConnectivityEntries(), which refers to the legacy\nmemory layout.\n"},
  {"IsStorageShareable", PyvtkAbstractCellArray_IsStorageShareable, METH_VARARGS,
   "IsStorageShareable(self) -> bool\nC++: virtual bool IsStorageShareable()\n\n@return True if the internal storage can be shared as a\npointer to vtkIdType, i.e., the type and organization of internal\nstorage is such that copying of data can be avoided, and instead\na pointer to vtkIdType can be used.\n"},
  {"IsHomogeneous", PyvtkAbstractCellArray_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: virtual vtkIdType IsHomogeneous()\n\nCheck if all cells have the same number of vertices.\n\nThe return value is coded as:\n* -1 = heterogeneous\n* 0 = Cell array empty\n* n (positive integer) = homogeneous array of cell size n\n"},
  {"GetCellAtId", PyvtkAbstractCellArray_GetCellAtId, METH_VARARGS,
   "GetCellAtId(self, cellId:int, cellSize:int, cellPoints:(int, ...))\n     -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &cellSize,\n    vtkIdType const *&cellPoints)\nGetCellAtId(self, cellId:int, cellSize:int, cellPoints:(int, ...),\n     ptIds:vtkIdList) -> None\nC++: virtual void GetCellAtId(vtkIdType cellId,\n    vtkIdType &cellSize, vtkIdType const *&cellPoints,\n    vtkIdList *ptIds)\nGetCellAtId(self, cellId:int, pts:vtkIdList) -> None\nC++: virtual void GetCellAtId(vtkIdType cellId, vtkIdList *pts)\nGetCellAtId(self, cellId:int, cellSize:int, cellPoints:[int, ...])\n     -> None\nC++: virtual void GetCellAtId(vtkIdType cellId,\n    vtkIdType &cellSize, vtkIdType *cellPoints)\n\nReturn the point ids for the cell at cellId.\n\n@warning Subsequent calls to this method may invalidate previous\n    call\nresults if the internal storage type is not the same as vtkIdType\nand cannot be shared through the cellPoints pointer. In other\nwords, the method may not be thread safe. Check if shareable\n(using IsStorageShareable()), or use a vtkCellArrayIterator to\nguarantee thread safety.\n"},
  {"GetCellSize", PyvtkAbstractCellArray_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: virtual vtkIdType GetCellSize(vtkIdType cellId)\n\nReturn the size of the cell at cellId.\n"},
  {"GetMaxCellSize", PyvtkAbstractCellArray_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: virtual int GetMaxCellSize()\n\nReturns the size of the largest cell. The size is the number of\npoints defining the cell.\n"},
  {"DeepCopy", PyvtkAbstractCellArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, ca:vtkAbstractCellArray) -> None\nC++: virtual void DeepCopy(vtkAbstractCellArray *ca)\n\nPerform a deep copy (no reference counting) of the given cell\narray.\n"},
  {"ShallowCopy", PyvtkAbstractCellArray_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, ca:vtkAbstractCellArray) -> None\nC++: virtual void ShallowCopy(vtkAbstractCellArray *ca)\n\nShallow copy ca into this cell array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAbstractCellArray_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("max_cell_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAbstractCellArray_GetMaxCellSize(self, args);
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
      auto result = PyvtkAbstractCellArray_GetNumberOfCells(self, args);
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
      auto result = PyvtkAbstractCellArray_GetNumberOfConnectivityIds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfConnectivityIds\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAbstractCellArray_Doc =
  "vtkAbstractCellArray - abstract object to represent cell connectivity\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractCellArray is an abstract base class for storing a\n"
  "connectivity table listing the point ids that make up each cell.\n\n"
  "@sa\n"
  "vtkCellArray vtkStructuredCellArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractCellArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAbstractCellArray", // tp_name
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
  PyvtkAbstractCellArray_Doc, // tp_doc
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

PyObject *PyvtkAbstractCellArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractCellArray_Type, PyvtkAbstractCellArray_Methods,
    "vtkAbstractCellArray",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAbstractCellArray_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractCellArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractCellArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractCellArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

