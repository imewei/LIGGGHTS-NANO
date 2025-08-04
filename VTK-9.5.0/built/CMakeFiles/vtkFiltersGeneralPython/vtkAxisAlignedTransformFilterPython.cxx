// python wrapper for vtkAxisAlignedTransformFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAxisAlignedTransformFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkAxisAlignedTransformFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkAxisAlignedTransformFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedTransformFilter_Axis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedTransformFilter.Axis", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkAxisAlignedTransformFilter_Axis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisAlignedTransformFilter_Axis_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedTransformFilter_Angle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedTransformFilter.Angle", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
static PyObject *PyvtkAxisAlignedTransformFilter_Angle_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisAlignedTransformFilter_Angle_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAxisAlignedTransformFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisAlignedTransformFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisAlignedTransformFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisAlignedTransformFilter *tempr = vtkAxisAlignedTransformFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisAlignedTransformFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisAlignedTransformFilter::NewInstance());

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
PyvtkAxisAlignedTransformFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxisAlignedTransformFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxisAlignedTransformFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  double temp0;
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
      op->SetTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisAlignedTransformFilter_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisAlignedTransformFilter_SetTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisAlignedTransformFilter_SetTranslation_s1(self, args);
    case 1:
      return PyvtkAxisAlignedTransformFilter_SetTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return nullptr;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkAxisAlignedTransformFilter::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  double temp0;
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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisAlignedTransformFilter_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisAlignedTransformFilter_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisAlignedTransformFilter_SetScale_s1(self, args);
    case 1:
      return PyvtkAxisAlignedTransformFilter_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkAxisAlignedTransformFilter::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAngleMinValue() :
      op->vtkAxisAlignedTransformFilter::GetRotationAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAngleMaxValue() :
      op->vtkAxisAlignedTransformFilter::GetRotationAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkAxisAlignedTransformFilter::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_SetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxis(temp0);
    }
    else
    {
      op->vtkAxisAlignedTransformFilter::SetRotationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMinValue() :
      op->vtkAxisAlignedTransformFilter::GetRotationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMaxValue() :
      op->vtkAxisAlignedTransformFilter::GetRotationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisAlignedTransformFilter_GetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisAlignedTransformFilter *op = static_cast<vtkAxisAlignedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetRotationAxis() :
      op->vtkAxisAlignedTransformFilter::GetRotationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisAlignedTransformFilter_Methods[] = {
  {"IsTypeOf", PyvtkAxisAlignedTransformFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisAlignedTransformFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisAlignedTransformFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxisAlignedTransformFilter\nC++: static vtkAxisAlignedTransformFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisAlignedTransformFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxisAlignedTransformFilter\nC++: vtkAxisAlignedTransformFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxisAlignedTransformFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxisAlignedTransformFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTranslation", PyvtkAxisAlignedTransformFilter_SetTranslation, METH_VARARGS,
   "SetTranslation(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetTranslation(double _arg1, double _arg2,\n    double _arg3)\nSetTranslation(self, _arg:(float, float, float)) -> None\nC++: virtual void SetTranslation(const double _arg[3])\n\nSet/Get the translation vector.\n"},
  {"GetTranslation", PyvtkAxisAlignedTransformFilter_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> (float, float, float)\nC++: virtual double *GetTranslation()\n\n"},
  {"SetScale", PyvtkAxisAlignedTransformFilter_SetScale, METH_VARARGS,
   "SetScale(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetScale(double _arg1, double _arg2,\n    double _arg3)\nSetScale(self, _arg:(float, float, float)) -> None\nC++: virtual void SetScale(const double _arg[3])\n\nSet/Get the scaling factors.\n"},
  {"GetScale", PyvtkAxisAlignedTransformFilter_GetScale, METH_VARARGS,
   "GetScale(self) -> (float, float, float)\nC++: virtual double *GetScale()\n\n"},
  {"SetRotationAngle", PyvtkAxisAlignedTransformFilter_SetRotationAngle, METH_VARARGS,
   "SetRotationAngle(self, _arg:int) -> None\nC++: virtual void SetRotationAngle(int _arg)\n\nSet/Get the rotation angle enumeration. This defines the rotation\nangle to be applied about the chosen axis. Use Angle enum as\nvalue.\n"},
  {"GetRotationAngleMinValue", PyvtkAxisAlignedTransformFilter_GetRotationAngleMinValue, METH_VARARGS,
   "GetRotationAngleMinValue(self) -> int\nC++: virtual int GetRotationAngleMinValue()\n\n"},
  {"GetRotationAngleMaxValue", PyvtkAxisAlignedTransformFilter_GetRotationAngleMaxValue, METH_VARARGS,
   "GetRotationAngleMaxValue(self) -> int\nC++: virtual int GetRotationAngleMaxValue()\n\n"},
  {"GetRotationAngle", PyvtkAxisAlignedTransformFilter_GetRotationAngle, METH_VARARGS,
   "GetRotationAngle(self) -> int\nC++: virtual int GetRotationAngle()\n\n"},
  {"SetRotationAxis", PyvtkAxisAlignedTransformFilter_SetRotationAxis, METH_VARARGS,
   "SetRotationAxis(self, _arg:int) -> None\nC++: virtual void SetRotationAxis(int _arg)\n\nSet/Get the axis along which the rotation is applied. Use Axis\nenum as value.\n"},
  {"GetRotationAxisMinValue", PyvtkAxisAlignedTransformFilter_GetRotationAxisMinValue, METH_VARARGS,
   "GetRotationAxisMinValue(self) -> int\nC++: virtual int GetRotationAxisMinValue()\n\n"},
  {"GetRotationAxisMaxValue", PyvtkAxisAlignedTransformFilter_GetRotationAxisMaxValue, METH_VARARGS,
   "GetRotationAxisMaxValue(self) -> int\nC++: virtual int GetRotationAxisMaxValue()\n\n"},
  {"GetRotationAxis", PyvtkAxisAlignedTransformFilter_GetRotationAxis, METH_VARARGS,
   "GetRotationAxis(self) -> int\nC++: virtual unsigned int GetRotationAxis()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkAxisAlignedTransformFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("translation"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedTransformFilter_GetTranslation(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedTransformFilter_SetTranslation(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedTransformFilter_SetTranslation(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTranslation/SetTranslation\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("scale"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedTransformFilter_GetScale(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedTransformFilter_SetScale(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedTransformFilter_SetScale(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetScale/SetScale\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_angle"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedTransformFilter_GetRotationAngle(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedTransformFilter_SetRotationAngle(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedTransformFilter_SetRotationAngle(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetRotationAngle/SetRotationAngle\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_axis"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkAxisAlignedTransformFilter_SetRotationAxis(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkAxisAlignedTransformFilter_SetRotationAxis(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetRotationAxis\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("rotation_axis"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkAxisAlignedTransformFilter_GetRotationAxis(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetRotationAxis\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkAxisAlignedTransformFilter_Doc =
  "vtkAxisAlignedTransformFilter - Applies an axis-aligned affine\ntransformation (translation, scaling, and rotation)\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "The Axis Aligned Transform filter operates on any type of data set or\n"
  "hyper tree grid and applies a transformation that is constrained to\n"
  "be axis-aligned. The output type is the same as the input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisAlignedTransformFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAxisAlignedTransformFilter", // tp_name
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
  PyvtkAxisAlignedTransformFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisAlignedTransformFilter_StaticNew()
{
  return vtkAxisAlignedTransformFilter::New();
}

PyObject *PyvtkAxisAlignedTransformFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxisAlignedTransformFilter_Type, PyvtkAxisAlignedTransformFilter_Methods,
    "vtkAxisAlignedTransformFilter",
 &PyvtkAxisAlignedTransformFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxisAlignedTransformFilter_Axis_Type);
  PyVTKEnum_Add(&PyvtkAxisAlignedTransformFilter_Axis_Type, "vtkAxisAlignedTransformFilter.Axis");

  o = (PyObject *)&PyvtkAxisAlignedTransformFilter_Axis_Type;
  if (PyDict_SetItemString(d, "Axis", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisAlignedTransformFilter_Angle_Type);
  PyVTKEnum_Add(&PyvtkAxisAlignedTransformFilter_Angle_Type, "vtkAxisAlignedTransformFilter.Angle");

  o = (PyObject *)&PyvtkAxisAlignedTransformFilter_Angle_Type;
  if (PyDict_SetItemString(d, "Angle", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAxisAlignedTransformFilter::Axis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X", vtkAxisAlignedTransformFilter::X },
        { "Y", vtkAxisAlignedTransformFilter::Y },
        { "Z", vtkAxisAlignedTransformFilter::Z },
      };

    o = PyvtkAxisAlignedTransformFilter_Axis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAxisAlignedTransformFilter::Angle cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ROT0", vtkAxisAlignedTransformFilter::ROT0 },
        { "ROT90", vtkAxisAlignedTransformFilter::ROT90 },
        { "ROT180", vtkAxisAlignedTransformFilter::ROT180 },
        { "ROT270", vtkAxisAlignedTransformFilter::ROT270 },
      };

    o = PyvtkAxisAlignedTransformFilter_Angle_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkAxisAlignedTransformFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisAlignedTransformFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisAlignedTransformFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisAlignedTransformFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

