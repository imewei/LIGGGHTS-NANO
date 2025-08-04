// python wrapper for vtkLabelHierarchy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabelHierarchy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLabelHierarchy(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLabelHierarchy_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelHierarchy_IteratorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelHierarchy.IteratorType", // tp_name
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
static PyObject *PyvtkLabelHierarchy_IteratorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabelHierarchy_IteratorType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLabelHierarchy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelHierarchy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelHierarchy *tempr = vtkLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchy::NewInstance());

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
PyvtkLabelHierarchy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabelHierarchy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabelHierarchy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_ComputeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeHierarchy();
    }
    else
    {
      op->vtkLabelHierarchy::ComputeHierarchy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetLabelCount(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetTargetLabelCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetLabelCount() :
      op->vtkLabelHierarchy::GetTargetLabelCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDepth(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetMaximumDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDepth() :
      op->vtkLabelHierarchy::GetMaximumDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkLabelHierarchy::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetPriorities(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetPriorities(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetPriorities() :
      op->vtkLabelHierarchy::GetPriorities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabels(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkLabelHierarchy::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetOrientations(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetOrientations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetOrientations() :
      op->vtkLabelHierarchy::GetOrientations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetIconIndices(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetIconIndices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetIconIndices() :
      op->vtkLabelHierarchy::GetIconIndices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetSizes(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetSizes() :
      op->vtkLabelHierarchy::GetSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetBoundedSizes(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetBoundedSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetBoundedSizes() :
      op->vtkLabelHierarchy::GetBoundedSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  vtkRenderer *temp1 = nullptr;
  vtkCamera *temp2 = nullptr;
  const size_t size3 = 24;
  double temp3[24];
  double save3[24];
  bool temp4 = false;
  const size_t size5 = 2;
  float temp5[2];
  float save5[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkCamera") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkLabelHierarchyIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkLabelHierarchy::NewIterator(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

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
PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteNodeCoordinatesFromWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabelHierarchy::GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkLabelHierarchy_GetPathForNodalCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPathForNodalCoordinates");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkLabelHierarchy::GetPathForNodalCoordinates(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkLabelHierarchy::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkLabelHierarchy::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkLabelHierarchy::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLabelHierarchy_GetCell_s1(self, args);
    case 2:
      return PyvtkLabelHierarchy_GetCell_s2(self, args);
    case 3:
      return PyvtkLabelHierarchy_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkLabelHierarchy_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkLabelHierarchy::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1, temp2c, temp3);
    }
    else
    {
      op->vtkLabelHierarchy::GetCellPoints(temp0, temp1, temp2c, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLabelHierarchy_GetCellPoints_s1(self, args);
    case 4:
      return PyvtkLabelHierarchy_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkLabelHierarchy_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  long long temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkLabelHierarchy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  long long temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp6, save6, size6);
    vtkPythonArgs::Save(temp7, save7, size7);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkLabelHierarchy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkLabelHierarchy_FindCell_s1(self, args);
    case 8:
      return PyvtkLabelHierarchy_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkLabelHierarchy_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkLabelHierarchy::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCenterPts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCenterPts() :
      op->vtkLabelHierarchy::GetCenterPts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoincidentPoints *tempr = (ap.IsBound() ?
      op->GetCoincidentPoints() :
      op->vtkLabelHierarchy::GetCoincidentPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetAnchorFrustumPlanes(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAnchorFrustumPlanes");

  const size_t size0 = 24;
  double temp0[24];
  double save0[24];
  vtkRenderer *temp1 = nullptr;
  vtkCoordinate *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkCoordinate"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkLabelHierarchy::GetAnchorFrustumPlanes(temp0, temp1, temp2);

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

static PyMethodDef PyvtkLabelHierarchy_Methods[] = {
  {"IsTypeOf", PyvtkLabelHierarchy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelHierarchy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelHierarchy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabelHierarchy\nC++: static vtkLabelHierarchy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelHierarchy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabelHierarchy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabelHierarchy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPoints", PyvtkLabelHierarchy_SetPoints, METH_VARARGS,
   "SetPoints(self, __a:vtkPoints) -> None\nC++: void SetPoints(vtkPoints *) override;\n\nOverride SetPoints so we can reset the hierarchy when the points\nchange.\n"},
  {"ComputeHierarchy", PyvtkLabelHierarchy_ComputeHierarchy, METH_VARARGS,
   "ComputeHierarchy(self) -> None\nC++: virtual void ComputeHierarchy()\n\nFill the hierarchy with the input labels.\n"},
  {"SetTargetLabelCount", PyvtkLabelHierarchy_SetTargetLabelCount, METH_VARARGS,
   "SetTargetLabelCount(self, _arg:int) -> None\nC++: virtual void SetTargetLabelCount(int _arg)\n\nThe number of labels that is ideally present at any octree node.\nIt is best if this is a multiple of $2^d $.\n"},
  {"GetTargetLabelCount", PyvtkLabelHierarchy_GetTargetLabelCount, METH_VARARGS,
   "GetTargetLabelCount(self) -> int\nC++: virtual int GetTargetLabelCount()\n\n"},
  {"SetMaximumDepth", PyvtkLabelHierarchy_SetMaximumDepth, METH_VARARGS,
   "SetMaximumDepth(self, _arg:int) -> None\nC++: virtual void SetMaximumDepth(int _arg)\n\nThe maximum depth of the octree.\n"},
  {"GetMaximumDepth", PyvtkLabelHierarchy_GetMaximumDepth, METH_VARARGS,
   "GetMaximumDepth(self) -> int\nC++: virtual int GetMaximumDepth()\n\n"},
  {"SetTextProperty", PyvtkLabelHierarchy_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe default text property assigned to labels in this hierarchy.\n"},
  {"GetTextProperty", PyvtkLabelHierarchy_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"SetPriorities", PyvtkLabelHierarchy_SetPriorities, METH_VARARGS,
   "SetPriorities(self, arr:vtkDataArray) -> None\nC++: virtual void SetPriorities(vtkDataArray *arr)\n\nSet/get the array specifying the importance (priority) of each\nlabel.\n"},
  {"GetPriorities", PyvtkLabelHierarchy_GetPriorities, METH_VARARGS,
   "GetPriorities(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetPriorities()\n\n"},
  {"SetLabels", PyvtkLabelHierarchy_SetLabels, METH_VARARGS,
   "SetLabels(self, arr:vtkAbstractArray) -> None\nC++: virtual void SetLabels(vtkAbstractArray *arr)\n\nSet/get the array specifying the text of each label.\n"},
  {"GetLabels", PyvtkLabelHierarchy_GetLabels, METH_VARARGS,
   "GetLabels(self) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetLabels()\n\n"},
  {"SetOrientations", PyvtkLabelHierarchy_SetOrientations, METH_VARARGS,
   "SetOrientations(self, arr:vtkDataArray) -> None\nC++: virtual void SetOrientations(vtkDataArray *arr)\n\nSet/get the array specifying the orientation of each label.\n"},
  {"GetOrientations", PyvtkLabelHierarchy_GetOrientations, METH_VARARGS,
   "GetOrientations(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetOrientations()\n\n"},
  {"SetIconIndices", PyvtkLabelHierarchy_SetIconIndices, METH_VARARGS,
   "SetIconIndices(self, arr:vtkIntArray) -> None\nC++: virtual void SetIconIndices(vtkIntArray *arr)\n\nSet/get the array specifying the icon index of each label.\n"},
  {"GetIconIndices", PyvtkLabelHierarchy_GetIconIndices, METH_VARARGS,
   "GetIconIndices(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetIconIndices()\n\n"},
  {"SetSizes", PyvtkLabelHierarchy_SetSizes, METH_VARARGS,
   "SetSizes(self, arr:vtkDataArray) -> None\nC++: virtual void SetSizes(vtkDataArray *arr)\n\nSet/get the array specifying the size of each label.\n"},
  {"GetSizes", PyvtkLabelHierarchy_GetSizes, METH_VARARGS,
   "GetSizes(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetSizes()\n\n"},
  {"SetBoundedSizes", PyvtkLabelHierarchy_SetBoundedSizes, METH_VARARGS,
   "SetBoundedSizes(self, arr:vtkDataArray) -> None\nC++: virtual void SetBoundedSizes(vtkDataArray *arr)\n\nSet/get the array specifying the maximum width and height in\nworld coordinates of each label.\n"},
  {"GetBoundedSizes", PyvtkLabelHierarchy_GetBoundedSizes, METH_VARARGS,
   "GetBoundedSizes(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetBoundedSizes()\n\n"},
  {"NewIterator", PyvtkLabelHierarchy_NewIterator, METH_VARARGS,
   "NewIterator(self, type:int, ren:vtkRenderer, cam:vtkCamera,\n    frustumPlanes:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float], positionsAsNormals:bool, bucketSize:[float, float])\n    -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *NewIterator(int type,\n    vtkRenderer *ren, vtkCamera *cam, double frustumPlanes[24],\n    bool positionsAsNormals, float bucketSize[2])\n\nReturns an iterator for this data object. positionsAsNormals\nshould only be true when labels are on a sphere centered at the\norigin (3D world).\n@param type - the type should be one of FULL_SORT, QUEUE,\n    DEPTH_FIRST, or FRUSTUM.\n@param ren - the current renderer (used for viewport information)\n@param cam - the current camera.\n@param frustumPlanes - should be the output of the camera's\n    frustum planes.\n@param positionsAsNormals - throws out octree nodes on the\n    opposite side of the origin.\n@param bucketSize - an array of 2 integers describing the width\n    and height of label placer\nbuckets.\n"},
  {"GetDiscreteNodeCoordinatesFromWorldPoint", PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint, METH_VARARGS,
   "GetDiscreteNodeCoordinatesFromWorldPoint(self, ijk:[int, int,\n    int], pt:[float, float, float], level:int) -> None\nC++: void GetDiscreteNodeCoordinatesFromWorldPoint(int ijk[3],\n    double pt[3], int level)\n\nGiven a depth in the hierarchy ( level) and a point pt in world\nspace, compute ijk. This is used to find other octree nodes at\nthe same level that are within the search radius for candidate\nlabels to be placed. It is called with pt set to the camera eye\npoint and pythagorean quadruples increasingly distant from the\norigin are added to ijk to identify octree nodes whose labels\nshould be placed.\n@param[out] ijk - discrete coordinates of the octree node at\n    level containing pt.\n@param[in]  pt - input world point coordinates\n@param[in]  level - input octree level to be considered\n"},
  {"GetPathForNodalCoordinates", PyvtkLabelHierarchy_GetPathForNodalCoordinates, METH_VARARGS,
   "GetPathForNodalCoordinates(path:[int, ...], ijk:[int, int, int],\n    level:int) -> bool\nC++: static bool GetPathForNodalCoordinates(int *path, int ijk[3],\n     int level)\n\nGiven a level of the tree and ijk coordinates in a lattice,\ncompute a path down the tree to reach the corresponding lattice\nnode. If the lattice coordinates are outside the tree, this\nreturns false. Otherwise it returns true. This does notguarantee\nthat the path exists in the hierarchy.\n@param[out] path - a vector of level integers specifying which\n    child to descend at each\nlevel to reach ijk\n@param[in] ijk - discrete coordinates of the octree node at level\n@param[in] level - input octree level to be considered\n"},
  {"GetNumberOfCells", PyvtkLabelHierarchy_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetCell", PyvtkLabelHierarchy_GetCell, METH_VARARGS,
   "GetCell(self, __a:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType) override;\nGetCell(self, __a:int, __b:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType, vtkGenericCell *) override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellType", PyvtkLabelHierarchy_GetCellType, METH_VARARGS,
   "GetCellType(self, __a:int) -> int\nC++: int GetCellType(vtkIdType) override;\n\nThis method always returns `VTK_EMPTY_CELL`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellPoints", PyvtkLabelHierarchy_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, __a:int, __b:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType, vtkIdList *) override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType const *&pts, vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkLabelHierarchy_GetPointCells, METH_VARARGS,
   "GetPointCells(self, __a:int, __b:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType, vtkIdList *) override;\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"FindCell", PyvtkLabelHierarchy_FindCell, METH_VARARGS,
   "FindCell(self, __a:[float, float, float], __b:vtkCell, __c:int,\n    __d:float, __e:int, __f:[float, float, float], __g:[float,\n    ...]) -> int\nC++: vtkIdType FindCell(double *, vtkCell *, vtkIdType, double,\n    int &, double *, double *) override;\nFindCell(self, __a:[float, float, float], __b:vtkCell,\n    __c:vtkGenericCell, __d:int, __e:float, __f:int, __g:[float,\n    float, float], __h:[float, ...]) -> int\nC++: vtkIdType FindCell(double *, vtkCell *, vtkGenericCell *,\n    vtkIdType, double, int &, double *, double *) override;\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-nullptr, then search starts from this\ncell and looks at immediate neighbors.  Returns cellId >= 0 if\ninside, < 0 otherwise.  The parametric coordinates are provided\nin pcoords[3]. The interpolation weights are returned in\nweights[]. (The number of weights is equal to the number of\npoints in the found cell). Tolerance is used to control how close\nthe point is to be considered \"in\" the cell. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"GetMaxCellSize", PyvtkLabelHierarchy_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetCenterPts", PyvtkLabelHierarchy_GetCenterPts, METH_VARARGS,
   "GetCenterPts(self) -> vtkPoints\nC++: virtual vtkPoints *GetCenterPts()\n\nProvide access to original coordinates of sets of coincident\npoints\n"},
  {"GetCoincidentPoints", PyvtkLabelHierarchy_GetCoincidentPoints, METH_VARARGS,
   "GetCoincidentPoints(self) -> vtkCoincidentPoints\nC++: virtual vtkCoincidentPoints *GetCoincidentPoints()\n\nProvide access to the set of coincident points that have been\nperturbed by the hierarchy in order to render labels for each\nwithout overlap.\n"},
  {"GetAnchorFrustumPlanes", PyvtkLabelHierarchy_GetAnchorFrustumPlanes, METH_VARARGS,
   "GetAnchorFrustumPlanes(frustumPlanes:[float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float], ren:vtkRenderer,\n    anchorTransform:vtkCoordinate) -> None\nC++: static void GetAnchorFrustumPlanes(double frustumPlanes[24],\n    vtkRenderer *ren, vtkCoordinate *anchorTransform)\n\nCompute frustum for quickly excluding labels from rendering that\nare outside the visible region. This is a shared utility\nfunction.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLabelHierarchy_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("points"),
    /*get=*/nullptr,
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetPoints(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetPoints(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("write-only, Calls SetPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("target_label_count"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetTargetLabelCount(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetTargetLabelCount(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetTargetLabelCount(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTargetLabelCount/SetTargetLabelCount\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("maximum_depth"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetMaximumDepth(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetMaximumDepth(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetMaximumDepth(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetMaximumDepth/SetMaximumDepth\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("text_property"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetTextProperty(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetTextProperty(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetTextProperty(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetTextProperty/SetTextProperty\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("priorities"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetPriorities(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetPriorities(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetPriorities(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetPriorities/SetPriorities\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("labels"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetLabels(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetLabels(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetLabels(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetLabels/SetLabels\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("orientations"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetOrientations(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetOrientations(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetOrientations(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetOrientations/SetOrientations\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("icon_indices"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetIconIndices(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetIconIndices(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetIconIndices(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetIconIndices/SetIconIndices\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("sizes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetSizes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetSizes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetSizes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSizes/SetSizes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("bounded_sizes"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetBoundedSizes(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLabelHierarchy_SetBoundedSizes(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLabelHierarchy_SetBoundedSizes(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetBoundedSizes/SetBoundedSizes\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("max_cell_size"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetMaxCellSize(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetMaxCellSize\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("center_pts"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetCenterPts(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCenterPts\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("coincident_points"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetCoincidentPoints(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetCoincidentPoints\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("number_of_cells"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLabelHierarchy_GetNumberOfCells(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfCells\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLabelHierarchy_Doc =
  "vtkLabelHierarchy - contains an octree of labels\n\n"
  "Superclass: vtkPointSet\n\n"
  "This class represents labels in a hierarchy used to denote rendering\n"
  "priority. A binary tree of labels is maintained that subdivides the\n"
  "bounds of the of the label anchors spatially. Which level of the tree\n"
  "a label occupies determines its priority; those at higher levels of\n"
  "the tree will be more likely to render than those at lower levels of\n"
  "the tree.\n\n"
  "Pass vtkLabelHierarchy objects to a vtkLabelPlacementMapper filter\n"
  "for dynamic, non-overlapping, per-frame placement of labels.\n\n"
  "Note that if we have a d-dimensional binary tree and we want a fixed\n"
  "number $n $ of labels in each node (all nodes, not just leaves), we\n"
  "can compute the depth of tree required assuming a uniform\n"
  "distribution of points. Given a total of $N $ points we know\n"
  "that$\\frac{N}{|T|} = n $, where $|T| $ is the cardinality of the tree\n"
  "(i.e., the number of nodes it contains). Because we have a uniform\n"
  "distribution, the tree will be uniformly subdivided and thus $|T| = 1\n"
  "+ 2^d + \\left(2^d\\right)^2 + \\cdots + \\left(2^d\\right)^k $, where $d $\n"
  "is the dimensionality of the input points (fixed at 3 for now). As $k $\n"
  "becomes large, $|T|\\approx 2 \\left(2^d\\right)^k $. Using this\n"
  "approximation, we can solve for $k $:\\[ k =\n"
  "\\frac{\\log{\\frac{N}{2n}}}{\\log{2^d}} \\] Given a set of $N $ input\n"
  "label anchors, we'll compute $k $ and then bin the anchors into tree\n"
  "nodes at level $k $ of the tree. After this, all the nodes will be in\n"
  "the leaves of the tree and those leaves will be at the $k $-th level;\n"
  "no anchors will be in levels $1, 2, \\ldots, k-1 $. To fix that, we'll\n"
  "choose to move some anchors upwards. The exact number to move upwards\n"
  "depends on TargetLabelCount. We'll move as many up as required to\n"
  "have TargetLabelCount at each node.\n\n"
  "You should avoid situations where MaximumDepth does not allow\n"
  "forTargetLabelCount or fewer entries at each node. The MaximumDepth\n"
  "is a hard limit while TargetLabelCount is a suggested optimum. You\n"
  "will end up with many more than TargetLabelCount entries per node and\n"
  "things will be sloooow.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelHierarchy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelHierarchy", // tp_name
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
  PyvtkLabelHierarchy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelHierarchy_StaticNew()
{
  return vtkLabelHierarchy::New();
}

PyObject *PyvtkLabelHierarchy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabelHierarchy_Type, PyvtkLabelHierarchy_Methods,
    "vtkLabelHierarchy",
 &PyvtkLabelHierarchy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSet");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLabelHierarchy_IteratorType_Type);
  PyVTKEnum_Add(&PyvtkLabelHierarchy_IteratorType_Type, "vtkLabelHierarchy.IteratorType");

  o = (PyObject *)&PyvtkLabelHierarchy_IteratorType_Type;
  if (PyDict_SetItemString(d, "IteratorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLabelHierarchy::IteratorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FULL_SORT", vtkLabelHierarchy::FULL_SORT },
        { "QUEUE", vtkLabelHierarchy::QUEUE },
        { "DEPTH_FIRST", vtkLabelHierarchy::DEPTH_FIRST },
        { "FRUSTUM", vtkLabelHierarchy::FRUSTUM },
      };

    o = PyvtkLabelHierarchy_IteratorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLabelHierarchy_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelHierarchy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelHierarchy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelHierarchy", o) != 0)
  {
    Py_DECREF(o);
  }

}

