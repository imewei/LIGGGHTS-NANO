// python wrapper for vtkBSplineTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBSplineTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkBSplineTransform(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkBSplineTransform_ClassNew(); }


static PyObject *
PyvtkBSplineTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBSplineTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSplineTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBSplineTransform *tempr = vtkBSplineTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSplineTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSplineTransform::NewInstance());

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
PyvtkBSplineTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBSplineTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBSplineTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetCoefficientConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficientConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetCoefficientConnection(temp0);
    }
    else
    {
      op->vtkBSplineTransform::SetCoefficientConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetCoefficientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetCoefficientData(temp0);
    }
    else
    {
      op->vtkBSplineTransform::SetCoefficientData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetCoefficientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoefficientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetCoefficientData() :
      op->vtkBSplineTransform::GetCoefficientData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementScale(temp0);
    }
    else
    {
      op->vtkBSplineTransform::SetDisplacementScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkBSplineTransform::GetDisplacementScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderMode(temp0);
    }
    else
    {
      op->vtkBSplineTransform::SetBorderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMinValue() :
      op->vtkBSplineTransform::GetBorderModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMaxValue() :
      op->vtkBSplineTransform::GetBorderModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToEdge();
    }
    else
    {
      op->vtkBSplineTransform::SetBorderModeToEdge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToZero();
    }
    else
    {
      op->vtkBSplineTransform::SetBorderModeToZero();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToZeroAtBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToZeroAtBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToZeroAtBorder();
    }
    else
    {
      op->vtkBSplineTransform::SetBorderModeToZeroAtBorder();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkBSplineTransform::GetBorderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkBSplineTransform::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSplineTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkBSplineTransform::MakeTransform());

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
PyvtkBSplineTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBSplineTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBSplineTransform_Methods[] = {
  {"IsTypeOf", PyvtkBSplineTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBSplineTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBSplineTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBSplineTransform\nC++: static vtkBSplineTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBSplineTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBSplineTransform\nC++: vtkBSplineTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBSplineTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBSplineTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCoefficientConnection", PyvtkBSplineTransform_SetCoefficientConnection, METH_VARARGS,
   "SetCoefficientConnection(self, __a:vtkAlgorithmOutput) -> None\nC++: virtual void SetCoefficientConnection(vtkAlgorithmOutput *)\n\nSet/Get the coefficient grid for the b-spline transform. The\nvtkBSplineTransform class will never modify the data. Note that\nSetCoefficientData() does not setup a pipeline connection whereas\nSetCoefficientConnection does.\n"},
  {"SetCoefficientData", PyvtkBSplineTransform_SetCoefficientData, METH_VARARGS,
   "SetCoefficientData(self, __a:vtkImageData) -> None\nC++: virtual void SetCoefficientData(vtkImageData *)\n\n"},
  {"GetCoefficientData", PyvtkBSplineTransform_GetCoefficientData, METH_VARARGS,
   "GetCoefficientData(self) -> vtkImageData\nC++: virtual vtkImageData *GetCoefficientData()\n\n"},
  {"SetDisplacementScale", PyvtkBSplineTransform_SetDisplacementScale, METH_VARARGS,
   "SetDisplacementScale(self, _arg:float) -> None\nC++: virtual void SetDisplacementScale(double _arg)\n\nSet/Get a scale to apply to the transformation.\n"},
  {"GetDisplacementScale", PyvtkBSplineTransform_GetDisplacementScale, METH_VARARGS,
   "GetDisplacementScale(self) -> float\nC++: virtual double GetDisplacementScale()\n\n"},
  {"SetBorderMode", PyvtkBSplineTransform_SetBorderMode, METH_VARARGS,
   "SetBorderMode(self, _arg:int) -> None\nC++: virtual void SetBorderMode(int _arg)\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {"GetBorderModeMinValue", PyvtkBSplineTransform_GetBorderModeMinValue, METH_VARARGS,
   "GetBorderModeMinValue(self) -> int\nC++: virtual int GetBorderModeMinValue()\n\n"},
  {"GetBorderModeMaxValue", PyvtkBSplineTransform_GetBorderModeMaxValue, METH_VARARGS,
   "GetBorderModeMaxValue(self) -> int\nC++: virtual int GetBorderModeMaxValue()\n\n"},
  {"SetBorderModeToEdge", PyvtkBSplineTransform_SetBorderModeToEdge, METH_VARARGS,
   "SetBorderModeToEdge(self) -> None\nC++: void SetBorderModeToEdge()\n\n"},
  {"SetBorderModeToZero", PyvtkBSplineTransform_SetBorderModeToZero, METH_VARARGS,
   "SetBorderModeToZero(self) -> None\nC++: void SetBorderModeToZero()\n\n"},
  {"SetBorderModeToZeroAtBorder", PyvtkBSplineTransform_SetBorderModeToZeroAtBorder, METH_VARARGS,
   "SetBorderModeToZeroAtBorder(self) -> None\nC++: void SetBorderModeToZeroAtBorder()\n\n"},
  {"GetBorderMode", PyvtkBSplineTransform_GetBorderMode, METH_VARARGS,
   "GetBorderMode(self) -> int\nC++: virtual int GetBorderMode()\n\n"},
  {"GetBorderModeAsString", PyvtkBSplineTransform_GetBorderModeAsString, METH_VARARGS,
   "GetBorderModeAsString(self) -> str\nC++: const char *GetBorderModeAsString()\n\n"},
  {"MakeTransform", PyvtkBSplineTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {"GetMTime", PyvtkBSplineTransform_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkBSplineTransform_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("coefficient_connection"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBSplineTransform_SetCoefficientConnection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBSplineTransform_SetCoefficientConnection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetCoefficientConnection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("coefficient_data"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBSplineTransform_GetCoefficientData(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBSplineTransform_SetCoefficientData(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBSplineTransform_SetCoefficientData(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCoefficientData/SetCoefficientData\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("displacement_scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBSplineTransform_GetDisplacementScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBSplineTransform_SetDisplacementScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBSplineTransform_SetDisplacementScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDisplacementScale/SetDisplacementScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("border_mode"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBSplineTransform_GetBorderMode(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkBSplineTransform_SetBorderMode(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkBSplineTransform_SetBorderMode(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBorderMode/SetBorderMode\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkBSplineTransform_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkBSplineTransform_Doc =
  "vtkBSplineTransform - a cubic b-spline deformation transformation\n\n"
  "Superclass: vtkWarpTransform\n\n"
  "vtkBSplineTransform computes a cubic b-spline transformation from a\n"
  "grid of b-spline coefficients.\n"
  "@warning\n"
  "The inverse grid transform is calculated using an iterative method,\n"
  "and is several times more expensive than the forward transform.\n"
  "@sa\n"
  "vtkGeneralTransform vtkTransformToGrid\n"
  "vtkImageBSplineCoefficients@par Thanks: This class was written by\n"
  "David Gobbi at the Seaman Family MR Research Centre, Foothills\n"
  "Medical Centre, Calgary, Alberta. DG Gobbi and YP Starreveld, \"Uniform B-Splines for the VTK Imaging\n"
  "Pipeline,\" VTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBSplineTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkBSplineTransform", // tp_name
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
  PyvtkBSplineTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBSplineTransform_StaticNew()
{
  return vtkBSplineTransform::New();
}

PyObject *PyvtkBSplineTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBSplineTransform_Type, PyvtkBSplineTransform_Methods,
    "vtkBSplineTransform",
 &PyvtkBSplineTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWarpTransform");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkBSplineTransform_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBSplineTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBSplineTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBSplineTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_BSPLINE_EDGE", 0 },
        { "VTK_BSPLINE_ZERO", 1 },
        { "VTK_BSPLINE_ZERO_AT_BORDER", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

