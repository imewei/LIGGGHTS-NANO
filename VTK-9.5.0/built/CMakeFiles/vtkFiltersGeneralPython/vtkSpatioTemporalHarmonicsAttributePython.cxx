// python wrapper for vtkSpatioTemporalHarmonicsAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpatioTemporalHarmonicsAttribute.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSpatioTemporalHarmonicsAttribute(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSpatioTemporalHarmonicsAttribute_ClassNew(); }


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpatioTemporalHarmonicsAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpatioTemporalHarmonicsAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpatioTemporalHarmonicsAttribute *tempr = vtkSpatioTemporalHarmonicsAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpatioTemporalHarmonicsAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpatioTemporalHarmonicsAttribute::NewInstance());

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
PyvtkSpatioTemporalHarmonicsAttribute_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpatioTemporalHarmonicsAttribute::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpatioTemporalHarmonicsAttribute::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_AddHarmonic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHarmonic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

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
      op->AddHarmonic(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsAttribute::AddHarmonic(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_ClearHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearHarmonics();
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsAttribute::ClearHarmonics();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_HasHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasHarmonics() :
      op->vtkSpatioTemporalHarmonicsAttribute::HasHarmonics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsAttribute_ComputeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsAttribute *op = static_cast<vtkSpatioTemporalHarmonicsAttribute *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->ComputeValue(temp0, temp1) :
      op->vtkSpatioTemporalHarmonicsAttribute::ComputeValue(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpatioTemporalHarmonicsAttribute_Methods[] = {
  {"IsTypeOf", PyvtkSpatioTemporalHarmonicsAttribute_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpatioTemporalHarmonicsAttribute_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpatioTemporalHarmonicsAttribute_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSpatioTemporalHarmonicsAttribute\nC++: static vtkSpatioTemporalHarmonicsAttribute *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpatioTemporalHarmonicsAttribute_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpatioTemporalHarmonicsAttribute\nC++: vtkSpatioTemporalHarmonicsAttribute *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpatioTemporalHarmonicsAttribute_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpatioTemporalHarmonicsAttribute_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddHarmonic", PyvtkSpatioTemporalHarmonicsAttribute_AddHarmonic, METH_VARARGS,
   "AddHarmonic(self, amplitude:float, temporalFrequency:float,\n    xWaveVector:float, yWaveVector:float, zWaveVector:float,\n    phase:float) -> None\nC++: void AddHarmonic(double amplitude, double temporalFrequency,\n    double xWaveVector, double yWaveVector, double zWaveVector,\n    double phase)\n\nAdd an harmonic with all needed parameters.\n"},
  {"ClearHarmonics", PyvtkSpatioTemporalHarmonicsAttribute_ClearHarmonics, METH_VARARGS,
   "ClearHarmonics(self) -> None\nC++: void ClearHarmonics()\n\nClear all harmonics.\n"},
  {"HasHarmonics", PyvtkSpatioTemporalHarmonicsAttribute_HasHarmonics, METH_VARARGS,
   "HasHarmonics(self) -> bool\nC++: bool HasHarmonics()\n\nWhether the filter has harmonics set, or is empty.\n"},
  {"ComputeValue", PyvtkSpatioTemporalHarmonicsAttribute_ComputeValue, METH_VARARGS,
   "ComputeValue(self, coords:[float, float, float], time:float)\n    -> float\nC++: double ComputeValue(double coords[3], double time)\n\nCompute spatio-temporal harmonic using filter-defined harmonics.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSpatioTemporalHarmonicsAttribute_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSpatioTemporalHarmonicsAttribute_Doc =
  "vtkSpatioTemporalHarmonicsAttribute - Computes spatio-temporal\nharmonics on each point.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSpatioTemporalHarmonicsAttribute is a filter that adds a data\n"
  "array storing spatio-temporal harmonics defined by the filter. Those\n"
  "harmonics are defined by their amplitude, temporal frequency, wave\n"
  "vector, and phase, with only a sinus function (no cosinus).\n\n"
  "Note that the data array generated is a vtkDoubleArray that is set as\n"
  "the output SCALARS attribute.\n\n"
  "@sa vtkSpatioTemporalHarmonicsSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpatioTemporalHarmonicsAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSpatioTemporalHarmonicsAttribute", // tp_name
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
  PyvtkSpatioTemporalHarmonicsAttribute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpatioTemporalHarmonicsAttribute_StaticNew()
{
  return vtkSpatioTemporalHarmonicsAttribute::New();
}

PyObject *PyvtkSpatioTemporalHarmonicsAttribute_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpatioTemporalHarmonicsAttribute_Type, PyvtkSpatioTemporalHarmonicsAttribute_Methods,
    "vtkSpatioTemporalHarmonicsAttribute",
 &PyvtkSpatioTemporalHarmonicsAttribute_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSpatioTemporalHarmonicsAttribute_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpatioTemporalHarmonicsAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpatioTemporalHarmonicsAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpatioTemporalHarmonicsAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

}

