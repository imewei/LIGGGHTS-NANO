// python wrapper for vtkDistributedPointCloudFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDistributedPointCloudFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkDistributedPointCloudFilter(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkDistributedPointCloudFilter_ClassNew(); }


static PyObject *
PyvtkDistributedPointCloudFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistributedPointCloudFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedPointCloudFilter *op = static_cast<vtkDistributedPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedPointCloudFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistributedPointCloudFilter *tempr = vtkDistributedPointCloudFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedPointCloudFilter *op = static_cast<vtkDistributedPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistributedPointCloudFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedPointCloudFilter::NewInstance());

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
PyvtkDistributedPointCloudFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDistributedPointCloudFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedPointCloudFilter *op = static_cast<vtkDistributedPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDistributedPointCloudFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedPointCloudFilter *op = static_cast<vtkDistributedPointCloudFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkDistributedPointCloudFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedPointCloudFilter *op = static_cast<vtkDistributedPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDistributedPointCloudFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedPointCloudFilter_GetPointsInsideBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointsInsideBounds");

  vtkMPIController *temp0 = nullptr;
  vtkPointSet *temp1 = nullptr;
  vtkPointSet *temp2 = nullptr;
  const size_t size3 = 6;
  double temp3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMPIController") &&
      ap.GetVTKObject(temp1, "vtkPointSet") &&
      ap.GetVTKObject(temp2, "vtkPointSet") &&
      ap.GetArray(temp3, size3))
  {
    vtkDistributedPointCloudFilter::GetPointsInsideBounds(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDistributedPointCloudFilter_Methods[] = {
  {"IsTypeOf", PyvtkDistributedPointCloudFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistributedPointCloudFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistributedPointCloudFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDistributedPointCloudFilter\nC++: static vtkDistributedPointCloudFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistributedPointCloudFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDistributedPointCloudFilter\nC++: vtkDistributedPointCloudFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDistributedPointCloudFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDistributedPointCloudFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkDistributedPointCloudFilter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *)\n\nSet/Get the communicator object\n"},
  {"GetController", PyvtkDistributedPointCloudFilter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"GetPointsInsideBounds", PyvtkDistributedPointCloudFilter_GetPointsInsideBounds, METH_VARARGS,
   "GetPointsInsideBounds(__a:vtkMPIController, input:vtkPointSet,\n    output:vtkPointSet, innerBounds:(float, float, float, float,\n    float, float)) -> None\nC++: static void GetPointsInsideBounds(vtkMPIController *,\n    vtkPointSet *input, vtkPointSet *output,\n    const double innerBounds[6])\n\nGet the points that are inside innerBounds and put them in output\nDataSet. Ask other MPI ranks for their corresponding points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkDistributedPointCloudFilter_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("controller"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkDistributedPointCloudFilter_GetController(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkDistributedPointCloudFilter_SetController(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkDistributedPointCloudFilter_SetController(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetController/SetController\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkDistributedPointCloudFilter_Doc =
  "vtkDistributedPointCloudFilter - Distributes points among MPI\nprocessors.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This filter distributes points among processors into spatially\n"
  "contiguous point set, containing an equivalent number of points.\n"
  "Algorithm: point set is recursively split in two, among MPI groups.\n"
  "Note: input cells are ignored. Output is a vtkPolyData.\n\n"
  "@par Thanks: This class has been written by Kitware SAS from an\n"
  "initial work made by Aymeric Pelle from Universite de Technologie de\n"
  "Compiegne, France, and Laurent Colombet and Thierry Carrard from\n"
  "Commissariat a l'Energie Atomique (CEA/DIF).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistributedPointCloudFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallelMPI.vtkDistributedPointCloudFilter", // tp_name
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
  PyvtkDistributedPointCloudFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistributedPointCloudFilter_StaticNew()
{
  return vtkDistributedPointCloudFilter::New();
}

PyObject *PyvtkDistributedPointCloudFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDistributedPointCloudFilter_Type, PyvtkDistributedPointCloudFilter_Methods,
    "vtkDistributedPointCloudFilter",
 &PyvtkDistributedPointCloudFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkDistributedPointCloudFilter_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistributedPointCloudFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistributedPointCloudFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistributedPointCloudFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

