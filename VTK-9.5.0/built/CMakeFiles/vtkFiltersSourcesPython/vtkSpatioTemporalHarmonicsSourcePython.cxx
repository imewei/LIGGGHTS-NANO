// python wrapper for vtkSpatioTemporalHarmonicsSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpatioTemporalHarmonicsSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkSpatioTemporalHarmonicsSource(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkSpatioTemporalHarmonicsSource_ClassNew(); }


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpatioTemporalHarmonicsSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpatioTemporalHarmonicsSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpatioTemporalHarmonicsSource *tempr = vtkSpatioTemporalHarmonicsSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpatioTemporalHarmonicsSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpatioTemporalHarmonicsSource::NewInstance());

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
PyvtkSpatioTemporalHarmonicsSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpatioTemporalHarmonicsSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpatioTemporalHarmonicsSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkSpatioTemporalHarmonicsSource::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_AddTimeStepValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStepValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddTimeStepValue(temp0);
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::AddTimeStepValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_ClearTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearTimeStepValues();
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::ClearTimeStepValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_ResetTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetTimeStepValues();
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::ResetTimeStepValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_AddHarmonic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHarmonic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

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
      op->vtkSpatioTemporalHarmonicsSource::AddHarmonic(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_ClearHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearHarmonics();
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::ClearHarmonics();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpatioTemporalHarmonicsSource_ResetHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatioTemporalHarmonicsSource *op = static_cast<vtkSpatioTemporalHarmonicsSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetHarmonics();
    }
    else
    {
      op->vtkSpatioTemporalHarmonicsSource::ResetHarmonics();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpatioTemporalHarmonicsSource_Methods[] = {
  {"IsTypeOf", PyvtkSpatioTemporalHarmonicsSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpatioTemporalHarmonicsSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpatioTemporalHarmonicsSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpatioTemporalHarmonicsSource\nC++: static vtkSpatioTemporalHarmonicsSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpatioTemporalHarmonicsSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpatioTemporalHarmonicsSource\nC++: vtkSpatioTemporalHarmonicsSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpatioTemporalHarmonicsSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpatioTemporalHarmonicsSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetWholeExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetWholeExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetWholeExtent(const int _arg[6])\n\nSet/Get the image extent. Default is (-10, 10, -10, 10, -10, 10).\n"},
  {"GetWholeExtent", PyvtkSpatioTemporalHarmonicsSource_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\n\n"},
  {"AddTimeStepValue", PyvtkSpatioTemporalHarmonicsSource_AddTimeStepValue, METH_VARARGS,
   "AddTimeStepValue(self, timeStepValue:float) -> None\nC++: void AddTimeStepValue(double timeStepValue)\n\nAdd a time step value. You may want to remove default values\nfirst.\n"},
  {"ClearTimeStepValues", PyvtkSpatioTemporalHarmonicsSource_ClearTimeStepValues, METH_VARARGS,
   "ClearTimeStepValues(self) -> None\nC++: void ClearTimeStepValues()\n\nClear time step values.\n"},
  {"ResetTimeStepValues", PyvtkSpatioTemporalHarmonicsSource_ResetTimeStepValues, METH_VARARGS,
   "ResetTimeStepValues(self) -> None\nC++: void ResetTimeStepValues()\n\nReset time step values to default. By default, the source has 20\ntime steps ranging from 0 to 2*PI. The default values allows an\ninfinite loop of default harmonics.\n"},
  {"AddHarmonic", PyvtkSpatioTemporalHarmonicsSource_AddHarmonic, METH_VARARGS,
   "AddHarmonic(self, amplitude:float, temporalFrequency:float,\n    xWaveVector:float, yWaveVector:float, zWaveVector:float,\n    phase:float) -> None\nC++: void AddHarmonic(double amplitude, double temporalFrequency,\n    double xWaveVector, double yWaveVector, double zWaveVector,\n    double phase)\n\nAdd an harmonic with all needed parameters. You may want to\nremove default harmonics first.\n"},
  {"ClearHarmonics", PyvtkSpatioTemporalHarmonicsSource_ClearHarmonics, METH_VARARGS,
   "ClearHarmonics(self) -> None\nC++: void ClearHarmonics()\n\nClear all harmonics.\n"},
  {"ResetHarmonics", PyvtkSpatioTemporalHarmonicsSource_ResetHarmonics, METH_VARARGS,
   "ResetHarmonics(self) -> None\nC++: void ResetHarmonics()\n\nReset harmonics to default. By default, the source has harmonics\nin each direction, with phase shifts and different frequencies.\nThe default wave vector is scaled to match default extent.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkSpatioTemporalHarmonicsSource_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("whole_extent"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkSpatioTemporalHarmonicsSource_GetWholeExtent(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkSpatioTemporalHarmonicsSource_SetWholeExtent(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetWholeExtent/SetWholeExtent\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkSpatioTemporalHarmonicsSource_Doc =
  "vtkSpatioTemporalHarmonicsSource - Creates a vtkImageData with\nharmonics data.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkSpatioTemporalHarmonicsSource creates a vtkImageData source that\n"
  "will have harmonics data on its points. It simply applies a\n"
  "vtkSpatioTemporalHarmonicsAttributes on the generated image. It also\n"
  "allows generation of time steps.\n\n"
  "Note that default harmonics and time step values are set for common\n"
  "usage. Make sure to clear them before adding your own values.\n\n"
  "@sa vtkImageData vtkSpatioTemporalHarmonicsAttribute\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpatioTemporalHarmonicsSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkSpatioTemporalHarmonicsSource", // tp_name
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
  PyvtkSpatioTemporalHarmonicsSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpatioTemporalHarmonicsSource_StaticNew()
{
  return vtkSpatioTemporalHarmonicsSource::New();
}

PyObject *PyvtkSpatioTemporalHarmonicsSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpatioTemporalHarmonicsSource_Type, PyvtkSpatioTemporalHarmonicsSource_Methods,
    "vtkSpatioTemporalHarmonicsSource",
 &PyvtkSpatioTemporalHarmonicsSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkSpatioTemporalHarmonicsSource_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpatioTemporalHarmonicsSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpatioTemporalHarmonicsSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpatioTemporalHarmonicsSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

