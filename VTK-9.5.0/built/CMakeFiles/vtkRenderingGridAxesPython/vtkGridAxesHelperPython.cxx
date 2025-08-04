// python wrapper for vtkGridAxesHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTuple.h"
#include "vtkVector.h"
#include "vtkGridAxesHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGridAxesHelper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGridAxesHelper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesHelper_Faces_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesHelper.Faces", // tp_name
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
static PyObject *PyvtkGridAxesHelper_Faces_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGridAxesHelper_Faces_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesHelper_LabelMasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesHelper.LabelMasks", // tp_name
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
static PyObject *PyvtkGridAxesHelper_LabelMasks_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGridAxesHelper_LabelMasks_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGridAxesHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridAxesHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridAxesHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridAxesHelper *tempr = vtkGridAxesHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridAxesHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridAxesHelper::NewInstance());

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
PyvtkGridAxesHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGridAxesHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGridAxesHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetGridBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGridAxesHelper::SetGridBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesHelper_SetGridBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridBounds(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetGridBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridAxesHelper_SetGridBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGridAxesHelper_SetGridBounds_s1(self, args);
    case 1:
      return PyvtkGridAxesHelper_SetGridBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridBounds");
  return nullptr;
}


static PyObject *
PyvtkGridAxesHelper_GetGridBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridBounds() :
      op->vtkGridAxesHelper::GetGridBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFace(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMinValue() :
      op->vtkGridAxesHelper::GetFaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceMaxValue() :
      op->vtkGridAxesHelper::GetFaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFace() :
      op->vtkGridAxesHelper::GetFace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMask(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetLabelMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetLabelMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLabelMask() :
      op->vtkGridAxesHelper::GetLabelMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector3d, 4> tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkGridAxesHelper::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector3dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetActiveAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetActiveAxes() :
      op->vtkGridAxesHelper::GetActiveAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetLabelVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<bool, 4> tempr = (ap.IsBound() ?
      op->GetLabelVisibilities() :
      op->vtkGridAxesHelper::GetLabelVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_IbLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkGridAxesHelper::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkGridAxesHelper::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetTransformedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector3d, 4> tempr = (ap.IsBound() ?
      op->GetTransformedPoints() :
      op->vtkGridAxesHelper::GetTransformedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector3dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_TransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->TransformPoint(*temp0) :
      op->vtkGridAxesHelper::TransformPoint(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetTransformedFaceNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFaceNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetTransformedFaceNormal() :
      op->vtkGridAxesHelper::GetTransformedFaceNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_UpdateForViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateForViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateForViewport(temp0) :
      op->vtkGridAxesHelper::UpdateForViewport(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2i, 4> tempr = (ap.IsBound() ?
      op->GetViewportPoints() :
      op->vtkGridAxesHelper::GetViewportPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2iLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportPointsAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportPointsAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportPointsAsDouble() :
      op->vtkGridAxesHelper::GetViewportPointsAsDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportVectors() :
      op->vtkGridAxesHelper::GetViewportVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetViewportNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTuple<vtkVector2d, 4> tempr = (ap.IsBound() ?
      op->GetViewportNormals() :
      op->vtkGridAxesHelper::GetViewportNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_I11vtkVector2dLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkGridAxesHelper_GetBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridAxesHelper *op = static_cast<vtkGridAxesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBackface() :
      op->vtkGridAxesHelper::GetBackface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridAxesHelper_Methods[] = {
  {"IsTypeOf", PyvtkGridAxesHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridAxesHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridAxesHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGridAxesHelper\nC++: static vtkGridAxesHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridAxesHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGridAxesHelper\nC++: vtkGridAxesHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGridAxesHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGridAxesHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGridBounds", PyvtkGridAxesHelper_SetGridBounds, METH_VARARGS,
   "SetGridBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGridBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGridBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGridBounds(const double _arg[6])\n\nSet the bounding box defining the grid space. This, together with\ntheFace identify which planar surface this class is interested\nin. This class is designed to work with a single planar surface.\n\nDefaults to [-1.0, 1.0, -1.0, 1.0, -1.0, 1.0]\n"},
  {"GetGridBounds", PyvtkGridAxesHelper_GetGridBounds, METH_VARARGS,
   "GetGridBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGridBounds()\n\n"},
  {"SetFace", PyvtkGridAxesHelper_SetFace, METH_VARARGS,
   "SetFace(self, _arg:int) -> None\nC++: virtual void SetFace(int _arg)\n\nIndicate which face of the specified bounds is this class\noperating with.\n\nBy default, Face is vtkGridAxesHelper::MIN_YZ.\n"},
  {"GetFaceMinValue", PyvtkGridAxesHelper_GetFaceMinValue, METH_VARARGS,
   "GetFaceMinValue(self) -> int\nC++: virtual int GetFaceMinValue()\n\n"},
  {"GetFaceMaxValue", PyvtkGridAxesHelper_GetFaceMaxValue, METH_VARARGS,
   "GetFaceMaxValue(self) -> int\nC++: virtual int GetFaceMaxValue()\n\n"},
  {"GetFace", PyvtkGridAxesHelper_GetFace, METH_VARARGS,
   "GetFace(self) -> int\nC++: virtual int GetFace()\n\n"},
  {"SetLabelMask", PyvtkGridAxesHelper_SetLabelMask, METH_VARARGS,
   "SetLabelMask(self, _arg:int) -> None\nC++: virtual void SetLabelMask(unsigned int _arg)\n\nSet the axes to label.\n\nBy default, all axes are labeled i.e. LabelMask = 0xff.\n"},
  {"GetLabelMask", PyvtkGridAxesHelper_GetLabelMask, METH_VARARGS,
   "GetLabelMask(self) -> int\nC++: virtual unsigned int GetLabelMask()\n\n"},
  {"GetPoints", PyvtkGridAxesHelper_GetPoints, METH_VARARGS,
   "GetPoints(self) -> vtkTuple_I11vtkVector3dLi4EE\nC++: vtkTuple<vtkVector3d, 4> GetPoints()\n\nGet the 4 points in world coordinates that define the grid plane.\nThe points are in anticlockwise anticlockwise order with the face\nnormal pointing outward from the box defined by the GridBounds.\n"},
  {"GetActiveAxes", PyvtkGridAxesHelper_GetActiveAxes, METH_VARARGS,
   "GetActiveAxes(self) -> vtkVector2i\nC++: vtkVector2i GetActiveAxes()\n\nReturns which of the 3 coordinate axes for the 2 axes for this\nplane: 0 for X axis, 1, for Y axis, and 3 for Z axis. The two\naxes are specified in order so that together with the face normal\n(which is point outwards from the box defined by GridBounds),\nthey form a right-handed coordinate system.\n"},
  {"GetLabelVisibilities", PyvtkGridAxesHelper_GetLabelVisibilities, METH_VARARGS,
   "GetLabelVisibilities(self) -> vtkTuple_IbLi4EE\nC++: vtkTuple<bool, 4> GetLabelVisibilities()\n\nReturns the visibility for labels for each of the 4 axis defined\nby the face points based on the LabelMask.\n"},
  {"SetMatrix", PyvtkGridAxesHelper_SetMatrix, METH_VARARGS,
   "SetMatrix(self, __a:vtkMatrix4x4) -> None\nC++: void SetMatrix(vtkMatrix4x4 *)\n\nSet the transform matrix to use to transform the points. The\nmatrix's MTime will be used to determine if the transformed\npoints needed to be recomputed, when needed.\n"},
  {"GetMatrix", PyvtkGridAxesHelper_GetMatrix, METH_VARARGS,
   "GetMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\n"},
  {"GetTransformedPoints", PyvtkGridAxesHelper_GetTransformedPoints, METH_VARARGS,
   "GetTransformedPoints(self) -> vtkTuple_I11vtkVector3dLi4EE\nC++: vtkTuple<vtkVector3d, 4> GetTransformedPoints()\n\nGet the 4 points of the plane transformed using the\ntransformation matrix set using SetMatrix(), if any. This method\nto compute the transformed points the first time its called since\nthe plane points or the transformation matrix was set.\n"},
  {"TransformPoint", PyvtkGridAxesHelper_TransformPoint, METH_VARARGS,
   "TransformPoint(self, point:vtkVector3d) -> vtkVector3d\nC++: vtkVector3d TransformPoint(const vtkVector3d &point)\n\nTransforms the give point using the Matrix.\n"},
  {"GetTransformedFaceNormal", PyvtkGridAxesHelper_GetTransformedFaceNormal, METH_VARARGS,
   "GetTransformedFaceNormal(self) -> vtkVector3d\nC++: vtkVector3d GetTransformedFaceNormal()\n\nGet the normal to the grid plane face **after** applying the\ntransform specified using transformation matrix. Similar to\nGetTransformedPoints(), this method will only compute when input\nparameters have changed since the last time this method was\ncalled.\n"},
  {"UpdateForViewport", PyvtkGridAxesHelper_UpdateForViewport, METH_VARARGS,
   "UpdateForViewport(self, viewport:vtkViewport) -> bool\nC++: bool UpdateForViewport(vtkViewport *viewport)\n\nCall this method before accessing any of the attributes in\nviewport space. This computes the location of the plane in the\nviewport space using the specified viewport. This method should\ntypically be called once per render.\n"},
  {"GetViewportPoints", PyvtkGridAxesHelper_GetViewportPoints, METH_VARARGS,
   "GetViewportPoints(self) -> vtkTuple_I11vtkVector2iLi4EE\nC++: vtkTuple<vtkVector2i, 4> GetViewportPoints()\n\nGet the positions for the plane points in viewport coordinates.\n"},
  {"GetViewportPointsAsDouble", PyvtkGridAxesHelper_GetViewportPointsAsDouble, METH_VARARGS,
   "GetViewportPointsAsDouble(self) -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportPointsAsDouble()\n\n"},
  {"GetViewportVectors", PyvtkGridAxesHelper_GetViewportVectors, METH_VARARGS,
   "GetViewportVectors(self) -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportVectors()\n\nGet the axis vectors formed using the points returned by\nGetViewportPoints(). These are in non-normalized form.\n"},
  {"GetViewportNormals", PyvtkGridAxesHelper_GetViewportNormals, METH_VARARGS,
   "GetViewportNormals(self) -> vtkTuple_I11vtkVector2dLi4EE\nC++: vtkTuple<vtkVector2d, 4> GetViewportNormals()\n\nGet the normals to the axis vectors in viewport space. There are\nnot true normals to the axis vector. These are normalized.\n"},
  {"GetBackface", PyvtkGridAxesHelper_GetBackface, METH_VARARGS,
   "GetBackface(self) -> bool\nC++: virtual bool GetBackface()\n\nGet if the face is facing backwards in the current viewport.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGridAxesHelper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("grid_bounds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetGridBounds(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesHelper_SetGridBounds(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesHelper_SetGridBounds(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGridBounds/SetGridBounds\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("face"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetFace(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesHelper_SetFace(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesHelper_SetFace(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetFace/SetFace\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_mask"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetLabelMask(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesHelper_SetLabelMask(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesHelper_SetLabelMask(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabelMask/SetLabelMask\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("matrix"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetMatrix(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkGridAxesHelper_SetMatrix(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkGridAxesHelper_SetMatrix(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMatrix/SetMatrix\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("active_axes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetActiveAxes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetActiveAxes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("label_visibilities"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetLabelVisibilities(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLabelVisibilities\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("transformed_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetTransformedPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTransformedPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("transformed_face_normal"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetTransformedFaceNormal(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetTransformedFaceNormal\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("viewport_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetViewportPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetViewportPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("viewport_points_as_double"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetViewportPointsAsDouble(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetViewportPointsAsDouble\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("viewport_vectors"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetViewportVectors(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetViewportVectors\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("viewport_normals"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetViewportNormals(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetViewportNormals\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("backface"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGridAxesHelper_GetBackface(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetBackface\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGridAxesHelper_Doc =
  "vtkGridAxesHelper - is a helper object used by vtkGridAxesActor2D,\nvtkGridAxesActor3D, and vtkGridAxesPlane2DActor.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGridAxesActor2D, vtkGridAxesActor3D, and vtkGridAxesPlane2DActor\n"
  "shares a lot of the computations and logic. This class makes it\n"
  "possible to share all such information between these classes. This\n"
  "class works with a single face of the bounding box specified using\n"
  "the GridBounds.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGridAxesHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingGridAxes.vtkGridAxesHelper", // tp_name
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
  PyvtkGridAxesHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridAxesHelper_StaticNew()
{
  return vtkGridAxesHelper::New();
}

PyObject *PyvtkGridAxesHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGridAxesHelper_Type, PyvtkGridAxesHelper_Methods,
    "vtkGridAxesHelper",
 &PyvtkGridAxesHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGridAxesHelper_Faces_Type);
  PyVTKEnum_Add(&PyvtkGridAxesHelper_Faces_Type, "vtkGridAxesHelper.Faces");

  o = (PyObject *)&PyvtkGridAxesHelper_Faces_Type;
  if (PyDict_SetItemString(d, "Faces", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGridAxesHelper_LabelMasks_Type);
  PyVTKEnum_Add(&PyvtkGridAxesHelper_LabelMasks_Type, "vtkGridAxesHelper.LabelMasks");

  o = (PyObject *)&PyvtkGridAxesHelper_LabelMasks_Type;
  if (PyDict_SetItemString(d, "LabelMasks", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxesHelper::Faces cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_YZ", vtkGridAxesHelper::MIN_YZ },
        { "MIN_ZX", vtkGridAxesHelper::MIN_ZX },
        { "MIN_XY", vtkGridAxesHelper::MIN_XY },
        { "MAX_YZ", vtkGridAxesHelper::MAX_YZ },
        { "MAX_ZX", vtkGridAxesHelper::MAX_ZX },
        { "MAX_XY", vtkGridAxesHelper::MAX_XY },
      };

    o = PyvtkGridAxesHelper_Faces_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGridAxesHelper::LabelMasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "MIN_X", vtkGridAxesHelper::MIN_X },
        { "MIN_Y", vtkGridAxesHelper::MIN_Y },
        { "MIN_Z", vtkGridAxesHelper::MIN_Z },
        { "MAX_X", vtkGridAxesHelper::MAX_X },
        { "MAX_Y", vtkGridAxesHelper::MAX_Y },
        { "MAX_Z", vtkGridAxesHelper::MAX_Z },
      };

    o = PyvtkGridAxesHelper_LabelMasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGridAxesHelper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGridAxesHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridAxesHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridAxesHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

