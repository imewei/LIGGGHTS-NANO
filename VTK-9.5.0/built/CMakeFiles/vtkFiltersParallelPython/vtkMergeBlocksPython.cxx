// python wrapper for vtkMergeBlocks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMergeBlocks.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMergeBlocks(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMergeBlocks_ClassNew(); }


static PyObject *
PyvtkMergeBlocks_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeBlocks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeBlocks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeBlocks *tempr = vtkMergeBlocks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeBlocks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeBlocks::NewInstance());

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
PyvtkMergeBlocks_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMergeBlocks::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMergeBlocks::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkMergeBlocks::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkMergeBlocks::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkMergeBlocks::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkMergeBlocks::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkMergeBlocks::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkMergeBlocks::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkMergeBlocks::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkMergeBlocks::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkMergeBlocks::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkMergeBlocks::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkMergeBlocks::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkMergeBlocks::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SetMergePartitionsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePartitionsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePartitionsOnly(temp0);
    }
    else
    {
      op->vtkMergeBlocks::SetMergePartitionsOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetMergePartitionsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePartitionsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePartitionsOnly() :
      op->vtkMergeBlocks::GetMergePartitionsOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_MergePartitionsOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePartitionsOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePartitionsOnlyOn();
    }
    else
    {
      op->vtkMergeBlocks::MergePartitionsOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_MergePartitionsOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePartitionsOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePartitionsOnlyOff();
    }
    else
    {
      op->vtkMergeBlocks::MergePartitionsOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_SetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataSetType(temp0);
    }
    else
    {
      op->vtkMergeBlocks::SetOutputDataSetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeBlocks_GetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeBlocks *op = static_cast<vtkMergeBlocks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataSetType() :
      op->vtkMergeBlocks::GetOutputDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeBlocks_Methods[] = {
  {"IsTypeOf", PyvtkMergeBlocks_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeBlocks_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeBlocks_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMergeBlocks\nC++: static vtkMergeBlocks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeBlocks_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMergeBlocks\nC++: vtkMergeBlocks *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMergeBlocks_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMergeBlocks_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMergePoints", PyvtkMergeBlocks_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:bool) -> None\nC++: virtual void SetMergePoints(bool _arg)\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {"GetMergePoints", PyvtkMergeBlocks_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> bool\nC++: virtual bool GetMergePoints()\n\n"},
  {"MergePointsOn", PyvtkMergeBlocks_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkMergeBlocks_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetTolerance", PyvtkMergeBlocks_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nGet/Set the tolerance to use to find coincident points when\n`MergePoints` is `true`. Default is 0.0.\n\nThis is simply passed on to the internal\nvtkAppendFilter::vtkLocator used to merge points.\n@sa `vtkLocator::SetTolerance`.\n"},
  {"GetToleranceMinValue", PyvtkMergeBlocks_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkMergeBlocks_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkMergeBlocks_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetToleranceIsAbsolute", PyvtkMergeBlocks_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nGet/Set whether Tolerance is treated as an absolute or relative\ntolerance. The default is to treat it as an absolute tolerance.\n"},
  {"GetToleranceIsAbsolute", PyvtkMergeBlocks_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"ToleranceIsAbsoluteOn", PyvtkMergeBlocks_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkMergeBlocks_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"SetMergePartitionsOnly", PyvtkMergeBlocks_SetMergePartitionsOnly, METH_VARARGS,
   "SetMergePartitionsOnly(self, _arg:bool) -> None\nC++: virtual void SetMergePartitionsOnly(bool _arg)\n\nWhen set to true, only vtkPartitionedDataSet and\nvtkMultiPieceDataSet instances are merged into a since\nvtkUnstructuredGrid leaving parent vtkMultiBlockDataSet or\nvtkPartitionedDataSetCollection structure largely unchanged.\n"},
  {"GetMergePartitionsOnly", PyvtkMergeBlocks_GetMergePartitionsOnly, METH_VARARGS,
   "GetMergePartitionsOnly(self) -> bool\nC++: virtual bool GetMergePartitionsOnly()\n\n"},
  {"MergePartitionsOnlyOn", PyvtkMergeBlocks_MergePartitionsOnlyOn, METH_VARARGS,
   "MergePartitionsOnlyOn(self) -> None\nC++: virtual void MergePartitionsOnlyOn()\n\n"},
  {"MergePartitionsOnlyOff", PyvtkMergeBlocks_MergePartitionsOnlyOff, METH_VARARGS,
   "MergePartitionsOnlyOff(self) -> None\nC++: virtual void MergePartitionsOnlyOff()\n\n"},
  {"SetOutputDataSetType", PyvtkMergeBlocks_SetOutputDataSetType, METH_VARARGS,
   "SetOutputDataSetType(self, _arg:int) -> None\nC++: virtual void SetOutputDataSetType(int _arg)\n\nGet/Set the output type produced by this filter. Only blocks\ncompatible with the output type will be merged in the output. For\nexample, if the output type is vtkPolyData, then blocks of type\nvtkImageData, vtkStructuredGrid, etc. will not be merged - only\nvtkPolyData can be merged into a vtkPolyData. On the other hand,\nif the output type is vtkUnstructuredGrid, then blocks of almost\nany type will be merged in the output. Valid values are\nVTK_POLY_DATA and VTK_UNSTRUCTURED_GRID defined in vtkType.h.\nDefaults to VTK_UNSTRUCTURED_GRID.\n"},
  {"GetOutputDataSetType", PyvtkMergeBlocks_GetOutputDataSetType, METH_VARARGS,
   "GetOutputDataSetType(self) -> int\nC++: virtual int GetOutputDataSetType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMergeBlocks_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("merge_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMergeBlocks_GetMergePoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMergeBlocks_SetMergePoints(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMergeBlocks_SetMergePoints(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMergePoints/SetMergePoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tolerance"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMergeBlocks_GetTolerance(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMergeBlocks_SetTolerance(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMergeBlocks_SetTolerance(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTolerance/SetTolerance\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("tolerance_is_absolute"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMergeBlocks_GetToleranceIsAbsolute(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMergeBlocks_SetToleranceIsAbsolute(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMergeBlocks_SetToleranceIsAbsolute(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetToleranceIsAbsolute/SetToleranceIsAbsolute\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("merge_partitions_only"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMergeBlocks_GetMergePartitionsOnly(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMergeBlocks_SetMergePartitionsOnly(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMergeBlocks_SetMergePartitionsOnly(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMergePartitionsOnly/SetMergePartitionsOnly\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_data_set_type"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMergeBlocks_GetOutputDataSetType(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMergeBlocks_SetOutputDataSetType(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMergeBlocks_SetOutputDataSetType(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputDataSetType/SetOutputDataSetType\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMergeBlocks_Doc =
  "vtkMergeBlocks - merges blocks in a composite dataset to a dataset.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkMergeBlocks merges all blocks in a composite-dataset (rather any\n"
  "vtkDataObjectTree subclass) into a dataset (either vtkPolyData or\n"
  "vtkUnstructuredGrid based on `vtkMergeBlocks::OutputDataSetType`).\n\n"
  "If vtkMergeBlocks::MergePartitionsOnly is true, then only\n"
  "vtkPartitionedDataSet (and vtkMultiPieceDataSet) blocks will be\n"
  "merged, thus largely preserving the tree structure.\n\n"
  "@sa vtkGroupDataSetsFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMergeBlocks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkMergeBlocks", // tp_name
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
  PyvtkMergeBlocks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeBlocks_StaticNew()
{
  return vtkMergeBlocks::New();
}

PyObject *PyvtkMergeBlocks_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMergeBlocks_Type, PyvtkMergeBlocks_Methods,
    "vtkMergeBlocks",
 &PyvtkMergeBlocks_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMergeBlocks_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeBlocks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeBlocks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeBlocks", o) != 0)
  {
    Py_DECREF(o);
  }

}

