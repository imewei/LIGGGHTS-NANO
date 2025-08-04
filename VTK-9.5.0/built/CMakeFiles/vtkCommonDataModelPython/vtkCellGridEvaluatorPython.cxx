// python wrapper for vtkCellGridEvaluator
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
#include "vtkCellGridEvaluator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkCellGridEvaluator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkCellGridEvaluator_ClassNew(); }

#ifndef DECLARED_PyvtkCellGridQuery_ClassNew
extern "C" { PyObject *PyvtkCellGridQuery_ClassNew(); }
#define DECLARED_PyvtkCellGridQuery_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridEvaluator_Phases_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridEvaluator.Phases", // tp_name
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
static PyObject *PyvtkCellGridEvaluator_Phases_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellGridEvaluator_Phases_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellGridEvaluator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGridEvaluator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGridEvaluator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGridEvaluator *tempr = vtkCellGridEvaluator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridEvaluator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGridEvaluator::NewInstance());

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
PyvtkCellGridEvaluator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGridEvaluator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGridEvaluator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_SetCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    if (ap.IsBound())
    {
      op->SetCellAttribute(temp0);
    }
    else
    {
      op->vtkCellGridEvaluator::SetCellAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttribute() :
      op->vtkCellGridEvaluator::GetCellAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetInputPoints() :
      op->vtkCellGridEvaluator::GetInputPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetClassifierCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassifierCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeUInt32Array *tempr = (ap.IsBound() ?
      op->GetClassifierCellTypes() :
      op->vtkCellGridEvaluator::GetClassifierCellTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetClassifierCellOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassifierCellOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeUInt64Array *tempr = (ap.IsBound() ?
      op->GetClassifierCellOffsets() :
      op->vtkCellGridEvaluator::GetClassifierCellOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetClassifierPointIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassifierPointIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeUInt64Array *tempr = (ap.IsBound() ?
      op->GetClassifierPointIDs() :
      op->vtkCellGridEvaluator::GetClassifierPointIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetClassifierCellIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassifierCellIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeUInt64Array *tempr = (ap.IsBound() ?
      op->GetClassifierCellIndices() :
      op->vtkCellGridEvaluator::GetClassifierCellIndices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetClassifierPointParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassifierPointParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetClassifierPointParameters() :
      op->vtkCellGridEvaluator::GetClassifierPointParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetInterpolatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetInterpolatedValues() :
      op->vtkCellGridEvaluator::GetInterpolatedValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_ClassifyPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClassifyPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ClassifyPoints(temp0);
    }
    else
    {
      op->vtkCellGridEvaluator::ClassifyPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_InterpolatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->InterpolatePoints(temp0);
    }
    else
    {
      op->vtkCellGridEvaluator::InterpolatePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_InterpolateCellParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCellParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  vtkTypeUInt32Array *temp0 = nullptr;
  vtkTypeUInt64Array *temp1 = nullptr;
  vtkTypeUInt64Array *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTypeUInt32Array") &&
      ap.GetVTKObject(temp1, "vtkTypeUInt64Array") &&
      ap.GetVTKObject(temp2, "vtkTypeUInt64Array") &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->InterpolateCellParameters(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCellGridEvaluator::InterpolateCellParameters(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetPhasesToPerform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhasesToPerform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGridEvaluator::Phases tempr = (ap.IsBound() ?
      op->GetPhasesToPerform() :
      op->vtkCellGridEvaluator::GetPhasesToPerform());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkCellGridEvaluator.Phases");
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkCellGridEvaluator::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_StartPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPass();
    }
    else
    {
      op->vtkCellGridEvaluator::StartPass();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_IsAnotherPassRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnotherPassRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnotherPassRequired() :
      op->vtkCellGridEvaluator::IsAnotherPassRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCellGridEvaluator::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGridEvaluator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGridEvaluator *op = static_cast<vtkCellGridEvaluator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCellGridEvaluator::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGridEvaluator_Methods[] = {
  {"IsTypeOf", PyvtkCellGridEvaluator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGridEvaluator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGridEvaluator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGridEvaluator\nC++: static vtkCellGridEvaluator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGridEvaluator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGridEvaluator\nC++: vtkCellGridEvaluator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGridEvaluator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGridEvaluator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellAttribute", PyvtkCellGridEvaluator_SetCellAttribute, METH_VARARGS,
   "SetCellAttribute(self, _arg:vtkCellAttribute) -> None\nC++: virtual void SetCellAttribute(vtkCellAttribute *_arg)\n\nSet/get the cell-attribute to be evaluated.\n\nThis must be set before the query is evaluated.\n"},
  {"GetCellAttribute", PyvtkCellGridEvaluator_GetCellAttribute, METH_VARARGS,
   "GetCellAttribute(self) -> vtkCellAttribute\nC++: virtual vtkCellAttribute *GetCellAttribute()\n\n"},
  {"GetInputPoints", PyvtkCellGridEvaluator_GetInputPoints, METH_VARARGS,
   "GetInputPoints(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetInputPoints()\n\nGet the input points to be classified and possibly interpolated.\nThese points are in world coordinates (not in reference cell\ncoordinates).\n"},
  {"GetClassifierCellTypes", PyvtkCellGridEvaluator_GetClassifierCellTypes, METH_VARARGS,
   "GetClassifierCellTypes(self) -> vtkTypeUInt32Array\nC++: virtual vtkTypeUInt32Array *GetClassifierCellTypes()\n\nGet the discovered types of cells containing input points.\n"},
  {"GetClassifierCellOffsets", PyvtkCellGridEvaluator_GetClassifierCellOffsets, METH_VARARGS,
   "GetClassifierCellOffsets(self) -> vtkTypeUInt64Array\nC++: virtual vtkTypeUInt64Array *GetClassifierCellOffsets()\n\nGet the offset into the result arrays where each cell-type's\npoints reside.\n"},
  {"GetClassifierPointIDs", PyvtkCellGridEvaluator_GetClassifierPointIDs, METH_VARARGS,
   "GetClassifierPointIDs(self) -> vtkTypeUInt64Array\nC++: virtual vtkTypeUInt64Array *GetClassifierPointIDs()\n\nGet the array holding indices into the InputPoints array of each\noutput.\n"},
  {"GetClassifierCellIndices", PyvtkCellGridEvaluator_GetClassifierCellIndices, METH_VARARGS,
   "GetClassifierCellIndices(self) -> vtkTypeUInt64Array\nC++: virtual vtkTypeUInt64Array *GetClassifierCellIndices()\n\nGet the array holding indices into cells of a given type that\ncontain input points.\n"},
  {"GetClassifierPointParameters", PyvtkCellGridEvaluator_GetClassifierPointParameters, METH_VARARGS,
   "GetClassifierPointParameters(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetClassifierPointParameters()\n\nGet the array holding (r, s, t)-coordinates where each input\npoint is located.\n"},
  {"GetInterpolatedValues", PyvtkCellGridEvaluator_GetInterpolatedValues, METH_VARARGS,
   "GetInterpolatedValues(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetInterpolatedValues()\n\nGet the array holding cell-attribute values interpolated to each\ninput point.\n"},
  {"ClassifyPoints", PyvtkCellGridEvaluator_ClassifyPoints, METH_VARARGS,
   "ClassifyPoints(self, points:vtkDataArray) -> None\nC++: void ClassifyPoints(vtkDataArray *points)\n\nConfigure the query to run the classifier but not the\ninterpolator.\n"},
  {"InterpolatePoints", PyvtkCellGridEvaluator_InterpolatePoints, METH_VARARGS,
   "InterpolatePoints(self, points:vtkDataArray) -> None\nC++: void InterpolatePoints(vtkDataArray *points)\n\nConfigure the query to run the classifier followed by the\ninterpolator.\n"},
  {"InterpolateCellParameters", PyvtkCellGridEvaluator_InterpolateCellParameters, METH_VARARGS,
   "InterpolateCellParameters(self, cellTypes:vtkTypeUInt32Array,\n    cellOffsets:vtkTypeUInt64Array,\n    cellIndices:vtkTypeUInt64Array, pointParameters:vtkDataArray)\n    -> None\nC++: void InterpolateCellParameters(vtkTypeUInt32Array *cellTypes,\n     vtkTypeUInt64Array *cellOffsets,\n    vtkTypeUInt64Array *cellIndices,\n    vtkDataArray *pointParameters)\n\nConfigure the query to run only the interpolator.\n\nBecause interpolation usually requires classification information\nand parametric coordinates for each classified point, you must\nprovide arrays holding this information.\n"},
  {"GetPhasesToPerform", PyvtkCellGridEvaluator_GetPhasesToPerform, METH_VARARGS,
   "GetPhasesToPerform(self) -> vtkCellGridEvaluator.Phases\nC++: virtual vtkCellGridEvaluator::Phases GetPhasesToPerform()\n\nReturn what work the query has been configured to do.\n"},
  {"Initialize", PyvtkCellGridEvaluator_Initialize, METH_VARARGS,
   "Initialize(self) -> bool\nC++: bool Initialize() override;\n\nInvoked during evaluation before any cell-grid responders are\nrun.\n"},
  {"StartPass", PyvtkCellGridEvaluator_StartPass, METH_VARARGS,
   "StartPass(self) -> None\nC++: void StartPass() override;\n\nInvoked at the start of each pass.\n"},
  {"IsAnotherPassRequired", PyvtkCellGridEvaluator_IsAnotherPassRequired, METH_VARARGS,
   "IsAnotherPassRequired(self) -> bool\nC++: bool IsAnotherPassRequired() override;\n\nInvoked at the end of each pass.\n"},
  {"Finalize", PyvtkCellGridEvaluator_Finalize, METH_VARARGS,
   "Finalize(self) -> bool\nC++: bool Finalize() override;\n\nInvoked during evaluation after all cell-grid responders are run.\n"},
  {"GetLocator", PyvtkCellGridEvaluator_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkStaticPointLocator\nC++: virtual vtkStaticPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkCellGridEvaluator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("cell_attribute"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetCellAttribute(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkCellGridEvaluator_SetCellAttribute(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkCellGridEvaluator_SetCellAttribute(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCellAttribute/SetCellAttribute\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("input_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetInputPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInputPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("classifier_cell_types"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetClassifierCellTypes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClassifierCellTypes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("classifier_cell_offsets"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetClassifierCellOffsets(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClassifierCellOffsets\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("classifier_point_i_ds"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetClassifierPointIDs(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClassifierPointIDs\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("classifier_cell_indices"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetClassifierCellIndices(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClassifierCellIndices\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("classifier_point_parameters"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetClassifierPointParameters(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetClassifierPointParameters\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("interpolated_values"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetInterpolatedValues(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetInterpolatedValues\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("phases_to_perform"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetPhasesToPerform(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetPhasesToPerform\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("locator"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkCellGridEvaluator_GetLocator(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetLocator\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkCellGridEvaluator_Doc =
  "vtkCellGridEvaluator - Evaluate a field (vtkCellAttribute) at some\npoints inside cells.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "This class is a cell-grid query whose purpose is to determine the\n"
  "value a vtkCellAttribute takes on at one or more points inside the\n"
  "domain of a vtkCellGrid.\n\n"
  "This class performs its work in two phases: + Classification. Input\n"
  "points are classified by the type and index\n"
  "  of cell in the grid in which they lie. + Attribute/field\n"
  "interpolation. Each cell is asked to interpolate\n"
  "  the value of a cell-attribute at each point classified to it.\n\n"
  "As an example, consider a cell-grid holding 10 triangles and 20 quads\n"
  "and a query that is provided 5 points. The first phase will identify\n"
  "which of the 5 points are insides triangles, which lie in\n"
  "quadrilaterals, and which lie in neither. Say that 2 lie inside\n"
  "triangles, 2 inside quadrilaterals, and 1 is outside the domain.\n"
  "Furthermore, the first phase will identify which particular triangles\n"
  "or quadrilaterals contain the input points. The two points which lie\n"
  "in triangles will report a number in [0,10[ while the two points\n"
  "which lie in quadrilaterals will report a number in [0, 20[. Finally,\n"
  "for cells which have a reference element, the parametric coordinates\n"
  "of each input point are computed.\n\n"
  "The second phase additionally interpolates a cell-attribute (let's\n"
  "say \"Velocity\" in our example) at each input point.\n\n"
  "You may configure the query to skip either phase (classification or\n"
  "interpolation). If you skip classification, you must provide the the\n"
  "classification information for the input points. The method you call\n"
  "(ClassifyPoints, InterpolatePoints, or InterpolateCellParameters)\n"
  "determines which phase(s) are applied during evaluation.\n\n"
  "When running in InterpolatePoints mode (both classification and\n"
  "interpolation phases are performed), the output from our example is\n"
  "reported like so:\n\n"
  "+ `GetClassifierCellTypes()` \342\200\223 returns an array with a cell-type\n"
  "hash\n"
  "  for each type of cell containing an input point. The hash value can\n"
  "  be used to construct a vtkStringToken.\n"
  "  Our example would return an array with 3 values which might be\n"
  "  ordered: \"vtkDGTri\"_hash, \"vtkDGQuad\"_hash, and 0 (an \"invalid\"\n"
  "hash). + `GetClassifierCellOffsets()` \342\200\223 returns an array with the\n"
  "same number\n"
  "  of values as the call above. Each value specifies the start of\n"
  "  reporting for points contained in the corresponding cell type.\n"
  "  Our example would return [0, 2, 4] to match the values above. +\n"
  "`GetClassifierPointIDs()` \342\200\223 returns an array whose length matches\n"
  "  the number of input points. Each value is the index of an input\n"
  "  point. Input points do not have their order preserved so that\n"
  "  all the points contained in a single cell can be reported together.\n"
  "  Our example might return [4, 2, 1, 0, 3]. This will always be a\n"
  "  permutation of the counting integers and, for our example, always\n"
  "  hold integers in [0, 5[. + `GetClassifierCellIndices()` \342\200\223 returns\n"
  "an array whose length matches\n"
  "  the number of input points. Each value is the index into cells\n"
  "  of the corresponding type, indicating which cell contains\n"
  "  the input point.\n"
  "  For our example, the first two numbers will be in [0, 10[, the\n"
  "second\n"
  "  two will be in [0, 20[, and the last will be -1. (This is because\n"
  "  we have two points inside 10 triangles, two points inside 20 quads,\n"
  "  and one un-classifiable input point.) +\n"
  "`GetClassifierPointParameters()` \342\200\223 returns an array whose length\n"
  "  matches the number of input points. Each value is a 3-tuple of\n"
  "  reference-cell coordinates (or indeterminate if the cell type does\n"
  "  not provide a reference cell). + `GetInterpolatedValues()` \342\200\223\n"
  "returns an array whose number of tuples\n"
  "  matches the number of input points and whose number of components\n"
  "  matches the number of components of the requested cell-attribute.\n"
  "  For our example, an array with 5 tuples of 3 components each would\n"
  "be\n"
  "  returned; it would be named \"Velocity\" (matching the\n"
  "cell-attribute's\n"
  "  name).\n\n"
  "Note that because you can pass in the arrays above (except the\n"
  "interpolated values) to short-circuit classification, it is possible\n"
  "to evaluate multiple cell-attributes without duplicating the\n"
  "classification work.\n\n"
  "In InterpolateCellParameters mode, calling the methods above which\n"
  "begin with `GetClassifier\342\200\246` will simply return the input arrays you\n"
  "passed to configure the query.\n\n"
  "## Warnings\n\n"
  "The output arrays above generally match the number of input points,\n"
  "but will sometimes exceed the number of input points. This will occur\n"
  "when multiple cells contain an input point (either on a shared\n"
  "boundary or because the cells overlap).\n\n"
  "Note that the output should never have fewer points than the input as\n"
  "even points outside the cells will be classified as such.\n\n"
  "Currently, this class is limited to evaluating numeric attributes;\n"
  "string or variant arrays are not supported.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGridEvaluator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGridEvaluator", // tp_name
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
  PyvtkCellGridEvaluator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGridEvaluator_StaticNew()
{
  return vtkCellGridEvaluator::New();
}

PyObject *PyvtkCellGridEvaluator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGridEvaluator_Type, PyvtkCellGridEvaluator_Methods,
    "vtkCellGridEvaluator",
 &PyvtkCellGridEvaluator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCellGridQuery_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellGridEvaluator_Phases_Type);
  PyVTKEnum_Add(&PyvtkCellGridEvaluator_Phases_Type, "vtkCellGridEvaluator.Phases");

  o = (PyObject *)&PyvtkCellGridEvaluator_Phases_Type;
  if (PyDict_SetItemString(d, "Phases", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkCellGridEvaluator::Phases cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "None_", vtkCellGridEvaluator::None },
        { "Classify", vtkCellGridEvaluator::Classify },
        { "ClassifyAndInterpolate", vtkCellGridEvaluator::ClassifyAndInterpolate },
        { "Interpolate", vtkCellGridEvaluator::Interpolate },
      };

    o = PyvtkCellGridEvaluator_Phases_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkCellGridEvaluator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGridEvaluator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGridEvaluator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGridEvaluator", o) != 0)
  {
    Py_DECREF(o);
  }

}

