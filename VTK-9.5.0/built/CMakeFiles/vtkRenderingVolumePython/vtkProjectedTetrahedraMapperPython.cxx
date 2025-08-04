// python wrapper for vtkProjectedTetrahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProjectedTetrahedraMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_HIDDEN void PyVTKAddFile_vtkProjectedTetrahedraMapper(PyObject *dict); }
extern "C" { VTK_ABI_HIDDEN PyObject *PyvtkProjectedTetrahedraMapper_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
#endif

static PyObject *
PyvtkProjectedTetrahedraMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectedTetrahedraMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTetrahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectedTetrahedraMapper *tempr = vtkProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTetrahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTetrahedraMapper::NewInstance());

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
PyvtkProjectedTetrahedraMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProjectedTetrahedraMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProjectedTetrahedraMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
  {
    if (ap.IsBound())
    {
      op->SetVisibilitySort(temp0);
    }
    else
    {
      op->vtkProjectedTetrahedraMapper::SetVisibilitySort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->GetVisibilitySort() :
      op->vtkProjectedTetrahedraMapper::GetVisibilitySort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_MapScalarsToColors(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MapScalarsToColors");

  vtkDataArray *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    vtkProjectedTetrahedraMapper::MapScalarsToColors(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_TransformPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPoints");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 16;
  float temp1[16];
  const size_t size2 = 16;
  float temp2[16];
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    vtkProjectedTetrahedraMapper::TransformPoints(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkProjectedTetrahedraMapper::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectedTetrahedraMapper_Methods[] = {
  {"IsTypeOf", PyvtkProjectedTetrahedraMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectedTetrahedraMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectedTetrahedraMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProjectedTetrahedraMapper\nC++: static vtkProjectedTetrahedraMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectedTetrahedraMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProjectedTetrahedraMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProjectedTetrahedraMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVisibilitySort", PyvtkProjectedTetrahedraMapper_SetVisibilitySort, METH_VARARGS,
   "SetVisibilitySort(self, sort:vtkVisibilitySort) -> None\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\n"},
  {"GetVisibilitySort", PyvtkProjectedTetrahedraMapper_GetVisibilitySort, METH_VARARGS,
   "GetVisibilitySort(self) -> vtkVisibilitySort\nC++: virtual vtkVisibilitySort *GetVisibilitySort()\n\n"},
  {"MapScalarsToColors", PyvtkProjectedTetrahedraMapper_MapScalarsToColors, METH_VARARGS,
   "MapScalarsToColors(colors:vtkDataArray,\n    property:vtkVolumeProperty, scalars:vtkDataArray) -> None\nC++: static void MapScalarsToColors(vtkDataArray *colors,\n    vtkVolumeProperty *property, vtkDataArray *scalars)\n\n"},
  {"TransformPoints", PyvtkProjectedTetrahedraMapper_TransformPoints, METH_VARARGS,
   "TransformPoints(inPoints:vtkPoints, projection_mat:(float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float), modelview_mat:(float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float),\n    outPoints:vtkFloatArray) -> None\nC++: static void TransformPoints(vtkPoints *inPoints,\n    const float projection_mat[16], const float modelview_mat[16],\n     vtkFloatArray *outPoints)\n\n"},
  {"IsSupported", PyvtkProjectedTetrahedraMapper_IsSupported, METH_VARARGS,
   "IsSupported(self, __a:vtkRenderWindow) -> bool\nC++: virtual bool IsSupported(vtkRenderWindow *)\n\nReturn true if the rendering context provides the nececessary\nfunctionality to use this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

#if PY_VERSION_HEX >= 0x03070000
#define pystr(x) x
#else
#define pystr(x) const_cast<char*>(x)
#endif
static PyGetSetDef PyvtkProjectedTetrahedraMapper_GetSets[] = {
  PyVTKObject_GetSet[0],
  PyVTKObject_GetSet[1],
  {
    /*name=*/pystr("visibility_sort"),
    /*get=*/[](PyObject* self, void*) -> PyObject*
    {
      auto args = PyTuple_New(0); // placeholder
      auto result = PyvtkProjectedTetrahedraMapper_GetVisibilitySort(self, args);
      Py_DECREF(args);
      return result;
    },
    /*set=*/[](PyObject* self, PyObject* value, void*) -> int
    {
      if (PyTuple_Check(value))
      {
        auto result = PyvtkProjectedTetrahedraMapper_SetVisibilitySort(self, value);
        return (result == nullptr) ? -1 : 0;
      }
      else
      {
        auto args = PyTuple_Pack(1, value);
        auto result = PyvtkProjectedTetrahedraMapper_SetVisibilitySort(self, args);
        Py_DECREF(args);
        return (result == nullptr) ? -1 : 0;
      }
    },
    /*doc=*/pystr("read-write, Calls GetVisibilitySort/SetVisibilitySort\n"),
    /*closure=*/nullptr,
  },
  { nullptr, nullptr, nullptr, nullptr, nullptr }
};
static const char *PyvtkProjectedTetrahedraMapper_Doc =
  "vtkProjectedTetrahedraMapper - Unstructured grid volume renderer.\n\n"
  "Superclass: vtkUnstructuredGridVolumeMapper\n\n"
  "vtkProjectedTetrahedraMapper is an implementation of the classic\n"
  "Projected Tetrahedra algorithm presented by Shirley and Tuchman in \"A\n"
  "Polygonal Approximation to Direct Scalar Volume Rendering\" in\n"
  "Computer Graphics, December 1990.\n\n"
  "@bug This mapper relies highly on the implementation of the OpenGL\n"
  "pipeline. A typical hardware driver has lots of options and some\n"
  "settings can cause this mapper to produce artifacts.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectedTetrahedraMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkProjectedTetrahedraMapper", // tp_name
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
  PyvtkProjectedTetrahedraMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectedTetrahedraMapper_StaticNew()
{
  return vtkProjectedTetrahedraMapper::New();
}

PyObject *PyvtkProjectedTetrahedraMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProjectedTetrahedraMapper_Type, PyvtkProjectedTetrahedraMapper_Methods,
    "vtkProjectedTetrahedraMapper",
 &PyvtkProjectedTetrahedraMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeMapper_ClassNew();

  PyVTKClass_AddCombinedGetSetDefinitions(pytype, PyvtkProjectedTetrahedraMapper_GetSets);
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectedTetrahedraMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectedTetrahedraMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectedTetrahedraMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

