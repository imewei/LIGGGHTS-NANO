// python wrapper for vtkHDFWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHDFWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkHDFWriter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkHDFWriter_ClassNew(); }


static PyObject *
PyvtkHDFWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHDFWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHDFWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHDFWriter *tempr = vtkHDFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHDFWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHDFWriter::NewInstance());

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
PyvtkHDFWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHDFWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHDFWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

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
      op->vtkHDFWriter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkHDFWriter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

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
      op->vtkHDFWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkHDFWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetOverwrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverwrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverwrite(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetOverwrite(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetOverwrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverwrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOverwrite() :
      op->vtkHDFWriter::GetOverwrite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteAllTimeSteps(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkHDFWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChunkSize(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetChunkSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChunkSize() :
      op->vtkHDFWriter::GetChunkSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionLevel(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkHDFWriter::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkHDFWriter::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkHDFWriter::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetUseExternalComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExternalComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseExternalComposite(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetUseExternalComposite(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetUseExternalComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExternalComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseExternalComposite() :
      op->vtkHDFWriter::GetUseExternalComposite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetUseExternalTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExternalTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseExternalTimeSteps(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetUseExternalTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetUseExternalTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExternalTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseExternalTimeSteps() :
      op->vtkHDFWriter::GetUseExternalTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_SetUseExternalPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExternalPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseExternalPartitions(temp0);
    }
    else
    {
      op->vtkHDFWriter::SetUseExternalPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHDFWriter_GetUseExternalPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExternalPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHDFWriter *op = static_cast<vtkHDFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseExternalPartitions() :
      op->vtkHDFWriter::GetUseExternalPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHDFWriter_Methods[] = {
  {"IsTypeOf", PyvtkHDFWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHDFWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHDFWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHDFWriter\nC++: static vtkHDFWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHDFWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHDFWriter\nC++: vtkHDFWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHDFWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHDFWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkHDFWriter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkHDFWriter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetFileName", PyvtkHDFWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the file name of the vtkHDF file.\n"},
  {"GetFileName", PyvtkHDFWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetOverwrite", PyvtkHDFWriter_SetOverwrite, METH_VARARGS,
   "SetOverwrite(self, _arg:bool) -> None\nC++: virtual void SetOverwrite(bool _arg)\n\nGet/set the flag to Overwrite the file if true or fail when the\nfile already exists if false. Default is true.\n"},
  {"GetOverwrite", PyvtkHDFWriter_GetOverwrite, METH_VARARGS,
   "GetOverwrite(self) -> bool\nC++: virtual bool GetOverwrite()\n\n"},
  {"SetWriteAllTimeSteps", PyvtkHDFWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "SetWriteAllTimeSteps(self, _arg:bool) -> None\nC++: virtual void SetWriteAllTimeSteps(bool _arg)\n\nGet/set the flag to write all timesteps from the input dataset.\nWhen turned OFF, only write the current timestep. Default is true\n"},
  {"GetWriteAllTimeSteps", PyvtkHDFWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "GetWriteAllTimeSteps(self) -> bool\nC++: virtual bool GetWriteAllTimeSteps()\n\n"},
  {"SetChunkSize", PyvtkHDFWriter_SetChunkSize, METH_VARARGS,
   "SetChunkSize(self, _arg:int) -> None\nC++: virtual void SetChunkSize(int _arg)\n\nGet/set the chunk size used for chunk storage layout. Chunked\nstorage is required for extensible/unlimited dimensions datasets\n(such as time-dependent data), and filters such as compression.\nRead more about chunks and chunk size here :\nhttps://support.hdfgroup.org/HDF5/doc/Advanced/Chunking/\n\nRegarding performance impact of chunking and how to find the\noptimal value depending on the data, please check this\ndocumentation:\nhttps://docs.hdfgroup.org/hdf5/develop/_l_b_dset_layout.html\n\nDefaults to 25000 (to fit with the default chunk cache of 1Mb of\nHDF5).\n"},
  {"GetChunkSize", PyvtkHDFWriter_GetChunkSize, METH_VARARGS,
   "GetChunkSize(self) -> int\nC++: virtual int GetChunkSize()\n\n"},
  {"SetCompressionLevel", PyvtkHDFWriter_SetCompressionLevel, METH_VARARGS,
   "SetCompressionLevel(self, _arg:int) -> None\nC++: virtual void SetCompressionLevel(int _arg)\n\nGet/set the compression level used by hdf5. The compression level\nis between 0 (no compression) and 9 (max compression level).\n\n@warning Compression level used can have a big performance impact\nfor writing/reading data.\nFor reference, the default value used by HDF5 when we apply a\ncompression is 4.\n\note Only points, cells and data arrays will be compressed. Other\ndatas are considered to be too small to be worth compressing.\n\nDefault to 0.\n"},
  {"GetCompressionLevelMinValue", PyvtkHDFWriter_GetCompressionLevelMinValue, METH_VARARGS,
   "GetCompressionLevelMinValue(self) -> int\nC++: virtual int GetCompressionLevelMinValue()\n\n"},
  {"GetCompressionLevelMaxValue", PyvtkHDFWriter_GetCompressionLevelMaxValue, METH_VARARGS,
   "GetCompressionLevelMaxValue(self) -> int\nC++: virtual int GetCompressionLevelMaxValue()\n\n"},
  {"GetCompressionLevel", PyvtkHDFWriter_GetCompressionLevel, METH_VARARGS,
   "GetCompressionLevel(self) -> int\nC++: virtual int GetCompressionLevel()\n\n"},
  {"SetUseExternalComposite", PyvtkHDFWriter_SetUseExternalComposite, METH_VARARGS,
   "SetUseExternalComposite(self, _arg:bool) -> None\nC++: virtual void SetUseExternalComposite(bool _arg)\n\nWhen set, write composite leaf blocks in different files, named\nFileStem_BlockName.extension. If FileName does not have an\nextension, blocks are named FileName_BlockName.vtkhdf These files\nare referenced by the main file using external links. Default is\nfalse.\n"},
  {"GetUseExternalComposite", PyvtkHDFWriter_GetUseExternalComposite, METH_VARARGS,
   "GetUseExternalComposite(self) -> bool\nC++: virtual bool GetUseExternalComposite()\n\n"},
  {"SetUseExternalTimeSteps", PyvtkHDFWriter_SetUseExternalTimeSteps, METH_VARARGS,
   "SetUseExternalTimeSteps(self, _arg:bool) -> None\nC++: virtual void SetUseExternalTimeSteps(bool _arg)\n\nWhen set, write each time step in a different file. These\nindividual time files are referenced by the main file using the\nHDF5 virtual dataset feature. This way, individual time step\nfiles can be opened by the reader as a non time-dependent\ndataset, and the main file referencing those as a time-dependent\nfile seamlessly.\n\nSubfiles are named FileStem_X.extension, where X is the time step\nindex. extension defaults to .vtkhdf in case the base filename\ndoes not have one already.\n\nNote: this option does not support static meshes. Points and\ncells with be copied across time step files. Default is false.\n"},
  {"GetUseExternalTimeSteps", PyvtkHDFWriter_GetUseExternalTimeSteps, METH_VARARGS,
   "GetUseExternalTimeSteps(self) -> bool\nC++: virtual bool GetUseExternalTimeSteps()\n\n"},
  {"SetUseExternalPartitions", PyvtkHDFWriter_SetUseExternalPartitions, METH_VARARGS,
   "SetUseExternalPartitions(self, _arg:bool) -> None\nC++: virtual void SetUseExternalPartitions(bool _arg)\n\nWhen set, write each partition of the input vtkPartitionedDataSet\nin a different file, named FileStem_partX.extension, where X is\nthe partition index. If FileName does not have an extension,\nfiles are named FileName_partX.vtkhdf These individual time files\nare referenced by the main file using the HDF5 virtual dataset\nfeature, just like the `UseExternalTimeSteps` does. When applied\nto composite datasets, this option forces UseExternalComposite\nON. Default is false.\n"},
  {"GetUseExternalPartitions", PyvtkHDFWriter_GetUseExternalPartitions, METH_VARARGS,
   "GetUseExternalPartitions(self) -> bool\nC++: virtual bool GetUseExternalPartitions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkHDFWriter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetFileName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFileName/SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("overwrite"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetOverwrite(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetOverwrite(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetOverwrite(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOverwrite/SetOverwrite\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("write_all_time_steps"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetWriteAllTimeSteps(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetWriteAllTimeSteps(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetWriteAllTimeSteps(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWriteAllTimeSteps/SetWriteAllTimeSteps\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("chunk_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetChunkSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetChunkSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetChunkSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetChunkSize/SetChunkSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("compression_level"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetCompressionLevel(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetCompressionLevel(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetCompressionLevel(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCompressionLevel/SetCompressionLevel\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_external_composite"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetUseExternalComposite(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetUseExternalComposite(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetUseExternalComposite(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseExternalComposite/SetUseExternalComposite\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_external_time_steps"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetUseExternalTimeSteps(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetUseExternalTimeSteps(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetUseExternalTimeSteps(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseExternalTimeSteps/SetUseExternalTimeSteps\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("use_external_partitions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkHDFWriter_GetUseExternalPartitions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkHDFWriter_SetUseExternalPartitions(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkHDFWriter_SetUseExternalPartitions(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetUseExternalPartitions/SetUseExternalPartitions\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkHDFWriter_Doc =
  "vtkHDFWriter - Write a data object to a VTKHDF file.\n\n"
  "Superclass: vtkWriter\n\n"
  "This writer can handle vtkPolyData, vtkUnstructuredGrid,\n"
  "vtkPartitionedDataSet, vtkMultiBlockDataSet and\n"
  "vtkPartitionedDataSetCollection data types, as well as time-varying\n"
  "data.\n\n"
  "For temporal datasets with a constant MeshMTime, geometry will only\n"
  "be written once.\n\n"
  "This writer is compatible with MPI and multi-piece/partitioned\n"
  "datasets.\n\n"
  "When writing using multiple MPI processes, one file is written for\n"
  "each process. When all processing are done writing all time steps,\n"
  "rank 0 will create the main file, using HDF5 Virtual DataSets to link\n"
  "to the actual data written by each rank. All individual files process\n"
  "files are also readable independently.\n\n"
  "Options are provided for data compression, and writing partitions,\n"
  "composite parts and time steps in different files. Reading\n"
  "performance and size on disk may be impacted by the chosen chunk size\n"
  "and compression settings.\n\n"
  "To comply with the HDF5 and VTKHDF standard specification, \"/\" and\n"
  "\".\" contained in field names will be replaced by \"_\".\n\n"
  "The full file format specification is here:\n"
  "https://docs.vtk.org/en/latest/design_documents/VTKFileFormats.html#hd\n"
  "f-file-formats\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHDFWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOHDF.vtkHDFWriter", // tp_name
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
  PyvtkHDFWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHDFWriter_StaticNew()
{
  return vtkHDFWriter::New();
}

PyObject *PyvtkHDFWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHDFWriter_Type, PyvtkHDFWriter_Methods,
    "vtkHDFWriter",
 &PyvtkHDFWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkHDFWriter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHDFWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHDFWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHDFWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

