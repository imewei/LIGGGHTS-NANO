// python wrapper for vtkGenerateTimeSteps
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenerateTimeSteps.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkGenerateTimeSteps(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkGenerateTimeSteps_ClassNew(); }


static PyObject *
PyvtkGenerateTimeSteps_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateTimeSteps::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateTimeSteps::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateTimeSteps *tempr = vtkGenerateTimeSteps::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateTimeSteps *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateTimeSteps::NewInstance());

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
PyvtkGenerateTimeSteps_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenerateTimeSteps::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenerateTimeSteps::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkGenerateTimeSteps::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_AddTimeStepValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStepValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

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
      op->vtkGenerateTimeSteps::AddTimeStepValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_SetTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepValues(temp0, temp1);
    }
    else
    {
      op->vtkGenerateTimeSteps::SetTimeStepValues(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_GetTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetTimeStepValues(temp0);
    }
    else
    {
      op->vtkGenerateTimeSteps::GetTimeStepValues(temp0);
    }

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


static PyObject *
PyvtkGenerateTimeSteps_GenerateTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

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
      op->GenerateTimeStepValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGenerateTimeSteps::GenerateTimeStepValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateTimeSteps_ClearTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateTimeSteps *op = static_cast<vtkGenerateTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearTimeStepValues();
    }
    else
    {
      op->vtkGenerateTimeSteps::ClearTimeStepValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateTimeSteps_Methods[] = {
  {"IsTypeOf", PyvtkGenerateTimeSteps_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateTimeSteps_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateTimeSteps_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenerateTimeSteps\nC++: static vtkGenerateTimeSteps *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateTimeSteps_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenerateTimeSteps\nC++: vtkGenerateTimeSteps *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenerateTimeSteps_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenerateTimeSteps_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfTimeSteps", PyvtkGenerateTimeSteps_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps that will be extracted\n"},
  {"AddTimeStepValue", PyvtkGenerateTimeSteps_AddTimeStepValue, METH_VARARGS,
   "AddTimeStepValue(self, timeStepValue:float) -> None\nC++: void AddTimeStepValue(double timeStepValue)\n\nAdd a time step value.\n"},
  {"SetTimeStepValues", PyvtkGenerateTimeSteps_SetTimeStepValues, METH_VARARGS,
   "SetTimeStepValues(self, count:int, timeStepValues:(float, ...))\n    -> None\nC++: void SetTimeStepValues(int count,\n    const double *timeStepValues)\n\nGet/Set an array of time step values. For the Get function,\ntimeStepValues should be big enough for GetNumberOfTimeSteps()\nvalues.\n"},
  {"GetTimeStepValues", PyvtkGenerateTimeSteps_GetTimeStepValues, METH_VARARGS,
   "GetTimeStepValues(self, timeStepValues:[float, ...]) -> None\nC++: void GetTimeStepValues(double *timeStepValues)\n\n"},
  {"GenerateTimeStepValues", PyvtkGenerateTimeSteps_GenerateTimeStepValues, METH_VARARGS,
   "GenerateTimeStepValues(self, begin:float, end:float, step:float)\n    -> None\nC++: void GenerateTimeStepValues(double begin, double end,\n    double step)\n\nGenerate a range of values in [begin, end) with a step size of\n'step'\n"},
  {"ClearTimeStepValues", PyvtkGenerateTimeSteps_ClearTimeStepValues, METH_VARARGS,
   "ClearTimeStepValues(self) -> None\nC++: void ClearTimeStepValues()\n\nClear the time step values\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkGenerateTimeSteps_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("number_of_time_steps"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkGenerateTimeSteps_GetNumberOfTimeSteps(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetNumberOfTimeSteps\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkGenerateTimeSteps_Doc =
  "vtkGenerateTimeSteps - Generate timesteps on any input\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "A vtkPassInputTypeAlgorithm that add timesteps during the request\n"
  "information pass and just shallow copy its input to its output. Input\n"
  "timesteps are completely ignored.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenerateTimeSteps_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkGenerateTimeSteps", // tp_name
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
  PyvtkGenerateTimeSteps_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateTimeSteps_StaticNew()
{
  return vtkGenerateTimeSteps::New();
}

PyObject *PyvtkGenerateTimeSteps_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenerateTimeSteps_Type, PyvtkGenerateTimeSteps_Methods,
    "vtkGenerateTimeSteps",
 &PyvtkGenerateTimeSteps_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkGenerateTimeSteps_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateTimeSteps(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateTimeSteps_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateTimeSteps", o) != 0)
  {
    Py_DECREF(o);
  }

}

