// python wrapper for vtkAxisExtended
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkAxisExtended.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAxisExtended(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAxisExtended_ClassNew(); }


static PyObject *
PyvtkAxisExtended_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisExtended::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisExtended::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisExtended *tempr = vtkAxisExtended::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisExtended *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisExtended::NewInstance());

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
PyvtkAxisExtended_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxisExtended::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxisExtended::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_Simplicity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Simplicity");

  int temp0;
  int temp1;
  int temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    double tempr = vtkAxisExtended::Simplicity(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SimplicityMax(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SimplicityMax");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = vtkAxisExtended::SimplicityMax(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_Coverage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Coverage");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = vtkAxisExtended::Coverage(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_CoverageMax(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CoverageMax");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = vtkAxisExtended::CoverageMax(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_Density(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Density");

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    double tempr = vtkAxisExtended::Density(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_DensityMax(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DensityMax");

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkAxisExtended::DensityMax(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_FormatLegibilityScore(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatLegibilityScore");

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkAxisExtended::FormatLegibilityScore(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_FormatStringLength(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatStringLength");

  int temp0;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkAxisExtended::FormatStringLength(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GenerateExtendedTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateExtendedTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GenerateExtendedTickLabels(temp0, temp1, temp2, temp3) :
      op->vtkAxisExtended::GenerateExtendedTickLabels(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkAxisExtended::GetFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontSize(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetDesiredFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDesiredFontSize() :
      op->vtkAxisExtended::GetDesiredFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetDesiredFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredFontSize(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetDesiredFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkAxisExtended::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisExtended::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkAxisExtended::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetIsAxisVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAxisVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAxisVertical() :
      op->vtkAxisExtended::GetIsAxisVertical());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetIsAxisVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsAxisVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsAxisVertical(temp0);
    }
    else
    {
      op->vtkAxisExtended::SetIsAxisVertical(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisExtended_Methods[] = {
  {"IsTypeOf", PyvtkAxisExtended_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisExtended_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisExtended_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxisExtended\nC++: static vtkAxisExtended *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisExtended_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxisExtended\nC++: vtkAxisExtended *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxisExtended_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxisExtended_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Simplicity", PyvtkAxisExtended_Simplicity, METH_VARARGS,
   "Simplicity(qIndex:int, qLength:int, j:int, lmin:float, lmax:float,\n     lstep:float) -> float\nC++: static double Simplicity(int qIndex, int qLength, int j,\n    double lmin, double lmax, double lstep)\n\nThis method return a value to make step sizes corresponding to\nlow q and j values more preferable\n"},
  {"SimplicityMax", PyvtkAxisExtended_SimplicityMax, METH_VARARGS,
   "SimplicityMax(qIndex:int, qLength:int, j:int) -> float\nC++: static double SimplicityMax(int qIndex, int qLength, int j)\n\nThis method returns the maximum possible value of simplicity\nvalue given q and j\n"},
  {"Coverage", PyvtkAxisExtended_Coverage, METH_VARARGS,
   "Coverage(dmin:float, dmax:float, lmin:float, lmax:float) -> float\nC++: static double Coverage(double dmin, double dmax, double lmin,\n     double lmax)\n\nThis method makes the data range approximately same as the\nlabeling range more preferable\n"},
  {"CoverageMax", PyvtkAxisExtended_CoverageMax, METH_VARARGS,
   "CoverageMax(dmin:float, dmax:float, span:float) -> float\nC++: static double CoverageMax(double dmin, double dmax,\n    double span)\n\nThis gives the maximum possible value of coverage given the step\nsize\n"},
  {"Density", PyvtkAxisExtended_Density, METH_VARARGS,
   "Density(k:int, m:float, dmin:float, dmax:float, lmin:float,\n    lmax:float) -> float\nC++: static double Density(int k, double m, double dmin,\n    double dmax, double lmin, double lmax)\n\nThis method return a value to make the density of the labels\nclose to the user given value\n"},
  {"DensityMax", PyvtkAxisExtended_DensityMax, METH_VARARGS,
   "DensityMax(k:int, m:float) -> float\nC++: static double DensityMax(int k, double m)\n\nDerives the maximum values for density given k (number of ticks)\nand m (user given)\n"},
  {"FormatLegibilityScore", PyvtkAxisExtended_FormatLegibilityScore, METH_VARARGS,
   "FormatLegibilityScore(n:float, format:int) -> float\nC++: static double FormatLegibilityScore(double n, int format)\n\nThis methods return the legibility score of different formats\n"},
  {"FormatStringLength", PyvtkAxisExtended_FormatStringLength, METH_VARARGS,
   "FormatStringLength(format:int, n:float, precision:int) -> int\nC++: static int FormatStringLength(int format, double n,\n    int precision)\n\nThis method returns the string length of different format\nnotations.\n"},
  {"GenerateExtendedTickLabels", PyvtkAxisExtended_GenerateExtendedTickLabels, METH_VARARGS,
   "GenerateExtendedTickLabels(self, dmin:float, dmax:float, m:float,\n    scaling:float) -> vtkVector3d\nC++: vtkVector3d GenerateExtendedTickLabels(double dmin,\n    double dmax, double m, double scaling)\n\nThis method implements the algorithm given in the paper The\nmethod return the minimum tick position, maximum tick position\nand the tick spacing\n"},
  {"GetFontSize", PyvtkAxisExtended_GetFontSize, METH_VARARGS,
   "GetFontSize(self) -> int\nC++: virtual int GetFontSize()\n\nSet/Get methods for variables\n"},
  {"SetFontSize", PyvtkAxisExtended_SetFontSize, METH_VARARGS,
   "SetFontSize(self, _arg:int) -> None\nC++: virtual void SetFontSize(int _arg)\n\n"},
  {"GetDesiredFontSize", PyvtkAxisExtended_GetDesiredFontSize, METH_VARARGS,
   "GetDesiredFontSize(self) -> int\nC++: virtual int GetDesiredFontSize()\n\n"},
  {"SetDesiredFontSize", PyvtkAxisExtended_SetDesiredFontSize, METH_VARARGS,
   "SetDesiredFontSize(self, _arg:int) -> None\nC++: virtual void SetDesiredFontSize(int _arg)\n\n"},
  {"GetPrecision", PyvtkAxisExtended_GetPrecision, METH_VARARGS,
   "GetPrecision(self) -> int\nC++: virtual int GetPrecision()\n\n"},
  {"SetPrecision", PyvtkAxisExtended_SetPrecision, METH_VARARGS,
   "SetPrecision(self, _arg:int) -> None\nC++: virtual void SetPrecision(int _arg)\n\n"},
  {"GetLabelFormat", PyvtkAxisExtended_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> int\nC++: virtual int GetLabelFormat()\n\n"},
  {"SetLabelFormat", PyvtkAxisExtended_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:int) -> None\nC++: virtual void SetLabelFormat(int _arg)\n\n"},
  {"GetOrientation", PyvtkAxisExtended_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual int GetOrientation()\n\n"},
  {"SetOrientation", PyvtkAxisExtended_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:int) -> None\nC++: virtual void SetOrientation(int _arg)\n\n"},
  {"GetIsAxisVertical", PyvtkAxisExtended_GetIsAxisVertical, METH_VARARGS,
   "GetIsAxisVertical(self) -> bool\nC++: virtual bool GetIsAxisVertical()\n\n"},
  {"SetIsAxisVertical", PyvtkAxisExtended_SetIsAxisVertical, METH_VARARGS,
   "SetIsAxisVertical(self, _arg:bool) -> None\nC++: virtual void SetIsAxisVertical(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAxisExtended_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("font_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetFontSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetFontSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetFontSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFontSize/SetFontSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("desired_font_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetDesiredFontSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetDesiredFontSize(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetDesiredFontSize(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDesiredFontSize/SetDesiredFontSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("precision"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetPrecision(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetPrecision(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetPrecision(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPrecision/SetPrecision\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_format"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetLabelFormat(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetLabelFormat(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetLabelFormat(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelFormat/SetLabelFormat\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("orientation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetOrientation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetOrientation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetOrientation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrientation/SetOrientation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("is_axis_vertical"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisExtended_GetIsAxisVertical(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisExtended_SetIsAxisVertical(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisExtended_SetIsAxisVertical(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIsAxisVertical/SetIsAxisVertical\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAxisExtended_Doc =
  "vtkAxisExtended - extended axis tick positioning\n\n"
  "Superclass: vtkObject\n\n"
  "This implements the optimization based tick position calculating\n"
  "algorithm in the paper \"An Extension of Wilkinson's Algorithm for\n"
  "Positioning Tick Labels on Axes\" by Junstin Talbot, Sharon Lin and\n"
  "Pat Hanrahan\n\n"
  "@sa\n"
  "vtkAxis\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisExtended_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkAxisExtended", // tp_name
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
  PyvtkAxisExtended_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisExtended_StaticNew()
{
  return vtkAxisExtended::New();
}

PyObject *PyvtkAxisExtended_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxisExtended_Type, PyvtkAxisExtended_Methods,
    "vtkAxisExtended",
 &PyvtkAxisExtended_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAxisExtended_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisExtended(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisExtended_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisExtended", o) != 0)
  {
    Py_DECREF(o);
  }

}

