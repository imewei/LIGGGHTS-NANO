// python wrapper for vtkAdaptiveDataSetSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAdaptiveDataSetSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAdaptiveDataSetSurfaceFilter_ClassNew(); }


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAdaptiveDataSetSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdaptiveDataSetSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAdaptiveDataSetSurfaceFilter *tempr = vtkAdaptiveDataSetSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAdaptiveDataSetSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdaptiveDataSetSurfaceFilter::NewInstance());

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
PyvtkAdaptiveDataSetSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAdaptiveDataSetSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAdaptiveDataSetSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetViewPointDepend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPointDepend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewPointDepend(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetViewPointDepend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetViewPointDepend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewPointDepend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetViewPointDepend() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetViewPointDepend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetFixedLevelMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedLevelMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedLevelMax(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetFixedLevelMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetFixedLevelMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedLevelMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedLevelMax() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetFixedLevelMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetCircleSelection(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetCircleSelection."
    " (" "CircleSelection has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetCircleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircleSelection(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetCircleSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetCircleSelection(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetCircleSelection."
    " (" "CircleSelection has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetCircleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCircleSelection() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetCircleSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetBBSelection(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetBBSelection."
    " (" "BBSelection has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetBBSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBBSelection(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetBBSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetBBSelection(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetBBSelection."
    " (" "BBSelection has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetBBSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBBSelection() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetBBSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetDynamicDecimateLevelMax(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetDynamicDecimateLevelMax."
    " (" "DynamicDecimateLevelMax has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetDynamicDecimateLevelMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDynamicDecimateLevelMax(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetDynamicDecimateLevelMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetDynamicDecimateLevelMax(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetDynamicDecimateLevelMax."
    " (" "DynamicDecimateLevelMax has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetDynamicDecimateLevelMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDynamicDecimateLevelMax() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetDynamicDecimateLevelMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_SetScale(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetScale."
    " (" "Scale has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkAdaptiveDataSetSurfaceFilter::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveDataSetSurfaceFilter_GetScale(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetScale."
    " (" "Scale has been removed. Do not use." ")"
    " -- Deprecated since version " "9.5.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveDataSetSurfaceFilter *op = static_cast<vtkAdaptiveDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkAdaptiveDataSetSurfaceFilter::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAdaptiveDataSetSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkAdaptiveDataSetSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAdaptiveDataSetSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAdaptiveDataSetSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAdaptiveDataSetSurfaceFilter\nC++: static vtkAdaptiveDataSetSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAdaptiveDataSetSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAdaptiveDataSetSurfaceFilter\nC++: vtkAdaptiveDataSetSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAdaptiveDataSetSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAdaptiveDataSetSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRenderer", PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren)\n\nSet/Get the renderer attached to this adaptive surface extractor\n"},
  {"GetRenderer", PyvtkAdaptiveDataSetSurfaceFilter_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"GetMTime", PyvtkAdaptiveDataSetSurfaceFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime of this object.\n"},
  {"SetViewPointDepend", PyvtkAdaptiveDataSetSurfaceFilter_SetViewPointDepend, METH_VARARGS,
   "SetViewPointDepend(self, _arg:bool) -> None\nC++: virtual void SetViewPointDepend(bool _arg)\n\nSet/Get the dependence to the point of view.\n\nDefault is true.\n"},
  {"GetViewPointDepend", PyvtkAdaptiveDataSetSurfaceFilter_GetViewPointDepend, METH_VARARGS,
   "GetViewPointDepend(self) -> bool\nC++: virtual bool GetViewPointDepend()\n\n"},
  {"SetFixedLevelMax", PyvtkAdaptiveDataSetSurfaceFilter_SetFixedLevelMax, METH_VARARGS,
   "SetFixedLevelMax(self, _arg:int) -> None\nC++: virtual void SetFixedLevelMax(int _arg)\n\nSet/Get for forced a fixed the level max (lost dynamicity)\n\nDefault is -1\n"},
  {"GetFixedLevelMax", PyvtkAdaptiveDataSetSurfaceFilter_GetFixedLevelMax, METH_VARARGS,
   "GetFixedLevelMax(self) -> int\nC++: virtual int GetFixedLevelMax()\n\n"},
  {"SetCircleSelection", PyvtkAdaptiveDataSetSurfaceFilter_SetCircleSelection, METH_VARARGS,
   "SetCircleSelection(self, _arg:bool) -> None\nC++: virtual void SetCircleSelection(bool _arg)\n\n"},
  {"GetCircleSelection", PyvtkAdaptiveDataSetSurfaceFilter_GetCircleSelection, METH_VARARGS,
   "GetCircleSelection(self) -> bool\nC++: virtual bool GetCircleSelection()\n\n"},
  {"SetBBSelection", PyvtkAdaptiveDataSetSurfaceFilter_SetBBSelection, METH_VARARGS,
   "SetBBSelection(self, _arg:bool) -> None\nC++: virtual void SetBBSelection(bool _arg)\n\n"},
  {"GetBBSelection", PyvtkAdaptiveDataSetSurfaceFilter_GetBBSelection, METH_VARARGS,
   "GetBBSelection(self) -> bool\nC++: virtual bool GetBBSelection()\n\n"},
  {"SetDynamicDecimateLevelMax", PyvtkAdaptiveDataSetSurfaceFilter_SetDynamicDecimateLevelMax, METH_VARARGS,
   "SetDynamicDecimateLevelMax(self, _arg:int) -> None\nC++: virtual void SetDynamicDecimateLevelMax(int _arg)\n\n"},
  {"GetDynamicDecimateLevelMax", PyvtkAdaptiveDataSetSurfaceFilter_GetDynamicDecimateLevelMax, METH_VARARGS,
   "GetDynamicDecimateLevelMax(self) -> int\nC++: virtual int GetDynamicDecimateLevelMax()\n\n"},
  {"SetScale", PyvtkAdaptiveDataSetSurfaceFilter_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\n"},
  {"GetScale", PyvtkAdaptiveDataSetSurfaceFilter_GetScale, METH_VARARGS,
   "GetScale(self) -> int\nC++: virtual int GetScale()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAdaptiveDataSetSurfaceFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("renderer"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetRenderer(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetRenderer(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRenderer/SetRenderer\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("view_point_depend"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetViewPointDepend(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetViewPointDepend(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetViewPointDepend(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetViewPointDepend/SetViewPointDepend\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("fixed_level_max"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetFixedLevelMax(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetFixedLevelMax(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetFixedLevelMax(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFixedLevelMax/SetFixedLevelMax\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("circle_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetCircleSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetCircleSelection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetCircleSelection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCircleSelection/SetCircleSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bb_selection"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetBBSelection(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetBBSelection(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetBBSelection(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBBSelection/SetBBSelection\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dynamic_decimate_level_max"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetDynamicDecimateLevelMax(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetDynamicDecimateLevelMax(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetDynamicDecimateLevelMax(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetDynamicDecimateLevelMax/SetDynamicDecimateLevelMax\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAdaptiveDataSetSurfaceFilter_SetScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("m_time"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetMTime(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMTime\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAdaptiveDataSetSurfaceFilter_GetScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetScale\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAdaptiveDataSetSurfaceFilter_Doc =
  "vtkAdaptiveDataSetSurfaceFilter - Adaptively extract dataset surface\n\n"
  "Superclass: vtkGeometryFilter\n\n"
  "vtkAdaptiveDataSetSurfaceFilter uses view and dataset properties to\n"
  "create the outside surface mesh with the minimum number of faces.\n"
  "This reduces the memory usage at the expense of compute time.\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkDataSetSurfaceFilter@par Thanks: This class was\n"
  "written by Guenole Harel and Jacques-Bernard Lekien, 2014 This class\n"
  "was rewritten by Philippe Pebay, 2016 This class was modified by\n"
  "Rogeli Grima, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF) CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAdaptiveDataSetSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkAdaptiveDataSetSurfaceFilter", // tp_name
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
  PyvtkAdaptiveDataSetSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAdaptiveDataSetSurfaceFilter_StaticNew()
{
  return vtkAdaptiveDataSetSurfaceFilter::New();
}

PyObject *PyvtkAdaptiveDataSetSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAdaptiveDataSetSurfaceFilter_Type, PyvtkAdaptiveDataSetSurfaceFilter_Methods,
    "vtkAdaptiveDataSetSurfaceFilter",
 &PyvtkAdaptiveDataSetSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGeometryFilter");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAdaptiveDataSetSurfaceFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAdaptiveDataSetSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAdaptiveDataSetSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAdaptiveDataSetSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

