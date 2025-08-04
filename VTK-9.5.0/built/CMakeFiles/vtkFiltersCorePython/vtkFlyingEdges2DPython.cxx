// python wrapper for vtkFlyingEdges2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFlyingEdges2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkFlyingEdges2D(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkFlyingEdges2D_ClassNew(); }


static PyObject *
PyvtkFlyingEdges2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFlyingEdges2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFlyingEdges2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFlyingEdges2D *tempr = vtkFlyingEdges2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFlyingEdges2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFlyingEdges2D::NewInstance());

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
PyvtkFlyingEdges2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFlyingEdges2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFlyingEdges2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFlyingEdges2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkFlyingEdges2D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkFlyingEdges2D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkFlyingEdges2D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFlyingEdges2D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkFlyingEdges2D::GetValues(temp0);
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
PyvtkFlyingEdges2D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFlyingEdges2D_GetValues_s1(self, args);
    case 1:
      return PyvtkFlyingEdges2D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkFlyingEdges2D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkFlyingEdges2D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkFlyingEdges2D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkFlyingEdges2D::GenerateValues(temp0, temp1);
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
PyvtkFlyingEdges2D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFlyingEdges2D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFlyingEdges2D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFlyingEdges2D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkFlyingEdges2D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkFlyingEdges2D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkFlyingEdges2D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkFlyingEdges2D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkFlyingEdges2D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkFlyingEdges2D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkFlyingEdges2D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdges2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdges2D *op = static_cast<vtkFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkFlyingEdges2D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFlyingEdges2D_Methods[] = {
  {"IsTypeOf", PyvtkFlyingEdges2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFlyingEdges2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFlyingEdges2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFlyingEdges2D\nC++: static vtkFlyingEdges2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFlyingEdges2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFlyingEdges2D\nC++: vtkFlyingEdges2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFlyingEdges2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFlyingEdges2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkFlyingEdges2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nBecause we delegate to vtkContourValues.\n"},
  {"SetValue", PyvtkFlyingEdges2D_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkFlyingEdges2D_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkFlyingEdges2D_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkFlyingEdges2D_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkFlyingEdges2D_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkFlyingEdges2D_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"SetComputeScalars", PyvtkFlyingEdges2D_SetComputeScalars, METH_VARARGS,
   "SetComputeScalars(self, _arg:int) -> None\nC++: virtual void SetComputeScalars(vtkTypeBool _arg)\n\nOption to set the point scalars of the output.  The scalars will\nbe the iso value of course.  By default this flag is on.\n"},
  {"GetComputeScalars", PyvtkFlyingEdges2D_GetComputeScalars, METH_VARARGS,
   "GetComputeScalars(self) -> int\nC++: virtual vtkTypeBool GetComputeScalars()\n\n"},
  {"ComputeScalarsOn", PyvtkFlyingEdges2D_ComputeScalarsOn, METH_VARARGS,
   "ComputeScalarsOn(self) -> None\nC++: virtual void ComputeScalarsOn()\n\n"},
  {"ComputeScalarsOff", PyvtkFlyingEdges2D_ComputeScalarsOff, METH_VARARGS,
   "ComputeScalarsOff(self) -> None\nC++: virtual void ComputeScalarsOff()\n\n"},
  {"SetArrayComponent", PyvtkFlyingEdges2D_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {"GetArrayComponent", PyvtkFlyingEdges2D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkFlyingEdges2D_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("compute_scalars"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFlyingEdges2D_GetComputeScalars(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFlyingEdges2D_SetComputeScalars(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFlyingEdges2D_SetComputeScalars(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetComputeScalars/SetComputeScalars\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("array_component"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFlyingEdges2D_GetArrayComponent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFlyingEdges2D_SetArrayComponent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFlyingEdges2D_SetArrayComponent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetArrayComponent/SetArrayComponent\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFlyingEdges2D_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("values"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFlyingEdges2D_GetValues(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValues\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_contours"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkFlyingEdges2D_GetNumberOfContours(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkFlyingEdges2D_SetNumberOfContours(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkFlyingEdges2D_SetNumberOfContours(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetNumberOfContours/SetNumberOfContours\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkFlyingEdges2D_Doc =
  "vtkFlyingEdges2D - generate isoline(s) from a structured points\n(image) dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFlyingEdges2D is a reference implementation of the 2D version of\n"
  "the flying edges algorithm. It is designed to be highly scalable\n"
  "(i.e., parallelizable) for large data. It implements certain\n"
  "performance optimizations including computational trimming to rapidly\n"
  "eliminate processing of data regions, packed bit representation of\n"
  "case table values, single edge intersection, elimination of point\n"
  "merging, and elimination of any reallocs (due to dynamic data\n"
  "insertion). Note that computational trimming is a method to reduce\n"
  "total computational cost in which partial computational results can\n"
  "be used to eliminate future computations.\n\n"
  "This is a four-pass algorithm. The first pass processes all x-edges\n"
  "and builds x-edge case values (which, when the two x-edges defining a\n"
  "pixel are combined, are equivalent to vertex-based case table except\n"
  "edge-based approaches are separable to parallel computing). Next\n"
  "x-pixel rows are processed to gather information from y-edges\n"
  "(basically to count the number of edge intersections and lines\n"
  "generated). In the third pass a prefix sum is used to count and\n"
  "allocate memory for the output primitives. Finally in the fourth pass\n"
  "output primitives are generated into pre-allocated arrays. This\n"
  "implementation uses pixel cell axes (a x-y dyad located at the pixel\n"
  "origin) to ensure that each edge is intersected at most one time.\n\n"
  "See the paper \"Flying Edges: A High-Performance Scalable\n"
  "Isocontouring Algorithm\" by Schroeder, Maynard, Geveci. Proc. of LDAV\n"
  "2015. Chicago, IL.\n\n"
  "@warning\n"
  "This filter is specialized to 2D images. This implementation can\n"
  "produce degenerate line segments (i.e., zero-length line segments).\n\n"
  "@warning\n"
  "If you are interested in extracting segmented regions from a label\n"
  "mask, consider using vtkDiscreteFlyingEdges2D.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkFlyingEdges3D vtkContourFilter vtkSynchronizedTemplates2D\n"
  "vtkMarchingSquares vtkDiscreteFlyingEdges2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFlyingEdges2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkFlyingEdges2D", // tp_name
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
  PyvtkFlyingEdges2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFlyingEdges2D_StaticNew()
{
  return vtkFlyingEdges2D::New();
}

PyObject *PyvtkFlyingEdges2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFlyingEdges2D_Type, PyvtkFlyingEdges2D_Methods,
    "vtkFlyingEdges2D",
 &PyvtkFlyingEdges2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkFlyingEdges2D_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFlyingEdges2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFlyingEdges2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFlyingEdges2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

