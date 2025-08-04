// python wrapper for vtkDGCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkVector.h"
#include "vtkDGOperatorEntry.h"
#include "vtkDGCell.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGCell(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGCell_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGCell_Shape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGCell.Shape", // tp_name
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
static PyObject *PyvtkDGCell_Shape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDGCell_Shape_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDGCell_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGCell::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGCell::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGCell *tempr = vtkDGCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGCell::NewInstance());

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
PyvtkDGCell_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGCell::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGCell::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfCellSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfCellSources() :
      op->vtkDGCell::GetNumberOfCellSources());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCellSourceConnectivity(temp0) :
      op->vtkDGCell::GetCellSourceConnectivity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceNodalGhostMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceNodalGhostMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCellSourceNodalGhostMarks(temp0) :
      op->vtkDGCell::GetCellSourceNodalGhostMarks(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSourceOffset(temp0) :
      op->vtkDGCell::GetCellSourceOffset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceIsBlanked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceIsBlanked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCellSourceIsBlanked(temp0) :
      op->vtkDGCell::GetCellSourceIsBlanked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCellSourceShape(temp0) :
      op->vtkDGCell::GetCellSourceShape(temp0));

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceSideType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceSideType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellSourceSideType(temp0) :
      op->vtkDGCell::GetCellSourceSideType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetCellSourceSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSourceSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellSourceSelectionType(temp0) :
      op->vtkDGCell::GetCellSourceSelectionType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkDGCell::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDGCell::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDGCell::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1 = 1e-6;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = op->IsInside(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeCornerCount(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeCornerCount");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    int tempr = vtkDGCell::GetShapeCornerCount(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeDimension(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeDimension");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    int tempr = vtkDGCell::GetShapeDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeName");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    vtkStringToken tempr = vtkDGCell::GetShapeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeEnum(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeEnum");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = vtkDGCell::GetShapeEnum(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDGCell_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = op->GetShape();

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkDGCell::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCorners() :
      op->vtkDGCell::GetNumberOfCorners());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetParametricCenterOfSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenterOfSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetParametricCenterOfSide(temp0) :
      op->vtkDGCell::GetParametricCenterOfSide(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfSideTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfSideTypes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideRangeForSideType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideRangeForSideType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideRangeForSideType(temp0) :
      op->vtkDGCell::GetSideRangeForSideType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideRangeForSideDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideRangeForSideDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideRangeForSideDimension(temp0) :
      op->vtkDGCell::GetSideRangeForSideDimension(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfSidesOfDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesOfDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetNumberOfSidesOfDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = op->GetSideShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideTypeForShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideTypeForShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    int tempr = (ap.IsBound() ?
      op->GetSideTypeForShape(temp0) :
      op->vtkDGCell::GetSideTypeForShape(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideConnectivity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = &op->GetSideConnectivity(temp0);

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDGCell_GetSideConnectivity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = op->GetSideConnectivity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDGCell_GetSideConnectivity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDGCell_GetSideConnectivity_s1(self, args);
    case 0:
      return PyvtkDGCell_GetSideConnectivity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSideConnectivity");
  return nullptr;
}


static PyObject *
PyvtkDGCell_GetSidesOfSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSidesOfSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = &op->GetSidesOfSide(temp0);

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeFloat32Array *tempr = op->GetReferencePoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = op->GetSideOffsetsAndShapes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeFloat32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeFloat32Array"))
  {
    if (ap.IsBound())
    {
      op->FillReferencePoints(temp0);
    }
    else
    {
      op->vtkDGCell::FillReferencePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillSideConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeInt32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeInt32Array"))
  {
    if (ap.IsBound())
    {
      op->FillSideConnectivity(temp0);
    }
    else
    {
      op->vtkDGCell::FillSideConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeInt32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeInt32Array"))
  {
    if (ap.IsBound())
    {
      op->FillSideOffsetsAndShapes(temp0);
    }
    else
    {
      op->vtkDGCell::FillSideOffsetsAndShapes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDGCell_Methods[] = {
  {"IsTypeOf", PyvtkDGCell_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGCell_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGCell_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGCell\nC++: static vtkDGCell *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGCell_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGCell\nC++: vtkDGCell *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGCell_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGCell_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfCellSources", PyvtkDGCell_GetNumberOfCellSources, METH_VARARGS,
   "GetNumberOfCellSources(self) -> int\nC++: std::size_t GetNumberOfCellSources()\n\nPython-accessible method to identify number of cell sources.\n"},
  {"GetCellSourceConnectivity", PyvtkDGCell_GetCellSourceConnectivity, METH_VARARGS,
   "GetCellSourceConnectivity(self, sideType:int=-1) -> vtkDataArray\nC++: vtkDataArray *GetCellSourceConnectivity(int sideType=-1)\n\nPython-accessible methods to fetch cell source information.\n\nIn C++, you should simply call GetCellSource( sideType) and\naccess the ivar.\n"},
  {"GetCellSourceNodalGhostMarks", PyvtkDGCell_GetCellSourceNodalGhostMarks, METH_VARARGS,
   "GetCellSourceNodalGhostMarks(self, sideType:int=-1)\n    -> vtkDataArray\nC++: vtkDataArray *GetCellSourceNodalGhostMarks(int sideType=-1)\n\n"},
  {"GetCellSourceOffset", PyvtkDGCell_GetCellSourceOffset, METH_VARARGS,
   "GetCellSourceOffset(self, sideType:int=-1) -> int\nC++: vtkIdType GetCellSourceOffset(int sideType=-1)\n\n"},
  {"GetCellSourceIsBlanked", PyvtkDGCell_GetCellSourceIsBlanked, METH_VARARGS,
   "GetCellSourceIsBlanked(self, sideType:int=-1) -> bool\nC++: bool GetCellSourceIsBlanked(int sideType=-1)\n\n"},
  {"GetCellSourceShape", PyvtkDGCell_GetCellSourceShape, METH_VARARGS,
   "GetCellSourceShape(self, sideType:int=-1) -> Shape\nC++: Shape GetCellSourceShape(int sideType=-1)\n\n"},
  {"GetCellSourceSideType", PyvtkDGCell_GetCellSourceSideType, METH_VARARGS,
   "GetCellSourceSideType(self, sideType:int=-1) -> int\nC++: int GetCellSourceSideType(int sideType=-1)\n\n"},
  {"GetCellSourceSelectionType", PyvtkDGCell_GetCellSourceSelectionType, METH_VARARGS,
   "GetCellSourceSelectionType(self, sideType:int=-1) -> int\nC++: int GetCellSourceSelectionType(int sideType=-1)\n\n"},
  {"GetNumberOfCells", PyvtkDGCell_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nReturn the number of cells (and sides) of this type present in\nthis cell grid.\n"},
  {"ShallowCopy", PyvtkDGCell_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, other:vtkCellMetadata) -> None\nC++: void ShallowCopy(vtkCellMetadata *other) override;\n\nCopy cell-specific data from other into ourselves.\n"},
  {"DeepCopy", PyvtkDGCell_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkCellMetadata) -> None\nC++: void DeepCopy(vtkCellMetadata *other) override;\n\n"},
  {"IsInside", PyvtkDGCell_IsInside, METH_VARARGS,
   "IsInside(self, rst:vtkVector3d, tolerance:float=1e-6) -> bool\nC++: virtual bool IsInside(const vtkVector3d &rst,\n    double tolerance=1e-6)\n\nReturn true if the parametric coordinates ( rst) lie inside the\nreference cell or its closure and false otherwise.\n\nThe tolerance specifies a margin that should be included as part\nof the reference cell's interior to account for numerical\nimprecision.\n"},
  {"GetShapeCornerCount", PyvtkDGCell_GetShapeCornerCount, METH_VARARGS,
   "GetShapeCornerCount(shape:Shape) -> int\nC++: static int GetShapeCornerCount(Shape shape)\n\n"},
  {"GetShapeDimension", PyvtkDGCell_GetShapeDimension, METH_VARARGS,
   "GetShapeDimension(shape:Shape) -> int\nC++: static int GetShapeDimension(Shape shape)\n\n"},
  {"GetShapeName", PyvtkDGCell_GetShapeName, METH_VARARGS,
   "GetShapeName(shape:Shape) -> vtkStringToken\nC++: static vtkStringToken GetShapeName(Shape shape)\n\n"},
  {"GetShapeEnum", PyvtkDGCell_GetShapeEnum, METH_VARARGS,
   "GetShapeEnum(shapeName:vtkStringToken) -> Shape\nC++: static Shape GetShapeEnum(vtkStringToken shapeName)\n\nGiven a string description of a cell shape, return the DG\nequivalent enum.\n\nNote that this also converts IOSS shape names to DG enums, so\nthere are additional cases to handle spheres as points, springs\nas lines, etc.\n"},
  {"GetShape", PyvtkDGCell_GetShape, METH_VARARGS,
   "GetShape(self) -> Shape\nC++: virtual Shape GetShape()\n\nReturn the topological shape of this cell or side type.\n"},
  {"GetDimension", PyvtkDGCell_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: virtual int GetDimension()\n\nReturn the parametric dimension of this cell type (0, 1, 2, or\n3).\n"},
  {"GetNumberOfCorners", PyvtkDGCell_GetNumberOfCorners, METH_VARARGS,
   "GetNumberOfCorners(self) -> int\nC++: virtual int GetNumberOfCorners()\n\nReturn the number of corner points for this cell type.\n"},
  {"GetParametricCenterOfSide", PyvtkDGCell_GetParametricCenterOfSide, METH_VARARGS,
   "GetParametricCenterOfSide(self, sideId:int) -> vtkVector3d\nC++: virtual vtkVector3d GetParametricCenterOfSide(int sideId)\n\nReturn the parametric center of a cell or its side.\n\nPass -1 for side if you want the cell's center. Otherwise, pass\nthe side ID.\n\nThis method simply averages corner-point coordinates. It is not\nfast, since it averages values each time it is called. If you\nneed to reuse this information, you are responsible for caching\nit locally.\n"},
  {"GetNumberOfSideTypes", PyvtkDGCell_GetNumberOfSideTypes, METH_VARARGS,
   "GetNumberOfSideTypes(self) -> int\nC++: virtual int GetNumberOfSideTypes()\n\nReturn the number of different side shapes of this cell type.\n\nExample: a wedge has 4 side shapes: Quadrilateral, Triangle,\nEdge, and Vertex.\n"},
  {"GetSideRangeForSideType", PyvtkDGCell_GetSideRangeForSideType, METH_VARARGS,
   "GetSideRangeForSideType(self, sideType:int) -> (int, int)\nC++: int *GetSideRangeForSideType(int sideType)\n\nA python-wrapped version of GetSideRangeForType.\n"},
  {"GetSideRangeForSideDimension", PyvtkDGCell_GetSideRangeForSideDimension, METH_VARARGS,
   "GetSideRangeForSideDimension(self, sideDimension:int) -> (int,\n    int)\nC++: int *GetSideRangeForSideDimension(int sideDimension)\n\nA python-wrapped version of GetSideRangeForDimension.\n"},
  {"GetNumberOfSidesOfDimension", PyvtkDGCell_GetNumberOfSidesOfDimension, METH_VARARGS,
   "GetNumberOfSidesOfDimension(self, dimension:int) -> int\nC++: virtual int GetNumberOfSidesOfDimension(int dimension)\n\nReturn the number of boundaries this type of cell has of a given\ndimension.\n\nDG cells can be thought of as CW-complex cells; they are tuples\nof corner points which represent an open point set plus its\nclosure decomposed into a union of open sets of lower dimension.\nFor example, a hexahedron is an 8-tuple of corner points\nrepresenting an underlying space shaped as an open, rectangular\nprism plus six 4-tuples representing its quadrilateral faces,\nplus twelve 2-tuples representing its edges, plus 8 1-tuples\nrepresenting its corners. Thus, a hexahedron has 6 + 12 + 8 = 26\nsides (plus its interior).\n\nPassing a dimension of -1 will return 1 side; DG cells use a\n-1-dimensional side to indicate an entire cell should be treated\nas a side. This is useful for subsetting cells without re-writing\nthe arrays holding connectivity and field values; it also allows\na vtkDGCell instance to hold both sides of input cells mixed with\na subset of the input cells. For example, given 3 triangles as\ninput, generating an output with 1 input triangle unchanged and\nedges or vertices from the other two triangles requires per-cell\nblanking or subsetting of cells.\n"},
  {"GetSideShape", PyvtkDGCell_GetSideShape, METH_VARARGS,
   "GetSideShape(self, side:int) -> Shape\nC++: virtual Shape GetSideShape(int side)\n\nFor a given side, return its cell shape.\n\nThe sides of a vtkDGCell are always ordered from highest\ndimension to lowest. For example, a hexahedron's quadrilateral\nsides are numbered 0\342\200\2235, its line sides are numbered 6\342\200\22317, and\nits corner point sides are numbered 18\342\200\22325. Sometimes, the\ninterior of the element is considered a side labeled -1.\n"},
  {"GetSideTypeForShape", PyvtkDGCell_GetSideTypeForShape, METH_VARARGS,
   "GetSideTypeForShape(self, s:Shape) -> int\nC++: virtual int GetSideTypeForShape(Shape s)\n\nReturn the side type index for the given shape (or -1).\n\nThis method simply loops over the cell's side types until it\nfinds one of the proper shape.\n"},
  {"GetSideConnectivity", PyvtkDGCell_GetSideConnectivity, METH_VARARGS,
   "GetSideConnectivity(self, side:int) -> (int, ...)\nC++: virtual const std::vector<vtkIdType> &GetSideConnectivity(\n    int side)\nGetSideConnectivity(self) -> vtkTypeInt32Array\nC++: virtual vtkTypeInt32Array *GetSideConnectivity()\n\nReturn the connectivity of the given side.\n\nThe side connectivity is a vector holding the indexes of\ncorner-points of the side into the connectivity vector of this\ncell.\n\nPassing a side of -1 should return the connectivity of the cell's\ninterior (a vector of the counting numbers from 0 to\nthis->GetNumberOfCorners()). This feature is used when rendering\ncells of dimension 2 or lower.\n"},
  {"GetSidesOfSide", PyvtkDGCell_GetSidesOfSide, METH_VARARGS,
   "GetSidesOfSide(self, side:int) -> (int, ...)\nC++: virtual const std::vector<vtkIdType> &GetSidesOfSide(\n    int side)\n\nReturn a vector of side IDs given an input side ID.\n\nPassing a side of -1 will return the sides of the element itself.\nThe returned values **are not** corner-point IDs; they **are**\nside IDs. You can call GetSideConnectivity on each entry of the\nreturned vector to obtain corner-point IDs.\n"},
  {"GetReferencePoints", PyvtkDGCell_GetReferencePoints, METH_VARARGS,
   "GetReferencePoints(self) -> vtkTypeFloat32Array\nC++: virtual vtkTypeFloat32Array *GetReferencePoints()\n\nReturn a singleton array initialized with the reference-cell's\ncorner point coordinates.\n\nWhen implementing a subclass, call FillReferencePoints() in your\noverride. This should always return the same vtkTypeFloat32Array\neach time so that the array is only uploaded to the GPU once.\n"},
  {"GetSideOffsetsAndShapes", PyvtkDGCell_GetSideOffsetsAndShapes, METH_VARARGS,
   "GetSideOffsetsAndShapes(self) -> vtkTypeInt32Array\nC++: virtual vtkTypeInt32Array *GetSideOffsetsAndShapes()\n\nReturn a singleton array initialized with 2-tuples of (offset,\nshape) values.\n\nWhen implementing a subclass, call FillSideOffsetsAndShapes() in\nyour override. This should always return the same\nvtkTypeInt32Array each time so that the array is only uploaded to\nthe GPU once.\n"},
  {"FillReferencePoints", PyvtkDGCell_FillReferencePoints, METH_VARARGS,
   "FillReferencePoints(self, arr:vtkTypeFloat32Array) -> None\nC++: void FillReferencePoints(vtkTypeFloat32Array *arr)\n\nFill the passed array with the parametric coordinates of all the\nelement's corners.\n"},
  {"FillSideConnectivity", PyvtkDGCell_FillSideConnectivity, METH_VARARGS,
   "FillSideConnectivity(self, arr:vtkTypeInt32Array) -> None\nC++: void FillSideConnectivity(vtkTypeInt32Array *arr)\n\nFill the passed array with the connectivity (point IDs) of all\nthe element's sides.\n"},
  {"FillSideOffsetsAndShapes", PyvtkDGCell_FillSideOffsetsAndShapes, METH_VARARGS,
   "FillSideOffsetsAndShapes(self, arr:vtkTypeInt32Array) -> None\nC++: void FillSideOffsetsAndShapes(vtkTypeInt32Array *arr)\n\nFill the passed array with tuples of (1) offsets into the\nside-connectivity and (2) shapes for each type of side. Note that\nthe final tuple contains the total size of the offset array and a\nshape corresponding to the element itself.\n\nEach element's vertex side-connectivity (the penultimate offset)\ncan also be used as the connectivity for the element's\nconnectivity.\n\nSimple example: a vtkDGTri has 3 tuples: + (0, Shape::Edge), +\n(3, Shape::Vertex), + (6, Shape::Triangle).\n\nComplex example: a vtkDGWedge has 5 tuples: + (0,\nShape::Quadrilateral), + (3, Shape::Triangle), + (5,\nShape::Edge), + (14, Shape::Vertex), + (20, Shape::Wedge).\n\nNote that the wedge has multiple 2-d sides (both quadilaterals\nand triangles).\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGCell_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("shape"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetShape(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetShape\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("dimension"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetDimension(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetDimension\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("reference_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetReferencePoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetReferencePoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_connectivity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetSideConnectivity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSideConnectivity\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("side_offsets_and_shapes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetSideOffsetsAndShapes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetSideOffsetsAndShapes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_corners"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetNumberOfCorners(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCorners\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_side_types"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDGCell_GetNumberOfSideTypes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfSideTypes\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGCell_Doc =
  "vtkDGCell - Base class for a discontinuous Galerkin cells of all\nshapes.\n\n"
  "Superclass: vtkCellMetadata\n\n"
  "This class exists to offer each shape's parameterization via a\n"
  "uniform API.\n\n"
  "All DG cells have shapes that can be described by corner points in a\n"
  "reference (parametric) coordinate system. Sides (boundaries) of the\n"
  "element of any dimension can be fetched as offsets into the list of\n"
  "corners. You can also obtain a list of the coordinates in parametric\n"
  "space of all the corner points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGCell_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGCell", // tp_name
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
  PyvtkDGCell_Doc, // tp_doc
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

PyObject *PyvtkDGCell_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGCell_Type, PyvtkDGCell_Methods,
    "vtkDGCell",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellMetadata");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDGCell_Shape_Type);
  PyVTKEnum_Add(&PyvtkDGCell_Shape_Type, "vtkDGCell.Shape");

  o = (PyObject *)&PyvtkDGCell_Shape_Type;
  if (PyDict_SetItemString(d, "Shape", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkDGCell::Shape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "Vertex", vtkDGCell::Vertex },
        { "Edge", vtkDGCell::Edge },
        { "Triangle", vtkDGCell::Triangle },
        { "Quadrilateral", vtkDGCell::Quadrilateral },
        { "Tetrahedron", vtkDGCell::Tetrahedron },
        { "Hexahedron", vtkDGCell::Hexahedron },
        { "Wedge", vtkDGCell::Wedge },
        { "Pyramid", vtkDGCell::Pyramid },
        { "None_", vtkDGCell::None },
      };

    o = PyvtkDGCell_Shape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGCell_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGCell(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGCell_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGCell", o) != 0)
  {
    Py_DECREF(o);
  }

}

