// python wrapper for vtkFLUENTReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFLUENTReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFLUENTReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFLUENTReader_ClassNew(); }


static PyObject *
PyvtkFLUENTReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFLUENTReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFLUENTReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFLUENTReader *tempr = vtkFLUENTReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFLUENTReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFLUENTReader::NewInstance());

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
PyvtkFLUENTReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFLUENTReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFLUENTReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

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
      op->vtkFLUENTReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFLUENTReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkFLUENTReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheData() :
      op->vtkFLUENTReader::GetCacheData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheData(temp0);
    }
    else
    {
      op->vtkFLUENTReader::SetCacheData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_CacheDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheDataOn();
    }
    else
    {
      op->vtkFLUENTReader::CacheDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_CacheDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheDataOff();
    }
    else
    {
      op->vtkFLUENTReader::CacheDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkFLUENTReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkFLUENTReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkFLUENTReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkFLUENTReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkFLUENTReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkFLUENTReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetZoneSectionSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoneSectionSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetZoneSectionSelection() :
      op->vtkFLUENTReader::GetZoneSectionSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkFLUENTReader::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkFLUENTReader::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkFLUENTReader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkFLUENTReader::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkFLUENTReader::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFLUENTReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFLUENTReader *op = static_cast<vtkFLUENTReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFLUENTReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFLUENTReader_Methods[] = {
  {"IsTypeOf", PyvtkFLUENTReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFLUENTReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFLUENTReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFLUENTReader\nC++: static vtkFLUENTReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFLUENTReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFLUENTReader\nC++: vtkFLUENTReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFLUENTReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFLUENTReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkFLUENTReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the file name of the Fluent file to read.\n"},
  {"GetFileName", PyvtkFLUENTReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetNumberOfCells", PyvtkFLUENTReader_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the total number of cells. The number of cells is only valid\nafter a successful read of the data file is performed. Initial\nvalue is 0.\n"},
  {"GetCacheData", PyvtkFLUENTReader_GetCacheData, METH_VARARGS,
   "GetCacheData(self) -> bool\nC++: virtual bool GetCacheData()\n\nGet/Set if the filter should cache the data (i.e. keep the\nintermediate structures in memory to avoid re-parsing the file).\nDefaults is true\n"},
  {"SetCacheData", PyvtkFLUENTReader_SetCacheData, METH_VARARGS,
   "SetCacheData(self, _arg:bool) -> None\nC++: virtual void SetCacheData(bool _arg)\n\n"},
  {"CacheDataOn", PyvtkFLUENTReader_CacheDataOn, METH_VARARGS,
   "CacheDataOn(self) -> None\nC++: virtual void CacheDataOn()\n\n"},
  {"CacheDataOff", PyvtkFLUENTReader_CacheDataOff, METH_VARARGS,
   "CacheDataOff(self) -> None\nC++: virtual void CacheDataOff()\n\n"},
  {"GetNumberOfCellArrays", PyvtkFLUENTReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of cell arrays available in the input.\n"},
  {"GetCellArrayName", PyvtkFLUENTReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the cell array with the given index in the input.\n"},
  {"GetCellArrayStatus", PyvtkFLUENTReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, name:str) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {"SetCellArrayStatus", PyvtkFLUENTReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, name:str, status:int) -> None\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllCellArrays", PyvtkFLUENTReader_DisableAllCellArrays, METH_VARARGS,
   "DisableAllCellArrays(self) -> None\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {"EnableAllCellArrays", PyvtkFLUENTReader_EnableAllCellArrays, METH_VARARGS,
   "EnableAllCellArrays(self) -> None\nC++: void EnableAllCellArrays()\n\n"},
  {"GetZoneSectionSelection", PyvtkFLUENTReader_GetZoneSectionSelection, METH_VARARGS,
   "GetZoneSectionSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetZoneSectionSelection()\n\nZone section selection, to determine which zone sections are\nloaded.\n"},
  {"SetDataByteOrderToBigEndian", PyvtkFLUENTReader_SetDataByteOrderToBigEndian, METH_VARARGS,
   "SetDataByteOrderToBigEndian(self) -> None\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkFLUENTReader_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "SetDataByteOrderToLittleEndian(self) -> None\nC++: void SetDataByteOrderToLittleEndian()\n\n"},
  {"GetDataByteOrder", PyvtkFLUENTReader_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: int GetDataByteOrder()\n\n"},
  {"SetDataByteOrder", PyvtkFLUENTReader_SetDataByteOrder, METH_VARARGS,
   "SetDataByteOrder(self, __a:int) -> None\nC++: void SetDataByteOrder(int)\n\n"},
  {"GetDataByteOrderAsString", PyvtkFLUENTReader_GetDataByteOrderAsString, METH_VARARGS,
   "GetDataByteOrderAsString(self) -> str\nC++: const char *GetDataByteOrderAsString()\n\n"},
  {"GetMTime", PyvtkFLUENTReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the last modified time of this filter. This time also depends\non the the modified time of the internal ZoneSectionSelection\ninstance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFLUENTReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFLUENTReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFLUENTReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cache_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetCacheData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFLUENTReader_SetCacheData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFLUENTReader_SetCacheData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCacheData/SetCacheData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_byte_order"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetDataByteOrder(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFLUENTReader_SetDataByteOrder(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFLUENTReader_SetDataByteOrder(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDataByteOrder/SetDataByteOrder\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("zone_section_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetZoneSectionSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetZoneSectionSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cell_arrays"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFLUENTReader_GetNumberOfCellArrays(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCellArrays\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFLUENTReader_Doc =
  "vtkFLUENTReader - reads a dataset in Fluent file format\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkFLUENTReader creates an unstructured grid multiblock dataset. It\n"
  "reads .cas (with associated .dat) and .msh files stored in FLUENT\n"
  "native format. When multiple zone sections are defined in the file\n"
  "they are provided in separate blocks. Each zone section can be\n"
  "unselected so that it won't be part of the outputted multiblock\n"
  "dataset.\n\n"
  "Keep in mind that all intermediate structures are cached by default\n"
  "to avoid re-parsing the file when the zone selections change. If you\n"
  "wish to avoid caching to lower memory usage at the expense of IO\n"
  "performances, you can set CacheData to false.\n\n"
  "Because of zone sections interdependency in the FLUENT format, some\n"
  "unselected zone sections may still need to be read from the file,\n"
  "even if they are not part of the outputted multiblock. Here is the\n"
  "general file parsing logic:\n"
  "- If any cell zone is enabled, the whole file needs to be read\n"
  "- Otherwise, only the necessary zones are read (nodes, faces, data\n"
  "  arrays,...) Therefore, unselecting a zone will not always improve\n"
  "  the file's reading time, but will lower the output' size.\n\n"
  "@par Thanks: Thanks to Brian W. Dotson & Terry E. Jordan (Department\n"
  "of Energy, National Energy Technology Laboratory) & Douglas McCorkle\n"
  "(Iowa State University) who developed this class. Please address all\n"
  "comments to Brian Dotson (brian.dotson\n\n"
  "etl.doe.gov) & Terry Jordan (terry.jordan@sa.netl.doe.gov) & Doug\n"
  "McCorkle (mccdo@iastate.edu)\n\n"
  "@sa\n"
  "vtkGAMBITReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFLUENTReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkFLUENTReader", // tp_name
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
  PyvtkFLUENTReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFLUENTReader_StaticNew()
{
  return vtkFLUENTReader::New();
}

PyObject *PyvtkFLUENTReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFLUENTReader_Type, PyvtkFLUENTReader_Methods,
    "vtkFLUENTReader",
 &PyvtkFLUENTReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFLUENTReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFLUENTReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFLUENTReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFLUENTReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

