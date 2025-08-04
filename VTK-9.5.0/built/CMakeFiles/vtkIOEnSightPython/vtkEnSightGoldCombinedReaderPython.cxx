// python wrapper for vtkEnSightGoldCombinedReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkEnSightGoldCombinedReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkEnSightGoldCombinedReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkEnSightGoldCombinedReader_ClassNew(); }


static PyObject *
PyvtkEnSightGoldCombinedReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightGoldCombinedReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightGoldCombinedReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightGoldCombinedReader *tempr = vtkEnSightGoldCombinedReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightGoldCombinedReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightGoldCombinedReader::NewInstance());

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
PyvtkEnSightGoldCombinedReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEnSightGoldCombinedReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEnSightGoldCombinedReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkEnSightGoldCombinedReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaseFileName(temp0);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetCaseFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCaseFileName() :
      op->vtkEnSightGoldCombinedReader::GetCaseFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePath(temp0);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetFilePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePath() :
      op->vtkEnSightGoldCombinedReader::GetFilePath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetAllTimeSteps() :
      op->vtkEnSightGoldCombinedReader::GetAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeValue(temp0);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetTimeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkEnSightGoldCombinedReader::GetTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetPartOfSOSFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartOfSOSFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPartOfSOSFile(temp0);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetPartOfSOSFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetPartOfSOSFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartOfSOSFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPartOfSOSFile() :
      op->vtkEnSightGoldCombinedReader::GetPartOfSOSFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkEnSightGoldCombinedReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetPartSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPartSelection() :
      op->vtkEnSightGoldCombinedReader::GetPartSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetPointArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointArraySelection() :
      op->vtkEnSightGoldCombinedReader::GetPointArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetCellArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellArraySelection() :
      op->vtkEnSightGoldCombinedReader::GetCellArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetFieldArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldArraySelection() :
      op->vtkEnSightGoldCombinedReader::GetFieldArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkEnSightGoldCombinedReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_GetPartNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartPointer<vtkStringArray> tempr = (ap.IsBound() ?
      op->GetPartNames() :
      op->vtkEnSightGoldCombinedReader::GetPartNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldCombinedReader_SetPDCInfoForLoadedParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPDCInfoForLoadedParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldCombinedReader *op = static_cast<vtkEnSightGoldCombinedReader *>(vp);

  vtkSmartPointer<vtkIdTypeArray> temp0;
  vtkSmartPointer<vtkStringArray> temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetPDCInfoForLoadedParts(temp0, temp1);
    }
    else
    {
      op->vtkEnSightGoldCombinedReader::SetPDCInfoForLoadedParts(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightGoldCombinedReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightGoldCombinedReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightGoldCombinedReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightGoldCombinedReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEnSightGoldCombinedReader\nC++: static vtkEnSightGoldCombinedReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightGoldCombinedReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEnSightGoldCombinedReader\nC++: vtkEnSightGoldCombinedReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEnSightGoldCombinedReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEnSightGoldCombinedReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetController", PyvtkEnSightGoldCombinedReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the controller\n"},
  {"SetController", PyvtkEnSightGoldCombinedReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\n"},
  {"SetCaseFileName", PyvtkEnSightGoldCombinedReader_SetCaseFileName, METH_VARARGS,
   "SetCaseFileName(self, _arg:str) -> None\nC++: virtual void SetCaseFileName(const char *_arg)\n\nSet/Get the case file name.\n"},
  {"GetCaseFileName", PyvtkEnSightGoldCombinedReader_GetCaseFileName, METH_VARARGS,
   "GetCaseFileName(self) -> str\nC++: virtual char *GetCaseFileName()\n\n"},
  {"SetFilePath", PyvtkEnSightGoldCombinedReader_SetFilePath, METH_VARARGS,
   "SetFilePath(self, _arg:str) -> None\nC++: virtual void SetFilePath(const char *_arg)\n\nSet/Get the case file name.\n"},
  {"GetFilePath", PyvtkEnSightGoldCombinedReader_GetFilePath, METH_VARARGS,
   "GetFilePath(self) -> str\nC++: virtual char *GetFilePath()\n\n"},
  {"GetAllTimeSteps", PyvtkEnSightGoldCombinedReader_GetAllTimeSteps, METH_VARARGS,
   "GetAllTimeSteps(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetAllTimeSteps()\n\nGet the time values per time set\n"},
  {"SetTimeValue", PyvtkEnSightGoldCombinedReader_SetTimeValue, METH_VARARGS,
   "SetTimeValue(self, _arg:float) -> None\nC++: virtual void SetTimeValue(double _arg)\n\nSet/Get the time value.\n"},
  {"GetTimeValue", PyvtkEnSightGoldCombinedReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self) -> float\nC++: virtual double GetTimeValue()\n\n"},
  {"SetPartOfSOSFile", PyvtkEnSightGoldCombinedReader_SetPartOfSOSFile, METH_VARARGS,
   "SetPartOfSOSFile(self, _arg:bool) -> None\nC++: virtual void SetPartOfSOSFile(bool _arg)\n\nSet/Get PartOfSOSFile. If true, this reader is being read as part\nof an SOS file and this reader will skip some communication (if\nrunning in parallel), to allow vtkEnSightSOSGoldReader to handle\nthat.\n"},
  {"GetPartOfSOSFile", PyvtkEnSightGoldCombinedReader_GetPartOfSOSFile, METH_VARARGS,
   "GetPartOfSOSFile(self) -> bool\nC++: virtual bool GetPartOfSOSFile()\n\n"},
  {"CanReadFile", PyvtkEnSightGoldCombinedReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, casefilename:str) -> int\nC++: int CanReadFile(const char *casefilename)\n\nChecks version information in the case file to determine if the\nfile can be read by this reader.\n"},
  {"GetPartSelection", PyvtkEnSightGoldCombinedReader_GetPartSelection, METH_VARARGS,
   "GetPartSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPartSelection()\n\nPart selection, to determine which blocks/parts are loaded.\n"},
  {"GetPointArraySelection", PyvtkEnSightGoldCombinedReader_GetPointArraySelection, METH_VARARGS,
   "GetPointArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointArraySelection()\n\nPoint array selection, to determine which point arrays are\nloaded.\n"},
  {"GetCellArraySelection", PyvtkEnSightGoldCombinedReader_GetCellArraySelection, METH_VARARGS,
   "GetCellArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellArraySelection()\n\nCell array selection, to determine which cell arrays are loaded.\n"},
  {"GetFieldArraySelection", PyvtkEnSightGoldCombinedReader_GetFieldArraySelection, METH_VARARGS,
   "GetFieldArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldArraySelection()\n\nField data array selection, to determine which arrays are loaded.\n"},
  {"GetMTime", PyvtkEnSightGoldCombinedReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to take into account mtimes for vtkDataArraySelection\ninstances.\n"},
  {"GetPartNames", PyvtkEnSightGoldCombinedReader_GetPartNames, METH_VARARGS,
   "GetPartNames(self) -> vtkStringArray\nC++: vtkSmartPointer<vtkStringArray> GetPartNames()\n\nGet the names of all parts that are found in this casefile during\nEnSightDataSet::GetPartInfo().\n"},
  {"SetPDCInfoForLoadedParts", PyvtkEnSightGoldCombinedReader_SetPDCInfoForLoadedParts, METH_VARARGS,
   "SetPDCInfoForLoadedParts(self, indices:vtkIdTypeArray,\n    names:vtkStringArray) -> None\nC++: void SetPDCInfoForLoadedParts(\n    vtkSmartPointer<vtkIdTypeArray> indices,\n    vtkSmartPointer<vtkStringArray> names)\n\nSets information about parts to be loaded.\n\nThis must be called when loading data through a SOS file. It's\npossible that some casefiles may not include info on all parts\n(even as an empty part). The vtkEnSightSOSGoldReader looks at\nwhich parts are to be loaded, assigns them ids in the output\nvtkPartitionedDataSetCollection, and provides the part names,\nsince they may not be available in the current casefile. This\nensures that all ranks will have the same structure for the\noutput PDC and matching name metadata.\n\n@param indices Provides the index into the output\n    vtkPartitionedDataSetCollection for all\nparts. It should be the same size as the total number of parts\nacross all casefiles being loaded by an SOS file. If a part is\nnot to be loaded, its value should be -1.\n@param names The names of only the parts to actually be loaded.\n    This is indexed by its index in\nthe output PDC.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkEnSightGoldCombinedReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("case_file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetCaseFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetCaseFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetCaseFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCaseFileName/SetCaseFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_path"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetFilePath(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetFilePath(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetFilePath(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFilePath/SetFilePath\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("time_value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetTimeValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetTimeValue(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetTimeValue(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTimeValue/SetTimeValue\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("part_of_sos_file"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetPartOfSOSFile(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetPartOfSOSFile(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetPartOfSOSFile(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPartOfSOSFile/SetPartOfSOSFile\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pdc_info_for_loaded_parts"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkEnSightGoldCombinedReader_SetPDCInfoForLoadedParts(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkEnSightGoldCombinedReader_SetPDCInfoForLoadedParts(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPDCInfoForLoadedParts\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("all_time_steps"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetAllTimeSteps(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAllTimeSteps\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("part_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetPartSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPartSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("point_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetPointArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPointArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("cell_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetCellArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCellArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("field_array_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetFieldArraySelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFieldArraySelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("part_names"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkEnSightGoldCombinedReader_GetPartNames(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPartNames\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkEnSightGoldCombinedReader_Doc =
  "vtkEnSightGoldCombinedReader - class to read EnSight Gold files\n\n"
  "Superclass: vtkPartitionedDataSetCollectionAlgorithm\n\n"
  "vtkEnSightGoldCombinedReader is a class to read EnSight Gold files\n"
  "into vtk. This reader produces a vtkPartitionedDataSetCollection.\n\n"
  "The reader allows for selecting which parts to load, with all parts\n"
  "being loaded by default. It also caches geometry when it is\n"
  "determined to be static instead of rereading the geometry file on\n"
  "every time step.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightGoldCombinedReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightGoldCombinedReader", // tp_name
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
  PyvtkEnSightGoldCombinedReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightGoldCombinedReader_StaticNew()
{
  return vtkEnSightGoldCombinedReader::New();
}

PyObject *PyvtkEnSightGoldCombinedReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEnSightGoldCombinedReader_Type, PyvtkEnSightGoldCombinedReader_Methods,
    "vtkEnSightGoldCombinedReader",
 &PyvtkEnSightGoldCombinedReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetCollectionAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkEnSightGoldCombinedReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightGoldCombinedReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightGoldCombinedReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightGoldCombinedReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

