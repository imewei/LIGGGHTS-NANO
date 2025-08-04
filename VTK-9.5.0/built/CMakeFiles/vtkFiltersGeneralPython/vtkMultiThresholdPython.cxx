// python wrapper for vtkMultiThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiThreshold.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkMultiThreshold(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkMultiThreshold_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiThreshold_Closure_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMultiThreshold.Closure", // tp_name
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
static PyObject *PyvtkMultiThreshold_Closure_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiThreshold_Closure_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiThreshold_Norm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMultiThreshold.Norm", // tp_name
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
static PyObject *PyvtkMultiThreshold_Norm_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiThreshold_Norm_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiThreshold_SetOperation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMultiThreshold.SetOperation", // tp_name
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
static PyObject *PyvtkMultiThreshold_SetOperation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiThreshold_SetOperation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMultiThreshold_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiThreshold *tempr = vtkMultiThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiThreshold::NewInstance());

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
PyvtkMultiThreshold_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiThreshold::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiThreshold::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddIntervalSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  int temp4;
  const char *temp5 = nullptr;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    int tempr = (ap.IsBound() ?
      op->AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkMultiThreshold::AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiThreshold_AddIntervalSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    int tempr = (ap.IsBound() ?
      op->AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkMultiThreshold::AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiThreshold_AddIntervalSet_Methods[] = {
  {"AddIntervalSet", PyvtkMultiThreshold_AddIntervalSet_s1, METH_VARARGS,
   "@ddiiizii"},
  {"AddIntervalSet", PyvtkMultiThreshold_AddIntervalSet_s2, METH_VARARGS,
   "@ddiiiiii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiThreshold_AddIntervalSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiThreshold_AddIntervalSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddIntervalSet");
  return nullptr;
}


static PyObject *
PyvtkMultiThreshold_AddLowpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLowpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AddLowpassIntervalSet(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiThreshold::AddLowpassIntervalSet(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddHighpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHighpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AddHighpassIntervalSet(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiThreshold::AddHighpassIntervalSet(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddBandpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBandpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  const char *temp3 = nullptr;
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
    int tempr = (ap.IsBound() ?
      op->AddBandpassIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiThreshold::AddBandpassIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddNotchIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNotchIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  const char *temp3 = nullptr;
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
    int tempr = (ap.IsBound() ?
      op->AddNotchIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiThreshold::AddNotchIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddBooleanSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBooleanSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->AddBooleanSet(temp0, temp1, temp2) :
      op->vtkMultiThreshold::AddBooleanSet(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_OutputSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->OutputSet(temp0) :
      op->vtkMultiThreshold::OutputSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreshold_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkMultiThreshold::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiThreshold_Methods[] = {
  {"IsTypeOf", PyvtkMultiThreshold_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiThreshold_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiThreshold_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiThreshold\nC++: static vtkMultiThreshold *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiThreshold_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiThreshold\nC++: vtkMultiThreshold *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiThreshold_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiThreshold_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddIntervalSet", PyvtkMultiThreshold_AddIntervalSet, METH_VARARGS,
   "AddIntervalSet(self, xmin:float, xmax:float, omin:int, omax:int,\n    assoc:int, arrayName:str, component:int, allScalars:int)\n    -> int\nC++: int AddIntervalSet(double xmin, double xmax, int omin,\n    int omax, int assoc, const char *arrayName, int component,\n    int allScalars)\nAddIntervalSet(self, xmin:float, xmax:float, omin:int, omax:int,\n    assoc:int, attribType:int, component:int, allScalars:int)\n    -> int\nC++: int AddIntervalSet(double xmin, double xmax, int omin,\n    int omax, int assoc, int attribType, int component,\n    int allScalars)\n\nAdd a mesh subset to be computed by thresholding an attribute of\nthe input mesh. The subset can then be added to an output mesh\nwith OutputSet() or combined with other sets using AddBooleanSet.\nIf you wish to include all cells with values below some number a,\ncall with xmin set to vtkMath::NegInf() and xmax set to a.\nSimilarly, if you wish to include all cells with values above\nsome number a, call with xmin set to a and xmax set to\nvtkMath::Inf(). When specifying Inf() or NegInf() for an\nendpoint, it does not matter whether you specify and open or\nclosed endpoint.\n\n* When creating intervals, any integers can be used for the IDs\n  of output meshes.\n* All that matters is that the same ID be used if intervals\n  should output to the same mesh.\n* The outputs are ordered with ascending IDs in output block 0.\n\n* It is possible to specify an invalid interval, in which case\n  these routines will return -1.\n* Invalid intervals occur when\n* - an array does not exist,\n* - center is invalid,\n* - xmin == xmax and omin and/or omax are\n  vtkMultiThreshold::OPEN, or\n* - xmin > xmax.\n* - xmin or xmax is not a number (i.e., IEEE NaN). Having both\n  xmin and xmax equal NaN is allowed.\n* vtkMath provides a portable way to specify IEEE infinities and\n  Nan.\n* Note that specifying an interval completely out of the bounds\n  of an attribute is considered valid.\n* In fact, it is occasionally useful to create a closed interval ...\n [Truncated]\n"},
  {"AddLowpassIntervalSet", PyvtkMultiThreshold_AddLowpassIntervalSet, METH_VARARGS,
   "AddLowpassIntervalSet(self, xmax:float, assoc:int, arrayName:str,\n    component:int, allScalars:int) -> int\nC++: int AddLowpassIntervalSet(double xmax, int assoc,\n    const char *arrayName, int component, int allScalars)\n\nThese convenience members make it easy to insert closed\nintervals. The \"notch\" interval is accomplished by creating a\nbandpass interval and applying a NAND operation. In this case,\nthe set ID returned in the NAND operation set ID. Note that you\ncan pass xmin == xmax when creating a bandpass threshold to\nretrieve elements matching exactly one value (since the intervals\ncreated by these routines are closed).\n"},
  {"AddHighpassIntervalSet", PyvtkMultiThreshold_AddHighpassIntervalSet, METH_VARARGS,
   "AddHighpassIntervalSet(self, xmin:float, assoc:int, arrayName:str,\n     component:int, allScalars:int) -> int\nC++: int AddHighpassIntervalSet(double xmin, int assoc,\n    const char *arrayName, int component, int allScalars)\n\n"},
  {"AddBandpassIntervalSet", PyvtkMultiThreshold_AddBandpassIntervalSet, METH_VARARGS,
   "AddBandpassIntervalSet(self, xmin:float, xmax:float, assoc:int,\n    arrayName:str, component:int, allScalars:int) -> int\nC++: int AddBandpassIntervalSet(double xmin, double xmax,\n    int assoc, const char *arrayName, int component,\n    int allScalars)\n\n"},
  {"AddNotchIntervalSet", PyvtkMultiThreshold_AddNotchIntervalSet, METH_VARARGS,
   "AddNotchIntervalSet(self, xlo:float, xhi:float, assoc:int,\n    arrayName:str, component:int, allScalars:int) -> int\nC++: int AddNotchIntervalSet(double xlo, double xhi, int assoc,\n    const char *arrayName, int component, int allScalars)\n\n"},
  {"AddBooleanSet", PyvtkMultiThreshold_AddBooleanSet, METH_VARARGS,
   "AddBooleanSet(self, operation:int, numInputs:int, inputs:[int,\n    ...]) -> int\nC++: int AddBooleanSet(int operation, int numInputs, int *inputs)\n\nCreate a new mesh subset using boolean operations on pre-existing\nsets.\n"},
  {"OutputSet", PyvtkMultiThreshold_OutputSet, METH_VARARGS,
   "OutputSet(self, setId:int) -> int\nC++: int OutputSet(int setId)\n\nCreate an output mesh containing a boolean or interval subset of\nthe input mesh.\n"},
  {"Reset", PyvtkMultiThreshold_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nRemove all the intervals currently defined.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkMultiThreshold_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkMultiThreshold_Doc =
  "vtkMultiThreshold - Threshold cells within multiple intervals\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This filter can be substituted for a chain of several vtkThreshold\n"
  "filters and can also perform more sophisticated subsetting\n"
  "operations. It generates a vtkMultiBlockDataSet as its output. This\n"
  "multiblock dataset contains a vtkUnstructuredGrid for each\n"
  "thresholded subset you request. A thresholded subset can be a set\n"
  "defined by an interval over a point or cell attribute of the mesh;\n"
  "these subsets are called IntervalSets. A thresholded subset can also\n"
  "be a boolean combination of one or more IntervalSets; these subsets\n"
  "are called BooleanSets. BooleanSets allow complex logic since their\n"
  "output can depend on multiple intervals over multiple variables\n"
  "defined on the input mesh. This is useful because it eliminates the\n"
  "need for thresholding several times and then appending the results,\n"
  "as can be required with vtkThreshold when one wants to remove some\n"
  "range of values (e.g., a notch filter). Cells are not repeated when\n"
  "they belong to more than one interval unless those intervals have\n"
  "different output grids.\n\n"
  "Another advantage this filter provides over vtkThreshold is the\n"
  "ability to threshold on non-scalar (i.e., vector, tensor, etc.)\n"
  "attributes without first computing an array containing some norm of\n"
  "the desired attribute. vtkMultiThreshold provides $L_1 $, $L_2 $, and\n"
  "$L_{\\infty} $ norms.\n\n"
  "This filter makes a distinction between intermediate subsets and\n"
  "subsets that will be output to a grid. Each intermediate subset you\n"
  "create with AddIntervalSet or AddBooleanSet is given a unique integer\n"
  "identifier (via the return values of these member functions). If you\n"
  "wish for a given set to be output, you must call OutputSet and pass\n"
  "it one of these identifiers. The return of OutputSet is the integer\n"
  "index of the output set in the multiblock dataset created by this\n"
  "filter.\n\n"
  "For example, if an input mesh defined three attributes T, P, and s,\n"
  "one might wish to find cells that satisfy \"T < 320 [K] && ( P > 101 [kPa] || s < 0.1 [kJ/kg/K]\n"
  ")\". To accomplish this with a vtkMultiThreshold filter,\n\n"
  "vtkMultiThreshold* thr; int intervalSets[3];\n\n"
  "intervalSets[0] = thr->AddIntervalSet( vtkMath::NegInf(), 320.,\n"
  "vtkMultiThreshold::CLOSED, vtkMultiThreshold::OPEN,\n"
  "vtkDataObject::FIELD_ASSOCIATION_POINTS, \"T\", 0, 1 ); intervalSets[1]\n"
  "= thr->AddIntervalSet( 101., vtkMath::Inf(), vtkMultiThreshold::OPEN,\n"
  "vtkMultiThreshold::CLOSED,\n"
  "    vtkDataObject::FIELD_ASSOCIATION_CELLS, \"P\", 0, 1 );\n"
  "intervalSets[2] = thr->AddIntervalSet( vtkMath::NegInf(), 0.1,\n"
  "vtkMultiThreshold::CLOSED, vtkMultiThreshold::OPEN,\n"
  "vtkDataObject::FIELD_ASSOCIATION_POINTS, \"s\", 0, 1 );\n\n"
  "int intermediate = thr->AddBooleanSet( vtkMultiThreshold::OR, 2,\n"
  "&intervalSets[1] );\n\n"
  "int intersection[2]; intersection[0] = intervalSets[0];\n"
  "intersection[1] = intermediate; int outputSet = thr->AddBooleanSet(\n"
  "vtkMultiThreshold::AND, 2, intersection );\n\n"
  "int outputGridIndex = thr->OutputSet( outputSet ); thr->Update(); \n"
  "The result of this filter will be a multiblock dataset that contains\n"
  "a single child with the desired cells. If we had also called\n"
  "thr->OutputSet( intervalSets[0] );, there would be two child meshes\n"
  "and one would contain all cells with T < 320 [K]. In that case, the\n"
  "output can be represented by this graph\n\n"
  "\\dot digraph MultiThreshold {\n"
  "  set0 [shape=rect,style=filled,label=\"point T(0) in [-Inf,320[\"]\n"
  "  set1 [shape=rect,label=\"cell P(0) in ]101,Inf]\"]\n"
  "  set2 [shape=rect,label=\"point s(0) in [-Inf,0.1[\"]\n"
  "  set3 [shape=rect,label=\"OR\"]\n"
  "  set4 [shape=rect,style=filled,label=\"AND\"]\n"
  "  set0 -> set4\n"
  "  set1 -> set3\n"
  "  set2 -> set3\n"
  "  set3 -> set4 }\\enddot\n\n"
  "The filled rectangles represent sets that are output.\n"
  "@sa vtkThreshold, vtkSplitByCellScalarFilter, vtkExplodeDataset\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMultiThreshold", // tp_name
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
  PyvtkMultiThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiThreshold_StaticNew()
{
  return vtkMultiThreshold::New();
}

PyObject *PyvtkMultiThreshold_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiThreshold_Type, PyvtkMultiThreshold_Methods,
    "vtkMultiThreshold",
 &PyvtkMultiThreshold_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMultiThreshold_Closure_Type);
  PyVTKEnum_Add(&PyvtkMultiThreshold_Closure_Type, "vtkMultiThreshold.Closure");

  o = (PyObject *)&PyvtkMultiThreshold_Closure_Type;
  if (PyDict_SetItemString(d, "Closure", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMultiThreshold_Norm_Type);
  PyVTKEnum_Add(&PyvtkMultiThreshold_Norm_Type, "vtkMultiThreshold.Norm");

  o = (PyObject *)&PyvtkMultiThreshold_Norm_Type;
  if (PyDict_SetItemString(d, "Norm", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMultiThreshold_SetOperation_Type);
  PyVTKEnum_Add(&PyvtkMultiThreshold_SetOperation_Type, "vtkMultiThreshold.SetOperation");

  o = (PyObject *)&PyvtkMultiThreshold_SetOperation_Type;
  if (PyDict_SetItemString(d, "SetOperation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMultiThreshold::Closure cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "OPEN", vtkMultiThreshold::OPEN },
        { "CLOSED", vtkMultiThreshold::CLOSED },
      };

    o = PyvtkMultiThreshold_Closure_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMultiThreshold::Norm cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "LINFINITY_NORM", vtkMultiThreshold::LINFINITY_NORM },
        { "L2_NORM", vtkMultiThreshold::L2_NORM },
        { "L1_NORM", vtkMultiThreshold::L1_NORM },
      };

    o = PyvtkMultiThreshold_Norm_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMultiThreshold::SetOperation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "AND", vtkMultiThreshold::AND },
        { "OR", vtkMultiThreshold::OR },
        { "XOR", vtkMultiThreshold::XOR },
        { "WOR", vtkMultiThreshold::WOR },
        { "NAND", vtkMultiThreshold::NAND },
      };

    o = PyvtkMultiThreshold_SetOperation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkMultiThreshold_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

}

