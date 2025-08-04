// python wrapper for vtkColorSeries
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkColorSeries.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkColorSeries(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkColorSeries_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColorSeries_ColorSchemes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonColor.vtkColorSeries.ColorSchemes", // tp_name
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
static PyObject *PyvtkColorSeries_ColorSchemes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkColorSeries_ColorSchemes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColorSeries_LUTMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonColor.vtkColorSeries.LUTMode", // tp_name
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
static PyObject *PyvtkColorSeries_LUTMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkColorSeries_LUTMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkColorSeries_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorSeries::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorSeries::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorSeries *tempr = vtkColorSeries::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorSeries *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorSeries::NewInstance());

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
PyvtkColorSeries_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkColorSeries::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkColorSeries::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorScheme(temp0);
    }
    else
    {
      op->vtkColorSeries::SetColorScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetColorSchemeByName(temp0) :
      op->vtkColorSeries::SetColorSchemeByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColorSchemes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorSchemes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorSchemes() :
      op->vtkColorSeries::GetNumberOfColorSchemes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorSchemeName() :
      op->vtkColorSeries::GetColorSchemeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorSchemeName(temp0);
    }
    else
    {
      op->vtkColorSeries::SetColorSchemeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorScheme() :
      op->vtkColorSeries::GetColorScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkColorSeries::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfColors(temp0);
    }
    else
    {
      op->vtkColorSeries::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkColorSeries::GetColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorRepeating(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRepeating");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColorRepeating(temp0) :
      op->vtkColorSeries::GetColorRepeating(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkColorSeries::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_AddColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColor3ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->AddColor(*temp0);
    }
    else
    {
      op->vtkColorSeries::AddColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkColorSeries_InsertColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->InsertColor(temp0, *temp1);
    }
    else
    {
      op->vtkColorSeries::InsertColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColor(temp0);
    }
    else
    {
      op->vtkColorSeries::RemoveColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColors();
    }
    else
    {
      op->vtkColorSeries::ClearColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColorSeries *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkColorSeries::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_BuildLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkLookupTable *temp0 = nullptr;
  int temp1 = vtkColorSeries::CATEGORICAL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkLookupTable") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->BuildLookupTable(temp0, temp1);
    }
    else
    {
      op->vtkColorSeries::BuildLookupTable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_CreateLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0 = vtkColorSeries::CATEGORICAL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->CreateLookupTable(temp0) :
      op->vtkColorSeries::CreateLookupTable(temp0));

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

static PyMethodDef PyvtkColorSeries_Methods[] = {
  {"IsTypeOf", PyvtkColorSeries_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorSeries_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorSeries_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkColorSeries\nC++: static vtkColorSeries *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorSeries_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkColorSeries\nC++: vtkColorSeries *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkColorSeries_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkColorSeries_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColorScheme", PyvtkColorSeries_SetColorScheme, METH_VARARGS,
   "SetColorScheme(self, scheme:int) -> None\nC++: virtual void SetColorScheme(int scheme)\n\nSet the color scheme that should be used. The variant of this\nfunction that takes an integer should pass a number from those in\nthe enum, or a value returned by the string variant. The variant\nthat accepts a string returns the integer index of the resulting\npalette (whether it already existed or is newly-created).\n"},
  {"SetColorSchemeByName", PyvtkColorSeries_SetColorSchemeByName, METH_VARARGS,
   "SetColorSchemeByName(self, schemeName:str) -> int\nC++: virtual int SetColorSchemeByName(\n    const vtkStdString &schemeName)\n\n"},
  {"GetNumberOfColorSchemes", PyvtkColorSeries_GetNumberOfColorSchemes, METH_VARARGS,
   "GetNumberOfColorSchemes(self) -> int\nC++: int GetNumberOfColorSchemes()\n\nReturn the number of schemes currently defined.\n"},
  {"GetColorSchemeName", PyvtkColorSeries_GetColorSchemeName, METH_VARARGS,
   "GetColorSchemeName(self) -> str\nC++: virtual vtkStdString GetColorSchemeName()\n\nGet the color scheme that is currently being used.\n"},
  {"SetColorSchemeName", PyvtkColorSeries_SetColorSchemeName, METH_VARARGS,
   "SetColorSchemeName(self, name:str) -> None\nC++: virtual void SetColorSchemeName(const vtkStdString &name)\n\nSet the name of the current color scheme\n"},
  {"GetColorScheme", PyvtkColorSeries_GetColorScheme, METH_VARARGS,
   "GetColorScheme(self) -> int\nC++: virtual int GetColorScheme()\n\nReturn the ID of the color scheme currently in use.\n"},
  {"GetNumberOfColors", PyvtkColorSeries_GetNumberOfColors, METH_VARARGS,
   "GetNumberOfColors(self) -> int\nC++: virtual int GetNumberOfColors()\n\nGet the number of colors available in the current color scheme.\n"},
  {"SetNumberOfColors", PyvtkColorSeries_SetNumberOfColors, METH_VARARGS,
   "SetNumberOfColors(self, numColors:int) -> None\nC++: virtual void SetNumberOfColors(int numColors)\n\nSet the number of colors to be stored in a non-default color\nscheme. Calling this function on a predefined color scheme will\ncause the scheme to be duplicated to a new custom scheme.\n"},
  {"GetColor", PyvtkColorSeries_GetColor, METH_VARARGS,
   "GetColor(self, index:int) -> vtkColor3ub\nC++: vtkColor3ub GetColor(int index)\n\nGet the color at the specified index. If the index is out of\nrange then black will be returned.\n"},
  {"GetColorRepeating", PyvtkColorSeries_GetColorRepeating, METH_VARARGS,
   "GetColorRepeating(self, index:int) -> vtkColor3ub\nC++: vtkColor3ub GetColorRepeating(int index)\n\nGet the color at the specified index. If the index is out of\nrange then the call wraps around, i.e. uses the mod operator.\n"},
  {"SetColor", PyvtkColorSeries_SetColor, METH_VARARGS,
   "SetColor(self, index:int, color:vtkColor3ub) -> None\nC++: virtual void SetColor(int index, const vtkColor3ub &color)\n\nSet the color at the specified index. Does nothing if the index\nis out of range.\n"},
  {"AddColor", PyvtkColorSeries_AddColor, METH_VARARGS,
   "AddColor(self, color:vtkColor3ub) -> None\nC++: virtual void AddColor(const vtkColor3ub &color)\n\nAdds the color to the end of the list.\n"},
  {"InsertColor", PyvtkColorSeries_InsertColor, METH_VARARGS,
   "InsertColor(self, index:int, color:vtkColor3ub) -> None\nC++: virtual void InsertColor(int index, const vtkColor3ub &color)\n\nInserts the color at the specified index in the list.\n"},
  {"RemoveColor", PyvtkColorSeries_RemoveColor, METH_VARARGS,
   "RemoveColor(self, index:int) -> None\nC++: virtual void RemoveColor(int index)\n\nRemoves the color at the specified index in the list.\n"},
  {"ClearColors", PyvtkColorSeries_ClearColors, METH_VARARGS,
   "ClearColors(self) -> None\nC++: virtual void ClearColors()\n\nClears the list of colors.\n"},
  {"DeepCopy", PyvtkColorSeries_DeepCopy, METH_VARARGS,
   "DeepCopy(self, chartColors:vtkColorSeries) -> None\nC++: virtual void DeepCopy(vtkColorSeries *chartColors)\n\nMake a deep copy of the supplied object.\n"},
  {"BuildLookupTable", PyvtkColorSeries_BuildLookupTable, METH_VARARGS,
   "BuildLookupTable(self, lkup:vtkLookupTable, lutIndexing:int=...)\n    -> None\nC++: void BuildLookupTable(vtkLookupTable *lkup,\n    int lutIndexing=CATEGORICAL)\n\nPopulate a lookup table with all the colors in the current\nscheme.\n\n* The default behavior is to return categorical data. Set\n  lutIndexing\n* to ORDINAL to return ordinal data. Any other value for\n  lutIndexing\n* is treated as CATEGORICAL.\n"},
  {"CreateLookupTable", PyvtkColorSeries_CreateLookupTable, METH_VARARGS,
   "CreateLookupTable(self, lutIndexing:int=...) -> vtkLookupTable\nC++: vtkLookupTable *CreateLookupTable(\n    int lutIndexing=CATEGORICAL)\n\nCreate a new lookup table with all the colors in the current\nscheme.\n\n* The caller is responsible for deleting the table after use.\n\n* The default behavior is to return categorical data. Set\n  lutIndexing\n* to ORDINAL to return ordinal data. Any other value for\n  lutIndexing\n* is treated as CATEGORICAL.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkColorSeries_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("color_scheme"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkColorSeries_GetColorScheme(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkColorSeries_SetColorScheme(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkColorSeries_SetColorScheme(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetColorScheme/SetColorScheme\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("color_scheme_name"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkColorSeries_GetColorSchemeName(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkColorSeries_SetColorSchemeName(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkColorSeries_SetColorSchemeName(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetColorSchemeName/SetColorSchemeName\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkColorSeries_Doc =
  "vtkColorSeries - stores a list of colors.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkColorSeries stores palettes of colors. There are several\n"
  "default palettes (or schemes) available and functions to control\n"
  "several aspects of what colors are returned. In essence a color\n"
  "scheme is set and then the number of colors and individual color\n"
  "values may be requested.\n\n"
  "For a web page showcasing the default palettes, see: <a\n"
  "href=\"https://htmlpreview.github.io/?https://github.com/Kitware/vtk-examples/blob/gh-pages/VTKColorSeriesPatches.html\"\n"
  ">VTKColorSeriesPatches; <a\n"
  "href=\"https://kitware.github.io/vtk-examples/site/Python/Visualization/ColorSeriesPatches/\"\n"
  ">ColorSeriesPatches was used to generate this table.\n\n"
  "It is also possible to add schemes beyond the default palettes.\n"
  "Whenever SetColorScheme is called with a string for which no palette\n"
  "already exists, a new, empty palette is created. You may then use\n"
  "SetNumberOfColors and SetColor to populate the palette. You may not\n"
  "extend default palettes by calling functions that alter a scheme; if\n"
  "called while a predefined palette is in use, they will create a new\n"
  "non-default scheme and populate it with the current palette before\n"
  "continuing.\n\n"
  "The \"Brewer\" palettes are courtesy of Cynthia A. Brewer (Dept. of\n"
  "Geography, Pennsylvania State University) and under the Apache\n"
  "License. See the source code for details.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColorSeries_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonColor.vtkColorSeries", // tp_name
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
  PyvtkColorSeries_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorSeries_StaticNew()
{
  return vtkColorSeries::New();
}

PyObject *PyvtkColorSeries_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkColorSeries_Type, PyvtkColorSeries_Methods,
    "vtkColorSeries",
 &PyvtkColorSeries_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkColorSeries_ColorSchemes_Type);
  PyVTKEnum_Add(&PyvtkColorSeries_ColorSchemes_Type, "vtkColorSeries.ColorSchemes");

  o = (PyObject *)&PyvtkColorSeries_ColorSchemes_Type;
  if (PyDict_SetItemString(d, "ColorSchemes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkColorSeries_LUTMode_Type);
  PyVTKEnum_Add(&PyvtkColorSeries_LUTMode_Type, "vtkColorSeries.LUTMode");

  o = (PyObject *)&PyvtkColorSeries_LUTMode_Type;
  if (PyDict_SetItemString(d, "LUTMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 63; c++)
  {
    typedef vtkColorSeries::ColorSchemes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[63] = {
        { "SPECTRUM", vtkColorSeries::SPECTRUM },
        { "WARM", vtkColorSeries::WARM },
        { "COOL", vtkColorSeries::COOL },
        { "BLUES", vtkColorSeries::BLUES },
        { "WILD_FLOWER", vtkColorSeries::WILD_FLOWER },
        { "CITRUS", vtkColorSeries::CITRUS },
        { "BREWER_DIVERGING_PURPLE_ORANGE_11", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_11 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_10", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_10 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_9", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_9 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_8", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_8 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_7", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_7 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_6", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_6 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_5", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_5 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_4", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_4 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_3", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_3 },
        { "BREWER_DIVERGING_SPECTRAL_11", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_11 },
        { "BREWER_DIVERGING_SPECTRAL_10", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_10 },
        { "BREWER_DIVERGING_SPECTRAL_9", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_9 },
        { "BREWER_DIVERGING_SPECTRAL_8", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_8 },
        { "BREWER_DIVERGING_SPECTRAL_7", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_7 },
        { "BREWER_DIVERGING_SPECTRAL_6", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_6 },
        { "BREWER_DIVERGING_SPECTRAL_5", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_5 },
        { "BREWER_DIVERGING_SPECTRAL_4", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_4 },
        { "BREWER_DIVERGING_SPECTRAL_3", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_3 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_11", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_11 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_10", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_10 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_9", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_9 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_8", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_8 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_7", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_7 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_6", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_6 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_5", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_5 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_4", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_4 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_3", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_3 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_9 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_8 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_7 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_6 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_5 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_4 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_3 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_9 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_8 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_7 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_6 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_5 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_4 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_3 },
        { "BREWER_QUALITATIVE_ACCENT", vtkColorSeries::BREWER_QUALITATIVE_ACCENT },
        { "BREWER_QUALITATIVE_DARK2", vtkColorSeries::BREWER_QUALITATIVE_DARK2 },
        { "BREWER_QUALITATIVE_SET2", vtkColorSeries::BREWER_QUALITATIVE_SET2 },
        { "BREWER_QUALITATIVE_PASTEL2", vtkColorSeries::BREWER_QUALITATIVE_PASTEL2 },
        { "BREWER_QUALITATIVE_PASTEL1", vtkColorSeries::BREWER_QUALITATIVE_PASTEL1 },
        { "BREWER_QUALITATIVE_SET1", vtkColorSeries::BREWER_QUALITATIVE_SET1 },
        { "BREWER_QUALITATIVE_PAIRED", vtkColorSeries::BREWER_QUALITATIVE_PAIRED },
        { "BREWER_QUALITATIVE_SET3", vtkColorSeries::BREWER_QUALITATIVE_SET3 },
        { "CUSTOM", vtkColorSeries::CUSTOM },
      };

    o = PyvtkColorSeries_ColorSchemes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkColorSeries::LUTMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ORDINAL", vtkColorSeries::ORDINAL },
        { "CATEGORICAL", vtkColorSeries::CATEGORICAL },
      };

    o = PyvtkColorSeries_LUTMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkColorSeries_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColorSeries(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorSeries_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorSeries", o) != 0)
  {
    Py_DECREF(o);
  }

}

