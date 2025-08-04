// python wrapper for vtkImageSSIM
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSSIM.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkImageSSIM(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkImageSSIM_ClassNew(); }


static PyObject *
PyvtkImageSSIM_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSSIM::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSSIM::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSSIM *tempr = vtkImageSSIM::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSSIM *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSSIM::NewInstance());

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
PyvtkImageSSIM_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSSIM::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSSIM::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetImageConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetImageConnection(temp0);
    }
    else
    {
      op->vtkImageSSIM::SetImageConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetImageData(temp0);
    }
    else
    {
      op->vtkImageSSIM::SetImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputToLab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputToLab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputToLab();
    }
    else
    {
      op->vtkImageSSIM::SetInputToLab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputToRGB();
    }
    else
    {
      op->vtkImageSSIM::SetInputToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputToRGBA();
    }
    else
    {
      op->vtkImageSSIM::SetInputToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputToGrayscale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputToGrayscale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputToGrayscale();
    }
    else
    {
      op->vtkImageSSIM::SetInputToGrayscale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputToAuto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputToAuto");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputToAuto();
    }
    else
    {
      op->vtkImageSSIM::SetInputToAuto();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetInputRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  std::vector<int> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetInputRange(temp0);
    }
    else
    {
      op->vtkImageSSIM::SetInputRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetClampNegativeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampNegativeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampNegativeValues(temp0);
    }
    else
    {
      op->vtkImageSSIM::SetClampNegativeValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_GetClampNegativeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampNegativeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClampNegativeValues() :
      op->vtkImageSSIM::GetClampNegativeValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_ClampNegativeValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampNegativeValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampNegativeValuesOn();
    }
    else
    {
      op->vtkImageSSIM::ClampNegativeValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_ClampNegativeValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampNegativeValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampNegativeValuesOff();
    }
    else
    {
      op->vtkImageSSIM::ClampNegativeValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_SetPatchRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatchRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatchRadius(temp0);
    }
    else
    {
      op->vtkImageSSIM::SetPatchRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_GetPatchRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSSIM *op = static_cast<vtkImageSSIM *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPatchRadius() :
      op->vtkImageSSIM::GetPatchRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSSIM_ComputeErrorMetrics(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeErrorMetrics");

  vtkDoubleArray *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkImageSSIM::ComputeErrorMetrics(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSSIM_Methods[] = {
  {"IsTypeOf", PyvtkImageSSIM_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSSIM_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSSIM_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSSIM\nC++: static vtkImageSSIM *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSSIM_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSSIM\nC++: vtkImageSSIM *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSSIM_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSSIM_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImageConnection", PyvtkImageSSIM_SetImageConnection, METH_VARARGS,
   "SetImageConnection(self, output:vtkAlgorithmOutput) -> None\nC++: void SetImageConnection(vtkAlgorithmOutput *output)\n\nSpecify the Image to compare the input to.\n"},
  {"SetImageData", PyvtkImageSSIM_SetImageData, METH_VARARGS,
   "SetImageData(self, image:vtkDataObject) -> None\nC++: void SetImageData(vtkDataObject *image)\n\n"},
  {"SetInputToLab", PyvtkImageSSIM_SetInputToLab, METH_VARARGS,
   "SetInputToLab(self) -> None\nC++: void SetInputToLab()\n\nAssume the input is in Lab format. This will set appropriate\nconstants c1 and c2 for each input channel\n"},
  {"SetInputToRGB", PyvtkImageSSIM_SetInputToRGB, METH_VARARGS,
   "SetInputToRGB(self) -> None\nC++: void SetInputToRGB()\n\nAssume the input is in RGB format, using integers from 0 to 255.\nThis will set appropriate constants c1 and c2 for each input\nchannel\n"},
  {"SetInputToRGBA", PyvtkImageSSIM_SetInputToRGBA, METH_VARARGS,
   "SetInputToRGBA(self) -> None\nC++: void SetInputToRGBA()\n\nAssume the input is in RGBA format, using integers from 0 to 255.\nThis will set appropriate constants c1 and c2 for each input\nchannel\n"},
  {"SetInputToGrayscale", PyvtkImageSSIM_SetInputToGrayscale, METH_VARARGS,
   "SetInputToGrayscale(self) -> None\nC++: void SetInputToGrayscale()\n\nAssume the input is in grayscale, using integers from 0 to 255.\nThis will set appropriate constants c1 and c2\n"},
  {"SetInputToAuto", PyvtkImageSSIM_SetInputToAuto, METH_VARARGS,
   "SetInputToAuto(self) -> None\nC++: void SetInputToAuto()\n\nThe c1 and c2 constant will be computed automatically based on\nthe range of each individual components Please note the resulting\nSSIM can be NaN in specific cases.\n"},
  {"SetInputRange", PyvtkImageSSIM_SetInputRange, METH_VARARGS,
   "SetInputRange(self, range:[int, ...]) -> None\nC++: void SetInputRange(std::vector<int> &range)\n\nSetup the range of each components of the input scalars. If the\nrange has not been set, or if the number of components in the\ninput does not match the number of provided ranges, it will be\nautomatically be set using the input array. The range is used to\nset the constants c1 and c2.\n"},
  {"SetClampNegativeValues", PyvtkImageSSIM_SetClampNegativeValues, METH_VARARGS,
   "SetClampNegativeValues(self, _arg:bool) -> None\nC++: virtual void SetClampNegativeValues(bool _arg)\n\nWhen turned ON, negative outputs of the SSIM computation are\nclamped to zero. It is turned OFF by default.\n"},
  {"GetClampNegativeValues", PyvtkImageSSIM_GetClampNegativeValues, METH_VARARGS,
   "GetClampNegativeValues(self) -> bool\nC++: virtual bool GetClampNegativeValues()\n\n"},
  {"ClampNegativeValuesOn", PyvtkImageSSIM_ClampNegativeValuesOn, METH_VARARGS,
   "ClampNegativeValuesOn(self) -> None\nC++: virtual void ClampNegativeValuesOn()\n\n"},
  {"ClampNegativeValuesOff", PyvtkImageSSIM_ClampNegativeValuesOff, METH_VARARGS,
   "ClampNegativeValuesOff(self) -> None\nC++: virtual void ClampNegativeValuesOff()\n\n"},
  {"SetPatchRadius", PyvtkImageSSIM_SetPatchRadius, METH_VARARGS,
   "SetPatchRadius(self, _arg:float) -> None\nC++: virtual void SetPatchRadius(double _arg)\n\nThis sets the size of the tile used to compute the SSIM on each\npatch. A pixel x are within the patch centered around a pixel p\nif ||x - p|| <= Radius. It is set to 3 by default.\n"},
  {"GetPatchRadius", PyvtkImageSSIM_GetPatchRadius, METH_VARARGS,
   "GetPatchRadius(self) -> float\nC++: virtual double GetPatchRadius()\n\n"},
  {"ComputeErrorMetrics", PyvtkImageSSIM_ComputeErrorMetrics, METH_VARARGS,
   "ComputeErrorMetrics(scalars:vtkDoubleArray, tight:float,\n    loose:float) -> None\nC++: static void ComputeErrorMetrics(vtkDoubleArray *scalars,\n    double &tight, double &loose)\n\nCompute error metrics of a provided scalars. Error is defined as\nthe maximum of all individual values within the used method.\nErrors are computed using Minkownski and Wasserstein distances.\nMethod used are euclidean (tight) or manhattan / earth's mover\n(loose)\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkImageSSIM_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("image_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageSSIM_SetImageConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageSSIM_SetImageConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetImageConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("image_data"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageSSIM_SetImageData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageSSIM_SetImageData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetImageData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_range"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageSSIM_SetInputRange(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageSSIM_SetInputRange(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetInputRange\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("clamp_negative_values"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageSSIM_GetClampNegativeValues(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageSSIM_SetClampNegativeValues(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageSSIM_SetClampNegativeValues(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetClampNegativeValues/SetClampNegativeValues\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("patch_radius"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkImageSSIM_GetPatchRadius(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkImageSSIM_SetPatchRadius(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkImageSSIM_SetPatchRadius(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPatchRadius/SetPatchRadius\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkImageSSIM_Doc =
  "vtkImageSSIM - This filter implements an algorithm based on SSIM for\nimage comparison.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "The SSIM (Structural Similarity Index Measure) is a method for\n"
  "measuring the similarity between two images. The SSIM index was\n"
  "originally proposed in: \"Zhou Wang, Alan C. Bovik, Hamid R. Sheikh,\n"
  "Eero P. Simoncelli, 'Image Quality Assessment: From Error Visibility\n"
  "to Structural Similarity', IEEE Transactions on Image Processing,\n"
  "13(4), 600-612, April 2004.\"\n\n"
  "This filter takes 2 images as inputs. It will compare the arrays\n"
  "returned by `GetScalars` in the input point data. The 2 arrays need\n"
  "te have the same underlying type, and have the same number of\n"
  "components. It outputs a heatmap of SSIM values between -1 and 1,\n"
  "measuring the structural similarity between 2 corresponding tiles in\n"
  "the images. Input values are weighted by a Gaussian kernel whose\n"
  "standard deviation is defined as `PatchRadius / 3`.\n\n"
  "The range of the input arrays is important to know for\n"
  "regularizations purposes. 2 constants `c1` and `c2` are set by the\n"
  "filter to avoid divisions by zero without distorting the SSIM\n"
  "computation too much. If `L` is the range of an input channel, then\n"
  "`c1 = 0.0001 * L * L`, and `c2 = 0.0009 * L * L`, as advised by the\n"
  "original paper. The range can be automatically computed, or set by\n"
  "the user sungi `SetInputToLab`, `SetInputToRGB`,\n"
  "`SetInputToGrayscale` or `SetInputRange`.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSSIM_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageSSIM", // tp_name
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
  PyvtkImageSSIM_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSSIM_StaticNew()
{
  return vtkImageSSIM::New();
}

PyObject *PyvtkImageSSIM_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSSIM_Type, PyvtkImageSSIM_Methods,
    "vtkImageSSIM",
 &PyvtkImageSSIM_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkImageSSIM_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSSIM(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSSIM_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSSIM", o) != 0)
  {
    Py_DECREF(o);
  }

}

