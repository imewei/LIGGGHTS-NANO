// python wrapper for vtkDGInterpolateCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkDGInterpolateCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDGInterpolateCalculator(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDGInterpolateCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolateCalculator_ClassNew
extern "C" { PyObject *PyvtkInterpolateCalculator_ClassNew(); }
#define DECLARED_PyvtkInterpolateCalculator_ClassNew
#endif

static PyObject *
PyvtkDGInterpolateCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGInterpolateCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGInterpolateCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGInterpolateCalculator *tempr = vtkDGInterpolateCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGInterpolateCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGInterpolateCalculator::NewInstance());

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
PyvtkDGInterpolateCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGInterpolateCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGInterpolateCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_Evaluate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  long long temp0;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  std::vector<double> temp2(ap.GetArgSize(2));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      ap.GetArray(temp2.data(), temp2.size()))
  {
    if (ap.IsBound())
    {
      op->Evaluate(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkDGInterpolateCalculator::Evaluate(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp2.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp2.data(), temp2.size()));
      ap.SetContents(2, vec);
      Py_DECREF(vec);
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
PyvtkDGInterpolateCalculator_Evaluate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDGInterpolateCalculator::Evaluate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDGInterpolateCalculator_Evaluate_Methods[] = {
  {"Evaluate", PyvtkDGInterpolateCalculator_Evaluate_s1, METH_VARARGS,
   "@kWT vtkVector3d d"},
  {"Evaluate", PyvtkDGInterpolateCalculator_Evaluate_s2, METH_VARARGS,
   "@VVV *vtkIdTypeArray *vtkDataArray *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDGInterpolateCalculator_Evaluate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDGInterpolateCalculator_Evaluate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Evaluate");
  return nullptr;
}


static PyObject *
PyvtkDGInterpolateCalculator_AnalyticDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyticDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->AnalyticDerivative() :
      op->vtkDGInterpolateCalculator::AnalyticDerivative());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGInterpolateCalculator_EvaluateDerivative_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  long long temp0;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  std::vector<double> temp2(ap.GetArgSize(2));
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      ap.GetArray(temp2.data(), temp2.size()) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->EvaluateDerivative(temp0, *temp1, temp2, temp3);
    }
    else
    {
      op->vtkDGInterpolateCalculator::EvaluateDerivative(temp0, *temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp2.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp2.data(), temp2.size()));
      ap.SetContents(2, vec);
      Py_DECREF(vec);
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
PyvtkDGInterpolateCalculator_EvaluateDerivative_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDGInterpolateCalculator::EvaluateDerivative(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDGInterpolateCalculator_EvaluateDerivative(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDGInterpolateCalculator_EvaluateDerivative_s1(self, args);
    case 3:
      return PyvtkDGInterpolateCalculator_EvaluateDerivative_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateDerivative");
  return nullptr;
}


static PyObject *
PyvtkDGInterpolateCalculator_PrepareForGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGInterpolateCalculator *op = static_cast<vtkDGInterpolateCalculator *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  vtkCellAttribute *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata") &&
      ap.GetVTKObject(temp1, "vtkCellAttribute"))
  {
    vtkSmartPointer<vtkCellAttributeCalculator> tempr = (ap.IsBound() ?
      op->PrepareForGrid(temp0, temp1) :
      op->vtkDGInterpolateCalculator::PrepareForGrid(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGInterpolateCalculator_Methods[] = {
  {"IsTypeOf", PyvtkDGInterpolateCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGInterpolateCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGInterpolateCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGInterpolateCalculator\nC++: static vtkDGInterpolateCalculator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGInterpolateCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGInterpolateCalculator\nC++: vtkDGInterpolateCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGInterpolateCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGInterpolateCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Evaluate", PyvtkDGInterpolateCalculator_Evaluate, METH_VARARGS,
   "Evaluate(self, cellId:int, rst:vtkVector3d, value:[float, ...])\n    -> None\nC++: void Evaluate(vtkIdType cellId, const vtkVector3d &rst,\n    std::vector<double> &value) override;\nEvaluate(self, cellIds:vtkIdTypeArray, rst:vtkDataArray,\n    result:vtkDataArray) -> None\nC++: void Evaluate(vtkIdTypeArray *cellIds, vtkDataArray *rst,\n    vtkDataArray *result) override;\n\nSubclasses must override this method to perform evaluation.\n\nYou must resize value before calling Evaluate so there is enough\nspace to hold the resulting value(s).\n"},
  {"AnalyticDerivative", PyvtkDGInterpolateCalculator_AnalyticDerivative, METH_VARARGS,
   "AnalyticDerivative(self) -> bool\nC++: bool AnalyticDerivative() override;\n\nReturn true if the function has an analytic derivative.\n"},
  {"EvaluateDerivative", PyvtkDGInterpolateCalculator_EvaluateDerivative, METH_VARARGS,
   "EvaluateDerivative(self, cellId:int, rst:vtkVector3d,\n    jacobian:[float, ...], neighborhood:float) -> None\nC++: void EvaluateDerivative(vtkIdType cellId,\n    const vtkVector3d &rst, std::vector<double> &jacobian,\n    double neighborhood) override;\nEvaluateDerivative(self, cellIds:vtkIdTypeArray, rst:vtkDataArray,\n     result:vtkDataArray) -> None\nC++: void EvaluateDerivative(vtkIdTypeArray *cellIds,\n    vtkDataArray *rst, vtkDataArray *result) override;\n\nReturn the derivative of the function at rst.\n\nThe derivative should be ordered as d/dx, d/dy, then d/dz.\n\nIf you do not override AnalyticDerivative and EvaluateDerivative,\nthis class will approximate the derivative by perturbing along\neach axis to compute a finite difference.\n\nIn the case of a non-analytic derivative, you can control the\nmagnitude of the difference along each axis by passing a\ndifferent neighborhood value.\n"},
  {"PrepareForGrid", PyvtkDGInterpolateCalculator_PrepareForGrid, METH_VARARGS,
   "PrepareForGrid(self, cell:vtkCellMetadata, field:vtkCellAttribute)\n     -> vtkCellAttributeCalculator\nC++: vtkSmartPointer<vtkCellAttributeCalculator> PrepareForGrid(\n    vtkCellMetadata *cell, vtkCellAttribute *field) override;\n\nSubclasses should override this to create an instance of their\nclass with member variables set to perform calculations on the\ngiven cell type and field.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDGInterpolateCalculator_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDGInterpolateCalculator_Doc =
  "vtkDGInterpolateCalculator - Interpolate a field's value and possibly\nderivatives at a point in a cell.\n\n"
  "Superclass: vtkInterpolateCalculator\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGInterpolateCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGInterpolateCalculator", // tp_name
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
  PyvtkDGInterpolateCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGInterpolateCalculator_StaticNew()
{
  return vtkDGInterpolateCalculator::New();
}

PyObject *PyvtkDGInterpolateCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGInterpolateCalculator_Type, PyvtkDGInterpolateCalculator_Methods,
    "vtkDGInterpolateCalculator",
 &PyvtkDGInterpolateCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolateCalculator_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDGInterpolateCalculator_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGInterpolateCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGInterpolateCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGInterpolateCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

