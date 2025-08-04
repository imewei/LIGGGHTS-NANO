// python wrapper for vtkMinimalStandardRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMinimalStandardRandomSequence.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMinimalStandardRandomSequence(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMinimalStandardRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkRandomSequence_ClassNew
extern "C" { PyObject *PyvtkRandomSequence_ClassNew(); }
#define DECLARED_PyvtkRandomSequence_ClassNew
#endif

static PyObject *
PyvtkMinimalStandardRandomSequence_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMinimalStandardRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMinimalStandardRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMinimalStandardRandomSequence *tempr = vtkMinimalStandardRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMinimalStandardRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMinimalStandardRandomSequence::NewInstance());

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
PyvtkMinimalStandardRandomSequence_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMinimalStandardRandomSequence::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMinimalStandardRandomSequence::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMinimalStandardRandomSequence::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkMinimalStandardRandomSequence::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_SetSeedOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeedOnly(temp0);
    }
    else
    {
      op->vtkMinimalStandardRandomSequence::SetSeedOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkMinimalStandardRandomSequence::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkMinimalStandardRandomSequence::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkMinimalStandardRandomSequence::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetRangeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetRangeValue(temp0, temp1) :
      op->vtkMinimalStandardRandomSequence::GetRangeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetNextRangeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextRangeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetNextRangeValue(temp0, temp1) :
      op->vtkMinimalStandardRandomSequence::GetNextRangeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMinimalStandardRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkMinimalStandardRandomSequence_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMinimalStandardRandomSequence_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMinimalStandardRandomSequence_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMinimalStandardRandomSequence\nC++: static vtkMinimalStandardRandomSequence *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMinimalStandardRandomSequence_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMinimalStandardRandomSequence\nC++: vtkMinimalStandardRandomSequence *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMinimalStandardRandomSequence_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMinimalStandardRandomSequence_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkMinimalStandardRandomSequence_Initialize, METH_VARARGS,
   "Initialize(self, seed:int) -> None\nC++: void Initialize(vtkTypeUInt32 seed) override;\n\nSatisfy general API of vtkRandomSequence superclass. Initialize\nthe sequence with a seed.\n"},
  {"SetSeed", PyvtkMinimalStandardRandomSequence_SetSeed, METH_VARARGS,
   "SetSeed(self, value:int) -> None\nC++: void SetSeed(int value)\n\nSet the seed of the random sequence. The following pre-condition\nis stated page 1197, second column: valid_seed: value>=1 &&\nvalue<=2147483646 2147483646=(2^31)-2 This method does not have\nthis criterium as a pre-condition (ie it will not fail if an\nincorrect seed value is passed) but the value is silently changed\nto fit in the valid range [1,2147483646]. 2147483646 is added to\na null or negative value. 2147483647 is changed to be 1 (ie\n2147483646 is subtracted). Implementation note: it also performs\n3 calls to Next() to avoid the bad property that the first random\nnumber is proportional to the seed value.\n"},
  {"SetSeedOnly", PyvtkMinimalStandardRandomSequence_SetSeedOnly, METH_VARARGS,
   "SetSeedOnly(self, value:int) -> None\nC++: void SetSeedOnly(int value)\n\nSet the seed of the random sequence. There is no extra internal\nadjustment. Only useful for writing correctness test. The\nfollowing pre-condition is stated page 1197, second column\n2147483646=(2^31)-2 This method does not have this criterium as a\npre-condition (ie it will not fail if an incorrect seed value is\npassed) but the value is silently changed to fit in the valid\nrange [1,2147483646]. 2147483646 is added to a null or negative\nvalue. 2147483647 is changed to be 1 (ie 2147483646 is\nsubtracted).\n"},
  {"GetSeed", PyvtkMinimalStandardRandomSequence_GetSeed, METH_VARARGS,
   "GetSeed(self) -> int\nC++: int GetSeed()\n\nGet the seed of the random sequence. Only useful for writing\ncorrectness test.\n"},
  {"GetValue", PyvtkMinimalStandardRandomSequence_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: double GetValue() override;\n\nCurrent value\n\\post unit_range: result>=0.0 && result<=1.0\n"},
  {"Next", PyvtkMinimalStandardRandomSequence_Next, METH_VARARGS,
   "Next(self) -> None\nC++: void Next() override;\n\nMove to the next number in the random sequence.\n"},
  {"GetRangeValue", PyvtkMinimalStandardRandomSequence_GetRangeValue, METH_VARARGS,
   "GetRangeValue(self, rangeMin:float, rangeMax:float) -> float\nC++: virtual double GetRangeValue(double rangeMin,\n    double rangeMax)\n\nConvenient method to return a value in a specific range from the\nrange [0,1. There is an initial implementation that can be\noverridden by a subclass. There is no pre-condition on the range:\n- it can be in increasing order: rangeMin<rangeMax\n- it can be empty: rangeMin=rangeMax\n- it can be in decreasing order: rangeMin>rangeMax\n\\post result_in_range:\n(rangeMin<=rangeMax && result>=rangeMin && result<=rangeMax) ||\n(rangeMax<=rangeMin && result>=rangeMax && result<=rangeMin)\n"},
  {"GetNextRangeValue", PyvtkMinimalStandardRandomSequence_GetNextRangeValue, METH_VARARGS,
   "GetNextRangeValue(self, rangeMin:float, rangeMax:float) -> float\nC++: double GetNextRangeValue(double rangeMin, double rangeMax)\n\nGet the next value in the sequence within a range.\n\n\\see vtkMinimalStandardRandomSequence::GetRangeValue\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMinimalStandardRandomSequence_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("seed"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMinimalStandardRandomSequence_GetSeed(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkMinimalStandardRandomSequence_SetSeed(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkMinimalStandardRandomSequence_SetSeed(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetSeed/SetSeed\n"),
    /*closure=*/nullptr,
  },
  {
    /*name=*/pystr("value"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkMinimalStandardRandomSequence_GetValue(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/nullptr,
    /*doc=*/pystr("read-only, Calls GetValue\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMinimalStandardRandomSequence_Doc =
  "vtkMinimalStandardRandomSequence - Park and Miller Sequence of pseudo\nrandom numbers\n\n"
  "Superclass: vtkRandomSequence\n\n"
  "vtkMinimalStandardRandomSequence is a sequence of statistically\n"
  "independent pseudo random numbers uniformly distributed between 0.0\n"
  "and 1.0.\n\n"
  "The sequence is generated by a prime modulus multiplicative linear\n"
  "congruential generator (PMMLCG) or \"Lehmer generator\" with multiplier\n"
  "16807 and prime modulus 2^(31)-1. The authors calls it \"minimal standard random number\n"
  "generator\"\n\n"
  "ref: \"Random Number Generators: Good Ones are Hard to Find,\" by\n"
  "Stephen K. Park and Keith W. Miller in Communications of the ACM, 31,\n"
  "10 (Oct. 1988) pp. 1192-1201. Code is at page 1195, \"Integer version\n"
  "2\"\n\n"
  "Correctness test is described in first column, page 1195: A seed of 1\n"
  "at step 1 should give a seed of 1043618065 at step 10001.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMinimalStandardRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkMinimalStandardRandomSequence", // tp_name
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
  PyvtkMinimalStandardRandomSequence_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMinimalStandardRandomSequence_StaticNew()
{
  return vtkMinimalStandardRandomSequence::New();
}

PyObject *PyvtkMinimalStandardRandomSequence_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMinimalStandardRandomSequence_Type, PyvtkMinimalStandardRandomSequence_Methods,
    "vtkMinimalStandardRandomSequence",
 &PyvtkMinimalStandardRandomSequence_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRandomSequence_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMinimalStandardRandomSequence_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMinimalStandardRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMinimalStandardRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMinimalStandardRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

