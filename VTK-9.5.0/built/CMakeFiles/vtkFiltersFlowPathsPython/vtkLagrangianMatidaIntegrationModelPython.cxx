// python wrapper for vtkLagrangianMatidaIntegrationModel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLagrangianMatidaIntegrationModel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkLagrangianMatidaIntegrationModel(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkLagrangianMatidaIntegrationModel_ClassNew(); }

#ifndef DECLARED_PyvtkLagrangianBasicIntegrationModel_ClassNew
extern "C" { PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew(); }
#define DECLARED_PyvtkLagrangianBasicIntegrationModel_ClassNew
#endif

static PyObject *
PyvtkLagrangianMatidaIntegrationModel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangianMatidaIntegrationModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangianMatidaIntegrationModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangianMatidaIntegrationModel *tempr = vtkLagrangianMatidaIntegrationModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianMatidaIntegrationModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangianMatidaIntegrationModel::NewInstance());

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
PyvtkLagrangianMatidaIntegrationModel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLagrangianMatidaIntegrationModel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLagrangianMatidaIntegrationModel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_SetGravity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

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
      op->SetGravity(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLagrangianMatidaIntegrationModel::SetGravity(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLagrangianMatidaIntegrationModel_SetGravity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGravity(temp0);
    }
    else
    {
      op->vtkLagrangianMatidaIntegrationModel::SetGravity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLagrangianMatidaIntegrationModel_SetGravity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLagrangianMatidaIntegrationModel_SetGravity_s1(self, args);
    case 1:
      return PyvtkLagrangianMatidaIntegrationModel_SetGravity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGravity");
  return nullptr;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkLagrangianMatidaIntegrationModel::GetGravity());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1, temp2) :
      op->vtkLagrangianMatidaIntegrationModel::FunctionValues(temp0, temp1, temp2));

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

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}

static PyObject *
PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkLagrangianMatidaIntegrationModel::FunctionValues(temp0, temp1));

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
PyvtkLagrangianMatidaIntegrationModel_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s1(self, args);
    case 2:
      return PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}

static PyMethodDef PyvtkLagrangianMatidaIntegrationModel_Methods[] = {
  {"IsTypeOf", PyvtkLagrangianMatidaIntegrationModel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangianMatidaIntegrationModel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangianMatidaIntegrationModel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkLagrangianMatidaIntegrationModel\nC++: static vtkLagrangianMatidaIntegrationModel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangianMatidaIntegrationModel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLagrangianMatidaIntegrationModel\nC++: vtkLagrangianMatidaIntegrationModel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLagrangianMatidaIntegrationModel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLagrangianMatidaIntegrationModel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGravity", PyvtkLagrangianMatidaIntegrationModel_SetGravity, METH_VARARGS,
   "SetGravity(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetGravity(double _arg1, double _arg2,\n    double _arg3)\nSetGravity(self, _arg:(float, float, float)) -> None\nC++: virtual void SetGravity(const double _arg[3])\n\nSpecify the acceleration of gravity. Default value is (0, 0,\n-9.8)\n"},
  {"GetGravity", PyvtkLagrangianMatidaIntegrationModel_GetGravity, METH_VARARGS,
   "GetGravity(self) -> (float, float, float)\nC++: virtual double *GetGravity()\n\n"},
  {"FunctionValues", PyvtkLagrangianMatidaIntegrationModel_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: int FunctionValues(double *x, double *f, void *userData)\n    override;\nFunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate integration model velocity f at position x. Look for the\ncell containing the position x in all its added datasets if found\nthis will call FunctionValues(vtkDataSet* dataSet, vtkIdType\ncellId, double* x, double* f) This method is thread safe.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkLagrangianMatidaIntegrationModel_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("gravity"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkLagrangianMatidaIntegrationModel_GetGravity(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkLagrangianMatidaIntegrationModel_SetGravity(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkLagrangianMatidaIntegrationModel_SetGravity(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetGravity/SetGravity\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkLagrangianMatidaIntegrationModel_Doc =
  "vtkLagrangianMatidaIntegrationModel -\nvtkLagrangianBasicIntegrationModel implementation\n\n"
  "Superclass: vtkLagrangianBasicIntegrationModel\n\n"
  "vtkLagrangianBasicIntegrationModel implementation using article : \"Matida, E. A., et al.\n"
  "\"Improved numerical simulation of aerosol deposition in an idealized\n"
  "mouth-throat.\" Journal of Aerosol Science 35.1 (2004): 1-19.\" Input\n"
  "Array to process are expected as follow : Index 1 is the\n"
  "\"FlowVelocity\" from flow input in the tracker Index 2 is the\n"
  "\"FlowDensity\" from flow input in the tracker Index 3 is the\n"
  "\"FlowDynamicViscosity\" from flow input in the tracker Index 4 is the\n"
  "\"ParticleDiameter\" from seed (source) input in the tracker Index 5 is\n"
  "the \"ParticleDensity\" from seed (source) input in the tracker\n\n"
  "@sa\n"
  "vtkLagrangianParticleTracker vtkLagrangianParticle\n"
  "vtkLagrangianBasicIntegrationModel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianMatidaIntegrationModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianMatidaIntegrationModel", // tp_name
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
  PyvtkLagrangianMatidaIntegrationModel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangianMatidaIntegrationModel_StaticNew()
{
  return vtkLagrangianMatidaIntegrationModel::New();
}

PyObject *PyvtkLagrangianMatidaIntegrationModel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLagrangianMatidaIntegrationModel_Type, PyvtkLagrangianMatidaIntegrationModel_Methods,
    "vtkLagrangianMatidaIntegrationModel",
 &PyvtkLagrangianMatidaIntegrationModel_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLagrangianBasicIntegrationModel_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkLagrangianMatidaIntegrationModel_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianMatidaIntegrationModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianMatidaIntegrationModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianMatidaIntegrationModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

