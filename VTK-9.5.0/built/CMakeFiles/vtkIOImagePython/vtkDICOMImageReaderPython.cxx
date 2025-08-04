// python wrapper for vtkDICOMImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDICOMImageReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDICOMImageReader(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDICOMImageReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static PyObject *
PyvtkDICOMImageReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDICOMImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDICOMImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDICOMImageReader *tempr = vtkDICOMImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDICOMImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDICOMImageReader::NewInstance());

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
PyvtkDICOMImageReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDICOMImageReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDICOMImageReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      op->vtkDICOMImageReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_SetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectoryName(temp0);
    }
    else
    {
      op->vtkDICOMImageReader::SetDirectoryName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDirectoryName() :
      op->vtkDICOMImageReader::GetDirectoryName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPixelSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPixelSpacing() :
      op->vtkDICOMImageReader::GetPixelSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkDICOMImageReader::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkDICOMImageReader::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetImagePositionPatient() :
      op->vtkDICOMImageReader::GetImagePositionPatient());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetImageOrientationPatient() :
      op->vtkDICOMImageReader::GetImageOrientationPatient());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetBitsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBitsAllocated() :
      op->vtkDICOMImageReader::GetBitsAllocated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPixelRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelRepresentation() :
      op->vtkDICOMImageReader::GetPixelRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkDICOMImageReader::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetTransferSyntaxUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferSyntaxUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransferSyntaxUID() :
      op->vtkDICOMImageReader::GetTransferSyntaxUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkDICOMImageReader::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetRescaleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRescaleOffset() :
      op->vtkDICOMImageReader::GetRescaleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatientName() :
      op->vtkDICOMImageReader::GetPatientName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetStudyUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStudyUID() :
      op->vtkDICOMImageReader::GetStudyUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStudyID() :
      op->vtkDICOMImageReader::GetStudyID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetGantryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGantryAngle() :
      op->vtkDICOMImageReader::GetGantryAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkDICOMImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkDICOMImageReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkDICOMImageReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDICOMImageReader_Methods[] = {
  {"IsTypeOf", PyvtkDICOMImageReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDICOMImageReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDICOMImageReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDICOMImageReader\nC++: static vtkDICOMImageReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDICOMImageReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDICOMImageReader\nC++: vtkDICOMImageReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDICOMImageReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDICOMImageReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkDICOMImageReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fn:str) -> None\nC++: void SetFileName(const char *fn) override;\n\nSet the filename for the file to read. If this method is used,\nthe reader will only read a single file.\n"},
  {"SetDirectoryName", PyvtkDICOMImageReader_SetDirectoryName, METH_VARARGS,
   "SetDirectoryName(self, dn:str) -> None\nC++: void SetDirectoryName(const char *dn)\n\nSet the directory name for the reader to look in for DICOM files.\nIf this method is used, the reader will try to find all the DICOM\nfiles in a directory. It will select the subset corresponding to\nthe first series UID it stumbles across and it will try to build\nan ordered volume from them based on the slice number. The volume\nbuilding will be upgraded to something more sophisticated in the\nfuture.\n"},
  {"GetDirectoryName", PyvtkDICOMImageReader_GetDirectoryName, METH_VARARGS,
   "GetDirectoryName(self) -> str\nC++: virtual char *GetDirectoryName()\n\nReturns the directory name.\n"},
  {"GetPixelSpacing", PyvtkDICOMImageReader_GetPixelSpacing, METH_VARARGS,
   "GetPixelSpacing(self) -> (float, float, float)\nC++: double *GetPixelSpacing()\n\nReturns the pixel spacing (in X, Y, Z). Note: if there is only\none slice, the Z spacing is set to the slice thickness. If there\nis more than one slice, it is set to the distance between the\nfirst two slices.\n"},
  {"GetWidth", PyvtkDICOMImageReader_GetWidth, METH_VARARGS,
   "GetWidth(self) -> int\nC++: int GetWidth()\n\nReturns the image width.\n"},
  {"GetHeight", PyvtkDICOMImageReader_GetHeight, METH_VARARGS,
   "GetHeight(self) -> int\nC++: int GetHeight()\n\nReturns the image height.\n"},
  {"GetImagePositionPatient", PyvtkDICOMImageReader_GetImagePositionPatient, METH_VARARGS,
   "GetImagePositionPatient(self) -> (float, float, float)\nC++: float *GetImagePositionPatient()\n\nGet the (DICOM) x,y,z coordinates of the first pixel in the image\n(upper left hand corner) of the last image processed by the\nDICOMParser\n"},
  {"GetImageOrientationPatient", PyvtkDICOMImageReader_GetImageOrientationPatient, METH_VARARGS,
   "GetImageOrientationPatient(self) -> (float, float, float, float,\n    float, float)\nC++: float *GetImageOrientationPatient()\n\nGet the (DICOM) directions cosines. It consist of the components\nof the first two vectors. The third vector needs to be computed\nto form an orthonormal basis.\n"},
  {"GetBitsAllocated", PyvtkDICOMImageReader_GetBitsAllocated, METH_VARARGS,
   "GetBitsAllocated(self) -> int\nC++: int GetBitsAllocated()\n\nGet the number of bits allocated for each pixel in the file.\n"},
  {"GetPixelRepresentation", PyvtkDICOMImageReader_GetPixelRepresentation, METH_VARARGS,
   "GetPixelRepresentation(self) -> int\nC++: int GetPixelRepresentation()\n\nGet the pixel representation of the last image processed by the\nDICOMParser. A zero is a unsigned quantity.  A one indicates a\nsigned quantity\n"},
  {"GetNumberOfComponents", PyvtkDICOMImageReader_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components of the image data for the last image\nprocessed.\n"},
  {"GetTransferSyntaxUID", PyvtkDICOMImageReader_GetTransferSyntaxUID, METH_VARARGS,
   "GetTransferSyntaxUID(self) -> str\nC++: const char *GetTransferSyntaxUID()\n\nGet the transfer syntax UID for the last image processed.\n"},
  {"GetRescaleSlope", PyvtkDICOMImageReader_GetRescaleSlope, METH_VARARGS,
   "GetRescaleSlope(self) -> float\nC++: float GetRescaleSlope()\n\nGet the rescale slope for the pixel data.\n"},
  {"GetRescaleOffset", PyvtkDICOMImageReader_GetRescaleOffset, METH_VARARGS,
   "GetRescaleOffset(self) -> float\nC++: float GetRescaleOffset()\n\nGet the rescale offset for the pixel data.\n"},
  {"GetPatientName", PyvtkDICOMImageReader_GetPatientName, METH_VARARGS,
   "GetPatientName(self) -> str\nC++: const char *GetPatientName()\n\nGet the patient name for the last image processed.\n"},
  {"GetStudyUID", PyvtkDICOMImageReader_GetStudyUID, METH_VARARGS,
   "GetStudyUID(self) -> str\nC++: const char *GetStudyUID()\n\nGet the study uid for the last image processed.\n"},
  {"GetStudyID", PyvtkDICOMImageReader_GetStudyID, METH_VARARGS,
   "GetStudyID(self) -> str\nC++: const char *GetStudyID()\n\nGet the Study ID for the last image processed.\n"},
  {"GetGantryAngle", PyvtkDICOMImageReader_GetGantryAngle, METH_VARARGS,
   "GetGantryAngle(self) -> float\nC++: float GetGantryAngle()\n\nGet the gantry angle for the last image processed.\n"},
  {"CanReadFile", PyvtkDICOMImageReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: int CanReadFile(const char *fname) override;\n\nReturn non zero if the reader can read the given file name.\nShould be implemented by all sub-classes of vtkImageReader2. For\nnon zero return values the following values are to be used 1 - I\nthink I can read the file but I cannot prove it 2 - I definitely\ncan read the file 3 - I can read the file and I have validated\nthat I am the correct reader for this file\n"},
  {"GetFileExtensions", PyvtkDICOMImageReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkDICOMImageReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDICOMImageReader_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("file_name"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDICOMImageReader_SetFileName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDICOMImageReader_SetFileName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetFileName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("directory_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetDirectoryName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDICOMImageReader_SetDirectoryName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDICOMImageReader_SetDirectoryName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDirectoryName/SetDirectoryName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pixel_spacing"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetPixelSpacing(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPixelSpacing\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("width"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetWidth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetWidth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("height"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetHeight(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetHeight\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("image_position_patient"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetImagePositionPatient(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetImagePositionPatient\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("image_orientation_patient"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetImageOrientationPatient(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetImageOrientationPatient\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bits_allocated"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetBitsAllocated(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBitsAllocated\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("pixel_representation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetPixelRepresentation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPixelRepresentation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("transfer_syntax_uid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetTransferSyntaxUID(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTransferSyntaxUID\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rescale_slope"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetRescaleSlope(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRescaleSlope\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rescale_offset"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetRescaleOffset(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRescaleOffset\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("patient_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetPatientName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPatientName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("study_uid"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetStudyUID(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetStudyUID\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("study_id"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetStudyID(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetStudyID\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("gantry_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetGantryAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetGantryAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("file_extensions"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetFileExtensions(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetFileExtensions\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("descriptive_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetDescriptiveName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDescriptiveName\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_components"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDICOMImageReader_GetNumberOfComponents(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfComponents\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDICOMImageReader_Doc =
  "vtkDICOMImageReader - Reads some DICOM images\n\n"
  "Superclass: vtkImageReader2\n\n"
  "DICOM (stands for Digital Imaging in COmmunications and Medicine) is\n"
  "a medical image file format widely used to exchange data, provided by\n"
  "various modalities.\n"
  "@warning\n"
  "This reader might eventually handle ACR-NEMA file (predecessor of the\n"
  "DICOM format for medical images). This reader does not handle\n"
  "encapsulated format, only plain raw file are handled. This reader\n"
  "also does not handle multi-frames DICOM datasets.\n"
  "@warning\n"
  "Internally DICOMParser assumes the x,y pixel spacing is stored in\n"
  "0028,0030 and that z spacing is stored in Slice Thickness (correct\n"
  "only when slice were acquired contiguous): 0018,0050. Which means\n"
  "this is only valid for some rare MR Image Storage\n\n"
  "@sa\n"
  "vtkBMPReader vtkPNMReader vtkTIFFReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDICOMImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkDICOMImageReader", // tp_name
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
  PyvtkDICOMImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDICOMImageReader_StaticNew()
{
  return vtkDICOMImageReader::New();
}

PyObject *PyvtkDICOMImageReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDICOMImageReader_Type, PyvtkDICOMImageReader_Methods,
    "vtkDICOMImageReader",
 &PyvtkDICOMImageReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDICOMImageReader_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDICOMImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDICOMImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDICOMImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

