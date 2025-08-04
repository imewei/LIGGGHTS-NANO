// python wrapper for vtkArrayWeights
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayWeights.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkArrayWeights(PyObject *dict); }

static PyObject *
PyvtkArrayWeights_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetCount();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayWeights_SetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCount(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayWeights_Methods[] = {
  {"GetCount", PyvtkArrayWeights_GetCount, METH_VARARGS,
   "GetCount(self) -> int\nC++: vtkIdType GetCount()\n\nReturns the number of weights stored in this container.\n"},
  {"SetCount", PyvtkArrayWeights_SetCount, METH_VARARGS,
   "SetCount(self, count:int) -> None\nC++: void SetCount(vtkIdType count)\n\nSets the number of weights stored in this container.  Note that\neach weight will be reset to 0.0 after calling SetCount(), use\noperator[] to assign the desired value for each weight.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkArrayWeights_GetSets[] = {
  {
    /*name=*/pystr("count"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkArrayWeights_GetCount(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkArrayWeights_SetCount(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkArrayWeights_SetCount(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetCount/SetCount\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayWeights *op = new vtkArrayWeights();

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  vtkArrayWeights *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayWeights"))
  {
    vtkArrayWeights *op = new vtkArrayWeights(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyMethodDef PyvtkArrayWeights_vtkArrayWeights_Methods[] = {
  {"vtkArrayWeights", PyvtkArrayWeights_vtkArrayWeights_s2, METH_VARARGS,
   "@W vtkArrayWeights"},
  {"vtkArrayWeights", PyvtkArrayWeights_vtkArrayWeights_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayWeights_vtkArrayWeights(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayWeights_vtkArrayWeights_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayWeights_vtkArrayWeights_s1(self, args);
    case 2:
      return PyvtkArrayWeights_vtkArrayWeights_s4(self, args);
    case 3:
      return PyvtkArrayWeights_vtkArrayWeights_s5(self, args);
    case 4:
      return PyvtkArrayWeights_vtkArrayWeights_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayWeights");
  return nullptr;
}


static const char *PyvtkArrayWeights_Doc =

  "vtkArrayWeights() -> vtkArrayWeights\nC++: vtkArrayWeights()\nvtkArrayWeights(other:vtkArrayWeights) -> vtkArrayWeights\nC++: vtkArrayWeights(const vtkArrayWeights &other)\nvtkArrayWeights(i:float) -> vtkArrayWeights\nC++: vtkArrayWeights(double i)\nvtkArrayWeights(i:float, j:float) -> vtkArrayWeights\nC++: vtkArrayWeights(double i, double j)\nvtkArrayWeights(i:float, j:float, k:float) -> vtkArrayWeights\nC++: vtkArrayWeights(double i, double j, double k)\nvtkArrayWeights(i:float, j:float, k:float, l:float) -> vtkArrayWeights\nC++: vtkArrayWeights(double i, double j, double k, double l)\n""\n"
  "vtkArrayWeights - Stores a collection of weighting factors.\n\n"
  "vtkArrayWeights provides storage for a collection of weights to be\n"
  "used when merging / interpolating N-way arrays.  Convenience\n"
  "constructors are provided for working with one, two, three, and four\n"
  "weighting factors.  For arbitrary collections of weights, use\n"
  "SetCount() and operator[] to assign values.\n\n"
  "vtkArrayWeights is most commonly used with the vtkInterpolate()\n"
  "function to compute weighted sums of vtkArray objects.\n\n"
  "@sa\n"
  "vtkArray, vtkArraySlices\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

static PyObject *
PyvtkArrayWeights_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayWeights_vtkArrayWeights(nullptr, args);
}

static void PyvtkArrayWeights_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayWeights *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_ssize_t PyvtkArrayWeights_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  return static_cast<Py_ssize_t>(op->GetCount());
}

static PyObject *PyvtkArrayWeights_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<long long>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const double *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

static int PyvtkArrayWeights_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  long long temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<long long>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
  {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == nullptr)
    {
      result = 0;
    }
  }

  return result;
}

static PySequenceMethods PyvtkArrayWeights_AsSequence = {
  PyvtkArrayWeights_SequenceSize, // sq_length
  nullptr, // sq_concat
  nullptr, // sq_repeat
  PyvtkArrayWeights_SequenceItem, // sq_item
  nullptr, // sq_slice
  PyvtkArrayWeights_SequenceSetItem, // sq_ass_item
  nullptr, // sq_ass_slice
  nullptr, // sq_contains
  nullptr, // sq_inplace_concat
  nullptr, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayWeights_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayWeights_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkArrayWeights", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayWeights_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkArrayWeights_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayWeights_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayWeights_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkArrayWeights_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkArrayWeights_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayWeights(*static_cast<const vtkArrayWeights*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkArrayWeights_TypeNew
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkArrayWeights_TypeNew(); }
#define DECLARED_PyvtkArrayWeights_TypeNew
#endif

PyObject *PyvtkArrayWeights_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkArrayWeights_Type,
    PyvtkArrayWeights_Methods,
    PyvtkArrayWeights_GetSets,
    PyvtkArrayWeights_vtkArrayWeights_Methods,
    &PyvtkArrayWeights_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayWeights(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayWeights_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayWeights", o) != 0)
  {
    Py_DECREF(o);
  }

}

