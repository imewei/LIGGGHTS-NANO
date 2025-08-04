// python wrapper for vtkSEPReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSEPReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSEPReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSEPReader_ClassNew(); }


static PyObject *
PyvtkSEPReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSEPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSEPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSEPReader *tempr = vtkSEPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSEPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSEPReader::NewInstance());

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
PyvtkSEPReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSEPReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSEPReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

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
      op->vtkSEPReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSEPReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetOutputGridDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputGridDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputGridDimension() :
      op->vtkSEPReader::GetOutputGridDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetOutputGridDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputGridDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputGridDimension(temp0);
    }
    else
    {
      op->vtkSEPReader::SetOutputGridDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetExtentSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtentSplitMode(temp0);
    }
    else
    {
      op->vtkSEPReader::SetExtentSplitMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetExtentSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentSplitMode() :
      op->vtkSEPReader::GetExtentSplitMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkSEPReader::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkSEPReader::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetAllDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllDimensions() :
      op->vtkSEPReader::GetAllDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetAllRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllRanges() :
      op->vtkSEPReader::GetAllRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetXDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXDimension(temp0);
    }
    else
    {
      op->vtkSEPReader::SetXDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetYDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYDimension(temp0);
    }
    else
    {
      op->vtkSEPReader::SetYDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetZDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZDimension(temp0);
    }
    else
    {
      op->vtkSEPReader::SetZDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetFixedDimension1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedDimension1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedDimension1(temp0);
    }
    else
    {
      op->vtkSEPReader::SetFixedDimension1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetFixedDimension2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedDimension2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedDimension2(temp0);
    }
    else
    {
      op->vtkSEPReader::SetFixedDimension2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetFixedDimensionValue1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedDimensionValue1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedDimensionValue1(temp0);
    }
    else
    {
      op->vtkSEPReader::SetFixedDimensionValue1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_SetFixedDimensionValue2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedDimensionValue2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedDimensionValue2(temp0);
    }
    else
    {
      op->vtkSEPReader::SetFixedDimensionValue2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_GetFixedDimRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedDimRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFixedDimRange() :
      op->vtkSEPReader::GetFixedDimRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSEPReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSEPReader *op = static_cast<vtkSEPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkSEPReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSEPReader_Methods[] = {
  {"IsTypeOf", PyvtkSEPReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSEPReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSEPReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSEPReader\nC++: static vtkSEPReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSEPReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSEPReader\nC++: vtkSEPReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSEPReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSEPReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkSEPReader_SetFileName, METH_VARARGS,
   "SetFileName(self, arg:str) -> None\nC++: virtual void SetFileName(const char *arg)\n\nSpecify file name for the SEP Header file.\n"},
  {"GetFileName", PyvtkSEPReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual const char *GetFileName()\n\n"},
  {"GetOutputGridDimension", PyvtkSEPReader_GetOutputGridDimension, METH_VARARGS,
   "GetOutputGridDimension(self) -> int\nC++: virtual int GetOutputGridDimension()\n\nWhen 2D mode is true, the third dimension is\nignored and the output is in 2D.\n"},
  {"SetOutputGridDimension", PyvtkSEPReader_SetOutputGridDimension, METH_VARARGS,
   "SetOutputGridDimension(self, _arg:int) -> None\nC++: virtual void SetOutputGridDimension(int _arg)\n\n"},
  {"SetExtentSplitMode", PyvtkSEPReader_SetExtentSplitMode, METH_VARARGS,
   "SetExtentSplitMode(self, _arg:int) -> None\nC++: virtual void SetExtentSplitMode(int _arg)\n\nSpecify extent translator split mode.\nDefault: vtkExtentTranslator::BLOCK_MODE\n"},
  {"GetExtentSplitMode", PyvtkSEPReader_GetExtentSplitMode, METH_VARARGS,
   "GetExtentSplitMode(self) -> int\nC++: virtual int GetExtentSplitMode()\n\n"},
  {"GetDataOrigin", PyvtkSEPReader_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> Pointer\nC++: virtual double *GetDataOrigin()\n\n"},
  {"GetDataSpacing", PyvtkSEPReader_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> Pointer\nC++: virtual double *GetDataSpacing()\n\n"},
  {"GetAllDimensions", PyvtkSEPReader_GetAllDimensions, METH_VARARGS,
   "GetAllDimensions(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetAllDimensions()\n\nArray containing the name of all dimensions. Contains ESize\nelements.\n"},
  {"GetAllRanges", PyvtkSEPReader_GetAllRanges, METH_VARARGS,
   "GetAllRanges(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetAllRanges()\n\nArray containing the name and the size of all dimensions. The two\nfirst entries are the header. Contains 2*ESize elements.\n"},
  {"SetXDimension", PyvtkSEPReader_SetXDimension, METH_VARARGS,
   "SetXDimension(self, arg:str) -> None\nC++: virtual void SetXDimension(const char *arg)\n\nSpecify the name for each spatial / fixed dimension. ZDimension\nis only used for 3D output. FixedDimension2 is only used for 2D\noutput.\n"},
  {"SetYDimension", PyvtkSEPReader_SetYDimension, METH_VARARGS,
   "SetYDimension(self, arg:str) -> None\nC++: virtual void SetYDimension(const char *arg)\n\n"},
  {"SetZDimension", PyvtkSEPReader_SetZDimension, METH_VARARGS,
   "SetZDimension(self, arg:str) -> None\nC++: virtual void SetZDimension(const char *arg)\n\n"},
  {"SetFixedDimension1", PyvtkSEPReader_SetFixedDimension1, METH_VARARGS,
   "SetFixedDimension1(self, arg:str) -> None\nC++: virtual void SetFixedDimension1(const char *arg)\n\n"},
  {"SetFixedDimension2", PyvtkSEPReader_SetFixedDimension2, METH_VARARGS,
   "SetFixedDimension2(self, arg:str) -> None\nC++: virtual void SetFixedDimension2(const char *arg)\n\n"},
  {"SetFixedDimensionValue1", PyvtkSEPReader_SetFixedDimensionValue1, METH_VARARGS,
   "SetFixedDimensionValue1(self, _arg:int) -> None\nC++: virtual void SetFixedDimensionValue1(int _arg)\n\n"},
  {"SetFixedDimensionValue2", PyvtkSEPReader_SetFixedDimensionValue2, METH_VARARGS,
   "SetFixedDimensionValue2(self, _arg:int) -> None\nC++: virtual void SetFixedDimensionValue2(int _arg)\n\n"},
  {"GetFixedDimRange", PyvtkSEPReader_GetFixedDimRange, METH_VARARGS,
   "GetFixedDimRange(self) -> (int, int)\nC++: virtual int *GetFixedDimRange()\n\n"},
  {"CanReadFile", PyvtkSEPReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, __a:str) -> bool\nC++: bool CanReadFile(const char *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSEPReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("output_grid_dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetOutputGridDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetOutputGridDimension(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetOutputGridDimension(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOutputGridDimension/SetOutputGridDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("extent_split_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetExtentSplitMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetExtentSplitMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetExtentSplitMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetExtentSplitMode/SetExtentSplitMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("x_dimension"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetXDimension(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetXDimension(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetXDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("y_dimension"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetYDimension(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetYDimension(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetYDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("z_dimension"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetZDimension(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetZDimension(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetZDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_dimension1"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetFixedDimension1(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetFixedDimension1(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFixedDimension1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_dimension2"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetFixedDimension2(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetFixedDimension2(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFixedDimension2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_dimension_value1"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetFixedDimensionValue1(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetFixedDimensionValue1(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFixedDimensionValue1\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_dimension_value2"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSEPReader_SetFixedDimensionValue2(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSEPReader_SetFixedDimensionValue2(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFixedDimensionValue2\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_origin"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetDataOrigin(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataOrigin\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("data_spacing"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetDataSpacing(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDataSpacing\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("all_dimensions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetAllDimensions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAllDimensions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("all_ranges"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetAllRanges(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetAllRanges\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_dim_range"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSEPReader_GetFixedDimRange(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFixedDimRange\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSEPReader_Doc =
  "vtkSEPReader - Stanford Exploration Project files reader.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "This reader takes a .H file that points to a .H@ file and contains\n"
  "all the information to interpret the raw data in the  .H@ file.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSEPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkSEPReader", // tp_name
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
  PyvtkSEPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSEPReader_StaticNew()
{
  return vtkSEPReader::New();
}

PyObject *PyvtkSEPReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSEPReader_Type, PyvtkSEPReader_Methods,
    "vtkSEPReader",
 &PyvtkSEPReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSEPReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSEPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSEPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSEPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

